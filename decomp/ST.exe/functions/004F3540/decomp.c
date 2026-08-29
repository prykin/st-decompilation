#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBut

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004FB060 -> 004F3540 @ 004FD4D0 | 004FB060 -> 004F3540 @ 004FD51D

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3540 @ 004FD4D0 | 004FB060 -> 004F3540 @ 004FD51D

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=15, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
CPanelTy::PaintBut(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *text,
                  callback_004F3540_p5 *param_5)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  uint uVar4;
  LPSTR text_00;
  int iVar6;
  int iVar5;
  int iVar7;
  InternalExceptionFrame local_54;
  int *local_10;
  RecoveredRecordView_006B84D0_87AF9D9B *local_c;
  CPanelTy *local_8;

  local_10 = (param_2->arg1).ptr;
  local_c = nullptr;
  if (param_5 == nullptr) {
    return;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;

  errorCode = STPointerBoundaryCast<int *>(Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0));
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_54.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1cd,0,(int)errorCode,
                               "%s","CPanelTy::PaintBut");
    if (iVar6 == 0) {
      RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1cd);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 1;
  /* ST_CALLSITE[004F3597]: CALL dword ptr [EBP + 0x18] */
  uVar4 = (*param_5)(param_2);
  text_00 = FUN_006f2c00(text,1,uVar4);
  /* ST_CALLSITE[004F35B4]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
  local_c = cMf32::RecGet(g_cMf32_00806790,param_3,text_00,errorCode,iVar7);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar7 = local_10[1];
  iVar5 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
      break;
    }
    goto LAB_004f3636;
  default:
    if (local_8->field_0130 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
      break;
    }
LAB_004f3636:
    iVar7 = iVar7 - local_8->field_00C0;
  }
  /* ST_CALLSITE[004F365B]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)local_8->field_0148[uVar2 + 0xe],
         *local_10 - (&local_8->field_003C)[uVar2],iVar7 - iVar5,param_3,local_c);
  cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
               (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

