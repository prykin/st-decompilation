#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoat */

void __thiscall CPanelTy::SetControlBoat(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  CPanelTy *this_00;
  int iVar8;
  char *pcVar4_mg0;
  LPSTR pCVar4;
  int uVar5_mg1;
  int iVar10;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  RecoveredRecord_004F3130_3F0D2FD9 *pRVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  byte *puVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  uint uVar23;
  RecoveredRecordView_004F2E40_41FE7B1E local_bb0 [7];
  uint local_2c8 [112];
  uint local_108 [22];
  InternalExceptionFrame local_b0;
  uint local_6c [4];
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_24;
  RecoveredRecordView_004F2E40_41FE7B1E *local_20;
  CPanelTy *local_1c;
  int local_18;
  Global_sub_00529590_param_1Enum *local_14;
  uint local_10;
  uint *local_c;
  byte *local_8;
  puVar9 = local_108;
  local_1c = this;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  memset(local_2c8, 0, 0x1c0); /* compiler bulk-zero initialization */
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;

  iVar8 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b0.previous;

    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x1a0,0,iVar8,
                                "%s","CPanelTy::SetControlBoat");
    if (iVar10 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x1a0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005023C3]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  this_00 = local_1c;
  if (local_1c->field_02FE != 0) {
    StartSystemTy::sub_006E56B0(local_1c->field_000C,local_1c->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar8 = this_00->field_0960;
  iVar5 = 4;
  do {
    if (*puVar8 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar8);
      *puVar8 = 0;
    }
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (this_00->field_0970 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0970);
  }
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    uVar20 = this_00->field_09C0[0];
    if (uVar20 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    local_c = (uint *)((uint)local_c & 0xffffff00);
    memset(local_6c, 0, 0x50); /* compiler bulk-zero initialization */
    local_8 = &this_00->field_0x780;
    local_14 = &this_00->field_0BA2;
    iVar5 = -0xba3 - (int)this_00;
    local_18 = iVar5;
    do {
      if (*local_14 == 0) goto LAB_0050254c;
      iVar11 = 2;
      iVar7 = 5;
      switch(static_cast<uint32_t>(STRawWord(local_14 + iVar5))) {
      case 0:
        iVar11 = 0x3f;
        break;
      case 0x1:
        iVar11 = 0x7c;
        break;
      case 0x2:
        goto switchD_0050248c_caseD_2;
      case 0x3:
        iVar11 = 0x7c;
        goto switchD_0050248c_caseD_2;
      case 0x4:
        iVar11 = 0x3f;
switchD_0050248c_caseD_2:
        iVar7 = 0x29;
      }
      /* ST_CALLSITE[005024BA]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
      sub_004F17D0(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)local_14[6];
      }
      pcVar22 = nullptr;
      uVar17 = 0;
      uVar16 = 1;
      iVar5 = 0;
      puVar19 = local_8;
      pcVar4_mg0 = thunk_FUN_00529590(*local_14,this_00->field_0B99);
      pCVar4 = thunk_FUN_00571240(pcVar4_mg0,iVar5);
      /* ST_CALLSITE[00502527]: CALL 0x004041ba; direct=004041BA CPanelTy::SetButStruct */
      SetButStruct(this_00,(RecoveredRecordView_004F2E40_41FE7B1E *)
                           ((int)local_bb0 + local_24 * 0x17c),3,local_10,iVar11,iVar7,1,pCVar4,
                   uVar16,uVar17,puVar19,pcVar22);
      iVar5 = local_24 * 0x17c;
      local_24 = local_24 + 1;
      *(undefined4 *)((int)local_bb0 + iVar5 + 0x110) = 1;
      iVar5 = local_18;
LAB_0050254c:
      bVar6 = (char)local_c + 1;
      local_8 = local_8 + 0x27;
      local_14 = local_14 + 1;
      local_c = (uint *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar6));
    } while (bVar6 < 6);
    local_5c = this_00->field_0008;
    local_20 = local_bb0;
    local_6c[0] = 1;
    local_6c[1] = 0xffffffff;
    local_58 = 2;
    local_54 = 0xb1ff;
    local_38 = 2;
    local_34 = 0xb200;
    local_3c = local_5c;
    /* ST_CALLSITE[005025B9]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,nullptr,local_6c,0);
    /* ST_CALLSITE[005025C0]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    sub_004F1610(this_00,'\x01');
    uVar20 = this_00->field_09C0[0];
    if (uVar20 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  FUN_006e6080(this_00,2,uVar20,(undefined4 *)&this_00->field_0x18);
LAB_00502622:
  if (((((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
       ((CVar2 = this_00->field_0B99, CVar2 != CASE_9 && ((CVar2 != CASE_15 && (CVar2 != CASE_BD))))
       )) && (CVar2 != CASE_A7)) && ((CVar2 != CASE_A6 && (CVar2 != CASE_AF)))) {
    uVar23 = 0;
    uVar21 = 0;
    iVar5 = 0;
    pcVar22 = nullptr;
    pRVar15 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b04;
    uVar16 = 0;
    sVar14 = 2;
    uVar13 = 0xb118;
    uVar12 = 0xb117;
    pCVar4 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    /* ST_CALLSITE[005026A1]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    iVar5 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar4,uVar12,
                      uVar13,sVar14,uVar16,pRVar15,pcVar22,iVar5,uVar21,uVar23);
    this_00->field_0970 = iVar5;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar23 = 0;
    uVar21 = 0;
    iVar5 = 0;
    pcVar22 = nullptr;
    pRVar15 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b05;
    uVar16 = 0;
    sVar14 = 2;
    uVar13 = 0xb11a;
    uVar12 = 0xb119;
    pCVar4 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    /* ST_CALLSITE[005026FA]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    iVar5 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar4,uVar12,
                      uVar13,sVar14,uVar16,pRVar15,pcVar22,iVar5,uVar21,uVar23);
    this_00->field_0970 = iVar5;
  }
  if ((((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)) ||
     (((this_00->field_0B9E == CASE_2 && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)))) {
    local_c = this_00->field_0960;
    bVar6 = 0;
    iVar5 = 0xb230;
    local_8 = (undefined1 *)0xf;
    do {
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)*(byte *)((int)this_00 + iVar5 + -0xa661);
      }
      uVar13 = 0;
      uVar12 = 0;
      iVar18 = 0;
      pRVar15 = (RecoveredRecord_004F3130_3F0D2FD9 *)(0x4e36 - (uint)(bVar6 != 0));
      pcVar22 = nullptr;
      uVar16 = 0;
      sVar14 = 2;
      iVar7 = iVar5 + -0x10;
      iVar11 = iVar5;
      pCVar4 = thunk_FUN_00571240("BUT_BEHREPAIR0",0);
      /* ST_CALLSITE[005027B9]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar5_mg1 = CreateBut(this_00,3,0,local_10,(int)local_8,0x80,1,pCVar4,iVar7,iVar11,sVar14,
                            uVar16,pRVar15,pcVar22,iVar18,uVar12,uVar13);
      bVar6 = bVar6 + 1;
      *local_c = uVar5_mg1;
      local_c = local_c + 1;
      iVar5 = iVar5 + 1;
      local_8 = (undefined1 *)((int)local_8 + 0x35);
    } while (bVar6 < 3);
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

