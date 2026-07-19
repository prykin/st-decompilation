
/* [STVTableApplier] Virtual slot 0079DED8+0x18
   
   [STVTableApplier] Virtual slot 007A17C8+0x18
   
   [STVTableApplier] Virtual slot 007A1950+0x18 */

undefined4 __fastcall FUN_007489a5(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  *(undefined1 *)(param_1 + 0xa1) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

