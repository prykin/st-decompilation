#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::PaintBinDesc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
StartSystemTy::PaintBinDesc(StartSystemTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  ccFntTy *pcVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  StartSystemTy *pSVar4;
  int errorCode;
  uint uVar5;
  int iVar6;
  char *resourceString;
  uint uVar7;
  InternalExceptionFrame local_54;
  StartSystemTy *local_10;
  int local_c;
  int local_8;

  if ((((this->field_0544 != nullptr) &&
       (this->field_0548 != nullptr)) && (-1 < this->field_0540)) &&
     ((param_1 != nullptr &&
      (local_c = param_1->field_001C, local_c != 0)))) {
    pcVar1 = this->field_0034;
    local_10 = this;
    if (pcVar1->field_00A0 != 0) {
      FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
    }
    local_8 = *(int *)&pcVar1->field_0x8a;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pSVar4 = local_10;
    if (errorCode == 0) {
      pRVar2 = (RecoveredSourceFamily_dibcopy *)local_10->field_0544;
      FUN_006b4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
      uVar5 = (uint)param_1->field_0016;
      uVar7 = uVar5;
      if ((int)uVar5 < (int)(STField<int>(local_c,0x1E0) + uVar5)) {
        do {
          if ((int)uVar7 < (int)pSVar4->field_0548[2]) {
            resourceString = *(char **)(pSVar4->field_0548[5] + uVar7 * 4);
          }
          else {
            resourceString = nullptr;
          }
          if (resourceString != nullptr) {
            ccFntTy::SetSurf(pSVar4->field_0034,(int)pSVar4->field_0544,0,0,
                             (uVar7 - uVar5) * local_8,pSVar4->field_0544->field_0004,local_8);
            ccFntTy::WrStr(pSVar4->field_0034,resourceString,0,-1,0);
          }
          uVar7 = uVar7 + 1;
          uVar5 = (uint)param_1->field_0016;
        } while ((int)uVar7 < (int)(STField<int>(local_c,0x1E0) + uVar5));
      }
      FUN_006b35d0((int *)g_ddxContext_008075A8,pSVar4->field_0540);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x3cb,0,errorCode,
                               "%s","StartSystemTy::PaintBinDesc");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\startsys.cpp",0x3cb);
  }
  return;
}

