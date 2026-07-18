
uint FUN_006c8950(uint param_1,uint param_2,byte param_3)

{
  if (1 < param_3) {
    return param_1 ^ param_2;
  }
  if (param_3 == 0) {
    return ~param_2 & param_1;
  }
  return param_1 | param_2;
}

