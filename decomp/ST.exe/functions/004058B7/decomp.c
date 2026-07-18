
void __thiscall
thunk_FUN_004dcaa0(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4
                  )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  iVar2 = *(int *)((int)this + 0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      *param_3 = 0;
      *param_4 = 0x27;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  *param_3 = *(undefined4 *)
              ((&PTR_DAT_007b5170)[iVar1] +
              (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(undefined4 *)
              ((&PTR_DAT_007b5170)[iVar1] +
              (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  return;
}

