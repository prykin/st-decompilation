
void __fastcall FUN_006dbcf0(int *param_1)

{
  int *piVar1;
  
  FUN_006dbab0(param_1);
  piVar1 = (int *)param_1[0xd6];
  if (piVar1 != (int *)0x0) {
    FUN_006dbcf0(piVar1);
    Library::MSVCRT::FUN_0072e2b0(piVar1);
  }
  return;
}

