#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::ShowDescription */

void __thiscall WaitTy::ShowDescription(WaitTy *this)

{
  byte *puVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  cMf32 *pcVar4;
  int local_EAX_45;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar5;
  uint *puVar6;
  char *pcVar6;
  char *pcVar7;
  int iVar5;
  int local_EAX_409;
  int iVar10;
  WaitTy *this_00;
  WaitTy *pWVar8;
  int iVar9;
  byte *pbVar10;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  byte local_1c;
  uint local_1b;
  cMf32 *local_10;
  int local_c;
  WaitTy *local_8;

  local_c = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;

  local_EAX_45 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  if (local_EAX_45 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x15e,0,local_EAX_45,
                                "%s","WaitTy::ShowDescription");
    if (iVar10 == 0) {
      RaiseInternalException(local_EAX_45,0,"E:\\__titans\\Start\\wait_obj.cpp",0x15e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005E802F]: CALL 0x0070a5a0; direct=0070A5A0 Library::Ourlib::MFIMG::mfImgLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;/byte;/int */
  pRVar5 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  /* ST_CALLSITE[005E8046]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',pRVar5);
  pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
  FUN_006b4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
    FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  /* ST_CALLSITE[005E808A]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
  puVar6 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_00 = local_8;
  g_startSystem_0081176C->field_0548 = puVar6;
  if (local_8->field_1A8F == -1) {
    pcVar6 = LoadResourceString(0x252c,g_hINSTANCE_00807618);
    pcVar7 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005E80D6]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar7,pcVar6);
    iVar9 = 0;
    pWVar8 = (WaitTy *)&DAT_0080f33a;
  }
  else {
    if (((byte)local_8->field_1A93 < 2) || (3 < (byte)local_8->field_1A93)) goto LAB_005e829d;
    /* ST_CALLSITE[005E811D]: CALL EBX */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,PTR_s_CUSTOM__0079c244);
    local_1c = this_00->field_1A93;
    local_1b = this_00->field_1A8F;

    iVar5 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_1c,0);
    if (iVar5 == -0x70) {
      local_a4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_a4;

      local_EAX_409 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
      if (local_EAX_409 == 0) {

        local_10 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,(byte *)&CHAR_00h_0080ed16,0,0,0));
      }
      this_00 = local_8;
      pcVar4 = local_10;
      g_currentExceptionFrame = local_a4.previous;
      if (local_10 != nullptr) {
        /* ST_CALLSITE[005E81DB]: CALL 0x00402716; direct=00402716 StartSystemTy::LoadMapData */
        StartSystemTy::LoadMapData
                  (g_startSystem_0081176C,local_10,(local_8->field_1A93 != '\x02') + '\x04');
        local_c = 1;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)&CHAR_00h_0080ed16,nullptr,nullptr,local_1a8,nullptr);
        pbVar10 = local_1a8;
        pcVar6 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005E8224]: CALL EBX */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar6,pbVar10);
        /* ST_CALLSITE[005E8232]: CALL 0x0040245a; direct=0040245A WaitTy::AddStr */
        AddStr(this_00,&DAT_0080f33a,0);
        cMf32::delete(pcVar4);
      }
      goto LAB_005e829d;
    }
    pcVar6 = LoadResourceString(0x252b,g_hINSTANCE_00807618);
    pcVar7 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005E826F]: CALL EBX */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar7,pcVar6);
    /* ST_CALLSITE[005E827D]: CALL 0x0040245a; direct=0040245A WaitTy::AddStr */
    AddStr(this_00,&DAT_0080f33a,0);
    iVar9 = 0;
    /* ST_CALLSITE[005E8290]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/WaitTy; signature=__stdcall;pointer:/WaitTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
    pWVar8 = LoadResourceString(0x252d,g_hINSTANCE_00807618);
  }
  /* ST_CALLSITE[005E8298]: CALL 0x0040245a; direct=0040245A WaitTy::AddStr */
  AddStr(this_00,(uint *)pWVar8,iVar9);
LAB_005e829d:
  DAT_008087be = this_00->field_1A8F;
  if (local_c == 0) {
    this_00->field_002D = 0x28;
    this_00->field_0031 = 1;
    puVar1 = &this_00->field_0x1d;
    this_00->field_0033 = (short)g_startSystem_0081176C->field_0548[2];
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x22;
    this_00->field_0033 = 0;
    this_00->field_0031 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    this_00->field_0033 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
  }
  if (-1 < (int)g_startSystem_0081176C->field_02EC) {

    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < g_startSystem_0081176C->field_0540) {

    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_60.previous;
  return;
}

