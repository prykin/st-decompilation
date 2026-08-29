#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined4 __stdcall
   FUN_004eb300(STAllPlayersC * context, uint param_2, int param_3, int param_4, int param_5)
   previous_return_type=/undefined4 Evidence: incoming ECX reaches only unadjusted __thiscall
   receivers of /STAllPlayersC; receiver_calls=1; exact RET purge=16 matches declared stack
   bytes=16; sites=004EB551 -> STAllPlayersC::sub_004D8B70 receiver=/STAllPlayersC */

undefined4 FUN_004eb300(STAllPlayersC *context,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char recordIndex;

  recordIndex = (char)param_2;
  /* ST_CALLSITE[004EB30C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(recordIndex);
  if (bVar1 == 3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_3 == 0xdd) {
      iVar3 = g_packedRecords_A62x8[param_2].field1954_0x9aa;

      iVar2 = thunk_FUN_004d89b0(recordIndex);
      if (iVar2 < param_5) goto cf_common_exit_004EB53A;

      thunk_FUN_004d8940(recordIndex,param_5);
      param_5 = iVar3 * param_5;
    }
    else if (param_3 == 0xe2) {
      iVar3 = g_packedRecords_A62x8[param_2].field1958_0x9ba;

      iVar2 = thunk_FUN_004d8af0(recordIndex);
      if (iVar2 < param_5) goto cf_common_exit_004EB53A;

      thunk_FUN_004e43c0(param_2,param_5);
      param_5 = param_5 / iVar3;
    }
    else {

      if ((param_3 != 0xe3) || (iVar3 = thunk_FUN_004e41c0(param_2), iVar3 < param_5))
      goto cf_common_exit_004EB53A;

      thunk_FUN_004e4330(param_2,param_5);
    }
    if (param_5 == 0) goto cf_common_exit_004EB53A;
    if (param_4 != 0xdd) {
      if (param_4 == 0xe2) {

        thunk_FUN_004e4380(param_2,g_packedRecords_A62x8[param_2].field1956_0x9b2 * param_5);
      }
      else if (param_4 == 0xe3) {

        thunk_FUN_004e4230(param_2,param_5);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar3 = param_5 / (int)g_packedRecords_A62x8[param_2].field1952_0x9a2;
  }
  else {
    if (param_3 == 0xdc) {

      iVar3 = thunk_FUN_004d8870(recordIndex);
      if (iVar3 < param_5) goto cf_common_exit_004EB53A;

      thunk_FUN_004d8800(recordIndex,param_5);
    }
    else if (param_3 == 0xdd) {
      iVar3 = g_packedRecords_A62x8[param_2].field1954_0x9aa;

      iVar2 = thunk_FUN_004d89b0(recordIndex);
      if (iVar2 < param_5) goto cf_common_exit_004EB53A;

      thunk_FUN_004d8940(recordIndex,param_5);
      param_5 = param_5 / iVar3;
    }
    else {
      if (param_3 != 0xde) goto cf_common_exit_004EB53A;
      iVar3 = g_packedRecords_A62x8[param_2].field1958_0x9ba;

      iVar2 = thunk_FUN_004d8af0(recordIndex);
      if (iVar2 < param_5) goto cf_common_exit_004EB53A;

      thunk_FUN_004d8a80(recordIndex,param_5);
      param_5 = param_5 / iVar3;
    }
    if (param_5 == 0) goto cf_common_exit_004EB53A;
    if (param_4 == 0xdc) {

      thunk_FUN_004d87b0(recordIndex,param_5);
      goto cf_common_exit_004EB53A;
    }
    if (param_4 != 0xdd) {
      if (param_4 == 0xde) {

        thunk_FUN_004d8a30(recordIndex,g_packedRecords_A62x8[param_2].field1956_0x9b2 * param_5);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar3 = g_packedRecords_A62x8[param_2].field1952_0x9a2 * param_5;
  }

  thunk_FUN_004d88f0(recordIndex,iVar3);
cf_common_exit_004EB53A:

  thunk_FUN_004d78e0(recordIndex);
  if (param_2 == DAT_0080874d) {
    /* ST_CALLSITE[004EB551]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(context,recordIndex);
  }
  return 0;
}

