
void __thiscall FUN_006945c0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;

  *(int *)this = *param_1;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  uVar3 = *(int *)((int)this + 8) * *(int *)((int)this + 4) * *(int *)this;
  piVar1 = thunk_FUN_006a3be0(uVar3 * 8);
  *(int **)((int)this + 0x10) = piVar1;
  for (iVar2 = (uVar3 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)piVar1 = 0;
    piVar1 = (int *)((int)piVar1 + 1);
  }
  return;
}

