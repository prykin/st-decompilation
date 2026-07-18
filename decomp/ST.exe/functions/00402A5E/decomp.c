
void thunk_FUN_00553270(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_00802a4c != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = DAT_00802a4c;
    if (0 < *(int *)(DAT_00802a4c + 0xc)) {
      bVar4 = *(int *)(DAT_00802a4c + 0xc) != 0;
      do {
        if (((bVar4) && (iVar1 = *(int *)(pbVar2 + 8) * uVar3 + *(int *)(pbVar2 + 0x1c), iVar1 != 0)
            ) && (*(int *)(iVar1 + 2) != 0)) {
          FUN_006ab060((undefined4 *)(iVar1 + 2));
          pbVar2 = DAT_00802a4c;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(pbVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(pbVar2 + 0xc));
    }
    FUN_006ae110(pbVar2);
    DAT_00802a4c = (byte *)0x0;
  }
  return;
}

