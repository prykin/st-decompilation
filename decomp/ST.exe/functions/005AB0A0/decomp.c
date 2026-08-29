#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::NextFas
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (41), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00597120 @ 00597198 -> read as EAX on
   every CFG path | 00597120 @ 005971C9 -> read as EAX on every CFG path | 00597120 @ 005971FB ->
   read as EAX on every CFG path | 00597120 @ 0059722D -> read as EAX on every CFG path | 00597120 @
   005975A8 -> read as EAX on every CFG path | 00597120 @ 005975BE -> read as EAX on every CFG path
   | 00597120 @ 005975D4 -> read as EAX on every CFG path | 00597120 @ 005975EA -> read as EAX on
   every CFG path | 00597E70 @ 00598175 -> killed on every CFG path | 00597E70 @ 005983A7 -> killed
   on every CFG path | 00597E70 @ 005985F2 -> killed on every CFG path | 00597E70 @ 00598761 ->
   killed on every CFG path | 00597E70 @ 00598B66 -> killed on every CFG path | 00597E70 @ 00598DE8
   -> killed on every CFG path | 00597E70 @ 00598FBE -> killed on every CFG path | 00597E70 @
   005991EF -> killed on every CFG path | 0059F670 @ 0059F7FD -> killed on every CFG path | 0059F670
   @ 0059F94D -> killed on every CFG path | 0059F670 @ 0059FA8C -> killed on every CFG path |
   0059F670 @ 0059FBC4 -> killed on every CFG path | 0059F670 @ 0059FD35 -> killed on every CFG path
   | 0059F670 @ 0059FE98 -> killed on every CFG path | 0059F670 @ 005A0017 -> killed on every CFG
   path | 0059F670 @ 005A0134 -> killed on every CFG path */

int __thiscall HoloTy::NextFas(HoloTy *this)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  HoloTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\hologram.cpp",0xc1,0,iVar3,"%s",
                               "HoloTy::NextFas");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\hologram.cpp",0xc1);
    return local_8;
  }
  uVar1 = *(uint *)&local_c->field_0x3;
  if (-1 < (int)uVar1) {
    iVar3 = local_c->field_0017;
    if (local_c->field_0002 == '\0') {
      if (iVar3 < local_c->field_0013 + -2) {
        local_c->field_0017 = iVar3 + 1;
        local_8 = 1;

        FUN_006b35d0((int *)g_ddxContext_008075A8,uVar1);
      }
    }
    else if (0 < iVar3) {
      local_c->field_0017 = iVar3 + -1;
      local_8 = 1;

      FUN_006b35d0((int *)g_ddxContext_008075A8,uVar1);
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

