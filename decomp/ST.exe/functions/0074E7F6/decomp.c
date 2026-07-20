
/* [STVTableApplier] Virtual slot 007A1C08+0xC */

HoloTy * __thiscall FUN_0074e7f6(int param_1,byte param_2)

{
  HoloTy *pHVar1;
  
  pHVar1 = (HoloTy *)(param_1 + -8);
  FUN_0074e823((-(uint)(pHVar1 != (HoloTy *)0x0) & param_1 - 4U) + 4);
  if ((param_2 & 1) != 0) {
    Library::MSVCRT::FUN_0072e2b0(pHVar1);
  }
  return pHVar1;
}

