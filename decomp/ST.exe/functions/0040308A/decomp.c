
void __cdecl
thunk_FUN_006a2e50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char *param_6,
                  int param_7,int param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_6;
  if (0 < param_8) {
    param_6 = (char *)param_8;
    iVar2 = param_3 * param_4 + param_1 + param_2;
    do {
      if (0 < param_7) {
        param_8 = param_7;
        pcVar1 = pcVar3;
        do {
          if (*pcVar1 != '\0') {
            pcVar1[iVar2 - (int)pcVar3] = *pcVar1;
          }
          pcVar1 = pcVar1 + 1;
          param_8 = param_8 + -1;
        } while (param_8 != 0);
      }
      iVar2 = iVar2 + param_4;
      pcVar3 = pcVar3 + param_7;
      param_6 = param_6 + -1;
    } while (param_6 != (char *)0x0);
  }
  return;
}

