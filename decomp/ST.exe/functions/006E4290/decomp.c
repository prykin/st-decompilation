#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4290 returns return of AppClassTy::AddDecodeMessage @ 006E42BA
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=int __stdcall
   FUN_006e4290(AppClassTy * context, undefined4 param_2, undefined4 param_3, undefined4 param_4,
   undefined4 param_5) previous_return_type=/int Evidence: incoming ECX reaches only unadjusted
   __thiscall receivers of /AppClassTy; receiver_calls=1; exact RET purge=16 matches declared stack
   bytes=16; sites=006E42B2 -> AppClassTy::AddDecodeMessage receiver=/AppClassTy */

int FUN_006e4290(AppClassTy *context,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  local_14 = param_2;
  local_c = param_4;
  local_10 = param_3;
  local_8 = param_5;

  iVar1 = AppClassTy::AddDecodeMessage(context,&local_14);
  return iVar1;
}

