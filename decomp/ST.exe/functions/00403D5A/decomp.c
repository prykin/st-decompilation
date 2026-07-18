
void __thiscall thunk_FUN_004cfff0(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  if (param_1 == 9) {
    iVar2 = *(int *)((int)this + 0x4d0);
  }
  else {
    if (param_1 == 0xd) {
      *param_4 = 0;
      *param_3 = 0;
      return;
    }
    if (param_1 != 0xe) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8) + -0x10;
    *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
LAB_004d014f:
    iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar1;
    *param_4 = iVar1;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_3 = iVar1 + -0x10;
      *param_4 = iVar1 + -0x10;
      return;
    }
    if (iVar2 != 1) goto LAB_004d014f;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8) + -0x10;
  return;
}

