#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00571C90 returns zeroed full register at 00571CB0 @ 00571CB3
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=uint __stdcall
   FUN_00571c90(STSprGameObjC * context, int param_2) previous_return_type=/uint Evidence: incoming
   ECX reaches only unadjusted __thiscall receivers of /STSprGameObjC; receiver_calls=1; exact RET
   purge=4 matches declared stack bytes=4; sites=00571C98 -> STSprGameObjC::GetMessage
   receiver=/STSprGameObjC */

uint FUN_00571c90(STSprGameObjC *context,int param_2)

{
  int iVar1;

  /* ST_CALLSITE[00571C98]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  iVar1 = STSprGameObjC::GetMessage(context,(STMessage *)param_2);
  if (iVar1 == 0xffff) {
    return 0xffff;
  }
  return 0;
}

