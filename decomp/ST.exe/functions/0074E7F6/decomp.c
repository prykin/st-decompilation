
/* [STVTableApplier] Virtual slot 007A1C08+0xC */

undefined4 * __thiscall FUN_0074e7f6(int param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + -8);
  FUN_0074e823((-(uint)(puVar1 != (undefined4 *)0x0) & param_1 - 4U) + 4);
  if ((param_2 & 1) != 0) {
    Library::MSVCRT::FUN_0072e2b0(puVar1);
  }
  return puVar1;
}

