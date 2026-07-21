
undefined4 __thiscall FUN_0060bdd0(void *this,undefined4 *param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *local_58 [6];
  undefined4 local_40;
  int local_38 [3];
  undefined2 local_2c;
  undefined2 local_2a;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  ppiVar2 = local_58;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppiVar2 = (int *)0x0;
    ppiVar2 = ppiVar2 + 1;
  }
  piVar3 = local_38;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_58[3] = (int *)0x4;
  local_58[2] = (int *)param_1[6];
  local_38[1] = *(undefined4 *)((int)this + 0x1f5);
  switch(local_38[1]) {
  case 0x42:
    local_38[2] = *(undefined4 *)((int)this + 0x1d9);
    local_38[0] = DAT_007e67b0;
    local_38[1] = 0x42;
    iVar1 = GetPlayerRaceId(*(char *)(param_1 + 9));
    if ((char)iVar1 == '\x03') {
      iVar1 = thunk_FUN_004e60d0(param_1[9],0x6a);
    }
    else {
      iVar1 = thunk_FUN_004e60d0(param_1[9],0x2d);
    }
    if (iVar1 != 0) {
      local_38[0] = local_38[0] - ((int)(local_38[0] + (local_38[0] >> 0x1f & 3U)) >> 2);
    }
    local_2c = *(undefined2 *)((int)this + 0x205);
    local_2a = *(undefined2 *)((int)this + 0x201);
    local_58[5] = local_38;
    local_58[4] = (int *)0x110;
    break;
  case 0x43:
    local_10 = *(int *)((int)this + 0x1d9);
    local_c = 100;
    local_8 = 0;
    local_58[4] = (int *)0x121;
    local_58[5] = &local_10;
    break;
  case 0x4c:
    local_1c = *(int *)((int)this + 0x1d9);
    local_58[5] = &local_1c;
    local_14 = 0x19;
    local_18 = 0x41;
    local_58[4] = (int *)0x122;
    break;
  case 0x65:
    local_38[2] = *(undefined4 *)((int)this + 0x1d9);
    local_2c = *(undefined2 *)((int)this + 0x205);
    local_2a = *(undefined2 *)((int)this + 0x201);
    local_38[0] = DAT_007e67c4;
    local_38[1] = 0x65;
    local_58[4] = (int *)0x110;
    local_58[5] = local_38;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*param_1)(local_58);
  return local_40;
}

