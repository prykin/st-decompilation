#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_00446a70(STAllPlayersC * context) previous_return_type=/undefined Evidence: incoming ECX
   reaches only unadjusted __thiscall receivers of /STAllPlayersC; receiver_calls=1; exact RET
   purge=0 matches declared stack bytes=0; sites=00446A79 -> STAllPlayersC::DeletePGPairs
   receiver=/STAllPlayersC */

void FUN_00446a70(STAllPlayersC *context)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_CALLSITE[00446A79]: CALL 0x00402095; direct=00402095 STAllPlayersC::DeletePGPairs */
    STAllPlayersC::DeletePGPairs(context,(char)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

