#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_0042a9f0(STAllPlayersC * context, char param_2) previous_return_type=/undefined Evidence:
   incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC; receiver_calls=2;
   exact RET purge=4 matches declared stack bytes=4; sites=0042AA02 ->
   STAllPlayersC::ResetActivityFromTmp receiver=/STAllPlayersC | 0042AA10 ->
   STAllPlayersC::ResetActivityFromTmp receiver=/STAllPlayersC */

void FUN_0042a9f0(STAllPlayersC *context,char param_2)

{
  int iVar1;
  uint *puVar2;
  /* ST_CALLSITE[0042AA02]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  STAllPlayersC::ResetActivityFromTmp(context,param_2,0,0,0);
  /* ST_CALLSITE[0042AA10]: CALL 0x004032e7; direct=004032E7 STAllPlayersC::ResetActivityFromTmp */
  STAllPlayersC::ResetActivityFromTmp(context,param_2,1,0,0);
  iVar1 = (int)param_2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_2 = 5;
  puVar2 = &g_packedRecords_A62x8[iVar1].field102_0x16d;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    if ((DArrayTy *)puVar2[0x14] != nullptr) {
      DArrayDestroy((DArrayTy *)puVar2[0x14]);
      puVar2[0x14] = 0;
    }
    STField<undefined4>(puVar2,0x46) = 0;
    puVar2 = puVar2 + 4;
    _param_2 = _param_2 + -1;
  } while (_param_2 != 0);
  puVar2 = &g_packedRecords_A62x8[iVar1].field204_0x211;
  iVar1 = 10;
  do {
    if ((DArrayTy *)*puVar2 != nullptr) {
      DArrayDestroy((DArrayTy *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

