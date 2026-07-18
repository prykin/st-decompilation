
void __thiscall
thunk_FUN_004df6f0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar5 = (uVar4 & 0xff) - 1;
  if (param_1 == 0xc) {
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        *param_3 = *(undefined4 *)
                    ((&PTR_DAT_007b8310)[iVar1] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = *(undefined4 *)
                    ((&PTR_DAT_007b8310)[iVar1] +
                    (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        return;
      }
      if (iVar2 != 2) {
        return;
      }
    }
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  }
  if ((param_1 < 0xd) || (0xe < param_1)) {
    *param_3 = *(undefined4 *)
                ((&PTR_DAT_007b5170)[iVar1] +
                (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(undefined4 *)
                ((&PTR_DAT_007b5170)[iVar1] +
                (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    return;
  }
  iVar2 = *(int *)((int)this + 0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = *(undefined4 *)
               ((&PTR_DAT_007b5170)[iVar1] +
               (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  uVar3 = *(undefined4 *)
           ((&PTR_DAT_007b5170)[iVar1] +
           (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = uVar3;
  *param_3 = uVar3;
  return;
}

