
void FUN_0067fb40(void)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_00848a38 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = DAT_00848a38;
    if (0 < *(int *)(DAT_00848a38 + 0xc)) {
      bVar4 = *(int *)(DAT_00848a38 + 0xc) != 0;
      do {
        if (((bVar4) &&
            (piVar1 = (int *)(*(int *)(pbVar2 + 8) * uVar3 + *(int *)(pbVar2 + 0x1c)),
            piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
          thunk_FUN_0064a800(piVar1);
          pbVar2 = DAT_00848a38;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(pbVar2 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(pbVar2 + 0xc));
    }
    FUN_006ae110(pbVar2);
    DAT_00848a38 = (byte *)0x0;
  }
  if (DAT_00848a3c != (byte *)0x0) {
    FUN_006b5570(DAT_00848a3c);
  }
  DAT_00848a3c = (byte *)0x0;
  return;
}

