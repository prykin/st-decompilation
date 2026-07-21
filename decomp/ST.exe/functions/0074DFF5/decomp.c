
undefined4 __thiscall FUN_0074dff5(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_8;

  local_8 = this;
  local_8 = (void *)FUN_0074deb7(param_1);
  do {
    if (local_8 == (void *)0x0) {
      return 1;
    }
    uVar1 = FUN_0074dec2((int *)&local_8);
    iVar2 = FUN_0074df72(this,uVar1);
  } while (iVar2 != 0);
  return 0;
}

