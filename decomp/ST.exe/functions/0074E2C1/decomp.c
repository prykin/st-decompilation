
void __fastcall FUN_0074e2c1(int param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;

  pHVar2 = *(HoloTy **)(param_1 + 8);
  while (pHVar2 != (HoloTy *)0x0) {
    pHVar1 = *(HoloTy **)((int)&pHVar2->field_0003 + 1);
    Library::MSVCRT::FUN_0072e2b0(pHVar2);
    pHVar2 = pHVar1;
  }
  return;
}

