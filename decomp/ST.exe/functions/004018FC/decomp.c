
byte __cdecl thunk_FUN_006800a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = thunk_FUN_0067ff00((char *)param_1);
  if (-1 < iVar2) {
    return 5;
  }
  iVar2 = thunk_FUN_0067ff50((char *)param_1);
  if (-1 < iVar2) {
    return 6;
  }
  iVar2 = thunk_FUN_0067ffa0((char *)param_1);
  if (-1 < iVar2) {
    return 7;
  }
  iVar2 = thunk_FUN_0067fff0((char *)param_1);
  if (-1 < iVar2) {
    return 8;
  }
  iVar2 = thunk_FUN_0067eea0(param_1);
  if (iVar2 != 0) {
    return 1;
  }
  iVar6 = 0;
  iVar2 = *(int *)(DAT_00848a2c + 8);
  if (0 < iVar2) {
    do {
      pbVar4 = param_1;
      if (iVar6 < iVar2) {
        pbVar5 = *(byte **)(*(int *)(DAT_00848a2c + 0x14) + iVar6 * 4);
      }
      else {
        pbVar5 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00680161:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00680166;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00680161;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00680166:
      if (iVar3 == 0) {
        if (-1 < iVar6) {
          return 2;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  iVar6 = 0;
  iVar2 = *(int *)(DAT_00848a34 + 8);
  if (0 < iVar2) {
    do {
      pbVar4 = param_1;
      if (iVar6 < iVar2) {
        pbVar5 = *(byte **)(*(int *)(DAT_00848a34 + 0x14) + iVar6 * 4);
      }
      else {
        pbVar5 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006801cd:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_006801d2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006801cd;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_006801d2:
      if (iVar3 == 0) {
        if (-1 < iVar6) {
          return 3;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  iVar2 = thunk_FUN_0067fc10(param_1);
  return (iVar2 < 0) - 1U & 4;
}

