
void __thiscall FUN_004cfa00(void *this,undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar3 = (-(uint)((char)iVar2 != '\x01') & 0xfffffffd) + 0x13;
  uVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar2 = *(int *)((int)this + 0x245);
  iVar5 = (uVar4 & 0xff) - 1;
  switch(param_1) {
  case 8:
  case 9:
    iVar1 = *(int *)((int)this + 0x4d0);
    break;
  default:
    goto switchD_004cfa5c_caseD_a;
  case 0xd:
  case 0xe:
    iVar1 = *(int *)((int)this + 0x4d0);
  }
  if (iVar1 == 3) {
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar2;
    *param_4 = iVar2 + iVar3;
    return;
  }
  if (iVar1 == 4) {
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar2 + iVar3;
    *param_4 = iVar2 + iVar3;
    return;
  }
  if (iVar1 == 5) {
    iVar2 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = iVar2;
    *param_3 = iVar2 + iVar3;
    return;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                     (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar2] +
                     (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
switchD_004cfa5c_caseD_a:
  return;
}

