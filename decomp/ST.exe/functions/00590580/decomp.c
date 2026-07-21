#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::PaintMAdv */

void __thiscall MAdvTy::PaintMAdv(MAdvTy *this)

{
  code *pcVar1;
  MAdvTy *pMVar2;
  int iVar3;
  uint *puVar4;
  StartServTy *this_00;
  StartServTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX;
  StartServTy *this_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  StartServTy *extraout_ECX_00;
  StartServTy *this_03;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ccFntTy *pcVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    pMVar2 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005E);
    pcVar10 = (ccFntTy *)PTR_0081176c->field_0030;
    uVar11 = 1;
    uVar9 = 0xffffffff;
    if (pMVar2->field_005D == '\0') {
      uVar8 = 0xfffffffe;
      puVar4 = (uint *)LoadResourceString(0x25e4,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_02,0,0,0x1b8,800,0x14,puVar4,uVar8,uVar9,pcVar10,uVar11);
      pcVar10 = (ccFntTy *)PTR_0081176c->field_0030;
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0xffffffff;
      puVar4 = (uint *)LoadResourceString(0x25e8,HINSTANCE_00807618);
      iVar7 = 0x8c;
      iVar6 = 800;
      iVar5 = 0x1cc;
      iVar3 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX_00;
    }
    else {
      uVar8 = 0xffffffff;
      puVar4 = (uint *)LoadResourceString(0x25e5,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_00,0,10,10,0x30c,0x32,puVar4,uVar8,uVar9,pcVar10,uVar11);
      pcVar10 = (ccFntTy *)PTR_0081176c->field_0030;
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0;
      puVar4 = (uint *)LoadResourceString(0x25e6,HINSTANCE_00807618);
      StartServTy::WrTextDDX(this_01,0,0x10e,0x3c,0x20d,0xfa,puVar4,uVar9,uVar8,pcVar10,uVar11);
      pcVar10 = (ccFntTy *)PTR_0081176c->field_0030;
      uVar11 = 1;
      uVar8 = 0xffffffff;
      uVar9 = 0;
      puVar4 = (uint *)LoadResourceString(0x25e7,HINSTANCE_00807618);
      iVar7 = 0xe6;
      iVar6 = 0x302;
      iVar5 = 0x172;
      iVar3 = 0x14;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_03 = extraout_ECX;
    }
    StartServTy::WrTextDDX(this_03,0,iVar3,iVar5,iVar6,iVar7,puVar4,uVar9,uVar8,pcVar10,uVar11);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x4d,0,iVar3,&DAT_007a4ccc,
                             s_MAdvTy__PaintMAdv_007cbc74);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x4d);
  return;
}

