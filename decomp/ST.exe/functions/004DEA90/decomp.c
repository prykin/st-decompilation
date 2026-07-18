
void __thiscall FUN_004dea90(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar3 = (uVar2 & 0xff) - 1;
  if (param_1 == 0xe) {
    if (*(int *)((int)this + 0x361) != 6) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = iVar1;
      *param_3 = iVar1;
      return;
    }
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8) + 1;
  }
  else {
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  }
  *param_3 = iVar4;
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  return;
}

