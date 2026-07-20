
void FUN_00553270(void)

{
  int iVar1;
  byte *groupContent;
  uint uVar2;
  bool bVar3;
  
  if (DAT_00802a4c != (byte *)0x0) {
    uVar2 = 0;
    groupContent = DAT_00802a4c;
    if (0 < *(int *)(DAT_00802a4c + 0xc)) {
      bVar3 = *(int *)(DAT_00802a4c + 0xc) != 0;
      do {
        if (((bVar3) &&
            (iVar1 = *(int *)(groupContent + 8) * uVar2 + *(int *)(groupContent + 0x1c), iVar1 != 0)
            ) && (*(int *)(iVar1 + 2) != 0)) {
          FUN_006ab060((LPVOID *)(iVar1 + 2));
          groupContent = DAT_00802a4c;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(groupContent + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(groupContent + 0xc));
    }
    FUN_006ae110(groupContent);
    DAT_00802a4c = (byte *)0x0;
  }
  return;
}

