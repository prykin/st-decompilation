#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::InitProdPanel

   [STPrototypeApplier] Propagated parameter 14.
   Evidence: 004EEA40 -> 0053EF20 @ 004EEBFB | 004EFB60 -> 0053EF20 @ 004EFC57 | 004F05C0 ->
   0053EF20 @ 004F0740 | 0053C120 -> 0053EF20 @ 0053C257 */

void __thiscall
ProdPanelTy::InitProdPanel
          (ProdPanelTy *this,UINT param_1,int param_2,uint param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13,LPSTR text)

{
  AnonPointee_ProdPanelTy_0068 *pAVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  ccFntTy *pcVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar3 == 0) {
    pcVar4 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                               (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
    this_00 = local_14;
    puVar13 = (undefined4 *)0x0;
    iVar12 = 0;
    iVar3 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    local_14->field_017C = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    pCVar5 = thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar5,uVar10,bVar11,iVar3,iVar12,puVar13);
    this_00->field_0190 = puVar6;
    pAVar1 = this_00->field_0068;
    uVar10 = pAVar1->field_0014;
    if (uVar10 == 0) {
      uVar10 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar1->field_0008;
    }
    puVar13 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
          );
    ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_0068,0,param_2,param_3,param_4,param_5)
    ;
    uVar14 = 0;
    iVar12 = -1;
    iVar3 = -2;
    puVar7 = (uint *)LoadResourceString(param_1,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar7,iVar3,iVar12,uVar14);
    pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar14 = PanelTy::CreateBut((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar5,0xbfff,0xc000,0,
                                0,0,(char *)0x0,0);
    this_00->field_0180 = uVar14;
    iVar3 = CreateSlider(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = &this_00->field_01A1;
    this_00->field_019D = iVar3;
    iVar3 = 0xc09f;
    local_8 = param_11;
    puVar9 = &this_00[1].field_0x10;
    local_10 = 5;
    do {
      uVar14 = PanelTy::CreateBut((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,text,iVar3,
                                  iVar3 + 0x10,1,0,puVar9,(char *)0x0,0);
      puVar9 = puVar9 + 0x27;
      iVar3 = iVar3 + 1;
      *local_c = uVar14;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar12 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x193,0,iVar3,&DAT_007a4ccc,
                              s_ProdPanelTy__InitProdPanel_007c7a00);
  if (iVar12 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x193);
  return;
}

