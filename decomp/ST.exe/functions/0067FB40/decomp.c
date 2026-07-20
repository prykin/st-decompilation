
void FUN_0067fb40(void)

{
  int *piVar1;
  byte *groupContent;
  uint uVar2;
  bool bVar3;
  
  if (DAT_00848a38 != (byte *)0x0) {
    uVar2 = 0;
    groupContent = DAT_00848a38;
    if (0 < *(int *)(DAT_00848a38 + 0xc)) {
      bVar3 = *(int *)(DAT_00848a38 + 0xc) != 0;
      do {
        if (((bVar3) &&
            (piVar1 = (int *)(*(int *)(groupContent + 8) * uVar2 + *(int *)(groupContent + 0x1c)),
            piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
          thunk_FUN_0064a800(piVar1);
          groupContent = DAT_00848a38;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(groupContent + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(groupContent + 0xc));
    }
    FUN_006ae110(groupContent);
    DAT_00848a38 = (byte *)0x0;
  }
  if (DAT_00848a3c != (byte *)0x0) {
    FUN_006b5570(DAT_00848a3c);
  }
  DAT_00848a3c = (byte *)0x0;
  return;
}

