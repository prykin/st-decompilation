#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall SIDTy::PaintExplanation(SIDTy *this)

{
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar1;
  SIDTy *pSVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  char *resourceString;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_8->field_1CB8,0,0,0x7d,
                 *(int *)(local_8->field_1CC0 + 2),*(int *)(local_8->field_1CC0 + 4),0xff);
    pRVar1 = (RecoveredRecord_006B4FA0_DAC3A217 *)pSVar3->field_1CC0;
    uVar8 = *(uint *)&pRVar1[1].field_0x4;
    if (uVar8 == 0) {
      uVar8 = ((uint)pRVar1->field_000E * *(int *)&pRVar1->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar1->field_0x8;
    }

    puVar5 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar1));
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->array_00BC[0xc].field_01DF == '\0') {
      iVar12 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
      /* ST_CALLSITE[005D936D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      resourceString = LoadResourceString(0x2521,g_hINSTANCE_00807618);
      this_00 = g_startSystem_0081176C->field_0034;
    }
    else {
      pcVar11 = &CHAR_00h_00807ddd;
      resourceString = &pSVar3->field_1CD4;
      pcVar6 = LoadResourceString(0x2520,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005D9339]: CALL dword ptr [0x0085bde8] */
      wsprintfA(resourceString,"&0%s\n&5%s&0?",pcVar6,pcVar11);
      this_00 = g_startSystem_0081176C->field_0034;
      iVar12 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
    }

    ccFntTy::WrTxt(this_00,resourceString,iVar4,iVar9,uVar8,iVar10,iVar12);
    FUN_006b5440(pSVar3->field_1CB8,0,0,0x7d,(tagBITMAPINFO *)pSVar3->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x17b,0,iVar4,"%s",
                             "SIDTy::PaintExplanation");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x17b);
  return;
}

