
/* [STVTableApplier] Virtual slot 0079DED8+0x38
   
   [STVTableApplier] Virtual slot 007A17C8+0x38
   
   [STVTableApplier] Virtual slot 007A1950+0x38 */

uint __fastcall FUN_0074c35b(int param_1)

{
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x90) + 0x18) == 0) {
    return 0x80040209;
  }
  if (*(int *)(*(int *)(param_1 + 0x70) + 0x14) == 0) {
    return 0x80040227;
  }
  return -(uint)(*(int *)(param_1 + 0x6c) != 0) & 0x8004020b;
}

