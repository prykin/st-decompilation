
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0074B719 -> 00747406 @ 0074B744 */

undefined4 __thiscall FUN_00747406(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x44);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80004001;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

