
undefined1 __cdecl FUN_006a3390(int param_1,int param_2,int param_3,int param_4)

{
  bool uVar1;

  uVar1 = 0 < param_1 - param_3 && param_2 == param_4;
  if ((param_1 - param_3 < 0) && (param_2 == param_4)) {
    uVar1 = true;
  }
  if ((0 < param_2 - param_4) && (param_1 == param_3)) {
    uVar1 = true;
  }
  if ((param_2 - param_4 < 0) && (param_1 == param_3)) {
    uVar1 = true;
  }
  return uVar1;
}

