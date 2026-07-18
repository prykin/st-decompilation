
uint * __cdecl FUN_00746ac0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint local_8;
  
  if (DAT_0085a36c == 0) {
    param_1 = FUN_0072e560(param_1,(char)param_2);
  }
  else {
    while( true ) {
      local_8 = (uint)(byte)*param_1;
      if (local_8 == 0) break;
      if (((&DAT_0085a481)[local_8] & 4) == 0) {
        puVar1 = param_1;
        if (param_2 == local_8) break;
      }
      else {
        puVar1 = (uint *)((int)param_1 + 1);
        if (*(char *)puVar1 == '\0') {
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11((byte)*param_1,*(char *)puVar1)) {
          return param_1;
        }
      }
      param_1 = puVar1;
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (param_2 != local_8) {
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}

