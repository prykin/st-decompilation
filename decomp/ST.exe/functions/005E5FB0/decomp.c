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
  code *pcVar2;
  HoloTy *pHVar3;
  MTestTy *this_00;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_c = this;
  DVar4 = FUN_006e51b0(this->field_0010);
  this->field_00A1 = DVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 == 0) {
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
      if (local_c->field_00B3 == '\0') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        this_00->field_00B3 = 1;
        if (g_holo_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = (HoloTy *)0x0;
        }
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,
                     (uint)&PTR_0081176c->field_0140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == (HoloTy *)0x0) {
          g_holo_00811778 = (HoloTy *)0x0;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          g_holo_00811778->field_0003 = -1;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = 0;
          g_holo_00811778->field_000B = 0;
          *(undefined4 *)&g_holo_00811778->field_0xf = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != (HoloTy *)0x0) {
          uVar9 = 0;
          cVar8 = '\x01';
          uVar7 = 0x10;
          iVar6 = 1;
          iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar5,iVar6,uVar7,cVar8,uVar9);
          pHVar3 = g_holo_00811778;
          piVar1 = &g_holo_00811778->field_0013;
          g_holo_00811778->field_0002 = 1;
          pHVar3->field_0017 = *piVar1;
          if (-1 < g_holo_00811778->field_0003) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,g_holo_00811778->field_0003);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
      }
      else if (local_c->field_00B3 == '\x04') {
        _DAT_00811774 = FUN_006e51b0(local_c->field_0010);
        this_00->field_00B3 = 5;
        if (g_holo_00811778 != (HoloTy *)0x0) {
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = (HoloTy *)0x0;
        }
        g_holo_00811778 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (g_holo_00811778 == (HoloTy *)0x0) {
          g_holo_00811778 = (HoloTy *)0x0;
        }
        else {
          g_holo_00811778->field_0002 = 1;
          g_holo_00811778->field_0000 = 0;
          g_holo_00811778->field_0003 = -1;
          g_holo_00811778->field_0001 = CASE_2;
          g_holo_00811778->field_0007 = 0;
          g_holo_00811778->field_000B = 0;
          *(undefined4 *)&g_holo_00811778->field_0xf = 0;
          *(undefined4 *)&g_holo_00811778->field_0x1b = 1;
          g_holo_00811778->field_0013 = 1;
          g_holo_00811778->field_0017 = -1;
          g_holo_00811778->field_0027 = 0;
          g_holo_00811778->field_0023 = 0;
          g_holo_00811778->field_002F = 1;
          g_holo_00811778->field_002B = 1;
        }
        if (g_holo_00811778 != (HoloTy *)0x0) {
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          MMMObjTy::OutRGlProc
                    ((MMMObjTy *)&PTR_0081176c->field_0140,DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                     &PTR_0081176c->field_0140);
          uVar9 = 0;
          cVar8 = '\x01';
          uVar7 = 0x10;
          iVar6 = 1;
          iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,iVar5,iVar6,uVar7,cVar8,uVar9);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = -1;
          if (-1 < g_holo_00811778->field_0003) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,g_holo_00811778->field_0003);
          }
          FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
          PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)this_00->field_005D);
        }
      }
      break;
    case MESS_SHARED_0064:
      thunk_FUN_005e5f60((AnonShape_005E5F60_843B3FDC *)local_c);
      this_00->field_008D = 1;
      this_00->field_0091 = 0x7102;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = FUN_006e5fd0(this_00,message);
    return iVar5;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0xb5,0,iVar5,"%s",
                             "MTestTy::GetMessage");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\test_obj.cpp",0xb5);
  return 0xffff;
}

