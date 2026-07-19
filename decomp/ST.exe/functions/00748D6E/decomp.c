
/* [STVTableApplier] Virtual slot 0079DD34+0x28
   
   [STVTableApplier] Virtual slot 007A1148+0x28 */

undefined4 FUN_00748d6e(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  return 0;
}

