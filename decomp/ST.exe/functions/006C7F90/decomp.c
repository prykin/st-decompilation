
/* WARNING: Type propagation algorithm not settling */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DC050 -> 006C7F90 @ 005DC0E2 */

void FUN_006c7f90(ushort *param_1,byte *param_2,HPALETTE param_3,int param_4)

{
  uint uVar1;
  HDC hdc;
  PALETTEENTRY *pPVar2;
  UINT UVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ushort *puVar10;
  tagPALETTEENTRY *local_914;
  LOGPALETTE local_514 [128];
  byte local_110 [256];
  int local_10;
  ushort *local_c;
  int local_8;

  if (param_1[7] == 8) {
    pbVar9 = local_110;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9 = pbVar9 + 4;
    }
    if ((-1 < param_4) && (param_4 < 0x100)) {
      local_110[param_4] = (byte)param_4;
    }
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)FUN_006b4fa0((int)param_1);
    }
    local_10 = *(int *)(param_1 + 4);
    puVar10 = param_1 + 0x14;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar8 = *(int *)(param_1 + 2) * (uint)param_1[7] + 0x1f >> 3 & 0x1ffffffc;
    local_c = puVar10;
    iVar5 = FUN_006b4fe0((int)param_1);
    hdc = GetDC((HWND)0x0);
    GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&local_914);
    ReleaseDC((HWND)0x0,hdc);
    GetPaletteEntries(param_3,0,0x100,local_514[0].palPalEntry);
    iVar7 = 0;
    pPVar2 = local_514[0].palPalEntry;
    local_8 = 0;
    iVar6 = 0x100;
    do {
      if ((pPVar2->peFlags & 2) != 0) {
        iVar7 = 1;
        *pPVar2 = *(PALETTEENTRY *)(&local_914 + pPVar2->peRed);
      }
      pPVar2 = pPVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_8 = iVar7;
    if (iVar7 != 0) {
      local_514[0].palVersion = 0x300;
      local_514[0].palNumEntries = 0x100;
      param_3 = CreatePalette(local_514);
    }
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        if (iVar6 != param_4) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          UVar3 = GetNearestPaletteIndex
                            (param_3,(uint)CONCAT21(CONCAT11((char)*puVar10,
                                                             *(undefined1 *)((int)puVar10 + 1)),
                                                    (char)puVar10[1]));
          if (UVar3 == 0xffffffff) {
            UVar3 = 0;
          }
          local_110[iVar6] = (byte)UVar3;
        }
        puVar10 = puVar10 + 2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    uVar1 = uVar8;
    iVar5 = local_10;
    if (0 < local_10) {
      do {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *param_2 = local_110[*param_2];
          param_2 = param_2 + 1;
        }
        iVar5 = iVar5 + -1;
        uVar1 = uVar8;
      } while (iVar5 != 0);
    }
    puVar4 = (undefined1 *)((int)local_c + 1);
    iVar5 = 0x100;
    do {
      puVar4[1] = puVar4[(int)local_514 + (3 - (int)local_c)];
      *puVar4 = puVar4[(int)local_514 + (4 - (int)local_c)];
      puVar4[-1] = puVar4[(int)local_514 + (5 - (int)local_c)];
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (local_8 != 0) {
      DeleteObject(param_3);
    }
  }
  return;
}

