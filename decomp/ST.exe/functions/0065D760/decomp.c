#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::_AddObjFlt

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0065D940 -> 0065D760 @ 0065D98B */

void __thiscall AiFltClassTy::_AddObjFlt(AiFltClassTy *this,uint objPtr,int param_2)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (iVar5 != -100) {
      iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0xa5,0,iVar5,"%s",
                                 "AiFltClassTy::_AddObjFlt");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0xa6);
    }
    return;
  }
  if (objPtr == 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (local_8->field_007D == -2) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((bVar2) && (pAVar3->field_007B != 1)) ||
       (iVar5 = (**(code **)(*(int *)objPtr + 0x2c))(), iVar5 == 0x78)) {
      RaiseInternalException
                (-100,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0x9b);
    }
    array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
    Library::DKW::TBL::FUN_006ae1c0(&array->flags,(undefined4 *)(objPtr + 0x32));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 1) || (0x28 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == 0) {
        uVar4 = 0xfffe;
      }
      else {
        uVar4 = *(undefined2 *)(objPtr + 0x30);
      }
      *(undefined2 *)(objPtr + 0x81c) = uVar4;
    }
    STAllPlayersC::AddObjsToGroup
              (g_sTAllPlayers_007FA174,*(char *)&pAVar3->field_0024,pAVar3->field_007D,&array->flags
               ,(undefined2 *)0x0);
    DArrayDestroy(array);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

