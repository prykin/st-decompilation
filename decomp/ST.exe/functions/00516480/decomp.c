#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TTreeProc */

void __thiscall HelpPanelTy::TTreeProc(HelpPanelTy *this,uint param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  HelpPanelTy *this_00;
  int local_EAX_36;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  BITMAPINFO *pBVar7;
  int iVar5;
  int uVar6;
  int local_EAX_828;
  int local_EAX_861;
  int iVar12;
  uint uVar8;
  UINT resourceId;
  RecoveredGlobalRecordView_0081175C *pRVar9;
  byte *pbVar10;
  int iVar11;
  int iVar13;
  InternalExceptionFrame local_58;
  HelpPanelTy *local_14;
  undefined4 *local_10;
  uint local_c;
  BITMAPINFO *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  local_EAX_36 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x4aa,0,local_EAX_36,
                                "%s","HelpPanelTy::TTreeProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_36,0,"E:\\__titans\\Andrey\\helppan.cpp",0x4aa);
    return;
  }
  if (param_2 == '\0') {
    HVar1 = local_14->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_14->field_01A2 = HVar1;
      local_14->field_01AB = local_14->field_01A3;
    }
    else {
      local_14->field_01A2 = 0;
      local_14->field_01AB = 0;
    }
    STPiece<0,2>(iVar11) = local_14->field_0178;
    STPiece<2,2>(iVar11) = local_14->field_017A;
    local_14->field_01A1 = CASE_6;
    local_14->field_01A3 = (void *)param_1;
    local_14->field_01AF = 0x23;
    local_14->field_01B1 = 10;
    if (iVar11 != 0) {
      local_14->field_0028 = 0x4202;
      *(undefined2 *)&local_14->field_0x2c = 0;
      *(undefined2 *)&local_14->field_0x2e = 2;
      local_14->field_0030 = (undefined2)iVar11;
      local_14->field_0032 = STPiece<2,2>(iVar11);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[0051654A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_14->field_0x18);
      }
    }
  }
  if (this_00->field_019C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_019C);
  }

  Library::DKW::WGR::FUN_006b55f0
            ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
  if (param_1 == 1) {
    local_8 = (BITMAPINFO *)((uint)STPiece<1,3>(local_8) << 8);
    resourceId = 0x5604;
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_c = 0x33;
  }
  else if (param_1 == 2) {
    local_8 = (BITMAPINFO *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    resourceId = 0x5605;
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_c = 0x39;
  }
  else {
    local_8 = (BITMAPINFO *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(2));
    resourceId = 0x5606;
    local_10 = &DAT_007c30d8;
    local_c = 0x46;
  }

  ccFntTy::SetSurf(this_00->field_01E4,(int)this_00->field_0068,0,0x21,0x16,0x19c,0x14);
  if (DAT_0080874e == 3) {
    uVar4 = 5;
  }
  else {
    uVar4 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar13 = -1;
  iVar11 = -1;
  /* ST_CALLSITE[0051661A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar5 = LoadResourceString(0x55f4,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E4,pcVar5,iVar11,iVar13,uVar4);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x21,0x2a,0x19c,0xf);
  uVar4 = (DAT_0080874e != 3) - 1 & 5;
  iVar13 = -1;
  iVar11 = -1;
  /* ST_CALLSITE[00516665]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar5 = LoadResourceString(resourceId,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar5,iVar11,iVar13,uVar4);
  pAVar2 = this_00->field_0218;
  uVar4 = pAVar2->field_0014;
  if (uVar4 == 0) {
    uVar4 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }

  puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pAVar2));
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  /* ST_CALLSITE[005166C8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0224,
                        (uint)local_8 & 0xff);
  local_8 = pBVar7;
  /* ST_CALLSITE[005166E0]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0,0,'\x06',
         (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7);
  if ((param_1 == DAT_0080874e) && ((short)local_c != 0)) {
    pbVar10 = (byte *)(local_10 + 1);
    local_10 = (undefined4 *)(local_c & 0xffff);
    do {

      iVar5 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar10 + -4));
      if (iVar5 == 0) {
LAB_00516776:
        pRVar9 = (RecoveredGlobalRecordView_0081175C *)this_00->field_022C;
      }
      else {

        iVar11 = thunk_FUN_004e6140((uint)DAT_0080874d,*(int *)(pbVar10 + -4));
        if (iVar11 < (int)(uint)*pbVar10) goto LAB_00516776;

        iVar11 = thunk_FUN_004e60d0((uint)DAT_0080874d,*(int *)(pbVar10 + -4));
        if (iVar11 < (int)(uint)*pbVar10) goto LAB_00516776;
        pRVar9 = (RecoveredGlobalRecordView_0081175C *)this_00->field_0228;
      }

      uVar6 = thunk_FUN_005276e0(pbVar10[-4],*pbVar10);
      /* ST_CALLSITE[0051678A]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7 = FUN_0070b3a0(pRVar9,uVar6);
      /* ST_CALLSITE[005167A1]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar10 + 1),
             *(int *)(pbVar10 + 5),'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7);

      local_EAX_828 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar10 + -4));
      if (local_EAX_828 != 0) {
        /* ST_CALLSITE[005167DD]: CALL 0x00403f8f; direct=00403F8F STAllPlayersC::sub_004E5CC0 */
        local_EAX_861 =
             STAllPlayersC::sub_004E5CC0
                       (g_allPlayers_007FA174,(uint)DAT_0080874d,*(uint *)(pbVar10 + -4),
                        (uint)*pbVar10);
        if (local_EAX_861 != 0) {
          /* ST_CALLSITE[005167EF]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar7 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0248,0);
          /* ST_CALLSITE[00516806]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar10 + 1),
                 *(int *)(pbVar10 + 5),'\x06',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7);
        }
      }
      pbVar10 = pbVar10 + 0xd;
      local_10 = (undefined4 *)((int)local_10 - 1);
    } while (local_10 != nullptr);
    local_10 = nullptr;
    pBVar7 = local_8;
  }
  iVar11 = (pBVar7->bmiHeader).biHeight + -0x118 + (uint)(ushort)this_00->field_01AF;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = (uint)(iVar11 % (int)(uint)(ushort)this_00->field_01B1 != 0) +
             iVar11 / (int)(uint)(ushort)this_00->field_01B1;
  }
  /* ST_CALLSITE[0051685C]: CALL 0x00402eeb; direct=00402EEB HelpPanelTy::CreateSlider */
  CreateSlider(this_00,iVar11);
  Library::DKW::WGR::FUN_006b5110
            ((int *)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (BITMAPINFO *)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);

  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

