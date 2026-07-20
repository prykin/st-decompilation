
int __cdecl FUN_0067ed20(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = PTR_00848a1c->field_0008;
  iVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar5 = (byte *)0x0;
      pbVar3 = param_1;
      goto LAB_0067ed4b;
    }
    do {
      pbVar5 = *(byte **)(PTR_00848a1c->field_0014 + iVar6 * 4);
      pbVar3 = param_1;
LAB_0067ed4b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067ed6f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067ed74;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067ed6f;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067ed74:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return -1;
}

