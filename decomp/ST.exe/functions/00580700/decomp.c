
void __thiscall FUN_00580700(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;

  *param_1 = 4;
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  param_1[2] = 0;
  param_1[1] = uVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar2;
  iVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1[7] = (char)iVar3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x18);
  param_1[0x2e - *(int *)((int)this + 0x24d)] = 1;
  param_1[0x1b] = 100;
  param_1[0x1d] = 1;
  return;
}

