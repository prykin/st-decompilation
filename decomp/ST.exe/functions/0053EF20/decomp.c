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
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  uint *resourceString;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar2 == 0) {
    pcVar3 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                               (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
    this_00 = local_14;
    puVar11 = (undefined4 *)0x0;
    iVar10 = 0;
    iVar2 = 1;
    bVar9 = 0;
    uVar8 = 0xffffffff;
    local_14->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pCVar4 = thunk_FUN_00571240("FRAMES",0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar4,uVar8,bVar9,iVar2,iVar10,puVar11);
    this_00->field_0190 = puVar5;
    puVar5 = this_00->field_0068;
    uVar8 = *(uint *)(puVar5 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar5 + 4);
    }
    puVar11 = (undefined4 *)FUN_006b4fa0((int)puVar5);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = 0xff;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
          );
    ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_0068,0,param_2,param_3,param_4,param_5)
    ;
    uVar12 = 0;
    iVar10 = -1;
    iVar2 = -2;
    resourceString = (uint *)LoadResourceString(param_1,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,resourceString,iVar2,iVar10,uVar12);
    pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar12 = PanelTy::CreateBut((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar4,0xbfff,0xc000,0,
                                0,0,(char *)0x0,0);
    this_00->field_0180 = uVar12;
    iVar2 = CreateSlider(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = &this_00->field_01A1;
    this_00->field_019D = iVar2;
    iVar2 = 0xc09f;
    local_8 = param_11;
    puVar7 = &this_00[1].field_0x10;
    local_10 = 5;
    do {
      uVar12 = PanelTy::CreateBut((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,text,iVar2,
                                  iVar2 + 0x10,1,0,puVar7,(char *)0x0,0);
      puVar7 = puVar7 + 0x27;
      iVar2 = iVar2 + 1;
      *local_c = uVar12;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x193,0,iVar2,"%s",
                              "ProdPanelTy::InitProdPanel");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\specpan.cpp",0x193);
  return;
}

