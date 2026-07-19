
/* [STVTableApplier] Virtual slot 0079DD34+0x20
   
   [STVTableApplier] Virtual slot 007A1148+0x20 */

undefined4 FUN_00748d11(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  return 0;
}

