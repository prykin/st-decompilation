
/* [STVTableApplier] Virtual slot 007A1868+0x54
   
   [STVTableApplier] Virtual slot 007A19F0+0x54 */

undefined4 __fastcall FUN_0074853b(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0x80040209;
  }
  uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
  return uVar2;
}

