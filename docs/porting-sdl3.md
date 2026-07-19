# SDL3 porting notes

Status: deferred. These notes record the current rendering boundary so that the
decompilation can continue without prematurely designing the new platform layer.

## Current rendering architecture

Submarine Titans is primarily an indexed-colour software-rendered game. The
default display configuration recovered in `STAppC::InitApp` is 800x600x8, and
the other supported resolutions continue to use an 8-bit display depth.

The operating-system graphics boundary is relatively well isolated:

- `DirectDrawCreate` is called only by `Library::DKW::DDX::FUN_006b9940`.
- There is no evidence of a Direct3D rendering pipeline. The only D3DRM import is
  `D3DRMVectorModulus`, called by two game functions and replaceable with normal
  vector-length arithmetic.
- DirectDraw surface creation, mode changes and presentation belong to the
  statically linked DKW DDX layer.
- Most DIB, palette and software-blit helpers belong to DKW DDX/WGR.
- GDI is also used by the font subsystem (`ccFntTy`) and several DIB/palette
  helpers. Window creation and the message loop remain in `STAppC`.

Recovered library groups currently include 64 `LIBRARY_DKW_DDX` functions and
11 `LIBRARY_DKW_WGR` functions. Their embedded source filenames expose the
approximate feature set:

- `ddsinit.c`, `ddx.c`: display and DirectDraw lifecycle;
- `ddcreats.c`: surface creation;
- `ddcopy.c`, `ddcopyp.c`, `dibcopy.c`, `dibtrans.c`: image copying;
- `dddibget.c`, `dddibpsh.c`, `dddibpus.c`, `dddibtpc.c`, `dddibtps.c`:
  DIB/surface transfers;
- `ddline.c`, `ddrrect.c`, `fillpoly.c`: software drawing primitives;
- `ddshadr.c`, `ddsshock.c`: shading/effects;
- `ddcurs.c`: cursor support;
- `ddgetdc.c`: GDI interoperability;
- `dibload.c`, `dibloadc.c`, `dibread.c`, `dibsave.c`, `dibto8.cpp`,
  `dibxtoyc.c`, `palsync.c`: bitmap conversion, persistence and palettes.

The library is not the complete renderer. Game code still owns:

- scene composition and render order;
- visibility, picking and screen-object lists;
- sprite frame, direction and sequence selection;
- object-specific drawing decisions;
- UI layout and all `Paint*`/`Out*` composition;
- tracks, cursor behaviour and minimap contents;
- palette lookup-table effects;
- specialised shadow and mask generation in `Td3dshad.cpp`;
- sprite management in `Tspr3d.cpp` and `TLO_bspr.cpp`.

Roughly 250 game/engine functions directly call DKW DDX/WGR primitives. This is
too many call sites to translate independently, but it is a reasonable consumer
set for a compatibility layer with the recovered DKW interface.

## Recommended replacement boundary

Do not replace individual DirectDraw calls in game code. Recreate the public
surface-oriented part of DKW and implement it on a portable backend:

```text
game and UI code
    -> recovered DKW-compatible API
    -> indexed 8-bit CPU surfaces and original palette/LUT effects
    -> conversion or upload to an SDL texture
    -> SDL window and presentation
```

The first implementation should favour behavioural compatibility over GPU
acceleration. A CPU surface model preserves the assumptions visible in the old
code: writable pixel buffers, explicit pitch, indexed pixels, clipping, colour
keys and palette transformations. The completed frame can then be uploaded for
presentation. Modernising individual operations can happen only after visual
parity has been established.

## Contracts that must be recovered before implementation

For each externally used DDX/WGR function, recover:

- parameter purpose and exact integer widths;
- surface/bitmap/palette structure layouts;
- allocation and ownership rules;
- lock/unlock and lifetime behaviour;
- pixel format, row orientation and pitch;
- clipping and inclusive/exclusive rectangle conventions;
- colour-key and transparent-index rules;
- overlap behaviour for copies;
- palette synchronisation and shadow/light lookup tables;
- scaling and coordinate rounding;
- return values and error handling;
- threading or critical-section requirements.

The original library implementation does not need to be reproduced instruction
for instruction if these observable contracts are preserved.

## Game-side rendering that must be ported

The large functions at `00424E10` and `00427F20` reference
`E:\\__titans\\wlad\\Td3dshad.cpp`. They perform game-specific shadow/mask
processing and are not replaceable by a generic SDL call. Related helpers occupy
the block `004248A0` through `00427F20`.

Other important game-side areas include:

- `STT3DSprC` in `Tspr3d.cpp`;
- sprite setup/rotation in `TLO_bspr.cpp`;
- `TraksClassTy` in `traks.cpp`;
- `VisibleClassTy` in `visible.cpp`;
- `STAllPlayersC::GetTOBJImage`, `GetScrObjList`, `FramePick` and `PointPick`;
- the `CPanelTy`, menu, report and setup-screen `Paint*` methods;
- `CursorClassTy` and `SpriteClassTy`.

These should remain portable game/engine code and call the compatibility API.

## Other platform replacements

Rendering is only one part of an ARM port. Separate replacements will be needed
for:

- DKW SND and DirectSound;
- DirectInput;
- DirectPlay/network transport;
- Bink video playback;
- DKW JPG/FLC/DV image and video decoding;
- GDI font rasterisation and metrics;
- Win32 window/message handling;
- DKW DB/FIO/PK resource and archive access where required.

These subsystems should not be mixed into the rendering compatibility layer.

## ARM and compiler hazards

The recovered source must not retain assumptions that happened to work on
32-bit x86/MSVC:

- unaligned typed loads and stores;
- `sizeof(long) == sizeof(void *) == 4` assumptions;
- serialising native C++ structures directly;
- compiler-dependent bitfields and packing;
- signedness of plain `char`;
- strict-aliasing violations and union type punning;
- x86/MSVC calling conventions;
- floating-point and integer-conversion edge cases.

Persistent and network formats should use fixed-width types and explicit field
decoding. Runtime structures may then use natural platform alignment.

## Deferred implementation order

1. Recover names and contracts of the game-facing DDX/WGR entry points.
2. Define portable surface, palette, rectangle and sprite-view types.
3. Implement an indexed CPU renderer and a reference image-diff test harness.
4. Replace window creation and final presentation with SDL.
5. Port font rasterisation and input/audio as independent subsystems.
6. Validate original palette, clipping, transparency and shadow behaviour.
7. Consider GPU acceleration only after deterministic visual parity.

