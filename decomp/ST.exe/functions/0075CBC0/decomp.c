
void FUN_0075cbc0(int param_1)

{
  ushort uVar1;
  short sVar2;
  double *pdVar3;
  double *pdVar4;
  short *psVar5;
  ushort *puVar6;
  int *piVar7;
  uint *puVar8;
  float *pfVar9;
  int *piVar10;
  ushort *puVar11;
  int *piVar12;
  double *pdVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  undefined4 uVar17;
  int local_10;
  code *local_c;
  int local_8;
  
  iVar14 = 0;
  local_8 = 0;
  local_c = (code *)0x0;
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar12 = (int *)(*(int *)(param_1 + 0xd0) + 0x50);
    piVar10 = (int *)(*(int *)(param_1 + 0x1ae) + 0x2c);
    do {
      switch(piVar12[-0xb]) {
      case 1:
        iVar14 = 0;
        local_c = FUN_00761770;
        local_8 = 0;
        break;
      case 2:
        iVar14 = 0;
        local_c = FUN_00761550;
        local_8 = 0;
        break;
      default:
        uVar17 = 0x90;
        iVar16 = 6;
LAB_0075cca0:
        FUN_006a5e40(iVar16,DAT_007ed77c,0x7f2e28,uVar17);
        break;
      case 4:
        iVar14 = 0;
        local_c = FUN_007611c0;
        local_8 = 0;
        break;
      case 8:
        iVar16 = *(int *)(param_1 + 0x40);
        if (iVar16 == 0) {
          iVar14 = 0;
          local_c = FUN_007603b0;
          local_8 = 0;
        }
        else if (iVar16 == 1) {
          iVar14 = 1;
          local_c = FUN_00760970;
          local_8 = 1;
        }
        else {
          if (iVar16 != 2) {
            uVar17 = 0x8b;
            iVar16 = 0x2f;
            goto LAB_0075cca0;
          }
          iVar14 = 2;
          local_c = FUN_00760df0;
          local_8 = 2;
        }
      }
      piVar10[-10] = (int)local_c;
      if (((piVar12[-8] != 0) && (*piVar10 != iVar14)) &&
         (puVar6 = (ushort *)piVar12[-1], puVar6 != (ushort *)0x0)) {
        *piVar10 = iVar14;
        if (iVar14 == 0) {
          iVar16 = 0x40;
          puVar8 = (uint *)*piVar12;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar8 = (uint)uVar1;
            iVar16 = iVar16 + -1;
            puVar8 = puVar8 + 1;
          } while (iVar16 != 0);
        }
        else if (iVar14 == 1) {
          psVar5 = &DAT_007a20d8;
          piVar7 = (int *)*piVar12;
          do {
            sVar2 = *psVar5;
            puVar11 = (ushort *)((int)(puVar6 + -0x3d106c) + (int)psVar5);
            psVar5 = psVar5 + 1;
            *piVar7 = (int)((uint)*puVar11 * (int)sVar2 + 0x800) >> 0xc;
            piVar7 = piVar7 + 1;
            iVar14 = local_8;
          } while ((int)psVar5 < 0x7a2158);
        }
        else if (iVar14 == 2) {
          pdVar13 = (double *)&DAT_007a2158;
          pfVar15 = (float *)*piVar12;
          do {
            puVar11 = puVar6 + 8;
            pdVar3 = (double *)&DAT_007a2158;
            pfVar9 = pfVar15;
            do {
              pdVar4 = pdVar3 + 1;
              uVar1 = *puVar6;
              puVar6 = puVar6 + 1;
              *pfVar9 = (float)uVar1 * (float)*pdVar3 * (float)*pdVar13;
              pdVar3 = pdVar4;
              pfVar9 = pfVar9 + 1;
            } while ((int)pdVar4 < 0x7a2198);
            pdVar13 = pdVar13 + 1;
            puVar6 = puVar11;
            iVar14 = local_8;
            pfVar15 = pfVar15 + 8;
          } while ((int)pdVar13 < 0x7a2198);
        }
        else {
          FUN_006a5e40(0x2f,DAT_007ed77c,0x7f2e28,0xed);
        }
      }
      local_10 = local_10 + 1;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 0x15;
    } while (local_10 < *(int *)(param_1 + 0x1c));
  }
  return;
}

