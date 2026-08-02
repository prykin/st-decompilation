
undefined4 __fastcall FUN_004cd480(AnonShape_004CC900_31EE9CAA *param_1)

{
  int local_EAX_19;
  uint uVar2;
  int iVar3;
  int local_EAX_235;
  int uVar1;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;

  iVar4 = 0;
  local_EAX_19 = LookupRecordByte(param_1->field_0x464);
  uVar2 = local_EAX_19 & 0xff;
  if (uVar2 == 1) {
    iVar3 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x464,0x98);
joined_r0x004cd4ea:
    if (iVar3 != 0) {
      iVar4 = 1;
    }
  }
  else {
    if (uVar2 == 2) {
      iVar3 = *(int *)&param_1->field_0x464;
      iVar6 = 0x94;
LAB_004cd4c0:
      iVar3 = thunk_FUN_004e60d0(iVar3,iVar6);
      goto joined_r0x004cd4ea;
    }
    if (uVar2 == 3) {
      iVar3 = *(int *)&param_1->field_0x464;
      iVar6 = 0x90;
      goto LAB_004cd4c0;
    }
  }
  if (g_playSystem_00802A38->field_00E4 <
      (uint)((&DAT_007914d8)[iVar4] + *(int *)&param_1->field_0x468)) {
    return 0;
  }
  uVar2 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar2;
  if ((uVar2 & 0x30000) < 0x20001) {
    uVar5 = 1;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    local_EAX_235 = LookupRecordByte(param_1->field_0x24);
    uVar2 = local_EAX_235 & 0xff;
    if (uVar2 == 1) {
      iVar4 = *(int *)param_1;
      uVar7 = 0x7a;
    }
    else {
      if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0x90))(6,0x7b);
        thunk_FUN_004cd450(param_1);
        return 1;
      }
      if (uVar2 != 3) goto cf_common_exit_004CD624;
      iVar4 = *(int *)param_1;
      uVar7 = 0x7c;
    }
  }
  else {
    uVar5 = 2;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    thunk_FUN_0052af50(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    uVar1 = LookupRecordByte(param_1->field_0x24);
    uVar2 = uVar1 & 0xff;
    if (uVar2 == 1) {
      iVar4 = *(int *)param_1;
      uVar7 = 0x7d;
    }
    else {
      if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0x90))(6,0x7e);
        thunk_FUN_004cd450(param_1);
        return 2;
      }
      if (uVar2 != 3) goto cf_common_exit_004CD624;
      iVar4 = *(int *)param_1;
      uVar7 = 0x7f;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(iVar4 + 0x90))(6,uVar7);
cf_common_exit_004CD624:
  thunk_FUN_004cd450(param_1);
  return uVar5;
}

