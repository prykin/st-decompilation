#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurShad

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00623170 -> 004ABF00 @ 006232E4 | 00623600 -> 004ABF00 @ 00623867
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0045018E -> killed on
   every CFG path | 00480600 @ 004807A5 -> read as EAX on every CFG path | 00480600 @ 004808A5 ->
   read as EAX on every CFG path | 00480600 @ 00480FDB -> read as EAX on every CFG path | 0057CD70 @
   0057D08C -> killed on every CFG path | 0057CD70 @ 0057D12D -> killed on every CFG path | 0057CD70
   @ 0057D25D -> killed on every CFG path | 005825C0 @ 00582FA3 -> killed on every CFG path |
   0058A9E0 @ 0058AE21 -> killed on every CFG path | 0058E570 @ 0058E9DA -> killed on every CFG path
   | 005EC9F0 @ 005ECB1B -> killed on every CFG path | 005EF5F0 @ 005EF670 -> killed on every CFG
   path | 005FA0B0 @ 005FA138 -> killed on every CFG path | 00623170 @ 006232E4 -> killed on every
   CFG path | 00623600 @ 00623867 -> killed on every CFG path */

int __thiscall STT3DSprC::SetCurShad(STT3DSprC *this,char param_1,uint param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  code *pcVar5;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xac,0,iVar2,"%s",
                               "STT3DSprC::SetCurShad");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (local_8->field_0018 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xa5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + param_1 * 0x24) + 0x29) != 0) {
    pSVar1->field_0013 = param_1;
    pSVar1->field_0030 = param_2;
    if (pSVar1->field_0011 == '\0') {
      if (pSVar1->field_0010 == '\0') {
        puVar4 = pSVar1->field_0034;
        uVar3 = pSVar1->field_0018;
        pcVar5 = thunk_FUN_004ad6c0;
      }
      else {
        puVar4 = pSVar1->field_0034;
        uVar3 = pSVar1->field_0018;
        pcVar5 = thunk_FUN_004ad740;
      }
      Library::Ourlib::ST3DSMAP::SprSetShadow
                (pSVar1->field_003C,uVar3,(uint)puVar4,(uint)pcVar5,(uint)pSVar1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

