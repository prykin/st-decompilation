#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004cd480(AnonShape_004CC900_31EE9CAA *param_1)

{
  int local_EAX_19;
  int iVar1;
  uint uVar2;
  int local_EAX_235;
  int uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  iVar3 = 0;
  /* ST_CALLSITE[004CD493]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  local_EAX_19 = LookupRecordByte(param_1->field_0x464);
  local_EAX_19 = (int)(byte)local_EAX_19;
  if (local_EAX_19 == 1) {
    iVar1 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x464,0x98);
joined_r0x004cd4ea:
    if (iVar1 != 0) {
      iVar3 = 1;
    }
  }
  else {
    if (local_EAX_19 == 2) {
      iVar1 = *(int *)&param_1->field_0x464;
      iVar5 = 0x94;
LAB_004cd4c0:
      iVar1 = thunk_FUN_004e60d0(iVar1,iVar5);
      goto joined_r0x004cd4ea;
    }
    if (local_EAX_19 == 3) {
      iVar1 = *(int *)&param_1->field_0x464;
      iVar5 = 0x90;
      goto LAB_004cd4c0;
    }
  }
  if (g_playSystem_00802A38->field_00E4 <
      (uint)((&DAT_007914d8)[iVar3] + *(int *)&param_1->field_0x468)) {
    return 0;
  }
  uVar2 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar2;
  if ((uVar2 & 0x30000) < 0x20001) {
    uVar4 = 1;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    /* ST_CALLSITE[004CD56B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    local_EAX_235 = LookupRecordByte(param_1->field_0x24);
    local_EAX_235 = (int)(byte)local_EAX_235;
    if (local_EAX_235 == 1) {
      iVar3 = param_1->field_0000;
      uVar6 = 0x7a;
    }
    else {
      if (local_EAX_235 == 2) {
        /* ST_CALLSITE[004CD593]: CALL dword ptr [EAX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(param_1->field_0000 + 0x90))(6,0x7b);
        thunk_FUN_004cd450(param_1);
        return 1;
      }
      if (local_EAX_235 != 3) goto cf_common_exit_004CD624;
      iVar3 = param_1->field_0000;
      uVar6 = 0x7c;
    }
  }
  else {
    uVar4 = 2;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    /* ST_CALLSITE[004CD5E3]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar1 = LookupRecordByte(param_1->field_0x24);
    uVar1 = (int)(byte)uVar1;
    if (uVar1 == 1) {
      iVar3 = param_1->field_0000;
      uVar6 = 0x7d;
    }
    else {
      if (uVar1 == 2) {
        /* ST_CALLSITE[004CD604]: CALL dword ptr [EAX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(param_1->field_0000 + 0x90))(6,0x7e);
        thunk_FUN_004cd450(param_1);
        return 2;
      }
      if (uVar1 != 3) goto cf_common_exit_004CD624;
      iVar3 = param_1->field_0000;
      uVar6 = 0x7f;
    }
  }
  /* ST_CALLSITE[004CD61E]: CALL dword ptr [EDX + 0x90] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(iVar3 + 0x90))(6,uVar6);
cf_common_exit_004CD624:
  thunk_FUN_004cd450(param_1);
  return uVar4;
}

