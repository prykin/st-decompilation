#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00674FB0 returns data at 00400000 @ 00675294 */

IMAGE_DOS_HEADER * __cdecl FUN_00674fb0(int param_1)

{
  uint uVar1;
  byte bVar2;

  if ((param_1 < 0x32) || (0x73 < param_1)) {
    if ((param_1 < 1) || (0x28 < param_1)) {
      return nullptr;
    }
    uVar1 = param_1 + 0x41;
    bVar2 = (byte)uVar1;
    if ((g_bitset_00801000[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x40000;
    }
    if ((g_bitset_00801010[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x80000;
    }
    if ((g_bitset_00800F00[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x10000;
    }
    if ((g_bitset_00801370[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x20000;
    }
    if ((g_bitset_00800FA0[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
      return (IMAGE_DOS_HEADER *)0x100000;
    }
    if ((g_bitset_00800FF0[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) == 0) {
      if ((g_bitset_00801460[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
        return &IMAGE_DOS_HEADER_00400000;
      }
      return (IMAGE_DOS_HEADER *)
             ((-(uint)((1 << (bVar2 & 0x1f) & g_bitset_00800FE0[uVar1 >> 5]) != 0) & 0x80800000) +
             0x80000000);
    }
    return (IMAGE_DOS_HEADER *)0x200000;
  }
  uVar1 = param_1 - 0x32;
  bVar2 = (byte)uVar1;
  if ((g_bitset_00801420[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x1;
  }
  if ((g_bitset_008013E0[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x2;
  }
  if ((g_bitset_00800EE0[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x4;
  }
  if ((g_bitset_00801490[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x8;
  }
  if ((g_bitset_00800F20[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x10;
  }
  if ((g_bitset_00800EF0[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x20;
  }
  if ((g_bitset_00801430[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x40;
  }
  if ((g_bitset_00801440[uVar1 >> 5] & 1 << (bVar2 & 0x1f)) != 0) {
    return (IMAGE_DOS_HEADER *)0x80;
  }
  return (IMAGE_DOS_HEADER *)
         ((-(uint)((1 << (bVar2 & 0x1f) & g_bitset_00800F60[uVar1 >> 5]) != 0) & 0xffff8100) +
         0x8000);
}

