#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
UPanelTy::PaintBut(UPanelTy *this,AnonShape_0053D7A0_044B6141 *param_1,byte param_2,char *param_3,
                  undefined *param_4)

{
  AnonNested_0053D7A0_0018_F6872402 *pAVar1;
  UPanelTy *pUVar3;
  int *errorCode;
  uint uVar4;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  local_8 = nullptr;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_4 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;

    errorCode = STPointerBoundaryCast<int *>(Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0));
    if (errorCode == nullptr) {
      iVar5 = 1;
      /* ST_CALLSITE[0053D817]: CALL dword ptr [EBP + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_4)(param_1);
      text = FUN_006f2c00(param_3,1,uVar4);
      /* ST_CALLSITE[0053D834]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_2,text,errorCode,iVar5);
      pUVar3 = local_14;
      /* ST_CALLSITE[0053D84D]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,
                 pUVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x24,0,(int)errorCode,
                               "%s","UPanelTy::PaintBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\specpan.cpp",0x24);
  }
  return;
}

