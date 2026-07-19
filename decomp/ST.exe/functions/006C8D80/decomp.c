
int FUN_006c8d80(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  pcVar2 = FUN_00730b10(param_2,param_3,param_1);
  if (pcVar2 == (char *)0x0) {
    if ((*(byte *)(param_1 + 3) & 0x20) == 0) {
      return -1;
    }
    RaiseInternalException(-0xc,DAT_007ed77c,s_E__DKW_FIO_C_frdslnch_c_007ee15c,0xe);
    return -0xc;
  }
  uVar3 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = uVar3 - 1;
  if (param_2[uVar3 - 2] == '\n') {
    param_2[uVar3 - 2] = '\0';
    return uVar3 - 2;
  }
  while( true ) {
    uVar3 = FUN_00734160(param_1);
    if (uVar3 == 10) {
      return iVar4;
    }
    if (uVar3 == 0x1a) break;
    if (uVar3 == 0xffffffff) {
      return iVar4;
    }
  }
  return iVar4;
}

