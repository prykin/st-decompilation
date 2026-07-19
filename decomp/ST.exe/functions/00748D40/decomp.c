
/* [STVTableApplier] Virtual slot 0079DD34+0x40
   
   [STVTableApplier] Virtual slot 007A1148+0x40 */

undefined4 FUN_00748d40(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  return 0;
}

