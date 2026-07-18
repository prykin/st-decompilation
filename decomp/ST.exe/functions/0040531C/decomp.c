
undefined4 __thiscall
thunk_FUN_005f9cb0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0x2e6);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (*(short *)(iVar2 + 0x32) == -1) {
    iVar4 = *(int *)(iVar2 + 0x60) - (param_1 - *(int *)(iVar2 + 0x68)) * *(int *)(iVar2 + 100);
    if (iVar4 < 1) {
      param_1 = 3;
      iVar4 = 0;
      goto LAB_005f9d2f;
    }
  }
  else {
    if (*(short *)(iVar2 + 0x32) != 1) {
      return 0;
    }
    iVar4 = (param_1 - *(int *)(iVar2 + 0x68)) * *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x60);
    if (*(int *)(iVar2 + 0x5c) <= iVar4) {
      param_1 = 3;
      iVar4 = *(int *)(iVar2 + 0x5c) + -1;
      goto LAB_005f9d2f;
    }
  }
  param_1 = 1;
LAB_005f9d2f:
  iVar3 = (int)*(short *)(*(int *)(iVar2 + 0x58) + 2 + iVar4 * 4);
  sVar1 = *(short *)(*(int *)(iVar2 + 0x58) + iVar4 * 4);
  *param_2 = (*(int *)(iVar2 + 0x50) * iVar3) / 10000 + *(int *)(iVar2 + 0x34);
  *param_3 = (*(int *)(*(int *)((int)this + 0x2e6) + 0x54) * iVar3) / 10000 +
             *(int *)(*(int *)((int)this + 0x2e6) + 0x38);
  iVar2 = *(int *)((int)this + 0x2e6);
  if (*(int *)(iVar2 + 0x14) != *(int *)(iVar2 + 0x34)) {
    *param_2 = *param_2 +
               ((*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x34)) * iVar4) / *(int *)(iVar2 + 0x5c);
  }
  iVar2 = *(int *)((int)this + 0x2e6);
  if (*(int *)(iVar2 + 0x18) != *(int *)(iVar2 + 0x38)) {
    *param_3 = *param_3 +
               ((*(int *)(iVar2 + 0x44) - *(int *)(iVar2 + 0x38)) * iVar4) / *(int *)(iVar2 + 0x5c);
  }
  *param_4 = *(int *)(*(int *)((int)this + 0x2e6) + 0x3c) - (int)sVar1;
  return param_1;
}

