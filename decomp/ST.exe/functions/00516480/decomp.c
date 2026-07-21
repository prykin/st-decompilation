
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TTreeProc */

void __thiscall HelpPanelTy::TTreeProc(HelpPanelTy *this,uint param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint *extraout_EAX;
  uint uVar7;
  uint *extraout_EAX_00;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  undefined3 extraout_var_01;
  uint uVar11;
  UINT resourceId;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar13;
  int iVar14;
  InternalExceptionFrame local_58;
  HelpPanelTy *local_14;
  undefined4 *local_10;
  uint local_c;
  byte *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x4aa,0,iVar6,
                                &DAT_007a4ccc,s_HelpPanelTy__TTreeProc_007c3c28);
    if (iVar13 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x4aa);
    return;
  }
  if (param_2 == '\0') {
    HVar1 = local_14->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
      local_14->field_01A2 = HVar1;
      local_14->field_01AB = local_14->field_01A3;
    }
    else {
      local_14->field_01A2 = 0;
      local_14->field_01AB = 0;
    }
    local_14->field_01A1 = CASE_6;
    local_14->field_01A3 = param_1;
    local_14->field_01AF = 0x23;
    local_14->field_01B1 = 10;
    if (local_14->field_0178 != 0) {
      local_14->field_0028 = 0x4202;
      *(undefined2 *)&local_14->field_0x2c = 0;
      local_14->field_002E = 2;
      *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        (*(code *)**(undefined4 **)PTR_00802a30)(&local_14->field_0x18);
      }
    }
  }
  if (this_00->field_019C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_019C);
  }
  Library::DKW::WGR::FUN_006b55f0
            ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x21,0x16,
             (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
  if (param_1 == 1) {
    local_8 = (byte *)((uint)local_8._1_3_ << 8);
    resourceId = 0x5604;
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_c = 0x33;
  }
  else if (param_1 == 2) {
    local_8 = (byte *)CONCAT31(local_8._1_3_,1);
    resourceId = 0x5605;
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_c = 0x39;
  }
  else {
    local_8 = (byte *)CONCAT31(local_8._1_3_,2);
    resourceId = 0x5606;
    local_10 = &DAT_007c30d8;
    local_c = 0x46;
  }
  ccFntTy::SetSurf(this_00->field_01E4,(int)this_00->field_0068,0,0x21,0x16,0x19c,0x14);
  if (DAT_0080874e == 3) {
    iVar6 = 5;
  }
  else {
    iVar6 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar14 = -1;
  iVar13 = -1;
  LoadResourceString(0x55f4,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E4,extraout_EAX,iVar13,iVar14,iVar6);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x21,0x2a,0x19c,0xf);
  uVar7 = (DAT_0080874e != 3) - 1 & 5;
  iVar13 = -1;
  iVar6 = -1;
  LoadResourceString(resourceId,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_00,iVar6,iVar13,uVar7);
  pAVar2 = this_00->field_0218;
  uVar7 = pAVar2->field_0014;
  if (uVar7 == 0) {
    uVar7 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
  for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pbVar9 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0224,
                                (uint)local_8 & 0xff);
  local_8 = pbVar9;
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,0,0,'\x06',pbVar9);
  if ((param_1 == DAT_0080874e) && ((short)local_c != 0)) {
    pbVar9 = (byte *)(local_10 + 1);
    local_10 = (undefined4 *)(local_c & 0xffff);
    do {
      bVar4 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (CONCAT31(extraout_var,bVar4) == 0) {
LAB_00516776:
        pAVar12 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_022C;
      }
      else {
        uVar5 = thunk_FUN_004e6140((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        if (CONCAT31(extraout_var_00,uVar5) < (int)(uint)*pbVar9) goto LAB_00516776;
        iVar6 = thunk_FUN_004e60d0((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        if (iVar6 < (int)(uint)*pbVar9) goto LAB_00516776;
        pAVar12 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0228;
      }
      uVar7 = thunk_FUN_005276e0(pbVar9[-4],*pbVar9);
      pbVar10 = (byte *)FUN_0070b3a0(pAVar12,uVar7);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,*(int *)(pbVar9 + 1),
             *(int *)(pbVar9 + 5),'\x01',pbVar10);
      bVar4 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (CONCAT31(extraout_var_01,bVar4) != 0) {
        iVar6 = thunk_FUN_004e5cc0((uint)DAT_0080874d,*(uint *)(pbVar9 + -4),(uint)*pbVar9);
        if (iVar6 != 0) {
          pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,0
                                        );
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0218,*(int *)(pbVar9 + 1),
                 *(int *)(pbVar9 + 5),'\x06',pbVar10);
        }
      }
      pbVar9 = pbVar9 + 0xd;
      local_10 = (undefined4 *)((int)local_10 - 1);
    } while (local_10 != (undefined4 *)0x0);
    local_10 = (undefined4 *)0x0;
    pbVar9 = local_8;
  }
  iVar6 = *(int *)(pbVar9 + 8) + -0x118 + (uint)(ushort)this_00->field_01AF;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)(iVar6 % (int)(uint)(ushort)this_00->field_01B1 != 0) +
            iVar6 / (int)(uint)(ushort)this_00->field_01B1;
  }
  CreateSlider(this_00,iVar6);
  Library::DKW::WGR::FUN_006b5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

