
int FUN_006b5aa0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8)) {
    iVar1 = FUN_006b5480(param_1);
    if (iVar1 != 0) {
      FUN_006a5e40(iVar1,DAT_007ed77c,0x7edb80,0xe);
      return iVar1;
    }
  }
  pcVar2 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar2 = FUN_006c49b0(param_2);
    if (pcVar2 == (char *)0x0) {
      return -2;
    }
  }
  *(char **)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8) * 4) = pcVar2;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  return iVar1;
}

