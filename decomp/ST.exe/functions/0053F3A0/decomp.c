#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SwitchPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/ProdPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall ProdPanelTy::SwitchPanel(ProdPanelTy *this,int param_1)

{
  ProdPanelTy_field_0172State PVar1;
  ProdPanelTy *pPVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x1bf,0,errorCode,
                               "%s","ProdPanelTy::SwitchPanel");
    if (iVar4 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\specpan.cpp",0x1bf);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  PVar1 = local_8->field_0172;
  if (PVar1 == CASE_1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)local_8->field_0000->field_0018)(0);
  }
  else {
    if (PVar1 == CASE_2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = CASE_3;
      thunk_FUN_005252c0(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      CPanelTy::ShiftControls(g_cPanel_00801688,pPVar3->field_0195,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (PVar1 != CASE_3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    pPVar3->field_0172 = CASE_4;
    thunk_FUN_005252c0(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

