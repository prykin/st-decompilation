
/* [STVTableApplier] Virtual slot 007A1868+0x20 */

undefined4 __thiscall FUN_0074c7f6(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(int **)(param_1 + 0xa0))[0x23];
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x2c))(iVar1 + 0x1c,param_2);
  }
  return uVar2;
}

