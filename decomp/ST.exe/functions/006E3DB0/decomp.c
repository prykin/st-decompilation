#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E3DB0 returns return of AppClassTy::SendMessage @ 006E3DC5
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_006e3db0(AppClassTy * context, int param_2) previous_return_type=/int Evidence: incoming ECX
   reaches only unadjusted __thiscall receivers of /AppClassTy; receiver_calls=1; exact RET purge=4
   matches declared stack bytes=4; sites=006E3DBF -> AppClassTy::SendMessage receiver=/AppClassTy */

int FUN_006e3db0(AppClassTy *context,RecoveredRecord_006E3DB0_0F66DDCF *param_2)

{
  int iVar1;


  iVar1 = AppClassTy::SendMessage(context,param_2->field_000C,param_2->field_0008,param_2);
  return iVar1;
}

