
int __thiscall FUN_0040cc80(void *this,uint param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;
  
  iVar1 = thunk_FUN_00423e70(this,param_1);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x9f) == 0)) {
    return -4;
  }
  local_8 = *(int *)(iVar1 + 0xa7);
  param_1 = 0;
  if (-1 < local_8) {
    psVar4 = (short *)(*(int *)(iVar1 + 0x9f) + local_8 * 0x48);
    while (-2 < (int)param_1) {
      iVar3 = 0;
      psVar2 = psVar4;
      do {
        if (((*psVar2 == *(short *)(iVar1 + 0x47)) && (psVar2[1] == *(short *)(iVar1 + 0x49))) &&
           (psVar2[2] == *(short *)(iVar1 + 0x4b))) goto LAB_0040cd0a;
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 4;
      } while (iVar3 < 9);
      param_1 = param_1 - 1;
      psVar4 = psVar4 + -0x24;
      local_8 = local_8 + -1;
      if (local_8 < 0) break;
    }
  }
  param_1 = 0;
LAB_0040cd0a:
  iVar5 = 0;
  iVar3 = param_1 + 1 + *(int *)(iVar1 + 0xa7);
  psVar4 = (short *)(*(int *)(iVar1 + 0x9f) + iVar3 * 0x48);
  if (iVar3 < *(int *)(iVar1 + 0xa3)) {
    iVar3 = *(int *)(iVar1 + 0xa3) - iVar3;
    do {
      if (((*psVar4 != psVar4[-0x24]) || (psVar4[1] != psVar4[-0x23])) ||
         (psVar4[2] != psVar4[-0x22])) {
        iVar5 = iVar5 + 1;
      }
      psVar4 = psVar4 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar5;
}

