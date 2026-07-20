
void __fastcall FUN_006dbcf0(int *param_1)

{
  HoloTy *pHVar1;
  
  FUN_006dbab0(param_1);
  pHVar1 = (HoloTy *)param_1[0xd6];
  if (pHVar1 != (HoloTy *)0x0) {
    FUN_006dbcf0((int *)pHVar1);
    Library::MSVCRT::FUN_0072e2b0(pHVar1);
  }
  return;
}

