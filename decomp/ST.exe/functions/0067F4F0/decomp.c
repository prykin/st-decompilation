
int __cdecl FUN_0067f4f0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;

  iVar2 = PTR_00848a2c->field_0008;
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pbVar5 = (byte *)0x0;
      pbVar3 = param_1;
      goto LAB_0067f51b;
    }
    do {
      pbVar5 = *(byte **)(PTR_00848a2c->field_0014 + uVar6 * 4);
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
        if (PTR_00848a28->count <= uVar6) {
          return 0;
        }
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a28, uVar6) (runtime stride) */
        return (int)(PTR_00848a28->elementSize * uVar6 + (int)PTR_00848a28->data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

