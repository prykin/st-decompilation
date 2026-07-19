
/* [STVTableApplier] Virtual slot 007A1868+0x44
   
   [STVTableApplier] Virtual slot 007A19F0+0x44 */

undefined4 __thiscall FUN_007484ab(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80040209;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return uVar2;
}

