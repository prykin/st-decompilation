
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::InitBehPanel */

void __thiscall BehPanelTy::InitBehPanel(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *this_00;
  LPSTR pCVar2;
  ushort *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Global_mfRLoad_param_2Enum GVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  UINT UVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  int local_994 [32];
  undefined4 auStack_914 [3];
  int aiStack_908 [9];
  int aiStack_8e4 [22];
  undefined4 auStack_88c [7];
  undefined4 auStack_870 [497];
  InternalExceptionFrame local_ac;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_20;
  int *local_1c;
  BehPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  puVar24 = local_68;
  local_18 = this;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
  piVar9 = local_994;
  for (iVar7 = 0x23a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar7 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x68,0,iVar7,
                                &DAT_007a4ccc,s_BehPanelTy__InitBehPanel_007c16bc);
    if (iVar18 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x68);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar23 = 0x77;
  uVar21 = 0x99;
  UVar19 = 0x4e5d;
  iVar18 = 0xb;
  iVar7 = 0x84;
  uVar15 = 3;
  uVar13 = 0x36;
  DAT_00801678 = local_18;
  pCVar2 = thunk_FUN_00571240(s_BKG_BEHAVIOURW_007c1704,0);
  SpecPanelTy::InitPanel
            ((SpecPanelTy *)this_00,pCVar2,uVar13,uVar15,iVar7,iVar18,UVar19,uVar21,uVar23);
  puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,(byte *)s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,
                      (undefined4 *)0x0);
  this_00->field_02B8 = puVar3;
  this_00->field_0x1af = 0x2b;
  this_00->field_01B0 = 0x2c;
  this_00->field_01B1 = 5;
  this_00->field_01B2 = 6;
  this_00->field_0x1b3 = 0x4d;
  this_00->field_01B4 = 0x2d;
  local_10 = local_10 & 0xffffff00;
  do {
    if (DAT_0080874e == '\x03') {
      switch(local_10 & 0xff) {
      case 0:
        local_c = 0x24;
        local_8 = 0x12;
        break;
      case 1:
        local_c = 0x61;
        local_8 = 0x12;
        break;
      case 2:
        local_c = 0x96;
        local_8 = 0x12;
        break;
      case 3:
        local_c = 0x24;
        local_8 = 0x2c;
        break;
      case 4:
        local_c = 0x61;
        local_8 = 0x2c;
        break;
      case 5:
        local_c = 0x96;
        local_8 = 0x2c;
      }
      goto switchD_004ed72f_default;
    }
    switch(local_10 & 0xff) {
    case 0:
      local_c = 0x20;
      local_8 = 0x15;
      break;
    case 1:
      local_c = 0x5d;
      local_8 = 0x15;
      break;
    case 2:
      local_c = 0x9a;
      local_8 = 0x15;
      break;
    case 3:
      local_c = 0x20;
      goto LAB_004ed7fd;
    case 4:
      local_c = 0x5d;
      goto LAB_004ed7fd;
    case 5:
      local_c = 0x9a;
LAB_004ed7fd:
      local_8 = 0x39;
    }
switchD_004ed72f_default:
    uVar8 = local_10 & 0xff;
    iVar7 = local_c + this_00->field_003C;
    local_994[uVar8 * 0x5f] = 0;
    local_994[uVar8 * 0x5f + 2] = iVar7;
    iVar7 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar7 = this_00->field_0044;
    }
    puVar24 = (undefined4 *)0x0;
    iVar22 = 0;
    local_994[uVar8 * 0x5f + 3] = iVar7 + local_8;
    iVar20 = 1;
    bVar6 = 0;
    uVar17 = 0xffffffff;
    uVar13 = 0;
    iVar18 = 1;
    auStack_88c[uVar8 * 0x5f] = 1;
    iVar7 = 0;
    auStack_88c[uVar8 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar8],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar7);
      pbVar5 = (byte *)FUN_006f2c00(pCVar2,iVar18,uVar13);
      GVar12 = CASE_6;
    }
    else {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar8],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar7);
      pbVar5 = (byte *)FUN_006f2c00(pCVar2,iVar18,uVar13);
      GVar12 = CASE_1;
    }
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,GVar12,pbVar5,uVar17,bVar6,iVar20,iVar22,puVar24);
    iVar7 = *(int *)(puVar3 + 4);
    local_994[uVar8 * 0x5f + 4] = *(int *)(puVar3 + 2);
    local_994[uVar8 * 0x5f + 5] = iVar7;
    local_14 = (int)&this_00->field_0000 + uVar8 * 0x27;
    *(undefined1 *)(local_14 + 0x1ce) = 1;
    iVar7 = thunk_FUN_00525390((&this_00->field_0x1af)[uVar8],0);
    *(int *)(local_14 + 0x1cf) = iVar7;
    uVar13 = thunk_FUN_005272b0((&this_00->field_0x1af)[uVar8]);
    iVar18 = local_14;
    auStack_914[uVar8 * 0x5f] = 0x101;
    auStack_914[uVar8 * 0x5f + 1] = 3;
    auStack_914[uVar8 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(iVar18 + 0x1d7) = uVar13;
    *(undefined2 *)(aiStack_908 + uVar8 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar8 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar8 * 0x5f + 1] = iVar18 + 0x1ce;
    aiStack_908[uVar8 * 0x5f + 3] = 0;
    aiStack_8e4[uVar8 * 0x5f + 3] = 1;
    aiStack_908[uVar8 * 0x5f + 6] = 0x101;
    *(undefined1 *)(iVar18 + 0x1db) = 3;
    iVar7 = *(int *)(iVar18 + 0x1d7);
    aiStack_908[uVar8 * 0x5f + 7] = 3;
    aiStack_908[uVar8 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar8 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar8 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar8 * 0x5f + 1] = iVar18 + 0x1ce;
    if (-1 < iVar7) {
      uVar13 = *(undefined4 *)(&DAT_00807e66 + iVar7 * 4);
      auStack_870[uVar8 * 0x5f + 2] = 8;
      auStack_870[uVar8 * 0x5f + 3] = uVar13;
    }
    bVar6 = (byte)local_10;
    auStack_88c[uVar8 * 0x5f + 2] = 1;
    iVar7 = local_20;
    if (DAT_0080874e == '\x03') {
      if (bVar6 == 0) {
LAB_004eda0d:
        iVar18 = 0;
      }
      else {
        if ((bVar6 < 2) || (4 < bVar6)) goto LAB_004eda47;
        if (bVar6 == 0) goto LAB_004eda0d;
        iVar18 = uVar8 - 1;
      }
      uVar13 = FUN_0070b3a0(this_00->field_02B8,iVar18);
      bVar6 = (byte)local_10;
      auStack_870[iVar7 * 0x5f] = uVar13;
      auStack_870[iVar7 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    local_10 = CONCAT31(local_10._1_3_,bVar6 + 1);
    if (5 < (byte)(bVar6 + 1)) {
      local_58 = this_00->field_0008;
      local_1c = local_994;
      local_30 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff2) + 0xb20e;
      local_68[0] = 1;
      local_68[1] = 0xffffffff;
      local_20 = 6;
      local_54 = 2;
      local_50 = 0xb1ff;
      local_34 = 2;
      local_38 = local_58;
      (**(code **)(*(int *)this_00->field_000C + 8))(9,&this_00->field_01BE,0,local_68,0);
      uVar16 = 1;
      iVar7 = this_00->field_0000;
      uVar14 = 0;
      uVar11 = 0x4e8a;
      uVar23 = 0;
      uVar21 = 2;
      uVar15 = 0xc0af;
      uVar13 = 0xc09f;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 2U) + 0x1f,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar13,uVar15,uVar21,
                          uVar23,uVar11,uVar14,uVar16);
      uVar10 = 1;
      iVar7 = this_00->field_0000;
      uVar16 = 0;
      uVar14 = 0x4e88;
      uVar11 = 0;
      uVar23 = 2;
      uVar21 = 0xc0b0;
      uVar15 = 0xc0a0;
      this_00->field_01C2 = uVar13;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 6U) + 0x45,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar15,uVar21,uVar23,
                          uVar11,uVar14,uVar16,uVar10);
      uVar10 = 1;
      iVar7 = this_00->field_0000;
      uVar16 = 0;
      uVar14 = 0x4e89;
      uVar11 = 0;
      uVar23 = 2;
      uVar21 = 0xc0b1;
      uVar15 = 0xc0a1;
      this_00->field_01C6 = uVar13;
      pCVar2 = thunk_FUN_00571240(s_BUT_BAGR_007c16dc,0);
      uVar13 = (**(code **)(iVar7 + 4))
                         (0,0,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar15,uVar21,uVar23,
                          uVar11,uVar14,uVar16,uVar10);
      this_00->field_01CA = uVar13;
      g_currentExceptionFrame = local_ac.previous;
      return;
    }
  } while( true );
}

