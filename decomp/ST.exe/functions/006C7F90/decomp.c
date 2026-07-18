
void FUN_006c7f90(int param_1,byte *param_2,HPALETTE param_3,int param_4)

{
  uint uVar1;
  HDC hdc;
  tagPALETTEENTRY *ptVar2;
  UINT UVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  tagPALETTEENTRY local_914 [256];
  LOGPALETTE local_514 [128];
  byte local_110 [256];
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  if (*(short *)(param_1 + 0xe) == 8) {
    pbVar8 = local_110;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8 = pbVar8 + 4;
    }
    if ((-1 < param_4) && (param_4 < 0x100)) {
      local_110[param_4] = (byte)param_4;
    }
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)FUN_006b4fa0(param_1);
    }
    local_10 = *(int *)(param_1 + 8);
    puVar9 = (undefined1 *)(param_1 + 0x28);
    uVar7 = *(int *)(param_1 + 4) * (uint)*(ushort *)(param_1 + 0xe) + 0x1f >> 3 & 0x1ffffffc;
    local_c = puVar9;
    iVar4 = FUN_006b4fe0(param_1);
    hdc = GetDC((HWND)0x0);
    GetSystemPaletteEntries(hdc,0,0x100,local_914);
    ReleaseDC((HWND)0x0,hdc);
    GetPaletteEntries(param_3,0,0x100,local_514[0].palPalEntry);
    iVar6 = 0;
    ptVar2 = local_514[0].palPalEntry;
    local_8 = 0;
    iVar5 = 0x100;
    do {
      if ((ptVar2->peFlags & 2) != 0) {
        iVar6 = 1;
        *ptVar2 = local_914[ptVar2->peRed];
      }
      ptVar2 = ptVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_8 = iVar6;
    if (iVar6 != 0) {
      local_514[0].palVersion = 0x300;
      local_514[0].palNumEntries = 0x100;
      param_3 = CreatePalette(local_514);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (iVar5 != param_4) {
          UVar3 = GetNearestPaletteIndex
                            (param_3,(uint)CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]));
          if (UVar3 == 0xffffffff) {
            UVar3 = 0;
          }
          local_110[iVar5] = (byte)UVar3;
        }
        puVar9 = puVar9 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    uVar1 = uVar7;
    iVar4 = local_10;
    if (0 < local_10) {
      do {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *param_2 = local_110[*param_2];
          param_2 = param_2 + 1;
        }
        iVar4 = iVar4 + -1;
        uVar1 = uVar7;
      } while (iVar4 != 0);
    }
    puVar9 = local_c + 1;
    iVar4 = 0x100;
    do {
      puVar9[1] = puVar9[(int)local_514 + (3 - (int)local_c)];
      *puVar9 = puVar9[(int)local_514 + (4 - (int)local_c)];
      puVar9[-1] = puVar9[(int)local_514 + (5 - (int)local_c)];
      puVar9 = puVar9 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (local_8 != 0) {
      DeleteObject(param_3);
    }
  }
  return;
}

