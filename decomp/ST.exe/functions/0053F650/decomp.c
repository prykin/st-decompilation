#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SetPanel
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004F0210 @ 004F0323 -> killed on
   every CFG path | 004F1080 @ 004F1203 -> killed on every CFG path | 004F9ED0 @ 004F9F95 ->
   unknown: CFG scan limit | 004F9ED0 @ 004F9FA6 -> unknown: CFG scan limit | 004F9ED0 @ 004F9FB7 ->
   killed on every CFG path | 004F9ED0 @ 004F9FC8 -> killed on every CFG path | 004F9ED0 @ 004FA180
   -> unknown: CFG scan limit | 004F9ED0 @ 004FA191 -> unknown: CFG scan limit | 004F9ED0 @ 004FA1A2
   -> unknown: CFG scan limit | 004F9ED0 @ 004FA1B3 -> unknown: terminal before explicit accumulator
   kill | 004FF380 @ 004FF439 -> killed on every CFG path | 004FF380 @ 004FF4BE -> killed on every
   CFG path | 004FF380 @ 004FF76C -> killed on every CFG path | 004FFE90 @ 004FFF17 -> killed on
   every CFG path | 004FFE90 @ 004FFF28 -> killed on every CFG path | 004FFE90 @ 004FFF5D -> killed
   on every CFG path | 004FFE90 @ 004FFF9E -> killed on every CFG path | 004FFE90 @ 004FFFAF ->
   killed on every CFG path | 004FFE90 @ 004FFFE4 -> killed on every CFG path | 004FFE90 @ 00500032
   -> killed on every CFG path | 004FFE90 @ 00500043 -> killed on every CFG path | 004FFE90 @
   00500078 -> killed on every CFG path | 00503BB0 @ 00503C60 -> killed on every CFG path | 00503BB0
   @ 00503C71 -> killed on every CFG path */

int __thiscall ProdPanelTy::SetPanel(ProdPanelTy *this,char param_1)

{
  ProdPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  if (this->field_0194 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0194 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0053F6CE]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
        CPanelTy::ShiftControls(g_cPanel_00801688,local_8->field_0195,1);
      }
      iVar4 = 0;
    }
    else {
      /* ST_CALLSITE[0053F6AA]: CALL dword ptr [EDX + 0x1c] */
      (*STField<code *>(local_8->field_0000,0x001C))();
      iVar4 = 1;
    }
    /* ST_CALLSITE[0053F6D7]: CALL 0x00403b48; direct=00403B48 ProdPanelTy::SwitchPanel */
    SwitchPanel(this_00,iVar4);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x1eb,0,iVar2,"%s",
                             "ProdPanelTy::SetPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\specpan.cpp",0x1eb);
  return 1;
}

