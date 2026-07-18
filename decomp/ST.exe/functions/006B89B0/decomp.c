
int FUN_006b89b0(byte *param_1,int param_2)

{
  int iVar1;
  int local_14 [4];
  
  iVar1 = 0;
  if (((*(uint *)(param_1 + 4) & 0x8000) != 0) && ((*(uint *)(param_1 + 4) & 0x3000) != 0)) {
    iVar1 = FUN_006b8f10(param_1,local_14);
    if (iVar1 != 0) goto LAB_006b89fa;
    if (param_2 != 0) {
      iVar1 = FUN_006b92b0((int *)param_1,local_14);
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffcfff;
  if (iVar1 == 0) {
    return 0;
  }
LAB_006b89fa:
  FUN_006a5e40(iVar1,DAT_007ed77c,0x7edc18,0x3f);
  return iVar1;
}

