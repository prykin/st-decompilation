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
  int iVar4;
  int local_EAX_59;
  RecoveredRecord_005AACB0_2533FD69 *pRVar5;
  int iVar5;
  int iVar6;
  byte bVar6;
  char cVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  MTestTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  local_c = this;

  iVar4 = STAppC::sub_006E51B0(this->field_0010);
  this->field_00A1 = iVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  local_EAX_59 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_59 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      /* ST_CALLSITE[005E6044]: CALL 0x00403710; direct=00403710 MTestTy::NoneMTest */
      NoneMTest(local_c);
      break;
    case MESS_ID_CREATE:
      /* ST_CALLSITE[005E6020]: CALL 0x00405312; direct=00405312 MTestTy::InitMTest */
      InitMTest(local_c);
      break;
    case MESS_SHARED_0003:
      /* ST_CALLSITE[005E602C]: CALL 0x00401145; direct=00401145 MTestTy::DoneMTest */
      DoneMTest(local_c);
      break;
    case MESS_SHARED_0005:
      /* ST_CALLSITE[005E6038]: CALL 0x00403e7c; direct=00403E7C MTestTy::PaintMTest */
      PaintMTest(local_c);
      break;
    case MESS_TRACKBARCLASSTY_0062:
      if (local_c->field_00B3 == 0) {

        _DAT_00811774 = STAppC::sub_006E51B0(local_c->field_0010);
        this_00->field_00B3 = CASE_1;
        if (g_holo_00811778 != nullptr) {
          /* ST_CALLSITE[005E6203]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }

        FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                     (ushort *)&g_startSystem_0081176C->field_0140);

        Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
        /* ST_CALLSITE[005E6267]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/HoloTy; signature=__cdecl;pointer:/HoloTy;/uint */
        g_holo_00811778 = Library::MSVCRT::FUN_0072e530(0x33);
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
          uVar8 = 0;
          cVar7 = '\x01';
          bVar6 = 0x10;
          iVar4 = 1;
          /* ST_CALLSITE[005E62D7]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          /* ST_CALLSITE[005E62EC]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,pRVar5,iVar4,bVar6,cVar7,uVar8);
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
          /* ST_CALLSITE[005E6082]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
          HoloTy::Done(g_holo_00811778);
          Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
          g_holo_00811778 = nullptr;
        }
        /* ST_CALLSITE[005E609E]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/HoloTy; signature=__cdecl;pointer:/HoloTy;/uint */
        g_holo_00811778 = Library::MSVCRT::FUN_0072e530(0x33);
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
          /* ST_CALLSITE[005E613B]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
          MMMObjTy::OutRGlProc
                    ((MMMObjTy *)&g_startSystem_0081176C->field_0140,(int)g_dDXContext_0080759C,
                     nullptr,nullptr,10,0xb4,0xf9,0x123,
                     &g_startSystem_0081176C->field_0140);
          uVar8 = 0;
          cVar7 = '\x01';
          bVar6 = 0x10;
          iVar4 = 1;
          /* ST_CALLSITE[005E615C]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
          pRVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
          /* ST_CALLSITE[005E6171]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
          HoloTy::Init(g_holo_00811778,CASE_4,10,0xb4,pRVar5,iVar4,bVar6,cVar7,uVar8);
          pHVar3 = g_holo_00811778;
          g_holo_00811778->field_0002 = 0;
          pHVar3->field_0017 = -1;
          if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {

            Library::DKW::DDX::FUN_006b3430
                      ((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
          }
          FUN_006b5f80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
          /* ST_CALLSITE[005E61D8]: CALL 0x00402298; direct=00402298 PutDDXClip */
          PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)this_00->field_005D);
        }
      }
      break;
    case MESS_SHARED_0064:
      /* ST_CALLSITE[005E6333]: CALL 0x00401a19; direct=00401A19 MTestTy::sub_005E5F60 */
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

