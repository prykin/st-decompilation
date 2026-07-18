
/* WARNING: Removing unreachable block (ram,0x006c29a8) */

char * FUN_006c2980(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_2 + (~uVar3 - 1);
  do {
    pcVar2 = pcVar4;
    if (pcVar2 <= param_2) break;
    pcVar4 = pcVar2 + -1;
  } while ((*pcVar4 == ' ') || (*pcVar4 == '\t'));
  if ((param_1 != (char *)0x0) && (param_1 != param_2)) {
    uVar5 = (int)pcVar2 - (int)param_2;
    pcVar4 = param_1;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    param_1[uVar5] = '\0';
    return param_1;
  }
  *pcVar2 = '\0';
  return param_2;
}

