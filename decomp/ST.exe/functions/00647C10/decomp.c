
int __thiscall FUN_00647c10(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  if (param_1 < 0) {
    iVar1 = *(int *)((int)this + 0x88);
  }
  else {
    iVar1 = *(int *)((int)this + 0x88);
  }
  uVar2 = iVar1 * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x88) = uVar2;
  return (uVar2 >> 0x10) % ((param_2 - param_1) + 1U) + param_1;
}

