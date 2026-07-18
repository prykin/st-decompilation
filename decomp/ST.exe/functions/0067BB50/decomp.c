
short * __cdecl FUN_0067bb50(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if ((((bVar4) &&
           (psVar2 = (short *)(*(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x1c)),
           psVar2 != (short *)0x0)) && (*psVar2 != 0)) && (*(int *)(psVar2 + 6) < 0)) {
        return psVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return (short *)0x0;
}

