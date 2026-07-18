
char * __thiscall FUN_0055ba90(void *this,char param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x110);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pcVar3 = (char *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
      }
      else {
        pcVar3 = (char *)0x0;
      }
      if ((*(int *)(pcVar3 + 8) == param_2) && (*pcVar3 == param_1)) {
        return pcVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return (char *)0x0;
}

