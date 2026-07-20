
void __fastcall FUN_0074de91(undefined4 *param_1)

{
  HoloTy *pHVar1;
  HoloTy *pHVar2;
  
  pHVar2 = (HoloTy *)*param_1;
  while (pHVar2 != (HoloTy *)0x0) {
    pHVar1 = *(HoloTy **)((int)&pHVar2->field_0003 + 1);
    Library::MSVCRT::FUN_0072e2b0(pHVar2);
    pHVar2 = pHVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

