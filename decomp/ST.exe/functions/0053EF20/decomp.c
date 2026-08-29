#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::InitProdPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0053EF20 -> 00710A90 @ 0053F01C

   [STPrototypeRepairApplier] Propagated parameter 14.
   Evidence: 004EEA40 -> 0053EF20 @ 004EEBFB; return of FUN_00571240 | 004EFB60 -> 0053EF20 @
   004EFC57; string at 007C1900 | 004F05C0 -> 0053EF20 @ 004F0740; return of FUN_00571240 | 0053C120
   -> 0053EF20 @ 0053C257; string at 007C771C | 0053EF20 -> 00538690 @ 0053F0F2 */

void __thiscall
ProdPanelTy::InitProdPanel
          (ProdPanelTy *this,UINT param_1,int param_2,uint param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13,char *text)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  ProdPanelTy *this_00;
  int local_EAX_36;
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  char *resourceString;
  int iVar2;
  int iVar10;
  uint uVar5;
  byte *puVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar11;
  uint *puVar12;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  local_EAX_36 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (local_EAX_36 == 0) {
    /* ST_CALLSITE[0053EF64]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
    pcVar3 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00 = local_14;
    puVar12 = nullptr;
    iVar11 = 0;
    iVar9 = 1;
    bVar8 = 0;
    uVar7 = 0xffffffff;
    local_14->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    /* ST_CALLSITE[0053EF88]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar4 = thunk_FUN_00571240("FRAMES",0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar4,uVar7,bVar8,iVar9,iVar11,puVar12);
    this_00->field_0190 = puVar5;
    pRVar1 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_0068;
    uVar7 = *(uint *)&pRVar1[1].field_0x4;
    if (uVar7 == 0) {
      uVar7 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar1->field_0x8;
    }

    puVar12 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar1));
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = 0xff;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    /* ST_CALLSITE[0053EFF8]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_0184);

    ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_0068,0,param_2,param_3,param_4,param_5);
    uVar7 = 0;
    iVar11 = -1;
    iVar9 = -2;
    /* ST_CALLSITE[0053F032]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    resourceString = LoadResourceString(param_1,g_hINSTANCE_00807618);

    ccFntTy::WrStr(this_00->field_017C,resourceString,iVar9,iVar11,uVar7);
    pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[0053F07B]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
    iVar9 = PanelTy::CreateBut((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar4,0xbfff,0xc000,0,0
                               ,0,nullptr,0);
    this_00->field_0180 = iVar9;
    /* ST_CALLSITE[0053F0A0]: CALL 0x00405d3f; direct=00405D3F ProdPanelTy::CreateSlider */
    iVar2 = CreateSlider(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = &this_00->field_01A1;
    this_00->field_019D = iVar2;
    iVar9 = 0xc09f;
    local_8 = param_11;
    puVar6 = &this_00[1].field_0x10;
    local_10 = 5;
    do {
      /* ST_CALLSITE[0053F0F2]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
      iVar11 = PanelTy::CreateBut((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,text,iVar9,
                                  iVar9 + 0x10,1,0,puVar6,nullptr,0);
      puVar6 = puVar6 + 0x27;
      iVar9 = iVar9 + 1;
      *local_c = iVar11;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x193,0,local_EAX_36,
                              "%s","ProdPanelTy::InitProdPanel");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_36,0,"E:\\__titans\\Andrey\\specpan.cpp",0x193);
  return;
}

