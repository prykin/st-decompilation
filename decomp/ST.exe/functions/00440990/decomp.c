#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock */

void STAllPlayersC::_ChangeDock(undefined4 param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint index;

  piVar3 = param_2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  param_2 = (int *)GetObjPtr(in_ECX,(char)param_2,param_3,CASE_1);
  if ((STGameObjC *)param_2 == (STGameObjC *)0x0) {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x21ed,0,0,"%s",
                               "STAllPlayersC::_ChangeDock");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21ee);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar4 == 0x33) && (array = g_playerRuntime[(int)piVar3].groups, array != (DArrayTy *)0x0))
      && (dVar1 = array->count, dVar1 != 0)) && (index = 0, 0 < (int)dVar1)) {
    do {
      DArrayGetElement(array,index,&param_2);
      if (param_2 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*param_2 + 0xc))();
        if (iVar4 == 4) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

