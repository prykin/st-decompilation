
undefined4 __thiscall FUN_004e2ad0(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (param_1 != 2) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x4d0) = 1;
  TLOBaseTy::RotateSpr(this,1);
  thunk_FUN_004e5eb0(*(int *)((int)this + 0x24),param_2);
  if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
  goto cf_common_exit_004E2B69;
  uVar1 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar3 = *(int *)this;
    uVar5 = 0x20c;
  }
  else {
    if (uVar1 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(4,0x2d4);
      goto cf_common_exit_004E2B69;
    }
    if (uVar1 != 3) goto cf_common_exit_004E2B69;
    iVar3 = *(int *)this;
    uVar5 = 0x38f;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(iVar3 + 0x90))(4,uVar5);
cf_common_exit_004E2B69:
  if (DAT_008117bc == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x24);
  puVar4 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_e = *(undefined2 *)((int)this + 0x32);
  local_10 = *(undefined2 *)((int)this + 0x24);
  local_14 = 0x5de6;
  local_c = (undefined2)param_2;
  uVar5 = thunk_FUN_004e60d0(iVar3,param_2);
  local_a = (short)uVar5 + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*DAT_008117bc)(local_24);
  return 0;
}

