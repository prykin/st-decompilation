
/* [STVTableApplier] Virtual slot 007A1868+0x4C
   
   [STVTableApplier] Virtual slot 007A19F0+0x4C */

undefined4 __fastcall FUN_007484c9(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0x80040209;
  }
  uVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
  return uVar2;
}

