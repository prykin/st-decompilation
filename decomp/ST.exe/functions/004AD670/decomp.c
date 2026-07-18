
int __thiscall FUN_004ad670(void *this,char param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  *(int *)((int)this + 0xc) = iVar2;
  if (iVar2 == -1) {
    iVar2 = *(int *)((int)this + 0x14);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)((int)this + 0x20);
        puVar1 = (ushort *)(iVar2 + 0xe + iVar4);
        *puVar1 = *puVar1 & 0xfeff;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xe + iVar4;
        iVar4 = iVar4 + 0x24;
      } while (iVar3 < *(int *)((int)this + 0x14));
    }
  }
  return iVar2;
}

