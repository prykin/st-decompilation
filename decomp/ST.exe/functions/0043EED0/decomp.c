#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJListFromDArr

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJListFromDArr_param_3Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
STAllPlayersC::GetTOBJListFromDArr
          (STAllPlayersC *this,uint param_1,RecoveredRecordView_0043EED0_30C6163F *param_2,
          STAllPlayersC_GetTOBJListFromDArr_param_3Enum param_3,int param_4,char param_5)

{
  ushort uVar1;
  bool bVar3;
  STAllPlayersC *this_00;
  int iVar4;
  STGameObjC *this_01;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  int iVar7;
  int iVar6;
  uint *puVar8;
  InternalExceptionFrame local_5c;
  byte local_18 [4];
  STAllPlayersC *local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;
  local_10 = param_2->field_000C;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2049,0,iVar4,"%s"
                               ,"STAllPlayersC::GetTOBJListFromDArr");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x204a);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  this_00 = local_14;
  iVar4 = 0;
  if (0 < local_10) {
    do {
      uVar1 = *(ushort *)(param_2->field_001C + iVar4 * 2);
      local_8 = STReplaceLowWord((uint32_t)(param_2->field_001C), (uint16_t)(uVar1));
      if (uVar1 != 0xffff) {
        /* ST_CALLSITE[0043EF4C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_01 = GetObjPtr(this_00,(char)param_1,uVar1,CASE_1);
        if (this_01 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,
                     "E:\\__titans\\wlad\\to_allpl.cpp",0x2040);
switchD_0043efb1_caseD_3a:
          bVar3 = false;
        }
        else {
          /* ST_CALLSITE[0043EF7A]: CALL dword ptr [EAX + 0x2c] */
          SVar5 = this_01->vfunc_2C();
          /* ST_CALLSITE[0043EF86]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          if ((SVar5 != param_3) || (iVar7 = (*this_01->vtable[1].vfunc_24)(this_01), iVar7 == 0))
          goto switchD_0043efb1_caseD_3a;
          if (param_4 != 0) {
            switch(param_3) {
            case CASE_38:
            case CASE_39:
            case CASE_4F:
            case CASE_5E:
              /* ST_CALLSITE[0043EFC5]: CALL dword ptr [EAX + 0x88] */
              if ((param_4 == 1) && (iVar7 = (*this_01->vtable->vfunc_88)(local_18), 0 < iVar7)) {
                bVar3 = true;
                goto LAB_0043efd8;
              }
            }
            goto switchD_0043efb1_caseD_3a;
          }
          bVar3 = true;
        }
LAB_0043efd8:
        if ((bVar3) &&
           /* ST_CALLSITE[0043EFE7]: CALL dword ptr [EDX + 0x6c] */
           ((param_5 == -1 || (iVar7 = this_01->vfunc_6C(), iVar7 == param_5)))) {

          Library::DKW::TBL::DArrayAppend(local_c,&local_8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_10);
  }
  g_currentExceptionFrame = local_5c.previous;
  return &local_c->flags;
}

