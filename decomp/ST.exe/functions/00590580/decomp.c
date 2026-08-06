#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::PaintMAdv

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall MAdvTy::PaintMAdv(MAdvTy *this)

{
  MAdvTy *pMVar2;
  int iVar3;
  char *pcVar3;
  int iVar5;
  StartServTy *this_00;
  StartServTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX;
  StartServTy *this_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX_00;
  StartServTy *this_03;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ccFntTy *pcVar11;
  uint uVar12;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pMVar2 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005E);
    pcVar11 = g_startSystem_0081176C->field_0030;
    uVar12 = 1;
    uVar10 = 0xffffffff;
    if (pMVar2->field_005D == '\0') {
      uVar9 = 0xfffffffe;
      pcVar3 = LoadResourceString(0x25e4,g_hINSTANCE_00807618);
      StartServTy::WrTextDDX(this_02,0,0,0x1b8,800,0x14,pcVar3,uVar9,uVar10,pcVar11,uVar12);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0xffffffff;
      pcVar3 = LoadResourceString(0x25e8,g_hINSTANCE_00807618);
      iVar8 = 0x8c;
      iVar7 = 800;
      iVar6 = 0x1cc;
      iVar4 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX_00;
    }
    else {
      uVar9 = 0xffffffff;
      pcVar3 = LoadResourceString(0x25e5,g_hINSTANCE_00807618);
      StartServTy::WrTextDDX(this_00,0,10,10,0x30c,0x32,pcVar3,uVar9,uVar10,pcVar11,uVar12);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0;
      pcVar3 = LoadResourceString(0x25e6,g_hINSTANCE_00807618);
      StartServTy::WrTextDDX(this_01,0,0x10e,0x3c,0x20d,0xfa,pcVar3,uVar10,uVar12,pcVar11,uVar9);
      pcVar11 = g_startSystem_0081176C->field_0030;
      uVar9 = 1;
      uVar12 = 0xffffffff;
      uVar10 = 0;
      pcVar3 = LoadResourceString(0x25e7,g_hINSTANCE_00807618);
      iVar8 = 0xe6;
      iVar7 = 0x302;
      iVar6 = 0x172;
      iVar4 = 0x14;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX;
    }
    StartServTy::WrTextDDX(this_03,0,iVar4,iVar6,iVar7,iVar8,pcVar3,uVar10,uVar12,pcVar11,uVar9);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\adv_obj.cpp",0x4d,0,iVar3,"%s",
                             "MAdvTy::PaintMAdv");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\adv_obj.cpp",0x4d);
  return;
}

