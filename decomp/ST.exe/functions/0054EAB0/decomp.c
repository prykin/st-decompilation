
undefined4 * __thiscall FUN_0054eab0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x65);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (param_2 == (undefined4 *)0x0) {
    return puVar1 + 2;
  }
  *param_2 = puVar1[1];
  return puVar1 + 2;
}

