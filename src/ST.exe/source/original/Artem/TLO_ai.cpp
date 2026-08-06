#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_ai.cpp

// 004B0D10 FUN_004b0d10
#line 4 "decomp/ST.exe/functions/004B0D10/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai.cpp
   Diagnostic line evidence: 787 | 788 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00660F70 -> 004B0D10 @ 0066126D; MOVSX at 00661231 establishes signed source width 2 |
   00662240 -> 004B0D10 @ 00662583; MOVSX at 00662549 establishes signed source width 2 | 00662240
   -> 004B0D10 @ 006628EC; MOVSX at 006628B3 establishes signed source width 2 */

undefined4 __cdecl
st::fn_004B0D10(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,int param_8,int param_9)

{
  icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *piVar1;
  int iVar3;
  int iVar5;
  undefined4 uVar6;
  int iVar4;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_ai.cpp",0x313,0,iVar3,"%s",
                               "TLOAiChkOrFindBuildingPlace error !");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Artem\\TLO_ai.cpp",0x314);
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((-1 < *param_3) && (local_8 = *param_4, -1 < local_8)) && (-1 < *param_5)) {
    if (param_9 == 0) {
      iVar5 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)(param_9 + 0x18);
    }
    iVar5 = st::fn_00402829((short)*param_3,local_8,*param_5,param_2,param_1,nullptr,
                               nullptr,nullptr,iVar5,nullptr);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  piVar1 = (&st_global_00790728.vfunc_04)[param_2];
  if (piVar1 == nullptr) {
    uVar6 = st::fn_00405C04(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9);
    g_currentExceptionFrame = local_50.previous;
    return uVar6;
  }
  if (piVar1 == (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x1) {
    uVar6 = st::fn_004033FA(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    g_currentExceptionFrame = local_50.previous;
    return uVar6;
  }
  if (piVar1 != (icall_004A0EE0_FUN_004a0ee0_for_STGroupBoatC *)0x2) {
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  uVar6 = st::fn_00405632(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  g_currentExceptionFrame = local_50.previous;
  return uVar6;
}

