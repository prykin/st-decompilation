
char * FUN_006b8240(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;

  if (param_1 == nullptr) {
    return nullptr;
  }
  iVar2 = 0;
  if (0 < param_2) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      if (param_2 <= iVar2) {
        return param_1;
      }
    }
    param_1 = nullptr;
  }
  return param_1;
}

