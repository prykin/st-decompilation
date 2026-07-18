
int FUN_006b0a20(undefined4 *param_1,int param_2,UINT param_3,UINT param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  BYTE *pBVar3;
  UINT UVar4;
  int iVar5;
  PALETTEENTRY *pPVar6;
  PALETTEENTRY *pPVar7;
  undefined4 *puVar8;
  PALETTEENTRY local_404 [256];
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (((param_1[2] & 0x20000001) == 0) && ((int)param_1[9] < 9)) {
      if ((int)param_3 < 10) {
        iVar2 = 10 - param_3;
        param_3 = 10;
        param_4 = param_4 - iVar2;
      }
      if (0xf6 < (int)(param_3 + param_4)) {
        param_4 = 0xf6 - param_3;
      }
    }
    if ((param_2 != 0) && (0 < (int)param_4)) {
      pPVar6 = (PALETTEENTRY *)(param_2 + iVar2 * 4);
      pPVar7 = local_404;
      for (UVar4 = param_4; UVar4 != 0; UVar4 = UVar4 - 1) {
        *pPVar7 = *pPVar6;
        pPVar6 = pPVar6 + 1;
        pPVar7 = pPVar7 + 1;
      }
      pBVar3 = &local_404[0].peFlags;
      UVar4 = param_4;
      do {
        *pBVar3 = *pBVar3 | 4;
        pBVar3 = pBVar3 + 4;
        UVar4 = UVar4 - 1;
      } while (UVar4 != 0);
      if (param_5 != 0) {
        (**(code **)(*(int *)param_1[0xc] + 0x58))((int *)param_1[0xc],1,0);
      }
      piVar1 = (int *)param_1[0xf];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x18))(piVar1,0,param_3,param_4,local_404);
      }
      SetPaletteEntries((HPALETTE)*param_1,param_3,param_4,local_404);
      SetPaletteEntries((HPALETTE)param_1[0x12d],param_3,param_4,local_404);
      iVar2 = FUN_006b0520((int)param_1,(int)local_404,param_3,param_4);
      if ((undefined4 *)param_1[0x137] != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)param_1[0x137];
        for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        puVar8 = (undefined4 *)(param_1[0x137] + 0x8000);
        for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        SetPaletteEntries((HPALETTE)param_1[0x138],param_3,param_4,local_404);
      }
      if (((iVar2 != -0x7789fdc4) && (iVar2 != -0x7789fdb3)) && (iVar2 != -0x7fffbfff)) {
        return iVar2;
      }
    }
  }
  return 0;
}

