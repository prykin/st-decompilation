#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void STAllPlayersC::_ChangeDock(undefined4 param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint index;

  piVar3 = param_2;
  /* ST_CALLSITE[004409A0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  param_2 = (int *)GetObjPtr(in_ECX,(char)param_2,(ushort)param_3,CASE_1);
  if ((STGameObjC *)param_2 == nullptr) {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x21ed,0,0,"%s",
                               "STAllPlayersC::_ChangeDock");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21ee);
  }
  /* ST_CALLSITE[004409F1]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar5 = (**(code **)(*param_2 + 0x2c))();
  if ((((iVar5 == 0x33) &&
       (array = (DArrayTy *)g_packedRecords_A62x8[(int)piVar3].field2_0x5, array != nullptr)
       ) && (dVar1 = array->count, dVar1 != 0)) && (index = 0, 0 < (int)dVar1)) {
    do {
      DArrayGetElement(array,index,&param_2);
      if (param_2 != nullptr) {
        /* ST_CALLSITE[00440A35]: CALL dword ptr [EDX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar5 = (**(code **)(*param_2 + 0xc))();
        if (iVar5 == 4) {
          /* ST_CALLSITE[00440A4A]: CALL dword ptr [EAX + 0x14] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*param_2 + 0x14))(param_1,param_3);
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

