#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintDamageXY
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004F1FDA MOV ECX,dword ptr [EBP + 0x14];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
CPanelTy::PaintDamageXY
          (CPanelTy *this,int param_1,int param_2,int param_3,byte param_4,UINT param_5)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {

    ccFntTy::SetSurf(local_8->field_01B8,param_1,0,param_2,param_3,0x30,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = 0;
    /* ST_CALLSITE[004F1FC9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar4 = LoadResourceString(param_5,g_hINSTANCE_00807618);

    ccFntTy::WrTxt(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    /* ST_CALLSITE[004F1FF0]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&pCVar2->field_01E1,"%3d",param_4);

    ccFntTy::SetSurf(pCVar2->field_01BC,param_1,0,param_2 + 0xc,param_3 + 10,0x14,0xf);

    ccFntTy::WrTxt(pCVar2->field_01BC,&pCVar2->field_01E1,-3,-1,1,-1,-1);

    ccFntTy::SetSurf(pCVar2->field_01B8,param_1,0,param_2 + 0x22,param_3 + 0xd,10,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = -1;
    /* ST_CALLSITE[004F2064]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar4 = LoadResourceString(0x36b2,g_hINSTANCE_00807618);

    ccFntTy::WrTxt(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0xa3,0,iVar3,"%s",
                             "CPanelTy::PaintDamageXY");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0xa3);
  return;
}

