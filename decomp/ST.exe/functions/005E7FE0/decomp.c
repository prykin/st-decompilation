#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::ShowDescription */

void __thiscall WaitTy::ShowDescription(WaitTy *this)

{
  undefined1 *puVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  code *pcVar3;
  cMf32 *pcVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  cMf32 *this_00;
  WaitTy *this_01;
  byte *pbVar11;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x15e,0,iVar5,
                                &DAT_007a4ccc,s_WaitTy__ShowDescription_007cddd8);
    if (iVar10 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x15e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,s_MM_MAPB_007cc790,0,1);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_02F0,0,0,'\x01',(byte *)puVar6);
  pAVar2 = (AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_0544;
  FUN_006b4170(pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,0xff);
  if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0)
  {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
  }
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01 = local_8;
  PTR_0081176c->field_0548 = puVar7;
  if (local_8->field_1A8F == -1) {
    pcVar8 = LoadResourceString(0x252c,HINSTANCE_00807618);
    pcVar9 = LoadResourceString(0x252a,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,pcVar9,pcVar8);
    iVar5 = 0;
    puVar7 = &DAT_0080f33a;
  }
  else {
    if (((byte)local_8->field_1A93 < 2) || (3 < (byte)local_8->field_1A93)) goto LAB_005e829d;
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c244);
    local_1c = this_01->field_1A93;
    local_1b = this_01->field_1A8F;
    iVar5 = FUN_00725910(&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_1c,0);
    if (iVar5 == -0x70) {
      local_a4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_a4;
      iVar5 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
      if (iVar5 == 0) {
        local_10 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
      }
      this_01 = local_8;
      pcVar4 = local_10;
      g_currentExceptionFrame = local_a4.previous;
      if (local_10 != (cMf32 *)0x0) {
        StartSystemTy::LoadMapData(PTR_0081176c,local_10,(local_8->field_1A93 != '\x02') + '\x04');
        local_c = 1;
        Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
        pbVar11 = local_1a8;
        pcVar8 = LoadResourceString(0x252a,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,pcVar8,pbVar11);
        AddStr(this_01,&DAT_0080f33a,0);
        cMf32::delete(this_00,pcVar4);
      }
      goto LAB_005e829d;
    }
    pcVar8 = LoadResourceString(0x252b,HINSTANCE_00807618);
    pcVar9 = LoadResourceString(0x252a,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s___s__007c85fc,pcVar9,pcVar8);
    AddStr(this_01,&DAT_0080f33a,0);
    iVar5 = 0;
    puVar7 = (uint *)LoadResourceString(0x252d,HINSTANCE_00807618);
  }
  AddStr(this_01,puVar7,iVar5);
LAB_005e829d:
  DAT_008087be = this_01->field_1A8F;
  if (local_c == 0) {
    this_01->field_002D = 0x28;
    *(undefined2 *)&this_01->field_0x31 = 1;
    puVar1 = &this_01->field_0x1d;
    this_01->field_0033 = *(undefined2 *)(PTR_0081176c->field_0548 + 8);
    FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)puVar1);
    this_01->field_002D = 0x22;
    this_01->field_0033 = 0;
    *(undefined2 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)puVar1);
    this_01->field_002D = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)puVar1);
  }
  if (-1 < (int)PTR_0081176c->field_02EC) {
    FUN_006b35d0(DAT_008075a8,PTR_0081176c->field_02EC);
  }
  if (-1 < (int)PTR_0081176c->field_0540) {
    FUN_006b35d0(DAT_008075a8,PTR_0081176c->field_0540);
  }
  g_currentExceptionFrame = local_60.previous;
  return;
}

