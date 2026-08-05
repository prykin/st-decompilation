#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjsToGroup

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00436F20 -> 0042B7D0 @ 0043756E | 0044EE30 -> 0042B7D0 @ 004505CF | 0044EE30 ->
   0042B7D0 @ 00450662 | 00490F60 -> 0042B7D0 @ 00491001
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042B7E4 MOVSX EAX,byte ptr [EBP + 0x8] | 0042B942 MOVSX
   ECX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::AddObjsToGroup
          (STAllPlayersC *this,char param_1,ushort param_2,uint *groupContent,undefined2 *param_4)

{
  dword dVar1;
  DArrayTy *array;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_90;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  DArrayTy *local_14;
  STGroupC *local_10;
  STGroupC *local_c;
  undefined1 local_5;

  uVar7 = groupContent[3];
  uVar6 = 0;
  local_20 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  if (0 < (int)uVar7) {
    do {
      DArrayGetElement((DArrayTy *)groupContent,uVar6,local_18);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = thunk_FUN_0042b5b0(param_1,local_18._0_2_);
      if (iVar3 == 0) {
        return 0xaffe0002;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  uVar6 = 0;
  uVar7 = local_14->count;
  local_24 = uVar7;
  if (0 < (int)uVar7) {
    do {
      DArrayGetElement(local_14,uVar6,&local_c);
      if (local_c != nullptr) {
        iVar3 = thunk_FUN_00423d80(local_c,groupContent);
        if (iVar3 == 1) {
          local_5 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(local_c->vtable + 8))(0x65,&local_5);
        }
        if (uVar6 == param_2) {
          local_20 = 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar3 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  array = local_14;
  if (iVar3 == 0) {
    uVar6 = local_24;
    uVar7 = local_24;
    if ((param_2 == 0xfffe) || (local_20 == 0)) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        DArrayGetElement(array,uVar7,&local_c);
        if (local_c == nullptr) {
          uVar6 = uVar7;
        }
      }
      local_48 = (int)param_1;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_40 = 1;
      local_38 = uVar6 & 0xffff;
      g_playSystem_00802A38->vfunc_08(0x10ff,(short)local_1c,(short)&local_10,(short)local_4c,0);
      Library::DKW::TBL::DArrayPut(array,uVar6 & 0xffff,&local_10);
      STGroupC::AddObjs(local_10,(DArrayTy *)groupContent,0);
      local_5 = 2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(local_10->vtable + 8))(0x65,&local_5);
      if (param_4 != nullptr) {
        *param_4 = (short)uVar6;
      }
    }
    else {
      DArrayGetElement(local_14,(uint)param_2,&local_c);
      STGroupC::AddObjs(local_c,(DArrayTy *)groupContent,1);
      local_5 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(local_c->vtable + 8))(0x65,&local_5);
    }
    dVar1 = array->count;
    uVar7 = 0;
    local_24 = dVar1;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,uVar7,&local_c);
        if (((local_c != nullptr) && (local_c->field_0027 == 0)) &&
           (iVar3 = thunk_FUN_004233a0((int)local_c), iVar3 == 0)) {
          thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)&local_c->field_0x8);
          local_c = nullptr;
          Library::DKW::TBL::DArrayPut(array,uVar7,&local_c);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar1);
    }
    g_currentExceptionFrame = local_90.previous;
    return 0;
  }
  g_currentExceptionFrame = local_90.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1d8,0,iVar3,"%s",
                             "STAllPlayersC::AddObjsToGroup");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1d9);
  return 0xffffffff;
}

