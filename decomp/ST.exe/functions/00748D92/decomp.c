
/* [STVTableApplier] Virtual slot 0079DD34+0x30
   
   [STVTableApplier] Virtual slot 007A1148+0x30 */

undefined4 FUN_00748d92(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) < param_2) {
    uVar1 = 0x8004020d;
  }
  else {
    *(int *)(param_1 + 0x10) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

