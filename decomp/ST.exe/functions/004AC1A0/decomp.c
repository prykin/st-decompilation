#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StartShow */

undefined4 __thiscall STT3DSprC::StartShow(STT3DSprC *this,byte param_1,undefined4 param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  InternalExceptionFrame local_50;
  uint local_c;
  STT3DSprC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xf1,0,iVar2,"%s",
                               "STT3DSprC::StartShow");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xce);
  }
  if (((char)param_1 < '\0') || (pSVar1->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xcf);
  }
  uVar5 = (uint)(char)param_1;
  iVar2 = uVar5 * 0x24;
  if (*(int *)(&pSVar1->field_0020->field_0x0 + iVar2) == 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xd0);
  }
  local_c = 1 << (param_1 & 0x1f);
  if ((pSVar1->field_001C & local_c) != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xd1);
  }
  FUN_006e9cb0(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar5);
  pSVar1->field_001C = pSVar1->field_001C | local_c;
  if (*(int *)(&pSVar1->field_0020->field_0x20 + iVar2) == 0) {
    FUN_006ea270(pSVar1->field_003C,pSVar1->field_0018,uVar5,
                 *(uint *)(&pSVar1->field_0020->field_0x18 + iVar2));
  }
  else {
    FUN_006e9d40(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar5);
  }
  if (pSVar1->field_0012 == '\0') {
    FUN_006eaaa0(pSVar1->field_003C,pSVar1->field_0018,0);
  }
  if (pSVar1->field_0011 == '\0') {
    if (pSVar1->field_0010 == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + iVar2) + 0x29) == 0)
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = *(undefined4 *)(&pSVar1->field_0020->field_0x18 + iVar2);
      pcVar6 = thunk_FUN_004ad6c0;
    }
    else {
      if ((pSVar1->field_0038 == 0) ||
         (piVar3 = (int *)(&pSVar1->field_0020->field_0x0 + iVar2), *(int *)(*piVar3 + 0x29) == 0))
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = piVar3[6];
      pcVar6 = thunk_FUN_004ad740;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              (pSVar1->field_003C,pSVar1->field_0018,pSVar1->field_0034,(uint)pcVar6,(uint)pSVar1);
  }
cf_common_exit_004AC330:
  *(undefined4 *)(&pSVar1->field_0020->field_0x1c + iVar2) = param_2;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

