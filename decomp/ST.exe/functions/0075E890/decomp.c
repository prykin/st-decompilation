
void FUN_0075e890(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_188 [256];
  byte local_88 [128];
  int local_8;
  
  local_8 = *(int *)(*(int *)(param_1 + 0x1ba) + 0x18);
  iVar4 = (param_4 >> 2) * 0x20 + 4;
  piVar6 = (int *)((param_3 >> 3) * 0x20 + 2);
  iVar5 = (param_2 >> 2) * 0x20 + 4;
  iVar1 = FUN_0075e980(param_1,iVar5,piVar6,iVar4,(int)local_188);
  FUN_0075eb40((AnonShape_0075EB40_977462DD *)param_1,iVar5,(int)piVar6,iVar4,iVar1,(int)local_188,
               local_88);
  param_1 = 4;
  pbVar3 = local_88;
  piVar6 = (int *)(local_8 + (param_2 >> 2) * 0x10);
  do {
    param_2 = 8;
    iVar1 = ((param_3 >> 3) * 0x100 + (param_4 >> 2) * 4) * 2;
    do {
      iVar4 = 4;
      psVar2 = (short *)(*piVar6 + iVar1);
      do {
        *psVar2 = *pbVar3 + 1;
        psVar2 = psVar2 + 1;
        pbVar3 = pbVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar1 = iVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    piVar6 = piVar6 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}

