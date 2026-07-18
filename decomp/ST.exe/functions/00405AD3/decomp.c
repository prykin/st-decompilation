
void __thiscall
thunk_FUN_004ec900(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4
                  )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar5 = (uVar4 & 0xff) - 1;
  switch(param_1) {
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 != 3) {
      if ((iVar2 != 4) && (iVar2 != 6)) {
        if (iVar2 == 5) {
          *param_4 = *(undefined4 *)
                      ((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
          *param_3 = *(undefined4 *)
                      ((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
          return;
        }
        uVar3 = *(undefined4 *)
                 ((&PTR_DAT_007b5170)[iVar1] +
                 (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar3;
        *param_3 = uVar3;
        return;
      }
      uVar3 = *(undefined4 *)
               ((&PTR_DAT_007b5170)[iVar1] +
               (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    }
  }
  *param_3 = *(undefined4 *)
              ((&PTR_DAT_007b5170)[iVar1] +
              (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(undefined4 *)
              ((&PTR_DAT_007b5170)[iVar1] +
              (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  return;
}

