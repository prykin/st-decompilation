#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetObjsList */

uint * STAllPlayersC::GetObjsList(char param_1)

{
  STGameObjC *this;
  DArrayOf_STGameObjCPtr *pDVar2;
  dword dVar3;
  uint uVar4;
  ushort uVar5;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  int iVar7;
  uint *puVar7;
  InternalExceptionFrame local_58;
  DArrayOf_STGameObjCPtr *local_14;
  dword local_10;
  uint local_c;
  int local_8;

  local_14 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_10 = local_14->count;
  uVar5 = thunk_FUN_0043e460(param_1);
  local_c = (uint)uVar5;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;

  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  uVar4 = local_c;
  if (iVar5 == 0) {
    array = Library::DKW::TBL::DArrayCreate(nullptr,local_c,2,1);
    dVar3 = local_10;
    pDVar2 = local_14;
    if ((uVar4 != 0) && (local_8 = 0, 0 < (int)local_10)) {
      do {
        this = pDVar2->data[local_8];
        /* ST_CALLSITE[0043E570]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        if ((this != nullptr) && (iVar6 = (*this->vtable[1].vfunc_24)(this), iVar6 == 1))
        {

          Library::DKW::TBL::DArrayAppend(array,&local_8);
        }
        local_8 = local_8 + 1;
      } while (local_8 < (int)dVar3);
    }
    g_currentExceptionFrame = local_58.previous;
    return &array->flags;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1f8c,0,iVar5,"%s",
                             "STAllPlayersC::GetObjsList");
  if (iVar7 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1f8d);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

