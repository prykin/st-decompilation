
undefined4 __thiscall FUN_004c7c50(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;

  uVar1 = 0;
  iVar2 = *(int *)(&DAT_00794404 + *(int *)((int)this + 0x235) * 0x24);
  if (iVar2 != 0) {
    puVar3 = &DAT_00794404 + *(int *)((int)this + 0x235) * 0x24;
    while (iVar2 != param_1) {
      iVar2 = *(int *)(puVar3 + 4);
      puVar3 = puVar3 + 4;
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

