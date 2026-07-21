#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCursorType */

short __thiscall
STAllPlayersC::GetCursorType
          (STAllPlayersC *this,Global_sub_00435B90_param_3Enum param_1,int *param_2,
          undefined4 param_3,int *param_4,undefined4 param_5,undefined4 param_6)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  STGameObjC *pSVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  uint index;
  uint local_8;

  if ((param_2 != (int *)0x0) &&
     ((((iVar5 = param_2[8], iVar5 == 0x14 || (iVar5 == 1000)) || (iVar5 == 0x3e9)) ||
      ((iVar5 == 0x172 || (iVar5 == 0x1a4)))))) {
    thunk_FUN_0041f390((int)param_2);
    /* ST_PSEUDO[unresolved_register_input,return_width_artifact]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate call-output artifact: verify return width, clobbers, or x87 state */
    in_EDX = extraout_EDX;
  }
  uVar4 = (uint)DAT_0080874d;
  if (g_playerRuntime[uVar4].field324_0x203 == 0) {
    iVar5 = g_playerRuntime[uVar4].tempSlots[0][0].objectType;
    if (iVar5 != 0) {
      if (iVar5 != 0x3c) {
        return 0;
      }
      if (g_playerRuntime[uVar4].tempSlots[0][0].playerId != uVar4) {
        return 0;
      }
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      sVar3 = thunk_FUN_00435b90(CONCAT31((int3)((uint)in_EDX >> 8),DAT_0080874d),
                                 g_playerRuntime[uVar4].tempSlots[0][0].objectIds,param_1,param_2,
                                 param_3,param_4);
      return sVar3;
    }
  }
  else if (g_playerRuntime[uVar4].field324_0x203 == 1) {
    iVar5 = g_playerRuntime[uVar4].tempSlots[1][0].objectType;
    if (iVar5 != 0) {
      if (iVar5 != 0x19a) {
        return 0;
      }
      if (g_playerRuntime[uVar4].tempSlots[1][0].playerId != uVar4) {
        return 0;
      }
      if (g_playerRuntime[uVar4].tempSlots[1][0].activityCount != 1) {
        return 0;
      }
      array = g_playerRuntime[uVar4].tempSlots[1][0].objectIds;
      index = 0;
      dVar1 = array->count;
      if ((int)dVar1 < 1) {
        return 0;
      }
      do {
        DArrayGetElement(array,index,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = GetObjPtr(this,(char)g_playerRuntime[uVar4].tempSlots[1][0].playerId,local_8,
                             CASE_1);
          sVar3 = (*pSVar6->vtable->vfunc_28)(param_1,param_2,param_3,param_4);
          return sVar3;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  else {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x11ea,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetCursorType_inv_007a73a4);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if ((param_2 != (int *)0x0) && (param_2[9] == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((param_2[8] == 0x14) && (iVar5 = (**(code **)(*param_2 + 0xec))(), iVar5 == 1)) {
      return 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((param_2[8] == 1000) || (param_2[8] == 0x3e9)) &&
       (iVar5 = (**(code **)(*param_2 + 0xec))(), iVar5 == 1)) {
      return 4;
    }
  }
  return 0;
}

