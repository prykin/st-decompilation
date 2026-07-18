
undefined4 __cdecl FUN_006b0f80(uint *param_1,uint *param_2)

{
  if (((((*param_1 & *param_2) == *param_2) && ((param_1[1] & param_2[1]) == param_2[1])) &&
      ((param_1[2] & param_2[2]) == param_2[2])) && ((param_1[3] & param_2[3]) == param_2[3])) {
    return 1;
  }
  return 0;
}

