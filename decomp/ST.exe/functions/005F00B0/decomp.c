
void __thiscall FUN_005f00b0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char local_14 [16];

  *param_1 = 4;
  param_1[1] = *(undefined1 *)((int)this + 0x21d);
  param_1[2] = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x18);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x74))(local_14);
  Library::MSVCRT::_strncpy(param_1 + 0xc,local_14,0xe);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  param_1[0x1b] = uVar2;
  iVar1 = *(int *)((int)this + 0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    param_1[0x1d] = 1;
  }
  return;
}

