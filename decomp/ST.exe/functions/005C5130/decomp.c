#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::NoneSettMap
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   NoneSettMap(SettMapTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=005C51AB RET | 005C53DE RET | 005C58D5 RET | 005C58FC RET | 005C5942 RET */

int __thiscall SettMapTy::NoneSettMap(SettMapTy *this)

{
  char cVar1;
  SettMapTy_field_1E26State SVar2;
  byte bVar3;
  uint uVar4;
  SettMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar9;
  int iVar8;
  uint *puVar10;
  InternalExceptionFrame local_50;
  SettMapTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  /* ST_CALLSITE[005C5145]: CALL dword ptr [0x0085bedc] */
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x243,0,iVar7,"%s"
                               ,"SettMapTy::NoneSettMap");
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\sett_obj.cpp",0x243);
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  cVar1 = local_c->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_008067a0 != '\0') {
      /* ST_CALLSITE[005C58E4]: CALL dword ptr [0x0085c05c] */
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((local_c->field_21E1 != '\0') && (local_c->field_21E8 != nullptr)) &&
       /* ST_CALLSITE[005C53F3]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = HoloTy::NextFas(local_c->field_21E8), iVar9 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_21E5 != '\0') && (this_00->field_21F4 != nullptr)) &&
       /* ST_CALLSITE[005C5413]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = HoloTy::NextFas(this_00->field_21F4), iVar9 != 0)) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((SVar2 != CASE_6) && (SVar2 != CASE_7)) &&
       ((SVar2 != CASE_E &&
        (((this_00->field_21E2 != '\0' && (this_00->field_21EC != nullptr)) &&
         /* ST_CALLSITE[005C5445]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
         (iVar9 = HoloTy::NextFas(this_00->field_21EC), iVar9 != 0)))))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
       (((this_00->field_21E3 != '\0' && (this_00->field_21F0 != nullptr)) &&
        /* ST_CALLSITE[005C5477]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        (iVar9 = HoloTy::NextFas(this_00->field_21F0), iVar9 != 0)))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((((SVar2 != CASE_6) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) &&
        ((this_00->field_21E6 != '\0' && (this_00->field_21F8 != nullptr)))) &&
       /* ST_CALLSITE[005C54A9]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar9 = HoloTy::NextFas(this_00->field_21F8), iVar9 != 0)) {
      local_8 = 0;
    }
    if ((this_00->field_21E4 != '\0') &&
       (g_startSystem_0081176C->field_0300 < g_startSystem_0081176C->field_0304 + -1)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + 1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {

        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_21F0 != nullptr) {
        /* ST_CALLSITE[005C553C]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21F0);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F0);
        this_00->field_21F0 = nullptr;
      }
      SVar2 = this_00->field_1E26;
      if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
         (this_00->field_21E3 != '\0')) {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_1F80);
      }
      if (this_00->field_21E8 != nullptr) {
        /* ST_CALLSITE[005C559B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21E8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21E8);
        this_00->field_21E8 = nullptr;
      }
      if (this_00->field_21E1 != '\0') {
        if (this_00->field_1C6F != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1CB3,this_00->field_1C6F,0xfffffffe,this_00->field_1C87,
                     this_00->field_1C8B);
        }
        if (this_00->field_1D00 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1D44,this_00->field_1D00,0xfffffffe,this_00->field_1D18,
                     this_00->field_1D1C);
        }
        if (this_00->field_1D91 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1DD5,this_00->field_1D91,0xfffffffe,this_00->field_1DA9,
                     this_00->field_1DAD);
        }
        puVar10 = this_00->field_20CC;
        iVar9 = 10;
        do {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar10);
          puVar10 = puVar10 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (this_00->field_21F4 != nullptr) {
        /* ST_CALLSITE[005C5671]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21F4);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F4);
        this_00->field_21F4 = nullptr;
      }
      if (this_00->field_21E5 != '\0') {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_1E22);
      }
      if (this_00->field_21EC != nullptr) {
        /* ST_CALLSITE[005C56BC]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21EC);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21EC);
        this_00->field_21EC = nullptr;
      }
      SVar2 = this_00->field_1E26;
      if (((SVar2 != CASE_6) && (SVar2 != CASE_7)) && (SVar2 != CASE_E)) {
        if (g_startSystem_0081176C->field_0391 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                     0xfffffffe,g_startSystem_0081176C->field_03A9,
                     g_startSystem_0081176C->field_03AD);
        }
        if (g_startSystem_0081176C->field_0422 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                     0xfffffffe,g_startSystem_0081176C->field_043A,
                     g_startSystem_0081176C->field_043E);
        }
        if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                     0xfffffffe,g_startSystem_0081176C->field_04CB,
                     g_startSystem_0081176C->field_04CF);
        }

        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
      if (this_00->field_21E4 != '\0') {

        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      if (this_00->field_21F8 != nullptr) {
        /* ST_CALLSITE[005C57E4]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F8);
        this_00->field_21F8 = nullptr;
      }
      if (this_00->field_21E6 != '\0') {
        if (g_startSystem_0081176C->field_0560 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                     0xfffffffe,g_startSystem_0081176C->field_0578,
                     g_startSystem_0081176C->field_057C);
        }
        if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                     0xfffffffe,g_startSystem_0081176C->field_0609,
                     g_startSystem_0081176C->field_060D);
        }

        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);

        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
      this_00->field_0065 = 1;
      /* ST_CALLSITE[005C589F]: CALL dword ptr [EAX + 0x18] */
      this_00->CreateCtrls('\0');
      SVar2 = this_00->field_1E26;
      if (((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) {
        SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0053F510::thunk_FUN_005c8200
                  ((RecoveredReceiver_0053F510 *)this_00);
      }
      /* ST_CALLSITE[005C58BE]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
      PaintSettMap(this_00,'\0');
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  else {
    if (cVar1 != '\x04') {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if ((local_c->field_21E4 != '\0') && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + -1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {

        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((this_00->field_21E1 != '\0') && (this_00->field_21E8 != nullptr)) {
      /* ST_CALLSITE[005C5217]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = HoloTy::NextFas(this_00->field_21E8);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21E8->field_0x3;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_21E5 != '\0') && (this_00->field_21F4 != nullptr)) {
      /* ST_CALLSITE[005C5253]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = HoloTy::NextFas(this_00->field_21F4);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F4->field_0x3;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != CASE_6) && (SVar2 != CASE_7)) && (SVar2 != CASE_E)) &&
       ((this_00->field_21E2 != '\0' && (this_00->field_21EC != nullptr)))) {
      /* ST_CALLSITE[005C52A1]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = HoloTy::NextFas(this_00->field_21EC);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21EC->field_0x3;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == CASE_6) || (SVar2 == CASE_7)) || (SVar2 == CASE_E)) &&
       ((this_00->field_21E3 != '\0' && (this_00->field_21F0 != nullptr)))) {
      /* ST_CALLSITE[005C52EE]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = HoloTy::NextFas(this_00->field_21F0);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F0->field_0x3;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != CASE_6) && (SVar2 != CASE_1)) && (SVar2 != CASE_2)) &&
       ((this_00->field_21E6 != '\0' && (this_00->field_21F8 != nullptr)))) {
      /* ST_CALLSITE[005C533C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar9 = HoloTy::NextFas(this_00->field_21F8);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_21F8->field_0x3;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar3 = this_00->array_00BC[0xc].field_01DA;
      this_00->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)&this_00->array_00BC[bVar3].field_0x15 != 0)) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->array_00BC[bVar3].field_0x5);
        g_currentExceptionFrame = local_50.previous;
        return local_8;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

