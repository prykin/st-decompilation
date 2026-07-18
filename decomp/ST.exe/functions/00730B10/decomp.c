
char * __cdecl FUN_00730b10(char *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint local_18;
  char local_10;
  char *local_c;
  
  local_c = param_1;
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79ff24,0x3b,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    pcVar3 = (char *)(*pcVar1)();
    return pcVar3;
  }
  if ((param_3 == (int *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79ff24,0x3c,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    pcVar3 = (char *)(*pcVar1)();
    return pcVar3;
  }
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) break;
      param_3[1] = param_3[1] + -1;
      if (param_3[1] < 0) {
        local_18 = FUN_0073cd70(param_3);
      }
      else {
        local_18 = (uint)*(byte *)*param_3;
        *param_3 = *param_3 + 1;
      }
      if (local_18 == 0xffffffff) {
        if (local_c == param_1) {
          return (char *)0x0;
        }
        break;
      }
      local_10 = (char)local_18;
      *local_c = local_10;
      local_c = local_c + 1;
    } while (local_10 != '\n');
    *local_c = '\0';
  }
  return param_1;
}

