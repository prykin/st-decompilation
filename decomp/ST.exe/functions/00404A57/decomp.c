
int __cdecl thunk_FUN_0067f4f0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = *(int *)(DAT_00848a2c + 8);
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar5 = (byte *)0x0;
      pbVar3 = param_1;
      goto LAB_0067f51b;
    }
    do {
      pbVar5 = *(byte **)(*(int *)(DAT_00848a2c + 0x14) + uVar6 * 4);
      pbVar3 = param_1;
LAB_0067f51b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067f53f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f544;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067f53f;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f544:
      if (iVar4 == 0) {
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (*(uint *)(DAT_00848a28 + 0xc) <= uVar6) {
          return 0;
        }
        return *(int *)(DAT_00848a28 + 8) * uVar6 + *(int *)(DAT_00848a28 + 0x1c);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

