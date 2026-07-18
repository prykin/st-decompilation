
void __fastcall FUN_005d1380(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  DAT_0080874d = 0xff;
  iVar1 = *(int *)(param_1 + 0x1f84);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      while ((((!bVar5 || (iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c), iVar3 == 0)
               ) || (*(char *)(iVar3 + 4) != '\x02')) || (*(int *)(iVar3 + 6) != DAT_0080877f))) {
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
      DAT_0080874d = *(undefined1 *)(iVar3 + 2);
      DAT_0080874e = *(undefined1 *)(iVar3 + 3);
    }
  }
  return;
}

