#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall SettMapMTy::CreateCtrls(SettMapMTy *this,char param_1)

{
  StartSystemTy *this_00;
  int iVar3;
  uint *puVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SettMapMTy *this_01;
  ccFntTy **ppcVar8;
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

  ppcVar8 = local_a80;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar8 = nullptr;
    ppcVar8 = ppcVar8 + 1;
  }
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(local_1f4, 0, 0x150); /* compiler bulk-zero initialization */
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_01 = local_8;
  if (iVar3 == 0) {
    if (param_1 == '\0') {
      iVar5 = 1;
      iVar6 = 200;
      puVar2 = local_1f4 + 1;
      iVar7 = 2;
      do {
        puVar2[-1] = iVar5;
        *puVar2 = 0;
        puVar2[4] = 0x7d;
        puVar2[5] = 0x16;
        puVar2[2] = iVar6;
        puVar2[3] = 0x1db;
        this_01 = local_8;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x7d;
        puVar2 = puVar2 + 0x1c;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = local_8->field_0008;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      /* ST_CALLSITE[005CC542]: CALL dword ptr [EDX + 0x8] */
      (*local_8->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_8->field_000C,5,&local_8->field_21FC,nullptr,local_60,0);
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_01->field_2200);
    }
    else {
      if (local_8->field_21E6 != '\0') {
        /* ST_CALLSITE[005CC577]: CALL 0x004028b5; direct=004028B5 StartSystemTy::CreateChatView */
        StartSystemTy::CreateChatView(g_startSystem_0081176C);
        ppcVar8 = local_a80;
        for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppcVar8 = nullptr;
          ppcVar8 = ppcVar8 + 1;
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
        /* ST_CALLSITE[005CC64A]: CALL dword ptr [EDI + 0x8] */
        (*this_00->vtable->CreateObject)
                  ((SystemClassTy *)this_00,6,&g_startSystem_0081176C->field_054C,nullptr,
                   local_a80,0);
      }
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    /* ST_CALLSITE[005CC6DA]: CALL 0x004055b5; direct=004055B5 SettMapTy::CreateCtrls */
    SettMapTy::CreateCtrls((SettMapTy *)this_01,param_1);
    if (param_1 == '\0') {
      /* ST_CALLSITE[005CC700]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
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

