
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
  Global_mfRLoad_param_2Enum GVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  UINT UVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
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
  
  puVar22 = local_68;
  local_18 = this;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
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
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0x68,0,iVar6,
                                &DAT_007a4ccc,s_BehPanelTy__InitBehPanel_007c16bc);
    if (iVar14 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0x68);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar21 = 0x77;
  uVar18 = 0x99;
  UVar15 = 0x4e5d;
  iVar14 = 0xb;
  iVar6 = 0x84;
  uVar12 = 3;
  uVar11 = 0x36;
  DAT_00801678 = local_18;
  pCVar2 = thunk_FUN_00571240(s_BKG_BEHAVIOURW_007c1704,0);
  SpecPanelTy::InitPanel
            ((SpecPanelTy *)this_00,pCVar2,uVar11,uVar12,iVar6,iVar14,UVar15,uVar18,uVar21);
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
    puVar22 = (undefined4 *)0x0;
    iVar19 = 0;
    local_994[uVar7 * 0x5f + 3] = iVar6 + local_8;
    iVar16 = 1;
    bVar5 = 0;
    uVar13 = 0xffffffff;
    uVar11 = 0;
    iVar14 = 1;
    auStack_88c[uVar7 * 0x5f] = 1;
    iVar6 = 0;
    auStack_88c[uVar7 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar7],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar6);
      pCVar2 = FUN_006f2c00(pCVar2,iVar14,uVar11);
      GVar10 = CASE_6;
    }
    else {
      pcVar4 = thunk_FUN_00529590((&this_00->field_0x1af)[uVar7],0);
      pCVar2 = thunk_FUN_00571240(pcVar4,iVar6);
      pCVar2 = FUN_006f2c00(pCVar2,iVar14,uVar11);
      GVar10 = CASE_1;
    }
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,GVar10,pCVar2,uVar13,bVar5,iVar16,iVar19,puVar22);
    iVar6 = *(int *)(puVar3 + 4);
    local_994[uVar7 * 0x5f + 4] = *(int *)(puVar3 + 2);
    local_994[uVar7 * 0x5f + 5] = iVar6;
    local_14 = (int)&this_00->field_0000 + uVar7 * 0x27;
    *(undefined1 *)(local_14 + 0x1ce) = 1;
    iVar6 = thunk_FUN_00525390((&this_00->field_0x1af)[uVar7],0);
    *(int *)(local_14 + 0x1cf) = iVar6;
    uVar11 = thunk_FUN_005272b0((&this_00->field_0x1af)[uVar7]);
    iVar14 = local_14;
    auStack_914[uVar7 * 0x5f] = 0x101;
    auStack_914[uVar7 * 0x5f + 1] = 3;
    auStack_914[uVar7 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(iVar14 + 0x1d7) = uVar11;
    *(undefined2 *)(aiStack_908 + uVar7 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar7 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar7 * 0x5f + 1] = iVar14 + 0x1ce;
    aiStack_908[uVar7 * 0x5f + 3] = 0;
    aiStack_8e4[uVar7 * 0x5f + 3] = 1;
    aiStack_908[uVar7 * 0x5f + 6] = 0x101;
    *(undefined1 *)(iVar14 + 0x1db) = 3;
    iVar6 = *(int *)(iVar14 + 0x1d7);
    aiStack_908[uVar7 * 0x5f + 7] = 3;
    aiStack_908[uVar7 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar7 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar7 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar7 * 0x5f + 1] = iVar14 + 0x1ce;
    if (-1 < iVar6) {
      uVar11 = *(undefined4 *)(&DAT_00807e66 + iVar6 * 4);
      auStack_870[uVar7 * 0x5f + 2] = 8;
      auStack_870[uVar7 * 0x5f + 3] = uVar11;
    }
    bVar5 = (byte)local_10;
    auStack_88c[uVar7 * 0x5f + 2] = 1;
    iVar6 = local_20;
    if (DAT_0080874e == '\x03') {
      if (bVar5 == 0) {
LAB_004eda0d:
        iVar14 = 0;
      }
      else {
        if ((bVar5 < 2) || (4 < bVar5)) goto LAB_004eda47;
        if (bVar5 == 0) goto LAB_004eda0d;
        iVar14 = uVar7 - 1;
      }
      uVar11 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B8,iVar14);
      bVar5 = (byte)local_10;
      auStack_870[iVar6 * 0x5f] = uVar11;
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
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,9,&this_00->field_01BE,(int *)0x0,local_68,0);
      uVar23 = 1;
      iVar6 = this_00->field_0000;
      uVar20 = 0;
      uVar17 = 0x4e8a;
      uVar21 = 0;
      uVar18 = 2;
      uVar12 = 0xc0af;
      uVar11 = 0xc09f;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar11 = (**(code **)(iVar6 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 2U) + 0x1f,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar11,uVar12,uVar18,
                          uVar21,uVar17,uVar20,uVar23);
      uVar9 = 1;
      iVar6 = this_00->field_0000;
      uVar23 = 0;
      uVar20 = 0x4e88;
      uVar17 = 0;
      uVar21 = 2;
      uVar18 = 0xc0b0;
      uVar12 = 0xc0a0;
      this_00->field_01C2 = uVar11;
      pCVar2 = thunk_FUN_00571240(s_BUT_BHOLD_007c16e8,0);
      uVar11 = (**(code **)(iVar6 + 4))
                         (0,0,(-(DAT_0080874e != '\x03') & 6U) + 0x45,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar12,uVar18,uVar21,
                          uVar17,uVar20,uVar23,uVar9);
      uVar9 = 1;
      iVar6 = this_00->field_0000;
      uVar23 = 0;
      uVar20 = 0x4e89;
      uVar17 = 0;
      uVar21 = 2;
      uVar18 = 0xc0b1;
      uVar12 = 0xc0a1;
      this_00->field_01C6 = uVar11;
      pCVar2 = thunk_FUN_00571240(s_BUT_BAGR_007c16dc,0);
      uVar11 = (**(code **)(iVar6 + 4))
                         (0,0,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(DAT_0080874e != '\x03') & 7U) + 0x5a,0,1,1,pCVar2,uVar12,uVar18,uVar21,
                          uVar17,uVar20,uVar23,uVar9);
      this_00->field_01CA = uVar11;
      g_currentExceptionFrame = local_ac.previous;
      return;
    }
  } while( true );
}

