
int __cdecl FUN_0067edb0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A18_1B9B27FE_0014_B23B2AAD *pAVar5;
  int iVar6;
  bool bVar7;

  iVar2 = PTR_00848a18->entryCount;
  iVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = (AnonNested_AnonShape_GLOBAL_00848A18_1B9B27FE_0014_B23B2AAD *)0x0;
      pbVar3 = param_1;
      goto LAB_0067eddb;
    }
    do {
      pAVar5 = PTR_00848a18->entries[iVar6];
      pbVar3 = param_1;
LAB_0067eddb:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067edff:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067ee04;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067edff;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067ee04:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return -1;
}

