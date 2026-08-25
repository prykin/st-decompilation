#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::InitBehPanel */

void __thiscall BehPanelTy::InitBehPanel(BehPanelTy *this)

{
  BehPanelTyVTable *pBVar1;
  BehPanelTy *this_00;
  int iVar7;
  LPSTR pCVar3;
  ushort *puVar4;
  char *pcVar5_mg1;
  char *pcVar5_mg0;
  int local_EAX_721;
  BITMAPINFO *pBVar5;
  int iVar13;
  byte bVar6;
  int iVar8;
  uint uVar9;
  Global_mfRLoad_param_2Enum GVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  UINT UVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
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
  for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  memset(local_994, 0, 0x8e8); /* compiler bulk-zero initialization */
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar7 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0);
  this_00 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0x68,0,iVar7,
                                "%s","BehPanelTy::InitBehPanel");
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Andrey\\behpanel.cpp",0x68);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar22 = 0x77;
  uVar19 = 0x99;
  UVar18 = 0x4e5d;
  iVar17 = 0xb;
  iVar14 = 0x84;
  uVar12 = 3;
  iVar8 = 0x36;
  g_behPanel_00801678 = local_18;
  pCVar3 = thunk_FUN_00571240("BKG_BEHAVIOURW",0);
  /* ST_CALLSITE[004ED6BB]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
  SpecPanelTy::InitPanel
            ((SpecPanelTy *)this_00,pCVar3,iVar8,uVar12,iVar14,iVar17,UVar18,uVar19,uVar22);
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806794,CASE_B,"BUT_MSK_SI",0xffffffff,0,1,0,nullptr);
  this_00->field_02B8 = puVar4;
  this_00->field_01AF = 0x2b;
  this_00->field_01B0 = 0x2c;
  this_00->field_01B1 = 5;
  this_00->field_01B2 = 6;
  this_00->field_0x1b3 = 0x4d;
  this_00->field_0x1b4 = 0x2d;
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
    uVar9 = local_10 & 0xff;
    iVar8 = local_c + this_00->field_003C;
    local_994[uVar9 * 0x5f] = 0;
    local_994[uVar9 * 0x5f + 2] = iVar8;
    iVar8 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar8 = this_00->field_0044;
    }
    puVar23 = nullptr;
    iVar20 = 0;
    local_994[uVar9 * 0x5f + 3] = iVar8 + local_8;
    iVar17 = 1;
    bVar6 = 0;
    uVar15 = 0xffffffff;
    uVar12 = 0;
    iVar14 = 1;
    auStack_88c[uVar9 * 0x5f] = 1;
    iVar8 = 0;
    auStack_88c[uVar9 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar5_mg1 = thunk_FUN_00529590((&this_00->field_01AF)[uVar9],0);
      pCVar3 = thunk_FUN_00571240(pcVar5_mg1,iVar8);
      pCVar3 = FUN_006f2c00(pCVar3,iVar14,uVar12);
      GVar11 = CASE_6;
    }
    else {
      pcVar5_mg0 = thunk_FUN_00529590((&this_00->field_01AF)[uVar9],0);
      pCVar3 = thunk_FUN_00571240(pcVar5_mg0,iVar8);
      pCVar3 = FUN_006f2c00(pCVar3,iVar14,uVar12);
      GVar11 = CASE_1;
    }
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,GVar11,pCVar3,uVar15,bVar6,iVar17,iVar20,puVar23);
    iVar8 = *(int *)(puVar4 + 4);
    local_994[uVar9 * 0x5f + 4] = *(int *)(puVar4 + 2);
    local_994[uVar9 * 0x5f + 5] = iVar8;
    local_14 = (int)&this_00->vtable + uVar9 * 0x27;
    STField<undefined1>(local_14,0x1CE) = 1;
    local_EAX_721 = thunk_FUN_00525390((&this_00->field_01AF)[uVar9],0);
    STField<int>(local_14,0x1CF) = local_EAX_721;
    uVar12 = thunk_FUN_005272b0((&this_00->field_01AF)[uVar9]);
    iVar14 = local_14;
    auStack_914[uVar9 * 0x5f] = 0x101;
    auStack_914[uVar9 * 0x5f + 1] = 3;
    auStack_914[uVar9 * 0x5f + 2] = 0x4201;
    STField<undefined4>(iVar14,0x1D7) = uVar12;
    *(undefined2 *)(aiStack_908 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar9 * 0x5f + 1] = iVar14 + 0x1ce;
    aiStack_908[uVar9 * 0x5f + 3] = 0;
    aiStack_8e4[uVar9 * 0x5f + 3] = 1;
    aiStack_908[uVar9 * 0x5f + 6] = 0x101;
    STField<undefined1>(iVar14,0x1DB) = 3;
    iVar8 = STField<int>(iVar14,0x1D7);
    aiStack_908[uVar9 * 0x5f + 7] = 3;
    aiStack_908[uVar9 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar9 * 0x5f + 1] = iVar14 + 0x1ce;
    if (-1 < iVar8) {
      uVar12 = *(undefined4 *)(&DAT_00807e66 + iVar8 * 4);
      auStack_870[uVar9 * 0x5f + 2] = 8;
      auStack_870[uVar9 * 0x5f + 3] = uVar12;
    }
    bVar6 = (byte)local_10;
    auStack_88c[uVar9 * 0x5f + 2] = 1;
    iVar8 = local_20;
    if (DAT_0080874e == '\x03') {
      if (bVar6 == 0) {
LAB_004eda0d:
        iVar14 = 0;
      }
      else {
        if ((bVar6 < 2) || (4 < bVar6)) goto LAB_004eda47;
        if (bVar6 == 0) goto LAB_004eda0d;
        iVar14 = uVar9 - 1;
      }
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B8,iVar14);
      bVar6 = (byte)local_10;
      auStack_870[iVar8 * 0x5f] = pBVar5;
      auStack_870[iVar8 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6 + 1));
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
      /* ST_CALLSITE[004EDAB4]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,9,&this_00->field_01BE,nullptr,local_68,0);
      uVar24 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar22 = 0x4e8a;
      uVar16 = 0;
      sVar13 = 2;
      uVar19 = 0xc0af;
      uVar12 = 0xc09f;
      pCVar3 = thunk_FUN_00571240("BUT_BHOLD",0);
      /* ST_CALLSITE[004EDB0C]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,(-(uint)(DAT_0080874e != '\x03') & 2) + 0x1f,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,pCVar3,uVar12,uVar19,
                          sVar13,uVar16,uVar22,pcVar21,uVar24);
      uVar25 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar24 = 0x4e88;
      uVar16 = 0;
      sVar13 = 2;
      uVar22 = 0xc0b0;
      uVar19 = 0xc0a0;
      this_00->field_01C2 = uVar12;
      pCVar3 = thunk_FUN_00571240("BUT_BHOLD",0);
      /* ST_CALLSITE[004EDB6B]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,(-(uint)(DAT_0080874e != '\x03') & 6) + 0x45,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,pCVar3,uVar19,uVar22,
                          sVar13,uVar16,uVar24,pcVar21,uVar25);
      uVar25 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar24 = 0x4e89;
      uVar16 = 0;
      sVar13 = 2;
      uVar22 = 0xc0b1;
      uVar19 = 0xc0a1;
      this_00->field_01C6 = uVar12;
      pCVar3 = thunk_FUN_00571240("BUT_BAGR",0);
      /* ST_CALLSITE[004EDBCB]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,
                          (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,pCVar3,uVar19,uVar22,
                          sVar13,uVar16,uVar24,pcVar21,uVar25);
      this_00->field_01CA = uVar12;
      g_currentExceptionFrame = local_ac.previous;
      return;
    }
  } while( true );
}

