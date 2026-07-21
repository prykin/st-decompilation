
void __thiscall FUN_00626e60(void *this,int param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 1;
  iVar1 = 0;
  do {
    *(bool *)(iVar1 + param_1) = (*(uint *)((int)this + 0x342) & uVar2) != 0;
    uVar2 = uVar2 << 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

