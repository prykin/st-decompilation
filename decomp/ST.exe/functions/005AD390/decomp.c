#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::NoneChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneChooseMap(ChooseMapTy * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=005AD62C RET | 005AD9DB RET | 005ADC09 RET | 005ADC4F RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall ChooseMapTy::NoneChooseMap(ChooseMapTy *this)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ChooseMapTy *this_00;
  DWORD DVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  uint *puVar7;
  STMessage *pSVar8;
  InternalExceptionFrame local_b0;
  STMessage local_6c;
  uint local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  uint local_41;
  undefined1 local_3d;
  undefined1 local_3b;
  undefined4 local_2a;
  undefined4 local_26;
  ChooseMapTy *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  AnonShape_005AD390_9AB360A8 *local_c;
  int local_8;

  local_8 = 1;
  local_20 = this;
  /* ST_CALLSITE[005AD3A8]: CALL dword ptr [0x0085bedc] */
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar7 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x24e,0,iVar7,"%s"
                               ,"ChooseMapTy::NoneChooseMap");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\load_obj.cpp",0x24e);
    return;
  }
  if (((local_20->field_0065 == '\x01') && (local_20->field_1C8F != (HANDLE)0x0)) &&
     /* ST_CALLSITE[005AD3F9]: CALL dword ptr [0x0085bce0] */
     (DVar5 = WaitForSingleObject(local_20->field_1C8F,0), DVar5 == 0)) {
    /* ST_CALLSITE[005AD40A]: CALL dword ptr [0x0085bce4] */
    FindNextChangeNotification(this_00->field_1C8F);
    /* ST_CALLSITE[005AD419]: CALL 0x00403b0c; direct=00403B0C ChooseMapTy::PrepFiles */
    PrepFiles(this_00,this_00->field_1C93);
    iVar6 = this_00->array_00BC[0xc].field_01EC;
    this_00->field_002D = 5;
    if (iVar6 != 0) {
      FUN_006e6080(this_00,2,iVar6,(undefined4 *)&this_00->field_0x1d);
    }
    if (g_startSystem_0081176C->field_0389 != 0) {
      FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  if ((this_00->array_00BC[0xc].field_01E4 != 0) &&
     (0xf9 < this_00->field_0061 - this_00->array_00BC[0xc].field_01E8)) {
    /* ST_CALLSITE[005AD47E]: CALL 0x004042b4; direct=004042B4 ChooseMapTy::ShowDescription */
    ShowDescription(this_00,this_00->field_1C93);
    this_00->array_00BC[0xc].field_01E4 = 0;
  }
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_0080877e != '\0') {
      switch(this_00->array_00BC[0xc].field_01DF) {
      case 4:
      case 5:
      case 0xc:
      case 0x13:
        local_c = nullptr;
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_14,-1,0);
        if (DAT_008067a0 != '\0') {
          /* ST_CALLSITE[005ADA31]: CALL dword ptr [0x0085c05c] */
          CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
        }
        local_10 = 0;
        if (0 < local_14) {
          do {
            iVar6 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,-1,&local_18,&local_1c,&local_c,&local_4c,-1,0);
            if (iVar6 == -0x4d) {
              pSVar8 = &local_6c;
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                pSVar8->unknown_00 = 0;
                pSVar8 = (STMessage *)&pSVar8->unknown_04;
              }
              local_6c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              iVar6 = this_00->array_00BC[0xc].field_01DB;
              if (*(int *)(iVar6 + 0x2e6) == 0) {
                /* ST_CALLSITE[005ADBE3]: CALL dword ptr [EAX] */
                this_00->GetMessage(&local_6c);
              }
              else {
                local_6c.unknown_08 = this_00->field_0008;
                local_6c.unknown_0c = 2;
                /* ST_CALLSITE[005ADBD4]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(*(MMsgTy **)(iVar6 + 0x2e6),0x2522,'\0',&local_6c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
            }
            else if (iVar6 == 1) {
              if (local_18 == 0x1a) {
                if (local_c->field_0002 == '\x04') {
                  cVar1 = this_00->array_00BC[0xc].field_01DF;
                  local_46 = 3;
                  local_48 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                  local_45 = DAT_008087be;
                  local_41 = (cVar1 != '\f') - 1 & DAT_00808750;
                  local_3b = DAT_00807361;
                  switch(cVar1) {
                  case '\x04':
switchD_005adb01_caseD_4:
                    local_3d = 2;
                    break;
                  case '\x05':
switchD_005adb01_caseD_5:
                    local_3d = 3;
                    break;
                  default:
                    local_3d = 0xff;
                    break;
                  case '\f':
switchD_005adb01_caseD_c:
                    local_3d = 5;
                    break;
                  case '\x13':
                    switch(DAT_00803400) {
                    case 4:
                      goto switchD_005adb01_caseD_4;
                    case 5:
                      goto switchD_005adb01_caseD_5;
                    case 0xc:
                      goto switchD_005adb01_caseD_c;
                    case 0x14:
                    case 0x15:
                      local_3d = 4;
                    }
                  }
                  local_26 = local_c->field_0022;
                  local_2a = local_c->field_001E;
                  FUN_00715360(g_int_00811764,local_1c,'\x1a',(char *)&local_48,0x26,1,0xffffffff);
                }
              }
              else if (local_18 == 0x1b) {
                /* ST_CALLSITE[005ADA9A]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
                StartSystemTy::AddToChat
                          ((StartSystemTy *)this_00->array_00BC[0xc].field_01DB,(int)local_c);
              }
              if (local_c != nullptr) {
                FreeAndNull(&local_c);
              }
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_14);
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((this_00->field_20B5 != '\0') &&
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
    if (((this_00->field_20B3 != '\0') && (this_00->field_20B8 != nullptr)) &&
       /* ST_CALLSITE[005AD69F]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar6 = HoloTy::NextFas(this_00->field_20B8), iVar6 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_20B4 != '\0') && (this_00->field_20BC != nullptr)) &&
       /* ST_CALLSITE[005AD6BF]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar6 = HoloTy::NextFas(this_00->field_20BC), iVar6 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) &&
       /* ST_CALLSITE[005AD6DF]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar6 = HoloTy::NextFas(this_00->field_20C0), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if ((this_00->field_20B3 != '\0') && (this_00->field_20B8 != nullptr)) {
        /* ST_CALLSITE[005AD721]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_20B8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20B8);
        this_00->field_20B8 = nullptr;
      }
      if ((this_00->field_20B4 != '\0') && (this_00->field_20BC != nullptr)) {
        /* ST_CALLSITE[005AD74F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_20BC);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20BC);
        this_00->field_20BC = nullptr;
      }
      if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) {
        /* ST_CALLSITE[005AD77D]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_00->field_20C0);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20C0);
        this_00->field_20C0 = nullptr;
      }
      this_00->field_0065 = 1;
      if (this_00->field_20B5 != '\0') {
        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      /* ST_CALLSITE[005AD7E0]: CALL 0x0040175d; direct=0040175D ChooseMapTy::CreateCtrls */
      CreateCtrls(this_00,'\x01');
      uVar3 = this_00->array_00BC[0xc].field_01F4;
      if (uVar3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1AB8,uVar3,0xfffffffe,this_00->field_1A8C,
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
      puVar7 = &this_00->field_1C23;
      iVar6 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar7);
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      cVar1 = this_00->array_00BC[0xc].field_01DF;
      if ((((cVar1 == '\f') || (cVar1 == '\x04')) || (cVar1 == '\x05')) || (cVar1 == '\x13')) {
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
      /* ST_CALLSITE[005AD9C4]: CALL 0x00402725; direct=00402725 ChooseMapTy::PaintChooseMap */
      PaintChooseMap(this_00,'\0');
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_00->field_20B5 != '\0') && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + -1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((this_00->field_20B3 != '\0') && (this_00->field_20B8 != nullptr)) {
      /* ST_CALLSITE[005AD510]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar6 = HoloTy::NextFas(this_00->field_20B8);
      if (iVar6 == 0) {
        uVar3 = *(uint *)&this_00->field_20B8->field_0x3;
        if (-1 < (int)uVar3) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_20B4 != '\0') && (this_00->field_20BC != nullptr)) {
      /* ST_CALLSITE[005AD54C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar6 = HoloTy::NextFas(this_00->field_20BC);
      if (iVar6 == 0) {
        uVar3 = *(uint *)&this_00->field_20BC->field_0x3;
        if (-1 < (int)uVar3) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) {
      /* ST_CALLSITE[005AD588]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar6 = HoloTy::NextFas(this_00->field_20C0);
      if (iVar6 == 0) {
        uVar3 = *(uint *)&this_00->field_20C0->field_0x3;
        if (-1 < (int)uVar3) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar3);
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
      bVar2 = this_00->array_00BC[0xc].field_01DA;
      this_00->field_0065 = 2;
      if ((bVar2 != 0xff) && (*(int *)&this_00->array_00BC[bVar2].field_0x15 != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->array_00BC[bVar2].field_0x5);
        g_currentExceptionFrame = local_b0.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

