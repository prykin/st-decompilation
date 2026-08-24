#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_diagnostic_stack_prototype target=function:-1: prototype=void
   __stdcall FUN_006e91a0(char * diagnosticName) previous_return_type=/undefined Evidence: exact RET
   4 diagnostic wrapper reads EBP+8 before overlap, forwards that complete word through one register
   PUSH to a library reporter with an immutable %s format, tests the reporter result, and contains
   INT3; the reporter's residual EAX is not a source return; read_sites=006E91A3 MOV EAX,dword ptr
   [EBP + 0x8]; ret_sites=006E91C3 RET 0x4 */

void FUN_006e91a0(char *diagnosticName)

{
  int iVar2;

  iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%s: error parameter \"plane_num\"\n");
  if (iVar2 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

