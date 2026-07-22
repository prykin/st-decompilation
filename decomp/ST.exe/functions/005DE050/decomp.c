#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::PaintBinDesc */

void __thiscall
StartSystemTy::PaintBinDesc(StartSystemTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  ccFntTy *pcVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  code *pcVar3;
  StartSystemTy *pSVar4;
  int errorCode;
  uint uVar5;
  int iVar6;
  uint *resourceString;
  uint uVar7;
  InternalExceptionFrame local_54;
  StartSystemTy *local_10;
  int local_c;
  int local_8;

  if ((((this->field_0544 != (AnonPointee_StartSystemTy_0544 *)0x0) &&
       (this->field_0548 != (uint *)0x0)) && (-1 < this->field_0540)) &&
     ((param_1 != (AnonShape_005DE050_5BD86458 *)0x0 &&
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
      pAVar2 = (AnonShape_006B5B10_E0D06CF1 *)local_10->field_0544;
      FUN_006b4170(pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,0xff);
      uVar5 = (uint)param_1->field_0016;
      uVar7 = uVar5;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)uVar5 < (int)(*(int *)(local_c + 0x1e0) + uVar5)) {
        do {
          if ((int)uVar7 < (int)pSVar4->field_0548[2]) {
            resourceString = *(uint **)(pSVar4->field_0548[5] + uVar7 * 4);
          }
          else {
            resourceString = (uint *)0x0;
          }
          if (resourceString != (uint *)0x0) {
            ccFntTy::SetSurf(pSVar4->field_0034,(int)pSVar4->field_0544,0,0,
                             (uVar7 - uVar5) * local_8,pSVar4->field_0544->field_0004,local_8);
            ccFntTy::WrStr(pSVar4->field_0034,resourceString,0,-1,0);
          }
          uVar7 = uVar7 + 1;
          uVar5 = (uint)param_1->field_0016;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar7 < (int)(*(int *)(local_c + 0x1e0) + uVar5));
      }
      FUN_006b35d0((int *)PTR_008075a8,pSVar4->field_0540);
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

