
char * FUN_006b7780(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;

  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar3 = param_1;
  if (param_1 == (char *)0x0) {
    param_1 = param_2;
    pcVar3 = param_2;
  }
  do {
    cVar2 = *param_2;
    while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
    cVar2 = *param_2;
    while (((cVar2 != '\0' && (cVar2 != ' ')) && (cVar2 != '\t'))) {
      *pcVar3 = cVar2;
      pcVar1 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  } while (*param_2 != '\0');
  *pcVar3 = '\0';
  return param_1;
}

