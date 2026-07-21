#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObj */

uint __thiscall STGroupC::AddObj(STGroupC *this,uint param_1,int param_2)

{
  code *pcVar1;
  STGroupC *this_00;
  int errorCode;
  STGameObjC *this_01;
  DArrayTy *pDVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_80;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  STGroupC *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  short local_8;
  undefined1 local_5;

  local_18 = this->field_0029[3];
  local_c = 0;
  local_10 = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  local_14 = local_18;
  errorCode = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  uVar6 = local_14;
  uVar5 = local_18;
  if (errorCode == 0) {
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      DArrayGetElement((DArrayTy *)this_00->field_0029,uVar5,&local_8);
      if (local_8 == -1) {
        uVar6 = uVar5;
        local_14 = uVar5;
      }
      if (local_8 == (short)param_1) {
        RaiseInternalException
                  (-0x5001ffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\tc_grp.cpp",
                   0xb1);
      }
    }
    Library::DKW::TBL::FUN_006ae140(this_00->field_0029,uVar6,&param_1);
    this_01 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this_00->field_0024,param_1,CASE_1);
    thunk_FUN_00419c30(this_01,this_00->field_0025);
    this_00->field_0027 = this_00->field_0027 + 1;
    if (param_2 == 1) {
      if (this_00->field_002D == (uint *)0x0) {
        pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,2,5);
        this_00->field_002D = &pDVar2->flags;
      }
      Library::DKW::TBL::FUN_006ae1c0(this_00->field_002D,&param_1);
      local_5 = 0xff;
      (*this_00->vtable->slot_08)(this_00,0x65,&local_5);
    }
    uVar3 = thunk_FUN_00423120((int)this_01);
    uVar5 = this_00->field_0035;
    if ((uVar5 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        local_10 = local_10 | 1;
      }
    }
    else if ((uVar3 & 1) == 0) {
      local_c = local_c | 1;
    }
    if ((uVar5 & 2) == 0) {
      if ((uVar3 & 2) != 0) {
        local_10 = local_10 | 2;
      }
    }
    else if ((uVar3 & 2) == 0) {
      local_c = local_c | 2;
    }
    if ((uVar5 & 4) == 0) {
      if ((uVar3 & 4) != 0) {
        local_10 = local_10 | 4;
      }
    }
    else if ((uVar3 & 4) == 0) {
      local_c = local_c | 4;
    }
    if ((uVar5 & 8) == 0) {
      if ((uVar3 & 8) != 0) {
        local_10 = local_10 | 8;
      }
    }
    else if ((uVar3 & 8) == 0) {
      local_c = local_c | 8;
    }
    if ((uVar5 & 0x10) == 0) {
      if ((uVar3 & 0x10) != 0) {
        local_10 = local_10 | 0x10;
      }
    }
    else if ((uVar3 & 0x10) == 0) {
      local_c = local_c | 0x10;
    }
    if (local_c != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_01->vtable[1].field_0030)(local_c);
    }
    if (local_10 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)this_01->vtable[1].field_0034)(local_10);
    }
    if (this_01->field_0020 == 0x14) {
      thunk_FUN_004956c0(this_01,this_00->field_0039);
    }
    if ((undefined4 *)this_00->field_001C != (undefined4 *)0x0) {
      local_2c = 0x5d96;
      local_28 = 0;
      local_26 = (short)param_1;
      local_24 = this_01->field_0018;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)**(undefined4 **)this_00->field_001C)(local_3c);
    }
    g_currentExceptionFrame = local_80.previous;
    return uVar6;
  }
  g_currentExceptionFrame = local_80.previous;
  if (errorCode != -0x5001ffff) {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0xdf,0,errorCode,"%s"
                               ,"STGroupC::AddObj");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\tc_grp.cpp",0xe0);
    return 0xffffffff;
  }
  return 0xaffe0001;
}

