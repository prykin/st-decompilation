
undefined4 __thiscall FUN_00747429(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_8;

  puVar1 = *(undefined4 **)((int)this + 0x40);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004002;
  }
  else {
    local_8 = this;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1af0,&local_8);
    if (iVar2 < 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                        (*(int **)((int)this + 0x40),param_1);
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(*local_8 + 0x4c))(local_8,param_1,param_2);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return uVar3;
}

