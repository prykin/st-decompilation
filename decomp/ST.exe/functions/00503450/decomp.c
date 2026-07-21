#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoatSI */

void __thiscall CPanelTy::SetControlBoatSI(CPanelTy *this)

{
  CPanelTy_field_0B9EState CVar1;
  CPanelTy_field_0B99State CVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  char *pcVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  short sVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 local_c28 [140];
  AnonShape_004F2E40_DC76A8C6 local_9f8;
  undefined4 auStack_8e8 [5];
  undefined4 auStack_8d4 [497];
  undefined4 local_110 [22];
  InternalExceptionFrame local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  AnonShape_004F2E40_DC76A8C6 *local_28;
  CPanelTy *local_24;
  int local_20;
  LPSTR local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  int local_8;

  puVar12 = local_110;
  local_24 = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_c28;
  for (iVar8 = 0x8c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar8 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x29d,0,iVar8,&DAT_007a4ccc
                               ,s_CPanelTy__SetControlBoatSI_007c2640);
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x29d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_0054a8d0(PTR_00802a30);
  this_00 = local_24;
  if (local_24->field_02FE != 0) {
    StartSystemTy::sub_006E56B0(local_24->field_000C,local_24->field_02FE);
  }
  this_00->field_02FE = 0;
  puVar11 = &this_00->field_0960;
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
  iVar8 = local_10;
  CVar1 = this_00->field_0B9E;
  this_00->field_0970 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_4)) || (CVar1 == CASE_3)) {
    iVar8 = this_00->field_09C0;
    if (iVar8 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    puVar12 = local_74;
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_c = local_c & 0xffffff00;
    do {
      uVar13 = local_c & 0xff;
      if ((&this_00->field_0BA2)[uVar13] == '\0') goto LAB_005036ae;
      switch(uVar13) {
      case 0:
        iVar8 = 0x10;
        local_8 = 0x4c;
        local_10 = 0x10;
        break;
      case 1:
        iVar8 = 0x4d;
        local_8 = 0x4c;
        local_10 = 0x4d;
        break;
      case 2:
        iVar8 = 0x82;
        local_8 = 0x4c;
        local_10 = 0x82;
        break;
      case 3:
        iVar8 = 0x10;
        goto LAB_005035b5;
      case 4:
        iVar8 = 0x82;
        goto LAB_005035b5;
      case 5:
        iVar8 = 0x4d;
LAB_005035b5:
        local_8 = 0x66;
        local_10 = iVar8;
      }
      thunk_FUN_004f17d0(this_00,1,(byte)local_c);
      if (this_00->field_0BA0 == '\0') {
        local_14 = (undefined4 *)0x0;
      }
      else {
        local_14 = (undefined4 *)(uint)(byte)(&this_00->field_0BA8)[uVar13];
      }
      pcVar21 = (char *)0x0;
      puVar18 = &this_00->field_0x780 + uVar13 * 0x27;
      uVar17 = 0;
      uVar16 = 1;
      iVar9 = 0;
      pcVar5 = thunk_FUN_00529590((&this_00->field_0BA2)[uVar13],this_00->field_0B99);
      pCVar6 = thunk_FUN_00571240(pcVar5,iVar9);
      SetButStruct(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)&local_9f8 + local_2c * 0x17c),3,
                   local_14,iVar8,local_8,6,pCVar6,uVar16,uVar17,puVar18,pcVar21);
      iVar9 = local_2c;
      auStack_8e8[local_2c * 0x5f] = 1;
      if ((byte)local_c == 0) {
LAB_00503678:
        iVar10 = 0;
LAB_0050367a:
        uVar7 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE,iVar10);
        auStack_8d4[iVar9 * 0x5f] = uVar7;
        auStack_8d4[iVar9 * 0x5f + 1] = 0x3c;
        iVar9 = local_2c;
      }
      else if ((1 < (byte)local_c) && ((byte)local_c < 5)) {
        if ((byte)local_c == 0) goto LAB_00503678;
        iVar10 = uVar13 - 1;
        goto LAB_0050367a;
      }
      local_2c = iVar9 + 1;
LAB_005036ae:
      bVar4 = (byte)local_c + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31(local_c._1_3_,bVar4);
    } while (bVar4 < 6);
    local_28 = &local_9f8;
    local_64 = this_00->field_0008;
    local_74[0] = 1;
    local_74[1] = 0xffffffff;
    local_60 = 2;
    local_5c = 0xb20d;
    local_40 = 2;
    local_3c = 0xb20e;
    local_44 = local_64;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_02FE,(int *)0x0,local_74,0);
    thunk_FUN_004f1610(this_00,'\x01');
    iVar8 = this_00->field_09C0;
    if (iVar8 == 0) goto LAB_00503776;
    this_00->field_0028 = 0x20;
    if (this_00->field_0BA0 == '\0') {
      *(undefined4 *)&this_00->field_0x2c = 0;
    }
    else {
      *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    }
  }
  FUN_006e6080(this_00,2,iVar8,(undefined4 *)&this_00->field_0x18);
LAB_00503776:
  if (((this_00->field_0B9E == CASE_1) || (this_00->field_0B9E == CASE_3)) &&
     ((CVar2 = this_00->field_0B99, CVar2 != 9 &&
      ((((CVar2 != 0x15 && (CVar2 != 0xbd)) && (CVar2 != 0xa7)) &&
       ((CVar2 != 0xa6 && (CVar2 != 0xaf)))))))) {
    uVar22 = 0;
    uVar19 = 0;
    iVar9 = 0;
    pcVar5 = s_BUT_SHOWUPDMSK_007c2670;
    iVar8 = 0x3b04;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb118;
    uVar7 = 0xb117;
    pCVar6 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    uVar7 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar6,uVar7,
                      uVar14,sVar15,uVar16,iVar8,pcVar5,iVar9,uVar19,uVar22);
    this_00->field_0970 = uVar7;
  }
  if (this_00->field_0B9E == CASE_2) {
    uVar22 = 0;
    uVar19 = 0;
    iVar9 = 0;
    pcVar5 = s_BUT_SHOWUPDMSK_007c2670;
    iVar8 = 0x3b05;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb11a;
    uVar7 = 0xb119;
    pCVar6 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    uVar7 = CreateBut(this_00,3,0,(uint)(this_00->field_0BA0 != '\0'),0x40,0x2f,6,pCVar6,uVar7,
                      uVar14,sVar15,uVar16,iVar8,pcVar5,iVar9,uVar19,uVar22);
    this_00->field_0970 = uVar7;
  }
  if (((this_00->field_0B9E == CASE_1) && (this_00->field_0B99 != 0xbd)) ||
     (this_00->field_0B9E == CASE_2)) {
    local_14 = &this_00->field_0960;
    local_c = local_c & 0xffffff00;
    local_8 = 0;
    iVar8 = local_20;
    iVar9 = local_18;
    do {
      switch(local_8) {
      case 0:
        iVar9 = 0x6a;
        iVar8 = 0xf;
        local_18 = 0x6a;
        local_20 = 0xf;
        pcVar5 = s_BUT_BEHREPAIR0_007c2350;
        break;
      case 1:
        iVar9 = 0x7a;
        iVar8 = 0x14;
        local_18 = 0x7a;
        local_20 = 0x14;
        pcVar5 = s_BUT_BEHREPAIR20_007c233c;
        break;
      case 2:
        iVar9 = 0x98;
        iVar8 = 0x14;
        local_18 = 0x98;
        local_20 = 0x14;
        pcVar5 = s_BUT_BEHREPAIR50_007c2328;
        break;
      case 3:
        iVar9 = 0x98;
        iVar8 = 0xf;
        local_18 = 0x98;
        local_20 = 0xf;
        pcVar5 = s_BUT_BEHREPAIR80_007c2314;
        break;
      default:
        goto switchD_0050389f_default;
      }
      local_1c = thunk_FUN_00571240(pcVar5,0);
switchD_0050389f_default:
      iVar20 = 1;
      iVar10 = local_8;
      pCVar6 = thunk_FUN_00571240(s_BUT_BEHRMSK_007c2660,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar20,iVar10);
      if (this_00->field_0BA0 == '\0') {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)(byte)(&this_00->field_0BCF)[local_8];
      }
      uVar7 = CreateBut(this_00,3,0,uVar13,iVar9,iVar8,6,local_1c,local_8 + 0xb220,local_8 + 0xb230,
                        2,0,0x4e36 - (uint)((byte)local_c != '\0'),pCVar6,0,0,0);
      *local_14 = uVar7;
      bVar4 = (byte)local_c + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31(local_c._1_3_,bVar4);
    } while (bVar4 < 4);
  }
  g_currentExceptionFrame = local_b8.previous;
  return;
}

