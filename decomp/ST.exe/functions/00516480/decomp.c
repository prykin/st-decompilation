#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TTreeProc */

void __thiscall HelpPanelTy::TTreeProc(HelpPanelTy *this,uint param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  HelpPanelTy *this_00;
  undefined1 uVar4;
  int local_EAX_36;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  BITMAPINFO *pBVar8;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  uint uVar6;
  int local_EAX_828;
  int local_EAX_861;
  int iVar12;
  uint uVar9;
  UINT resourceId;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar10;
  byte *pbVar11;
  int iVar13;
  int iVar14;
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
      local_14->field_01AB = nullptr;
    }
    local_14->field_01A1 = CASE_6;
    local_14->field_01A3 = (void *)param_1;
    local_14->field_01AF = 0x23;
    local_14->field_01B1 = 10;
    if (local_14->field_0178 != 0) {
      local_14->field_0028 = 0x4202;
      *(undefined2 *)&local_14->field_0x2c = 0;
      local_14->field_002E = 2;
      *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_14->field_0x18);
      }
    }
  }
  if (this_00->field_019C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_019C);
  }
  Library::DKW::WGR::FUN_006b55f0
            ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
             (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
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
    uVar5 = 5;
  }
  else {
    uVar5 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar14 = -1;
  iVar13 = -1;
  pcVar6 = LoadResourceString(0x55f4,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E4,pcVar6,iVar13,iVar14,uVar5);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x21,0x2a,0x19c,0xf);
  uVar5 = (DAT_0080874e != 3) - 1 & 5;
  iVar14 = -1;
  iVar13 = -1;
  pcVar6 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar6,iVar13,iVar14,uVar5);
  pAVar2 = this_00->field_0218;
  uVar5 = pAVar2->field_0014;
  if (uVar5 == 0) {
    uVar5 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar7 = (undefined4 *)FUN_006b4fa0((int *)pAVar2);
  for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0xff;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0224,
                        (uint)local_8 & 0xff);
  local_8 = pBVar8;
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0,0,'\x06',(byte *)pBVar8);
  if ((param_1 == DAT_0080874e) && ((short)local_c != 0)) {
    pbVar11 = (byte *)(local_10 + 1);
    local_10 = (undefined4 *)(local_c & 0xffff);
    do {
      iVar5 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar11 + -4));
      if (iVar5 == 0) {
LAB_00516776:
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_022C;
      }
      else {
        uVar4 = thunk_FUN_004e6140((uint)DAT_0080874d,*(int *)(pbVar11 + -4));
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar4) < (int)(uint)*pbVar11) goto LAB_00516776;
        iVar13 = thunk_FUN_004e60d0((uint)DAT_0080874d,*(int *)(pbVar11 + -4));
        if (iVar13 < (int)(uint)*pbVar11) goto LAB_00516776;
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0228;
      }
      uVar6 = thunk_FUN_005276e0(pbVar11[-4],*pbVar11);
      pBVar8 = FUN_0070b3a0(pAVar10,uVar6);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar11 + 1),
             *(int *)(pbVar11 + 5),'\x01',(byte *)pBVar8);
      local_EAX_828 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar11 + -4));
      if (local_EAX_828 != 0) {
        local_EAX_861 =
             thunk_FUN_004e5cc0((uint)DAT_0080874d,*(uint *)(pbVar11 + -4),(uint)*pbVar11);
        if (local_EAX_861 != 0) {
          pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,0);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar11 + 1),
                 *(int *)(pbVar11 + 5),'\x06',(byte *)pBVar8);
        }
      }
      pbVar11 = pbVar11 + 0xd;
      local_10 = (undefined4 *)((int)local_10 - 1);
    } while (local_10 != nullptr);
    local_10 = nullptr;
    pBVar8 = local_8;
  }
  iVar13 = (pBVar8->bmiHeader).biHeight + -0x118 + (uint)(ushort)this_00->field_01AF;
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  else {
    iVar13 = (uint)(iVar13 % (int)(uint)(ushort)this_00->field_01B1 != 0) +
             iVar13 / (int)(uint)(ushort)this_00->field_01B1;
  }
  CreateSlider(this_00,iVar13);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (BITMAPINFO *)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);
  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

