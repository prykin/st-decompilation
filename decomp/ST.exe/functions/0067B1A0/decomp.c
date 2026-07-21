
int __thiscall FUN_0067b1a0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;

  iVar1 = *(int *)((int)this + 0x6a1);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if ((((bVar6) &&
           (pcVar4 = (char *)(*(int *)(iVar1 + 8) * uVar5 + *(int *)(iVar1 + 0x1c)),
           pcVar4 != (char *)0x0)) && (*pcVar4 == param_1)) && (pcVar4[7] == '\0')) {
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return iVar3;
}

