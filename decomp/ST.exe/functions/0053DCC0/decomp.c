#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintLBut */

void __thiscall
UPanelTy::PaintLBut(UPanelTy *this,AnonShape_0053DCC0_5B8C160B *param_1,byte param_2,char *param_3,
                   char *param_4,undefined *param_5)

{
  AnonNested_0053DCC0_0018_16DF3813 *pAVar1;
  UPanelTy *pUVar3;
  int iVar6;
  int iVar4;
  uint uVar7;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = nullptr;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_5 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;

    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_CALLSITE[0053DD3A]: CALL dword ptr [EBP + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar7 = (*(code *)param_5)(param_1);
      text = FUN_006f2c00(param_3,1,uVar7);
      /* ST_CALLSITE[0053DD5A]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_2,text,nullptr,1);
      iVar6 = local_c;
      pUVar3 = local_14;
      /* ST_CALLSITE[0053DD73]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      if (param_1->field_0014 == 3) {
        /* ST_CALLSITE[0053DDA0]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
        local_8 = cMf32::RecGet(g_cMf32_00806790,6,param_4,nullptr,1);
        /* ST_CALLSITE[0053DDB4]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pUVar3->field_0068,local_10,iVar6,'\x06',local_8);
        cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      }

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,
                 pUVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x74,0,iVar4,"%s",
                               "UPanelTy::PaintLBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\specpan.cpp",0x74);
  }
  return;
}

