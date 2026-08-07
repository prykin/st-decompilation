#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::ShowDescription */

void __thiscall WaitTy::ShowDescription(WaitTy *this)

{
  undefined1 *puVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  cMf32 *pcVar4;
  int local_EAX_45;
  ushort *puVar5;
  DArrayTy *pDVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar5;
  int local_EAX_409;
  int iVar10;
  WaitTy *this_00;
  uint *puVar9;
  int iVar11;
  byte *pbVar12;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  undefined1 local_1c;
  undefined4 local_1b;
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
  puVar5 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
         (byte *)puVar5);
  pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
  FUN_006b4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
    FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_00 = local_8;
  g_startSystem_0081176C->field_0548 = &pDVar6->flags;
  if (local_8->field_1A8F == -1) {
    pcVar7 = LoadResourceString(0x252c,g_hINSTANCE_00807618);
    pcVar8 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar8,pcVar7);
    iVar11 = 0;
    puVar9 = &DAT_0080f33a;
  }
  else {
    if (((byte)local_8->field_1A93 < 2) || (3 < (byte)local_8->field_1A93)) goto LAB_005e829d;
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,PTR_s_CUSTOM__0079c244);
    local_1c = this_00->field_1A93;
    local_1b = this_00->field_1A8F;
    iVar5 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_1c,0);
    if (iVar5 == -0x70) {
      local_a4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_a4;
      local_EAX_409 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
      if (local_EAX_409 == 0) {
        local_10 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
      }
      this_00 = local_8;
      pcVar4 = local_10;
      g_currentExceptionFrame = local_a4.previous;
      if (local_10 != nullptr) {
        StartSystemTy::LoadMapData
                  (g_startSystem_0081176C,local_10,(local_8->field_1A93 != '\x02') + '\x04');
        local_c = 1;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)&CHAR_00h_0080ed16,nullptr,nullptr,local_1a8,nullptr);
        pbVar12 = local_1a8;
        pcVar7 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar7,pbVar12);
        AddStr(this_00,&DAT_0080f33a,0);
        cMf32::delete(pcVar4);
      }
      goto LAB_005e829d;
    }
    pcVar7 = LoadResourceString(0x252b,g_hINSTANCE_00807618);
    pcVar8 = LoadResourceString(0x252a,g_hINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar8,pcVar7);
    AddStr(this_00,&DAT_0080f33a,0);
    iVar11 = 0;
    puVar9 = (uint *)LoadResourceString(0x252d,g_hINSTANCE_00807618);
  }
  AddStr(this_00,puVar9,iVar11);
LAB_005e829d:
  DAT_008087be = this_00->field_1A8F;
  if (local_c == 0) {
    this_00->field_002D = 0x28;
    *(undefined2 *)&this_00->field_0x31 = 1;
    puVar1 = &this_00->field_0x1d;
    *(short *)&this_00->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x22;
    *(undefined2 *)&this_00->field_0x33 = 0;
    *(undefined2 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
  }
  if (-1 < (int)g_startSystem_0081176C->field_02EC) {
    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < (int)g_startSystem_0081176C->field_0540) {
    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_60.previous;
  return;
}

