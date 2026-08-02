#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F37C0 @ 004FD224
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004F3805 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
CPanelTy::PaintBBut(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,
                   byte param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  LPSTR text;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_54;
  int *local_10;
  ushort *local_c;
  CPanelTy *local_8;

  local_10 = (param_2->arg1).ptr;
  local_c = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = (int *)Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1de,0,(int)errorCode,
                               "%s","CPanelTy::PaintBBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1de);
    return;
  }
  iVar5 = 1;
  text = FUN_006f2c00(param_4,1,(uint)param_5);
  local_c = cMf32::RecGet(g_cMf32_00806790,param_3,text,errorCode,iVar5);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar5 = local_10[1];
  iVar4 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
      break;
    }
    goto LAB_004f38ad;
  default:
    if (local_8->field_0130 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
      break;
    }
LAB_004f38ad:
    iVar5 = iVar5 - local_8->field_00C0;
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0148[uVar2 + 0xe],
         *local_10 - (&local_8->field_003C)[uVar2],iVar5 - iVar4,param_3,(byte *)local_c);
  cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
               (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

