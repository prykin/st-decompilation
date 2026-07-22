#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::NoneSettMap */

int __thiscall SettMapTy::NoneSettMap(SettMapTy *this,int *param_1)

{
  char cVar1;
  SettMapTy_field_1E26State SVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  SettMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  InternalExceptionFrame local_50;
  SettMapTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
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
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((local_c->field_0x21e1 != '\0') && (local_c->field_21E8 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(local_c->field_21E8), iVar7 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_0x21e5 != '\0') && (this_00->field_21F4 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(this_00->field_21F4), iVar7 != 0)) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((SVar2 != 6) && (SVar2 != CASE_7)) &&
       ((SVar2 != 0xe &&
        (((this_00->field_0x21e2 != '\0' && (this_00->field_21EC != (HoloTy *)0x0)) &&
         (iVar7 = HoloTy::NextFas(this_00->field_21EC), iVar7 != 0)))))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == 6) || (SVar2 == CASE_7)) || (SVar2 == 0xe)) &&
       (((this_00->field_0x21e3 != '\0' && (this_00->field_21F0 != (HoloTy *)0x0)) &&
        (iVar7 = HoloTy::NextFas(this_00->field_21F0), iVar7 != 0)))) {
      local_8 = 0;
    }
    SVar2 = this_00->field_1E26;
    if (((((SVar2 != 6) && (SVar2 != 1)) && (SVar2 != 2)) &&
        ((this_00->field_0x21e6 != '\0' && (this_00->field_21F8 != (HoloTy *)0x0)))) &&
       (iVar7 = HoloTy::NextFas(this_00->field_21F8), iVar7 != 0)) {
      local_8 = 0;
    }
    if ((this_00->field_0x21e4 != '\0') &&
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
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_21F0 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F0);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F0);
        this_00->field_21F0 = (HoloTy *)0x0;
      }
      SVar2 = this_00->field_1E26;
      if ((((SVar2 == 6) || (SVar2 == CASE_7)) || (SVar2 == 0xe)) && (this_00->field_0x21e3 != '\0')
         ) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_00->field_1F80);
      }
      if (this_00->field_21E8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21E8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21E8);
        this_00->field_21E8 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e1 != '\0') {
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
        puVar9 = &this_00->field_20CC;
        iVar7 = 10;
        do {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,*puVar9);
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (this_00->field_21F4 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F4);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F4);
        this_00->field_21F4 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e5 != '\0') {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_00->field_1E22);
      }
      if (this_00->field_21EC != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21EC);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21EC);
        this_00->field_21EC = (HoloTy *)0x0;
      }
      SVar2 = this_00->field_1E26;
      if (((SVar2 != 6) && (SVar2 != CASE_7)) && (SVar2 != 0xe)) {
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
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0540);
      }
      if (this_00->field_0x21e4 != '\0') {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC)
          ;
        }
      }
      if (this_00->field_21F8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_21F8);
        this_00->field_21F8 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e6 != '\0') {
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
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0558);
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0554);
      }
      this_00->field_0065 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&this_00->field_0000->field_0x18)(0);
      SVar2 = this_00->field_1E26;
      if (((SVar2 == 6) || (SVar2 == CASE_7)) || (SVar2 == 0xe)) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004EEFB0::thunk_FUN_005c8200
                  ((AnonReceiver_004EEFB0 *)this_00);
      }
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
    if ((local_c->field_0x21e4 != '\0') && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + -1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((this_00->field_0x21e1 != '\0') && (this_00->field_21E8 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(this_00->field_21E8);
      if (iVar7 == 0) {
        uVar4 = this_00->field_21E8->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)PTR_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_0x21e5 != '\0') && (this_00->field_21F4 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(this_00->field_21F4);
      if (iVar7 == 0) {
        uVar4 = this_00->field_21F4->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)PTR_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != 6) && (SVar2 != CASE_7)) && (SVar2 != 0xe)) &&
       ((this_00->field_0x21e2 != '\0' && (this_00->field_21EC != (HoloTy *)0x0)))) {
      iVar7 = HoloTy::NextFas(this_00->field_21EC);
      if (iVar7 == 0) {
        uVar4 = this_00->field_21EC->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)PTR_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 == 6) || (SVar2 == CASE_7)) || (SVar2 == 0xe)) &&
       ((this_00->field_0x21e3 != '\0' && (this_00->field_21F0 != (HoloTy *)0x0)))) {
      iVar7 = HoloTy::NextFas(this_00->field_21F0);
      if (iVar7 == 0) {
        uVar4 = this_00->field_21F0->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)PTR_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    SVar2 = this_00->field_1E26;
    if ((((SVar2 != 6) && (SVar2 != 1)) && (SVar2 != 2)) &&
       ((this_00->field_0x21e6 != '\0' && (this_00->field_21F8 != (HoloTy *)0x0)))) {
      iVar7 = HoloTy::NextFas(this_00->field_21F8);
      if (iVar7 == 0) {
        uVar4 = this_00->field_21F8->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0((int *)PTR_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar3 = this_00->field_1A5A;
      this_00->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar3 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar3 * 0x1fb));
        g_currentExceptionFrame = local_50.previous;
        return local_8;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

