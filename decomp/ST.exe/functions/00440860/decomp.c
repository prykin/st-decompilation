#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_ChangeMD */

int __thiscall STAllPlayersC::_ChangeMD(STAllPlayersC *this,int param_1,int *param_2,uint param_3)

{
  DArrayTy *array;
  dword dVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char objPtr;

  uVar7 = param_3;
  piVar3 = param_2;
  objPtr = (char)param_2;
  /* ST_CALLSITE[00440873]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  param_2 = (int *)GetObjPtr(this,objPtr,(ushort)param_3,CASE_1);
  if ((STGameObjC *)param_2 == nullptr) {

    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x21d0,0,0,"%s",
                               "STAllPlayersC::_ChangeMD");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x21d1);
  }
  if (param_1 == 1) {
    /* ST_CALLSITE[004408C8]: CALL 0x00403ada; direct=00403ADA STAllPlayersC::_AddMDPairs */
    iVar5 = _AddMDPairs(this,objPtr,uVar7);
  }
  else {
    /* ST_CALLSITE[004408D2]: CALL 0x00402748; direct=00402748 STAllPlayersC::_SubMDObject */
    iVar5 = _SubMDObject(this,piVar3,uVar7);
  }
  if ((((iVar5 == 1) &&
       (array = g_packedRecords_A62x8[(int)piVar3].field2_0x5, array != nullptr)) &&
      (dVar1 = array->count, dVar1 != 0)) && (uVar7 = 0, 0 < (int)dVar1)) {
    do {

      DArrayGetElement(array,uVar7,&param_2);
      /* ST_CALLSITE[0044091B]: CALL dword ptr [EAX + 0xc]; [STIndirectCallsiteApplier] exact slot 0xC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      if ((param_2 != nullptr) && (iVar6 = STStructuralVirtualCall<undefined4>(param_2, 0xC), iVar6 == 8)) {
        /* ST_CALLSITE[00440930]: CALL dword ptr [EDX + 0x10] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_2 + 0x10))(param_1,param_3);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)dVar1);
  }
  return iVar5;
}

