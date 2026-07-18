
void FUN_006b78c0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if ((param_1 != (char *)0x0) && (param_1 != param_2)) {
    pcVar5 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    pcVar4 = param_2;
    for (uVar3 = uVar2 & 3; param_2 = param_1, uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((uVar2 != 1) && ((param_2[uVar2 - 2] == '\\' || (param_2[uVar2 - 2] == '/')))) {
    param_2[uVar2 - 2] = '\0';
  }
  return;
}

