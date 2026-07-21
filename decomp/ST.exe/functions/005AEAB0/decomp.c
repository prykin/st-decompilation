#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CreateCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall ChooseMapTy::CreateCtrls(ChooseMapTy *this,char param_1)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  ChooseMapTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  ccFntTy **ppcVar10;
  undefined4 *puVar11;
  ccFntTy *local_fe4 [6];
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  int local_f98;
  undefined4 local_f94;
  undefined4 local_f90;
  int local_f58;
  undefined4 local_f54;
  undefined4 local_f50;
  undefined4 local_780;
  int local_758 [112];
  undefined4 local_598 [10];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_c8;
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_1e;
  undefined2 local_1c;
  ChooseMapTy *local_c;
  uint local_8;

  puVar11 = local_598;
  local_c = this;
  for (iVar4 = 0x135; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  ppcVar10 = local_fe4;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar10 = (ccFntTy *)0x0;
    ppcVar10 = ppcVar10 + 1;
  }
  puVar11 = local_80;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  piVar9 = local_758;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar4 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x39f,0,iVar4,&DAT_007a4ccc
                               ,s_ChooseMapTy__CreateCtrls_007cc858);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x39f);
    return;
  }
  uVar7 = 0;
  switch(local_c->field_1A5F) {
  case CASE_1:
  case CASE_2:
    local_34 = (uint)(byte)PTR_0081176c->field_02EB;
    uVar7 = 2;
    local_c->field_1A5F = (local_34 != 1) + CASE_1;
    goto LAB_005aebde;
  case CASE_4:
  case CASE_5:
    uVar7 = 2;
    local_34 = (uint)(byte)PTR_0081176c->field_02EB;
    local_c->field_1A5F = (local_34 != 1) + CASE_4;
    break;
  case CASE_9:
  case CASE_A:
  case CASE_B:
    uVar7 = 3;
    local_34 = (uint)(byte)PTR_0081176c->field_02EA;
    cVar8 = PTR_0081176c->field_02EA;
    if (cVar8 == '\x01') {
      local_c->field_1A5F = CASE_9;
    }
    else if (cVar8 == '\x02') {
      local_c->field_1A5F = CASE_A;
    }
    else if (cVar8 == '\x03') {
      local_c->field_1A5F = CASE_B;
    }
  }
LAB_005aebde:
  if (uVar7 == 0) {
LAB_005aecc2:
    if (param_1 != '\0') goto LAB_005aef44;
  }
  else if (param_1 != '\0') {
    cVar8 = '\0';
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        local_758[uVar5 * 0x1c] = uVar5 + 1;
        cVar8 = cVar8 + '\x01';
        local_758[uVar5 * 0x1c + 1] = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,cVar8);
        local_758[uVar5 * 0x1c + 3] = uVar5 * 0x7c + 0x112;
        uVar6 = local_8 & 0xff;
        local_758[uVar5 * 0x1c + 5] = 0x7a;
        local_758[uVar5 * 0x1c + 4] = 0x1d4;
        local_758[uVar5 * 0x1c + 6] = 0x18;
        uVar5 = uVar6;
      } while (uVar6 < uVar7);
    }
    local_70 = this_00->field_0008;
    local_38 = local_758;
    local_80[0] = 1;
    local_6c = 2;
    local_68 = 0x6326;
    local_4c = 2;
    local_48 = 0x6327;
    local_50 = local_70;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_1C83,(int *)0x0,local_80,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1C87);
    goto LAB_005aecc2;
  }
  local_570 = this_00->field_0008;
  local_598[0] = 0;
  local_598[2] = 0x114;
  local_598[3] = 0x3f;
  local_598[4] = 0x1e4;
  local_598[5] = 399;
  local_598[6] = 0;
  local_598[7] = 0;
  local_56c = 2;
  local_568 = 0x8160;
  local_54c = 2;
  local_548 = 0x8161;
  local_52c = 2;
  local_528 = 0x8162;
  local_50c = 2;
  local_508 = 0x8163;
  if (DAT_0080734c != '\0') {
    local_c8 = 1;
  }
  local_460 = this_00->field_1A8C;
  local_45c = this_00->field_1A90;
  local_468 = 0;
  local_2e8 = 0;
  local_2e0 = this_00->field_1B1D;
  local_458 = this_00->field_1A94;
  local_2dc = this_00->field_1B21;
  local_454 = this_00->field_1A98;
  local_2d8 = this_00->field_1B25;
  local_358 = 500;
  local_1d8 = 500;
  local_15c = this_00->field_1BAE;
  local_2d4 = this_00->field_1B29;
  local_154 = this_00->field_1BB6;
  local_354 = 0x32;
  local_1d4 = 0x32;
  local_158 = this_00->field_1BB2;
  local_46c = 2;
  local_464 = 2;
  local_404 = 2;
  local_400 = 0x8164;
  local_2ec = 2;
  local_2e4 = 2;
  local_284 = 2;
  local_280 = 0x8165;
  local_16c = 3;
  local_168 = 1;
  local_160 = 0;
  local_150 = 0x157;
  local_14c = 0xe;
  local_114 = 2;
  local_110 = 0x8166;
  local_550 = local_570;
  local_530 = local_570;
  local_510 = local_570;
  local_408 = local_570;
  local_288 = local_570;
  local_118 = local_570;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1A6C,(int *)0x0,local_598,0);
  if (this_00->field_1A74 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1AB8,this_00->field_1A74,0xfffffffe,this_00->field_1A8C,
               this_00->field_1A90);
  }
  if (this_00->field_1B05 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
               this_00->field_1B21);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
               this_00->field_1BB2);
  }
LAB_005aef44:
  if ((this_00->field_20B4 == '\0') || (param_1 != '\0')) {
    if (PTR_0081176c->field_0389 != 0) {
      this_00->field_002D = 0x20;
      *(undefined4 *)&this_00->field_0x31 = 0;
      FUN_006e6080(this_00,2,PTR_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    StartSystemTy::CreateBinDesc(PTR_0081176c);
  }
  if ((this_00->field_20B7 != '\0') && (param_1 == '\0')) {
    StartSystemTy::CreateChatView(PTR_0081176c);
    ppcVar10 = local_fe4;
    for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar10 = (ccFntTy *)0x0;
      ppcVar10 = ppcVar10 + 1;
    }
    local_fe4[0] = (ccFntTy *)0x1;
    local_fe4[1] = (ccFntTy *)0x9;
    local_fe4[2] = PTR_0081176c->field_0034;
    local_fe4[3] = (ccFntTy *)0xcb;
    local_fe4[4] = (ccFntTy *)0x23f;
    local_fe4[5] = (ccFntTy *)PTR_0081176c->field_0682->field_0004;
    local_fcc = PTR_0081176c->field_0682->field_0008;
    local_fc8 = 0x104;
    local_fc4 = PTR_0081176c->field_0686;
    pSVar1 = this_00->field_000C;
    local_780 = 0x100;
    local_f98 = pSVar1->field_0014;
    local_f90 = 0xc0a0;
    local_f94 = 0;
    local_f58 = pSVar1->field_0014;
    local_f54 = 0;
    local_f50 = 0xc0a2;
    (*pSVar1->vtable->CreateObject)
              ((SystemClassTy *)pSVar1,6,&PTR_0081176c->field_054C,(int *)0x0,local_fe4,0);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
  }
  pSVar1 = this_00->field_1A5B;
  if (pSVar1->field_02E6 != (MMsgTy *)0x0) {
    puVar11 = &local_28;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    local_1c = 1;
    local_1e = 1;
    local_24 = 1;
    MMsgTy::StatePanel(pSVar1->field_02E6,(int)&local_28);
  }
  if (param_1 != '\0') {
    SetAccelerator(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

