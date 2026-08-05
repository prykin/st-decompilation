
void __thiscall FUN_00626fc0(void *this,char *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  if (*(int *)((int)this + 0x2ae) == 4) {
    *param_1 = '\x04';
  }
  else {
    *param_1 = ((*(uint *)((int)this + 0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  param_1[1] = '\x01';
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  bVar1 = LookupRecordByte(*(char *)((int)this + 0x24));
  param_1[6] = bVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

