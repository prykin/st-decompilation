#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJList

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJList_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
STAllPlayersC::GetTOBJList
          (STAllPlayersC *this,char param_1,STAllPlayersC_GetTOBJList_param_2Enum param_2,
          int param_3,char param_4)

{
  STGameObjC *this_00;
  bool bVar2;
  int iVar3;
  STAllPlayersC_GetTOBJList_param_2Enum SVar4;
  int iVar5;
  int iVar6;
  uint *puVar6;
  InternalExceptionFrame local_58;
  byte local_14 [4];
  DArrayOf_STGameObjCPtr *local_10;
  dword local_c;
  DArrayTy *local_8;

  local_10 = g_packedRecords_A62x8[param_1].field3_0x9;
  local_c = local_10->count;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;

  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1fbf,0,iVar3,"%s"
                               ,"STAllPlayersC::GetTOBJList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x1fc0);
    return nullptr;
  }
  local_8 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  iVar3 = 0;
  if (0 < (int)local_c) {
    do {
      this_00 = local_10->data[iVar3];
      if (((this_00 == nullptr) ||
          /* ST_CALLSITE[0043E803]: CALL dword ptr [EDX + 0x2c] */
          (SVar4 = this_00->vfunc_2C(), SVar4 != param_2)) ||
         /* ST_CALLSITE[0043E80E]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STGameObjC */
         (iVar5 = (*this_00->vtable[1].vfunc_24)(this_00), iVar5 == 0)) {
switchD_0043e836_caseD_3a:
        bVar2 = false;
      }
      else {
        if (param_3 != 0) {
          switch(param_2) {
          case CASE_38:
          case CASE_39:
          case CASE_4F:
          case CASE_5E:
            /* ST_CALLSITE[0043E84A]: CALL dword ptr [EAX + 0x88] */
            if ((param_3 == 1) && (iVar5 = (*this_00->vtable->vfunc_88)(local_14), 0 < iVar5)) {
              bVar2 = true;
              goto LAB_0043e85d;
            }
          }
          goto switchD_0043e836_caseD_3a;
        }
        bVar2 = true;
      }
LAB_0043e85d:
      if ((bVar2) &&
         /* ST_CALLSITE[0043E86C]: CALL dword ptr [EDX + 0x6c] */
         ((param_4 == -1 || (iVar5 = this_00->vfunc_6C(), iVar5 == param_4)))) {

        Library::DKW::TBL::DArrayAppend(local_8,&this_00->field_0032);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_c);
  }
  g_currentExceptionFrame = local_58.previous;
  return &local_8->flags;
}

