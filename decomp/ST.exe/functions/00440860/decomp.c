#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeMD */

int __thiscall STAllPlayersC::_ChangeMD(STAllPlayersC *this,int param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char objPtr;

  uVar6 = param_3;
  piVar3 = param_2;
  objPtr = (char)param_2;
  param_2 = (int *)GetObjPtr(this,objPtr,param_3,CASE_1);
  if ((STGameObjC *)param_2 == (STGameObjC *)0x0) {
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d0,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___ChangeMD_007a8000);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x21d1);
  }
  if (param_1 == 1) {
    iVar4 = _AddMDPairs(this,objPtr,uVar6);
  }
  else {
    iVar4 = _SubMDObject(piVar3,uVar6);
  }
  if ((((iVar4 == 1) && (array = g_playerRuntime[(int)piVar3].groups, array != (DArrayTy *)0x0)) &&
      (dVar1 = array->count, dVar1 != 0)) && (uVar6 = 0, 0 < (int)dVar1)) {
    do {
      DArrayGetElement(array,uVar6,&param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((param_2 != (int *)0x0) && (iVar5 = (**(code **)(*param_2 + 0xc))(), iVar5 == 8)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_2 + 0x10))(param_1,param_3);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)dVar1);
  }
  return iVar4;
}

