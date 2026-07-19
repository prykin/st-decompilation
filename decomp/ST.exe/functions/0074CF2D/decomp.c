
/* [STVTableApplier] Virtual slot 0079DE90+0x30
   
   [STVTableApplier] Virtual slot 007A1908+0x30 */

undefined4 FUN_0074cf2d(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xd4) + 0x90) + 0x18);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80040209;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
  }
  return uVar2;
}

