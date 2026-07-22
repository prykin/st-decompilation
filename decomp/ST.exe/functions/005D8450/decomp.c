#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::CreateCtrls */

void __thiscall SIDTy::CreateCtrls(SIDTy *this)

{
  undefined1 *lpPathName;
  char cVar1;
  code *pcVar2;
  SIDTy *this_00;
  int iVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ccFntTy **ppcVar13;
  ccFntTy *local_db0 [8];
  DArrayTy *local_d90;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d24;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_524 [10];
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_54;
  InternalExceptionFrame local_50;
  SIDTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x104,0,iVar3,"%s",
                               "SIDTy::CreateCtrls");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x104);
    return;
  }
  if (local_8->field_1CC4 != (HANDLE)0x0) {
    FindCloseChangeNotification(local_8->field_1CC4);
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = &this_00->field_1CD4;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar9 = PTR_s_SAVEGAME__0079c19c;
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar9 = &this_00->field_1CD4;
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  lpPathName = &this_00->field_1CD4;
  FUN_006b78c0(lpPathName,lpPathName);
  pvVar4 = FindFirstChangeNotificationA(lpPathName,0,2);
  this_00->field_1CC4 = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  memset(local_524, 0, 0x4d4); /* compiler bulk-zero initialization */
  iVar3 = 0;
  local_524[0] = 0;
  local_524[2] = 0xe4;
  local_524[3] = 0x1be;
  local_524[4] = 0x145;
  local_524[5] = 100;
  local_524[6] = 0;
  local_524[7] = 0;
  if (DAT_0080734c != '\0') {
    local_54 = 1;
  }
  local_3ec = this_00->field_1B1D;
  local_2ec = 1;
  local_3e8 = this_00->field_1B21;
  local_3e4 = this_00->field_1B25;
  local_3e0 = this_00->field_1B29;
  local_26c = this_00->field_1BAE;
  local_268 = this_00->field_1BB2;
  local_2e8 = 1;
  local_16c = 1;
  local_168 = 1;
  local_264 = this_00->field_1BB6;
  local_f4 = 1;
  local_e8 = this_00->field_1C3F;
  local_4fc = this_00->field_0008;
  local_260 = this_00->field_1BBA;
  local_e4 = this_00->field_1C43;
  local_e0 = this_00->field_1C47;
  local_3f4 = 0;
  local_274 = 0;
  local_ec = 0;
  local_4f8 = 2;
  local_4f4 = 0x8160;
  local_4d8 = 2;
  local_4d4 = 0x8161;
  local_4b8 = 2;
  local_4b4 = 0x8162;
  local_498 = 2;
  local_494 = 0x8163;
  local_3f8 = 2;
  local_3f0 = 2;
  local_2e4 = 500;
  local_2e0 = 0x32;
  local_390 = 2;
  local_38c = 0x8164;
  local_278 = 2;
  local_270 = 2;
  local_164 = 500;
  local_160 = 0x32;
  local_210 = 2;
  local_20c = 0x8165;
  local_f8 = 3;
  local_dc = 0x3a;
  local_d8 = 8;
  local_a0 = 2;
  local_9c = 0x8166;
  local_4dc = local_4fc;
  local_4bc = local_4fc;
  local_49c = local_4fc;
  local_394 = local_4fc;
  local_214 = local_4fc;
  local_a4 = local_4fc;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1AF1,(int *)0x0,local_524,0);
  ppcVar13 = local_db0;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar13 = (ccFntTy *)0x0;
    ppcVar13 = ppcVar13 + 1;
  }
  local_db0[0] = (ccFntTy *)0x0;
  local_db0[1] = (ccFntTy *)0x9;
  local_db0[2] = g_startSystem_0081176C->field_0034;
  local_d90 = this_00->field_1CD0;
  local_d64 = this_00->field_0008;
  local_db0[3] = (ccFntTy *)0xe4;
  local_db0[4] = (ccFntTy *)0x1aa;
  local_db0[5] = (ccFntTy *)0x156;
  local_db0[6] = (ccFntTy *)0x10;
  local_550 = 1;
  local_554 = 1;
  local_db0[7] = (ccFntTy *)0x104;
  local_d60 = 2;
  local_d5c = 0x697f;
  local_d20 = 2;
  local_d1c = 0x68ff;
  local_d24 = local_d64;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AF5,(int *)0x0,local_db0,1);
  uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  this_00->field_1AF9 = uVar5;
  uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  this_00->field_1AFD = uVar5;
  PrepFiles(this_00);
  Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_00->field_1CB4);
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
  if (this_00->field_1C27 != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_1C6B,this_00->field_1C27,0xfffffffe,this_00->field_1C3F,
               this_00->field_1C43);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

