
/* [STVTableApplier] Virtual slot 0079DDEC+0x5C */

undefined4 __fastcall FUN_0074c1dc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x50))();
  }
  return uVar1;
}

