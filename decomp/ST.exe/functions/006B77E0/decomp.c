
char * FUN_006b77e0(char *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = FUN_00734030((uint)*param_2);
  cVar1 = (char)uVar2;
  *param_1 = cVar1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
    uVar2 = FUN_00734030((uint)*param_2);
    cVar1 = (char)uVar2;
    *pcVar3 = cVar1;
  }
  return param_1;
}

