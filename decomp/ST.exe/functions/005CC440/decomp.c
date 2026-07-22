#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall SettMapMTy::CreateCtrls(SettMapMTy *this,char param_1)

{
  StartSystemTy *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SettMapMTy *this_01;
  ccFntTy **ppcVar6;
  ccFntTy *local_a80 [6];
  undefined4 local_a68;
  undefined4 local_a64;
  DArrayTy *local_a60;
  int local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  int local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_21c;
  undefined4 local_1f4 [84];
  InternalExceptionFrame local_a4;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_18;
  undefined4 local_14;
  SettMapMTy *local_8;

  ppcVar6 = local_a80;
  local_8 = this;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar6 = (ccFntTy *)0x0;
    ppcVar6 = ppcVar6 + 1;
  }
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(local_1f4, 0, 0x150); /* compiler bulk-zero initialization */
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_01 = local_8;
  if (iVar3 == 0) {
    if (param_1 == '\0') {
      iVar3 = 1;
      iVar4 = 200;
      puVar2 = local_1f4 + 1;
      iVar5 = 2;
      do {
        puVar2[-1] = iVar3;
        *puVar2 = 0;
        puVar2[4] = 0x7d;
        puVar2[5] = 0x16;
        puVar2[2] = iVar4;
        puVar2[3] = 0x1db;
        this_01 = local_8;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x7d;
        puVar2 = puVar2 + 0x1c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = local_8->field_0008;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      (*local_8->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_8->field_000C,5,&local_8->field_21FC,(int *)0x0,local_60,0);
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_01->field_2200);
    }
    else {
      if (local_8->field_21E6 != '\0') {
        StartSystemTy::CreateChatView(g_startSystem_0081176C);
        ppcVar6 = local_a80;
        for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar6 = (ccFntTy *)0x0;
          ppcVar6 = ppcVar6 + 1;
        }
        local_a80[0] = (ccFntTy *)0x1;
        local_a80[1] = (ccFntTy *)0x9;
        local_a80[2] = g_startSystem_0081176C->field_0034;
        local_a80[3] = (ccFntTy *)0xcb;
        local_a80[4] = (ccFntTy *)0x23f;
        local_a80[5] = *(ccFntTy **)(g_startSystem_0081176C->field_0682 + 2);
        local_a68 = *(undefined4 *)(g_startSystem_0081176C->field_0682 + 4);
        local_a64 = 0x104;
        local_a60 = g_startSystem_0081176C->field_0686;
        this_00 = this_01->field_000C;
        local_21c = 0x100;
        local_a34 = this_00->field_0014;
        local_a2c = 0xc0a0;
        local_a30 = 0;
        local_9f4 = this_00->field_0014;
        local_9f0 = 0;
        local_9ec = 0xc0a2;
        (*this_00->vtable->CreateObject)
                  ((SystemClassTy *)this_00,6,&g_startSystem_0081176C->field_054C,(int *)0x0,
                   local_a80,0);
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0558);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C)
        ;
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D)
        ;
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0554);
    }
    SettMapTy::CreateCtrls((SettMapTy *)this_01,param_1);
    if (param_1 == '\0') {
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    }
    g_currentExceptionFrame = local_a4.previous;
    return;
  }
  g_currentExceptionFrame = local_a4.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x9d,0,iVar3,"%s",
                             "SettMapMTy::CreateCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\settmobj.cpp",0x9d);
  return;
}

