#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoat */

void __thiscall CPanelTy::SetControlBoat(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  code *pcVar3;
  CPanelTy *this_00;
  char *pcVar4;
  LPSTR pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined4 uVar23;
  AnonShape_004F2E40_DC76A8C6 local_bb0;
  undefined4 auStack_aa0 [502];
  undefined4 local_2c8 [112];
  undefined4 local_108 [22];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  AnonShape_004F2E40_DC76A8C6 *local_20;
  CPanelTy *local_1c;
  int local_18;
  Global_sub_00529590_param_1Enum *local_14;
  uint local_10;
  uint *local_c;
  undefined1 *local_8;

  puVar12 = local_108;
  local_1c = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
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
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  this_00 = local_1c;
  if (local_1c->field_02FE != 0) {
    StartSystemTy::sub_006E56B0(local_1c->field_000C,local_1c->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar11 = this_00->field_0960;
  iVar8 = 4;
  do {
    if (*puVar11 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar11);
      *puVar11 = 0;
    }
    puVar11 = puVar11 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (this_00->field_0970 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0970);
  }
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    uVar7 = this_00->field_09C0[0];
    if (uVar7 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    local_c = (uint *)((uint)local_c & 0xffffff00);
    memset(local_6c, 0, 0x50); /* compiler bulk-zero initialization */
    local_8 = &this_00->field_0x780;
    local_14 = &this_00->field_0BA2;
    iVar8 = -0xba3 - (int)this_00;
    local_18 = iVar8;
    do {
      if (*local_14 == 0) goto LAB_0050254c;
      iVar13 = 2;
      iVar10 = 5;
      switch(local_14 + iVar8) {
      case nullptr:
        iVar13 = 0x3f;
        break;
      case (Global_sub_00529590_param_1Enum *)0x1:
        iVar13 = 0x7c;
        break;
      case (Global_sub_00529590_param_1Enum *)0x2:
        goto switchD_0050248c_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x3:
        iVar13 = 0x7c;
        goto switchD_0050248c_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x4:
        iVar13 = 0x3f;
switchD_0050248c_caseD_2:
        iVar10 = 0x29;
      }
      sub_004F17D0(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)local_14[6];
      }
      pcVar22 = nullptr;
      uVar18 = 0;
      uVar17 = 1;
      iVar8 = 0;
      puVar20 = local_8;
      pcVar4 = thunk_FUN_00529590(*local_14,this_00->field_0B99);
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar8);
      SetButStruct(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)&local_bb0 + local_24 * 0x17c),3,
                   local_10,iVar13,iVar10,1,pCVar5,uVar17,uVar18,puVar20,pcVar22);
      iVar8 = local_24 * 0x5f;
      local_24 = local_24 + 1;
      auStack_aa0[iVar8] = 1;
      iVar8 = local_18;
LAB_0050254c:
      bVar9 = (char)local_c + 1;
      local_8 = local_8 + 0x27;
      local_14 = local_14 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (uint *)CONCAT31(local_c._1_3_,bVar9);
    } while (bVar9 < 6);
    local_5c = this_00->field_0008;
    local_20 = &local_bb0;
    local_6c[0] = 1;
    local_6c[1] = 0xffffffff;
    local_58 = 2;
    local_54 = 0xb1ff;
    local_38 = 2;
    local_34 = 0xb200;
    local_3c = local_5c;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,nullptr,local_6c,0);
    sub_004F1610(this_00,'\x01');
    uVar7 = this_00->field_09C0[0];
    if (uVar7 == 0) goto LAB_00502622;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  FUN_006e6080(this_00,2,uVar7,(undefined4 *)&this_00->field_0x18);
LAB_00502622:
  if (((((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
       ((CVar2 = this_00->field_0B99, CVar2 != CASE_9 && ((CVar2 != CASE_15 && (CVar2 != CASE_BD))))
       )) && (CVar2 != CASE_A7)) && ((CVar2 != CASE_A6 && (CVar2 != CASE_AF)))) {
    uVar23 = 0;
    uVar21 = 0;
    iVar10 = 0;
    pcVar4 = nullptr;
    iVar8 = 0x3b04;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb118;
    uVar14 = 0xb117;
    pCVar5 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    uVar14 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar5,uVar14,
                       uVar15,sVar16,uVar17,iVar8,pcVar4,iVar10,uVar21,uVar23);
    this_00->field_0970 = uVar14;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar23 = 0;
    uVar21 = 0;
    iVar10 = 0;
    pcVar4 = nullptr;
    iVar8 = 0x3b05;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb11a;
    uVar14 = 0xb119;
    pCVar5 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    uVar14 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x4a,100,1,pCVar5,uVar14,
                       uVar15,sVar16,uVar17,iVar8,pcVar4,iVar10,uVar21,uVar23);
    this_00->field_0970 = uVar14;
  }
  if ((((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)) ||
     (((this_00->field_0B9E == CASE_2 && (this_00->field_0B99 != CASE_9)) &&
      (this_00->field_0B99 != CASE_15)))) {
    local_c = this_00->field_0960;
    bVar9 = 0;
    iVar8 = 0xb230;
    local_8 = (undefined1 *)0xf;
    do {
      if (this_00->field_0BA0 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = (uint)*(byte *)((int)this_00 + iVar8 + -0xa661);
      }
      uVar15 = 0;
      uVar14 = 0;
      iVar19 = 0;
      iVar6 = 0x4e36 - (uint)(bVar9 != 0);
      pcVar4 = nullptr;
      uVar17 = 0;
      sVar16 = 2;
      iVar10 = iVar8 + -0x10;
      iVar13 = iVar8;
      pCVar5 = thunk_FUN_00571240("BUT_BEHREPAIR0",0);
      uVar7 = CreateBut(this_00,3,0,local_10,(int)local_8,0x80,1,pCVar5,iVar10,iVar13,sVar16,uVar17,
                        iVar6,pcVar4,iVar19,uVar14,uVar15);
      bVar9 = bVar9 + 1;
      *local_c = uVar7;
      local_c = local_c + 1;
      iVar8 = iVar8 + 1;
      local_8 = (undefined1 *)((int)local_8 + 0x35);
    } while (bVar9 < 3);
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

