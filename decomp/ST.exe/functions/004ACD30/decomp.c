
undefined4 __thiscall FUN_004acd30(void *this,char param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)((int)this + 0x20) + param_1 * 0x24);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar1;
}

