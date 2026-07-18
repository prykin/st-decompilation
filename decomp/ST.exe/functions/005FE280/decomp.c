
undefined4 FUN_005fe280(short *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  psVar1 = param_1;
  iVar3 = thunk_FUN_005fd5c0((int *)((int)param_1 + 0x29),param_2,&param_2,(int *)&param_1);
  if (iVar3 == 1) {
    *param_3 = (*(int *)(psVar1 + 0xc) * param_2) / *(int *)(psVar1 + 0x10) + (int)*psVar1;
    *param_4 = (*(int *)(psVar1 + 0xe) * param_2) / *(int *)(psVar1 + 0x10) + (int)psVar1[1];
    *param_5 = (int)psVar1[2] - (int)param_1;
    return 1;
  }
  if (iVar3 == 2) {
    *param_3 = (int)*psVar1;
    *param_4 = (int)psVar1[1];
    *param_5 = (int)psVar1[2] - (iVar2 - *(int *)((int)psVar1 + 0x35)) * *(int *)(psVar1 + 0x12);
    return 1;
  }
  return 0;
}

