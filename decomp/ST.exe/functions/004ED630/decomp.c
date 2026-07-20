
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
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Global_mfRLoad_param_2Enum GVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  UINT UVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
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
  
  puVar23 = local_68;
  local_18 = this;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  piVar8 = local_994;
  for (iVar6 = 0x23a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar6 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x68,0,iVar6,
                                &DAT_007a4ccc,s_BehPanelTy__InitBehPanel_007c16bc);
    if (iVar17 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x68);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar22 = 0x77;
  uVar20 = 0x99;
  UVar18 = 0x4e5d;
  iVar17 = 0xb;
  iVar6 = 0x84;
  uVar14 = 3;
  uVar12 = 0x36;
  DAT_00801678 = local_18;
  pCVar2 = thunk_FUN_00571240(s_BKG_BEHAVIOURW_007c1704,0);
  SpecPanelTy::InitPanel
            ((SpecPanelTy *)this_00,pCVar2,uVar12,uVar14,iVar6,iVar17,UVar18,uVar20,uVar22);
  puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,(undefined4 *)0x0);
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
    uVar7 = local_10 & 0xff;
    iVar6 = local_c + this_00->field_003C;
    local_994[uVar7 * 0x5f] = 0;
    local_994[uVar7 * 0x5f + 2] = iVar6;
    iVar6 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar6 = this_00->field_0044;
    }
    puVar23 = (undefined4 *)0x0;
    iVar21 = 0;
    local_994[uVar7 * 0x5f + 3] = iVar6 + local_8;
    iVar19 = 1;
    bVar5 = 0;
    uVar16 = 0xffffffff;
    uVar12 = 0;
    iVar17 = 1;
    auStack_88c[uVar7 * 0x5f] = 1;
    iVar6 = 0;
    auStack_88c[uVar7 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar7],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar6);
      pCVar2 = FUN_006f2c00(pCVar2,iVar17,uVar12);
      GVar11 = CASE_6;
    }
    else {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar7],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar6);
      pCVar2 = FUN_006f2c00(pCVar2,iVar17,uVar12);
      GVar11 = CASE_1;
    }
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,GVar11,pCVar2,uVar16,bVar5,iVar19,iVar21,puVar23);
    iVar6 = *(int *)(puVar3 + 4);
    local_994[uVar7 * 0x5f + 4] = *(int *)(puVar3 + 2);
    local_994[uVar7 * 0x5f + 5] = iVar6;
    local_14 = (int)&this_00->field_0000 + uVar7 * 0x27;
    *(undefined1 *)(local_14 + 0x1ce) = 1;
    iVar6 = thunk_FUN_00525390((&this_00->field_0x1af)[uVar7],0);
    *(int *)(local_14 + 0x1cf) = iVar6;
    uVar12 = thunk_FUN_005272b0((&this_00->field_0x1af)[uVar7]);
    iVar17 = local_14;
    auStack_914[uVar7 * 0x5f] = 0x101;
    auStack_914[uVar7 * 0x5f + 1] = 3;
    auStack_914[uVar7 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(iVar17 + 0x1d7) = uVar12;
    *(undefined2 *)(aiStack_908 + uVar7 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar7 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar7 * 0x5f + 1] = iVar17 + 0x1ce;
    aiStack_908[uVar7 * 0x5f + 3] = 0;
    aiStack_8e4[uVar7 * 0x5f + 3] = 1;
    aiStack_908[uVar7 * 0x5f + 6] = 0x101;
    *(undefined1 *)(iVar17 + 0x1db) = 3;
    iVar6 = *(int *)(iVar17 + 0x1d7);
    aiStack_908[uVar7 * 0x5f + 7] = 3;
    aiStack_908[uVar7 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar7 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar7 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar7 * 0x5f + 1] = iVar17 + 0x1ce;
    if (-1 < iVar6) {
      uVar12 = *(undefined4 *)(&DAT_00807e66 + iVar6 * 4);
      auStack_870[uVar7 * 0x5f + 2] = 8;
      auStack_870[uVar7 * 0x5f + 3] = uVar12;
    }
    bVar5 = (byte)local_10;
    auStack_88c[uVar7 * 0x5f + 2] = 1;
    iVar6 = local_20;
    if (DAT_0080874e == '\x03') {
      if (bVar5 == 0) {
LAB_004eda0d:
        iVar17 = 0;
      }
      else {
        if ((bVar5 < 2) || (4 < bVar5)) goto LAB_004eda47;
        if (bVar5 == 0) goto LAB_004eda0d;
        iVar17 = uVar7 - 1;
      }
      uVar12 = FUN_0070b3a0(this_00->field_02B8,iVar17);
      bVar5 = (byte)local_10;
      auStack_870[iVar6 * 0x5f] = uVar12;
      auStack_870[iVar6 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    local_10 = CONCAT31(local_10._1_3_,bVar5 + 1);
    if (5 < (byte)(bVar5 + 1)) {
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
      uVar15 = 1;
      iVar6 = this_00->field_0000;
      uVar13 = 0;
      uVar10 = 0x4e8a;
      uVar22 = 0;
      uVar20 = 2;
      uVar14 = 0xc0af;
      uVar12 = 0xc09f;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar12 = (**(code **)(iVar6 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 2U) + 0x1f,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar12,uVar14,uVar20,
                          uVar22,uVar10,uVar13,uVar15);
      uVar9 = 1;
      iVar6 = this_00->field_0000;
      uVar15 = 0;
      uVar13 = 0x4e88;
      uVar10 = 0;
      uVar22 = 2;
      uVar20 = 0xc0b0;
      uVar14 = 0xc0a0;
      this_00->field_01C2 = uVar12;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar12 = (**(code **)(iVar6 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 6U) + 0x45,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar14,uVar20,uVar22,
                          uVar10,uVar13,uVar15,uVar9);
      uVar9 = 1;
      iVar6 = this_00->field_0000;
      uVar15 = 0;
      uVar13 = 0x4e89;
      uVar10 = 0;
      uVar22 = 2;
      uVar20 = 0xc0b1;
      uVar14 = 0xc0a1;
      this_00->field_01C6 = uVar12;
      pCVar2 = thunk_FUN_00571240(s_BUT_BAGR_007c16dc,0);
      uVar12 = (**(code **)(iVar6 + 4))
                         (0,0,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar14,uVar20,uVar22,
                          uVar10,uVar13,uVar15,uVar9);
      this_00->field_01CA = uVar12;
      g_currentExceptionFrame = local_ac.previous;
      return;
    }
  } while( true );
}

