#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005E5FB0; family_names=MTestTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:0,18:0,1c:0} */

int __thiscall MTestTy::GetMessage(MTestTy *this,STMessage *message)

{
  int *piVar1;
  HoloTy *pHVar3;
  MTestTy *this_00;
  DWORD DVar4;
  int local_EAX_59;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_c = this;
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_00A1 = DVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_59 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_59 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      NoneMTest(local_c);
      break;
    case MESS_ID_CREATE:
      InitMTest(local_c);
      break;
    case MESS_SHARED_0003:
      DoneMTest(local_c);
      break;
    case MESS_SHARED_0005:
      PaintMTest(local_c);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      if (local_c->field_00B3 == 0) {
        _DAT_00811774 = STAppC::sub_006E51B0(local_c->field_0010);
        this_00->field_00B3 = CASE_1;
        if (g_holo_00811778 != nullptr) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                     (ushort *)&g_startSystem_0081176C->field_0140);
        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == nullptr) {
          g_holo_00811778 = nullptr;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          *(undefined4 *)&g_holo_00811778->field_0x3 = 0xffffffff;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = nullptr;
          g_holo_00811778->field_000B = nullptr;
          g_holo_00811778->field_000F = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != nullptr) {
          uVar11 = 0;
          cVar10 = '\x01';
          bVar9 = 0x10;
          iVar8 = 1;
          iVar7 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar7,iVar8,bVar9,cVar10,uVar11);
          pHVar3 = g_holo_00811778;
          piVar1 = &g_holo_00811778->field_0013;
          g_holo_00811778->field_0002 = 1;
          pHVar3->field_0017 = *piVar1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
            Library::DKW::DDX::FUN_006b3430
                      ((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c->field_00B3 == CASE_4) {
        _DAT_00811774 = STAppC::sub_006E51B0(local_c->field_0010);
        this_00->field_00B3 = CASE_5;
        if (g_holo_00811778 != nullptr) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == nullptr) {
          g_holo_00811778 = nullptr;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          *(undefined4 *)&g_holo_00811778->field_0x3 = 0xffffffff;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = nullptr;
          g_holo_00811778->field_000B = nullptr;
          g_holo_00811778->field_000F = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != nullptr) {
          FUN_006b5f80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
          MMMObjTy::OutRGlProc
                    ((MMMObjTy *)&g_startSystem_0081176C->field_0140,(int)g_dDXContext_0080759C,
                     nullptr,nullptr,10,0xb4,0xf9,0x123,
                     &g_startSystem_0081176C->field_0140);
          uVar11 = 0;
          cVar10 = '\x01';
          bVar9 = 0x10;
          iVar8 = 1;
          iVar7 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar7,iVar8,bVar9,cVar10,uVar11);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = -1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
            Library::DKW::DDX::FUN_006b3430
                      ((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
          }
          FUN_006b5f80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
          PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)this_00->field_005D);
        }
      }
      break;
    case MESS_SHARED_0064:
      sub_005E5F60(local_c);
      this_00->field_008D = 1;
      this_00->field_0091 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = FUN_006e5fd0(this_00,message);
    return iVar5;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0xb5,0,local_EAX_59,
                             "%s","MTestTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_59,0,"E:\\__titans\\Start\\test_obj.cpp",0xb5);
  return 0xffff;
}

