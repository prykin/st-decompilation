
char * __cdecl FUN_007301e0(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_14;
  char *local_c;
  char *local_8;
  
  puVar2 = FUN_0073c590();
  if ((*(int *)(puVar2 + 4) + -1 < -1) || (param_3 + -1 < *(int *)(puVar2 + 4) + -1)) {
    local_c = FUN_00734cd0(&param_1,param_4,param_3 + -1,0);
    local_8 = local_c;
  }
  else {
    local_c = FUN_00734e90(&param_1,param_4,param_3 - *(int *)(puVar2 + 4));
    local_8 = local_c;
  }
  for (; (*local_8 != '\0' && (*local_8 != DAT_007f1490)); local_8 = local_8 + 1) {
  }
  if (*local_8 != '\0') {
    do {
      pcVar1 = local_8;
      local_8 = pcVar1 + 1;
      if (*local_8 == '\0') break;
    } while (*local_8 != 'e');
    local_14 = local_8;
    for (local_8 = pcVar1; *local_8 == '0'; local_8 = local_8 + -1) {
    }
    do {
      local_8 = local_8 + 1;
      *local_8 = *local_14;
      local_14 = local_14 + 1;
    } while (*local_8 != '\0');
  }
  return local_c;
}

