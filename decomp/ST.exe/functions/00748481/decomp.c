
/* [STVTableApplier] Virtual slot 007A1868+0x40
   
   [STVTableApplier] Virtual slot 007A19F0+0x40 */

undefined4 __thiscall
FUN_00748481(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

