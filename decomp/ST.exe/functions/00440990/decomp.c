#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeDock

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=void __stdcall
   _ChangeDock(STAllPlayersC * context, undefined4 param_2, int * param_3, uint param_4)
   previous_return_type=/void Evidence: incoming ECX reaches only unadjusted __thiscall receivers of
   /STAllPlayersC; receiver_calls=1; exact RET purge=12 matches declared stack bytes=12;
   sites=004409A0 -> STAllPlayersC::GetObjPtr receiver=/STAllPlayersC */

void STAllPlayersC::_ChangeDock(STAllPlayersC *context,undefined4 param_2,int *param_3,uint param_4)

{
  DArrayTy *array;
  dword dVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint index;

  piVar3 = param_3;
  /* ST_CALLSITE[004409A0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  param_3 = (int *)GetObjPtr(context,(char)param_3,(ushort)param_4,CASE_1);
  if ((STGameObjC *)param_3 == nullptr) {

    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x21ed,0,0,"%s",
                               "STAllPlayersC::_ChangeDock");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21ee);
  }
  /* ST_CALLSITE[004409F1]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar5 = STStructuralVirtualCall<undefined4>(param_3, 0x2C);
  if ((((iVar5 == 0x33) &&
       (array = g_packedRecords_A62x8[(int)piVar3].field2_0x5, array != nullptr)) &&
      (dVar1 = array->count, dVar1 != 0)) && (index = 0, 0 < (int)dVar1)) {
    do {

      DArrayGetElement(array,index,&param_3);
      if (param_3 != nullptr) {
        /* ST_CALLSITE[00440A35]: CALL dword ptr [EDX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        iVar5 = STStructuralVirtualCall<undefined4>(param_3, 0xC);
        if (iVar5 == 4) {
          /* ST_CALLSITE[00440A4A]: CALL dword ptr [EAX + 0x14] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*param_3 + 0x14))(param_2,param_4);
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

