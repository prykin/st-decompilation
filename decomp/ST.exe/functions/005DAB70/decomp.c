#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_005dab70(StartSystemTy * context, int param_2, undefined4 param_3) previous_return_type=/int
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /StartSystemTy;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=005DABFF ->
   StartSystemTy::GetIP receiver=/StartSystemTy */

int FUN_005dab70(StartSystemTy *context,int param_2,undefined4 param_3)

{
  StartSystemTy *this;
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = context;

  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_int_00811764 != nullptr) {
      FUN_006b76d0(g_int_00811764);
      this = local_8;
      if (DAT_0080877e == '\0') {
        if (local_8->field_068E != 0) {

          Library::DKW::DDX::FUN_006b68e0
                    (g_int_00811764,(undefined4 *)(local_8->field_068E + 0xc + param_2 * 0x14));
        }
      }
      else {

        Library::DKW::DDX::FUN_006b6750(g_int_00811764,0,param_3,0x20);
      }
      DAT_0080877f = g_int_00811764[0xe];
      /* ST_CALLSITE[005DABFF]: CALL 0x0040330a; direct=0040330A StartSystemTy::GetIP */
      StartSystemTy::GetIP(this);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return -6;
}

