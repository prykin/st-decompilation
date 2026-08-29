#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoatSI */

void __thiscall CPanelTy::SetControlBoatSI(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar8;
  char *pcVar5;
  LPSTR pCVar5;
  BITMAPINFO *pBVar6;
  int iVar9;
  int iVar7;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  RecoveredRecord_004F3130_3F0D2FD9 *pRVar18;
  ushort uVar19;
  ushort uVar20;
  byte *puVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  uint uVar25;
  uint local_c28 [140];
  RecoveredRecordView_004F2E40_41FE7B1E local_9f8 [7];
  uint local_110 [22];
  InternalExceptionFrame local_b8;
  uint local_74 [4];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_2c;
  RecoveredRecordView_004F2E40_41FE7B1E *local_28;
  CPanelTy *local_24;
  int local_20;
  LPSTR local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint local_c;
  int local_8;

  puVar13 = local_110;
  local_24 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  memset(local_c28, 0, 0x230); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;

  iVar8 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b8.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x29d,0,iVar8,"%s"
                               ,"CPanelTy::SetControlBoatSI");
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x29d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005034B3]: CALL 0x004040fc; direct=004040FC CursorClassTy::sub_0054A8D0 */
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  this_00 = local_24;
  if (local_24->field_02FE != 0) {
    StartSystemTy::sub_006E56B0(local_24->field_000C,local_24->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar12 = this_00->field_0960;
  iVar7 = 4;
  do {
    if (*puVar12 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar12);
      *puVar12 = 0;
    }
    puVar12 = puVar12 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (this_00->field_0970 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0970);
  }
  iVar7 = local_10;
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    uVar14 = this_00->field_09C0[0];
    if (uVar14 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    memset(local_74, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = local_c & 0xffffff00;
    do {
      uVar14 = local_c & 0xff;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)this_00->field_0B1F + uVar14 + 0x83) == '\0') goto LAB_005036ae;
      switch(uVar14) {
      case 0:
        iVar7 = 0x10;
        local_8 = 0x4c;
        local_10 = 0x10;
        break;
      case 1:
        iVar7 = 0x4d;
        local_8 = 0x4c;
        local_10 = 0x4d;
        break;
      case 2:
        iVar7 = 0x82;
        local_8 = 0x4c;
        local_10 = 0x82;
        break;
      case 3:
        iVar7 = 0x10;
        goto LAB_005035b5;
      case 4:
        iVar7 = 0x82;
        goto LAB_005035b5;
      case 5:
        iVar7 = 0x4d;
LAB_005035b5:
        local_8 = 0x66;
        local_10 = iVar7;
      }
      /* ST_CALLSITE[005035C4]: CALL 0x0040313e; direct=0040313E CPanelTy::sub_004F17D0 */
      sub_004F17D0(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_14 = nullptr;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_14 = (uint *)(uint)*(byte *)((int)this_00->field_0B1F + uVar14 + 0x89);
      }
      pcVar24 = nullptr;
      puVar21 = &this_00->field_0x780 + uVar14 * 0x27;
      uVar20 = 0;
      uVar19 = 1;
      iVar10 = 0;
      pcVar5 = thunk_FUN_00529590(*(Global_sub_00529590_param_1Enum *)
                                   ((int)this_00->field_0B1F + uVar14 + 0x83),this_00->field_0B99);
      pCVar5 = thunk_FUN_00571240(pcVar5,iVar10);
      /* ST_CALLSITE[00503643]: CALL 0x004041ba; direct=004041BA CPanelTy::SetButStruct */
      SetButStruct(this_00,(RecoveredRecordView_004F2E40_41FE7B1E *)
                           ((int)local_9f8 + local_2c * 0x17c),3,local_14,iVar7,local_8,6,pCVar5,
                   uVar19,uVar20,puVar21,pcVar24);
      iVar10 = local_2c;
      *(undefined4 *)((int)local_9f8 + local_2c * 0x17c + 0x110) = 1;
      if ((byte)local_c == 0) {
LAB_00503678:
        iVar11 = 0;
LAB_0050367a:
        pBVar6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_02DE,iVar11);
        *(BITMAPINFO **)((int)local_9f8 + iVar10 * 0x17c + 0x124) = pBVar6;
        *(undefined4 *)((int)local_9f8 + iVar10 * 0x17c + 0x128) = 0x3c;
        iVar10 = local_2c;
      }
      else if ((1 < (byte)local_c) && ((byte)local_c < 5)) {
        if ((byte)local_c == 0) goto LAB_00503678;
        iVar11 = uVar14 - 1;
        goto LAB_0050367a;
      }
      local_2c = iVar10 + 1;
LAB_005036ae:
      bVar4 = (byte)local_c + 1;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
    } while (bVar4 < 6);
    local_28 = local_9f8;
    local_64 = this_00->field_0008;
    local_74[0] = 1;
    local_74[1] = 0xffffffff;
    local_60 = 2;
    local_5c = 0xb20d;
    local_40 = 2;
    local_3c = 0xb20e;
    local_44 = local_64;
    /* ST_CALLSITE[0050370D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,nullptr,local_74,0);
    /* ST_CALLSITE[00503714]: CALL 0x00404ba1; direct=00404BA1 CPanelTy::sub_004F1610 */
    sub_004F1610(this_00,'\x01');
    uVar14 = this_00->field_09C0[0];
    if (uVar14 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  FUN_006e6080(this_00,2,uVar14,(undefined4 *)&this_00->field_0x18);
LAB_00503776:
  if (((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
     ((CVar2 = this_00->field_0B99, CVar2 != CASE_9 &&
      ((((CVar2 != CASE_15 && (CVar2 != CASE_BD)) && (CVar2 != CASE_A7)) &&
       ((CVar2 != CASE_A6 && (CVar2 != CASE_AF)))))))) {
    uVar25 = 0;
    uVar22 = 0;
    iVar7 = 0;
    pcVar24 = "BUT_SHOWUPDMSK";
    pRVar18 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b04;
    uVar19 = 0;
    sVar17 = 2;
    uVar16 = 0xb118;
    uVar15 = 0xb117;
    pCVar5 = thunk_FUN_00571240("BUT_SHOWUPD",0);
    /* ST_CALLSITE[005037F8]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    iVar7 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar5,uVar15,
                      uVar16,sVar17,uVar19,pRVar18,pcVar24,iVar7,uVar22,uVar25);
    this_00->field_0970 = iVar7;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar25 = 0;
    uVar22 = 0;
    iVar7 = 0;
    pcVar24 = "BUT_SHOWUPDMSK";
    pRVar18 = (RecoveredRecord_004F3130_3F0D2FD9 *)0x3b05;
    uVar19 = 0;
    sVar17 = 2;
    uVar16 = 0xb11a;
    uVar15 = 0xb119;
    pCVar5 = thunk_FUN_00571240("BUT_SHOWFRM",0);
    /* ST_CALLSITE[00503854]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
    iVar7 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar5,uVar15,
                      uVar16,sVar17,uVar19,pRVar18,pcVar24,iVar7,uVar22,uVar25);
    this_00->field_0970 = iVar7;
  }
  if (((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != CASE_BD)) ||
     (this_00->field_0B9E == CASE_2)) {
    local_14 = this_00->field_0960;
    local_c = local_c & 0xffffff00;
    local_8 = 0;
    iVar7 = local_20;
    iVar10 = local_18;
    do {
      switch(local_8) {
      case 0:
        iVar10 = 0x6a;
        iVar7 = 0xf;
        local_18 = 0x6a;
        local_20 = 0xf;
        pcVar24 = "BUT_BEHREPAIR0";
        break;
      case 1:
        iVar10 = 0x7a;
        iVar7 = 0x14;
        local_18 = 0x7a;
        local_20 = 0x14;
        pcVar24 = "BUT_BEHREPAIR20";
        break;
      case 2:
        iVar10 = 0x98;
        iVar7 = 0x14;
        local_18 = 0x98;
        local_20 = 0x14;
        pcVar24 = "BUT_BEHREPAIR50";
        break;
      case 3:
        iVar10 = 0x98;
        iVar7 = 0xf;
        local_18 = 0x98;
        local_20 = 0xf;
        pcVar24 = "BUT_BEHREPAIR80";
        break;
      default:
        goto switchD_0050389f_default;
      }
      local_1c = thunk_FUN_00571240(pcVar24,0);
switchD_0050389f_default:
      iVar23 = 1;
      iVar11 = local_8;
      /* ST_CALLSITE[00503920]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
      pCVar5 = thunk_FUN_00571240("BUT_BEHRMSK",0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar23,iVar11);
      if (this_00->field_0BA0 == '\0') {
        uVar14 = 0;
      }
      else {
        uVar14 = (uint)(byte)(&this_00->field_0BCF)[local_8];
      }
      /* ST_CALLSITE[00503980]: CALL 0x004017e9; direct=004017E9 CPanelTy::CreateBut */
      uVar14 = CreateBut(this_00,3,0,uVar14,iVar10,iVar7,6,local_1c,local_8 + 0xb220,
                         local_8 + 0xb230,2,0,
                         (RecoveredRecord_004F3130_3F0D2FD9 *)
                         (0x4e36 - (uint)((byte)local_c != '\0')),pCVar5,0,0,0);
      *local_14 = uVar14;
      bVar4 = (byte)local_c + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
    } while (bVar4 < 4);
  }
  g_currentExceptionFrame = local_b8.previous;
  return;
}

