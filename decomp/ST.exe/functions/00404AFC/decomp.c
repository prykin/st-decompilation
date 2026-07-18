
void __thiscall
thunk_FUN_004dc4b0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  if ((0xc < param_1) && (param_1 < 0xf)) {
    switch(*(undefined4 *)((int)this + 0x4d0)) {
    case 0:
      uVar2 = *(undefined4 *)
               ((&PTR_DAT_007b5170)[iVar1] +
               (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    case 1:
      uVar2 = *(undefined4 *)
               ((&PTR_DAT_007b5170)[iVar1] +
               (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    case 2:
      *param_3 = *(undefined4 *)
                  ((&PTR_DAT_007b5170)[iVar1] +
                  (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = *(undefined4 *)
                  ((&PTR_DAT_007b5170)[iVar1] +
                  (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    case 3:
      *param_3 = *(undefined4 *)
                  ((&PTR_DAT_007b5170)[iVar1] +
                  (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = *(undefined4 *)
                  ((&PTR_DAT_007b5170)[iVar1] +
                  (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    }
  }
  return;
}

