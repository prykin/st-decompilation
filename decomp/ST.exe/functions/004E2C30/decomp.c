
undefined4 __thiscall FUN_004e2c30(void *this,uint param_1)

{
  undefined1 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  short local_46;
  byte local_40 [20];
  undefined4 local_2c [5];
  byte *local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;

  uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),param_1);
  iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,uVar1) <= iVar2) goto cf_common_exit_004E2FE4;
  iVar2 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\f');
  if (iVar2 != *(int *)(*(int *)((int)this + 0x1f5) + 0x1c4)) {
    return 0;
  }
  local_10 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_1);
  iVar2 = *(int *)((int)this + 0x24);
  puVar6 = &g_playerRuntime[iVar2].field480_0x2eb;
  puVar7 = local_2c;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &g_playerRuntime[iVar2].field494_0x2ff;
  pbVar8 = local_40;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pbVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    pbVar8 = pbVar8 + 4;
  }
  thunk_FUN_004e6310(iVar2,param_1,local_10 + 1);
  thunk_FUN_004e5f20(*(int *)((int)this + 0x24),param_1);
  if (DAT_008117bc != (undefined4 *)0x0) {
    iVar2 = *(int *)((int)this + 0x24);
    puVar6 = local_60;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_4a = *(undefined2 *)((int)this + 0x32);
    local_4c = *(undefined2 *)((int)this + 0x24);
    local_50 = 0x5de7;
    local_48 = (undefined2)param_1;
    uVar3 = thunk_FUN_004e60d0(iVar2,param_1);
    local_46 = (short)uVar3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_60);
    puVar6 = local_60;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_4c = *(undefined2 *)((int)this + 0x24);
    local_14 = local_2c;
    local_50 = 0x5dea;
    local_10 = 0;
    do {
      uVar4 = local_10;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((((*(byte *)((int)local_14 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) !=
             0) && (local_18 = local_40,
                   (local_18[(int)(local_10 ^ 7) >> 3] >> ((local_10 ^ 7) & 7) & 1) == 0)) &&
          (local_18 = (byte *)&g_playerRuntime[*(int *)((int)this + 0x24)].field480_0x2eb,
          (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0))
         && (local_18 = (byte *)&g_playerRuntime[*(int *)((int)this + 0x24)].field494_0x2ff,
            (*(byte *)((int)local_18 + ((int)(local_10 ^ 7) >> 3)) >> ((local_10 ^ 7) & 7) & 1) != 0
            )) {
        uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),local_10);
        iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),uVar4);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (iVar2 < CONCAT31(extraout_var_00,uVar1)) {
          local_48 = (undefined2)uVar4;
          uVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),uVar4);
          local_46 = (short)uVar3 + 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_60);
        }
      }
      local_10 = uVar4 + 1;
    } while ((int)local_10 < 0x9b);
  }
  if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
  goto cf_common_exit_004E2FE4;
  thunk_FUN_0052af50(0,*(float *)((int)this + 0x1f9),*(float *)((int)this + 0x1fd));
  piVar10 = &local_c;
  piVar9 = &local_8;
  local_8 = 0;
  local_c = 0;
  uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  thunk_FUN_004e6e10(uVar4 & 0xff,param_1,piVar9,piVar10);
  if (local_8 != 0) {
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      iVar2 = *(int *)this;
      uVar3 = 0x5f;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004e2efc:
      (**(code **)(iVar2 + 0x90))(6,uVar3);
    }
    else if (uVar4 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(6,0x60);
    }
    else if (uVar4 == 3) {
      iVar2 = *(int *)this;
      uVar3 = 0x61;
      goto LAB_004e2efc;
    }
  }
  if (local_c != 0) {
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      iVar2 = *(int *)this;
      uVar3 = 0x5c;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004e2f42:
      (**(code **)(iVar2 + 0x90))(6,uVar3);
    }
    else if (uVar4 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(6,0x5d);
    }
    else if (uVar4 == 3) {
      iVar2 = *(int *)this;
      uVar3 = 0x5e;
      goto LAB_004e2f42;
    }
  }
  if ((local_8 == 0) && (local_c == 0)) {
    uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    uVar4 = uVar4 & 0xff;
    if (uVar4 == 1) {
      iVar2 = *(int *)this;
      uVar3 = 0x59;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004e2f8d:
      (**(code **)(iVar2 + 0x90))(6,uVar3);
    }
    else if (uVar4 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(6,0x5a);
    }
    else if (uVar4 == 3) {
      iVar2 = *(int *)this;
      uVar3 = 0x5b;
      goto LAB_004e2f8d;
    }
  }
  uVar4 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    iVar2 = *(int *)this;
    uVar3 = 0x20d;
  }
  else {
    if (uVar4 == 2) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(4,0x2d5);
      goto cf_common_exit_004E2FE4;
    }
    if (uVar4 != 3) goto cf_common_exit_004E2FE4;
    iVar2 = *(int *)this;
    uVar3 = 0x390;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(iVar2 + 0x90))(4,uVar3);
cf_common_exit_004E2FE4:
  *(undefined4 *)((int)this + 0x4d0) = 0;
  TLOBaseTy::RotateSpr(this,1);
  return 1;
}

