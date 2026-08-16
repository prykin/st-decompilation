#include "../../pseudocode_runtime.h"


undefined4 FUN_004eb300(uint param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char recordIndex;

  recordIndex = (char)param_1;
  bVar1 = LookupRecordByte(recordIndex);
  if (bVar1 == 3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0xdd) {
      iVar4 = g_packedRecords_A62x8[param_1].field1954_0x9aa;
      iVar2 = thunk_FUN_004d89b0(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8940(recordIndex,param_4);
      param_4 = iVar4 * param_4;
    }
    else if (param_2 == 0xe2) {
      iVar4 = g_packedRecords_A62x8[param_1].field1958_0x9ba;
      iVar2 = thunk_FUN_004d8af0(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004e43c0(param_1,param_4);
      param_4 = param_4 / iVar4;
    }
    else {
      if ((param_2 != 0xe3) || (uVar3 = thunk_FUN_004e41c0(param_1), (int)uVar3 < param_4))
      goto cf_common_exit_004EB53A;
      thunk_FUN_004e4330(param_1,param_4);
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 != 0xdd) {
      if (param_3 == 0xe2) {
        thunk_FUN_004e4380(param_1,g_packedRecords_A62x8[param_1].field1956_0x9b2 * param_4);
      }
      else if (param_3 == 0xe3) {
        thunk_FUN_004e4230(param_1,param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar4 = param_4 / (int)g_packedRecords_A62x8[param_1].field1952_0x9a2;
  }
  else {
    if (param_2 == 0xdc) {
      iVar4 = thunk_FUN_004d8870(recordIndex);
      if (iVar4 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8800(recordIndex,param_4);
    }
    else if (param_2 == 0xdd) {
      iVar4 = g_packedRecords_A62x8[param_1].field1954_0x9aa;
      iVar2 = thunk_FUN_004d89b0(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8940(recordIndex,param_4);
      param_4 = param_4 / iVar4;
    }
    else {
      if (param_2 != 0xde) goto cf_common_exit_004EB53A;
      iVar4 = g_packedRecords_A62x8[param_1].field1958_0x9ba;
      iVar2 = thunk_FUN_004d8af0(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      thunk_FUN_004d8a80(recordIndex,param_4);
      param_4 = param_4 / iVar4;
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 == 0xdc) {
      thunk_FUN_004d87b0(recordIndex,param_4);
      goto cf_common_exit_004EB53A;
    }
    if (param_3 != 0xdd) {
      if (param_3 == 0xde) {
        thunk_FUN_004d8a30(recordIndex,g_packedRecords_A62x8[param_1].field1956_0x9b2 * param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar4 = g_packedRecords_A62x8[param_1].field1952_0x9a2 * param_4;
  }
  thunk_FUN_004d88f0(recordIndex,iVar4);
cf_common_exit_004EB53A:
  thunk_FUN_004d78e0(recordIndex);
  if (param_1 == DAT_0080874d) {
    thunk_FUN_004d8b70(recordIndex);
  }
  return 0;
}

