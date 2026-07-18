
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760df0(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined1 *puVar11;
  longlong lVar12;
  float local_120 [16];
  float local_e0 [8];
  float local_c0 [8];
  float local_a0 [8];
  float local_80 [8];
  float local_60 [8];
  float local_40 [8];
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar10 = *(float **)(param_2 + 0x50);
  iVar9 = *(int *)(param_1 + 0x132) + 0x80;
  pfVar8 = local_120;
  local_1c = 1.12104e-44;
  do {
    iVar1 = param_3[0x38];
    local_18 = (float)param_3[0x10];
    local_c = (float)iVar1;
    local_8 = (float)param_3[0x28];
    local_20 = param_3[8];
    fVar2 = (float)*param_3 * *pfVar10;
    if ((((((local_20 == 0 && local_18 == 0.0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         local_8 == 0.0) && param_3[0x30] == 0) && iVar1 == 0) {
      *pfVar8 = fVar2;
      pfVar8[8] = fVar2;
      pfVar8[0x10] = fVar2;
      pfVar8[0x18] = fVar2;
      pfVar8[0x20] = fVar2;
      pfVar8[0x28] = fVar2;
      pfVar8[0x30] = fVar2;
      pfVar8[0x38] = fVar2;
    }
    else {
      fVar4 = (float)param_3[0x20] * pfVar10[0x20];
      fVar5 = (float)param_3[0x30] * pfVar10[0x30];
      fVar3 = fVar4 + fVar2;
      fVar2 = fVar2 - fVar4;
      fVar4 = fVar5 + (float)(int)local_18 * pfVar10[0x10];
      fVar5 = ((float)(int)local_18 * pfVar10[0x10] - fVar5) * _DAT_007a22b0 - fVar4;
      local_18 = fVar4 + fVar3;
      local_10 = fVar3 - fVar4;
      local_14 = fVar5 + fVar2;
      fVar2 = fVar2 - fVar5;
      fVar3 = (float)param_3[0x18] * pfVar10[0x18];
      local_c = (float)(int)local_8 * pfVar10[0x28] + fVar3;
      fVar3 = (float)(int)local_8 * pfVar10[0x28] - fVar3;
      fVar5 = (float)iVar1 * pfVar10[0x38] + (float)local_20 * pfVar10[8];
      fVar6 = (float)local_20 * pfVar10[8] - (float)iVar1 * pfVar10[0x38];
      fVar4 = fVar5 + local_c;
      fVar7 = (fVar6 + fVar3) * _DAT_007a22ac;
      fVar3 = (fVar7 - fVar3 * _DAT_007a22a8) - fVar4;
      fVar5 = (fVar5 - local_c) * _DAT_007a22b0 - fVar3;
      local_8 = (fVar6 * _DAT_007a22a4 - fVar7) + fVar5;
      *pfVar8 = fVar4 + local_18;
      pfVar8[0x38] = local_18 - fVar4;
      pfVar8[8] = fVar3 + local_14;
      pfVar8[0x30] = local_14 - fVar3;
      pfVar8[0x10] = fVar5 + fVar2;
      pfVar8[0x28] = fVar2 - fVar5;
      pfVar8[0x20] = local_8 + local_10;
      pfVar8[0x18] = local_10 - local_8;
    }
    param_3 = param_3 + 1;
    pfVar10 = pfVar10 + 1;
    pfVar8 = pfVar8 + 1;
    local_1c = (float)((int)local_1c + -1);
  } while (local_1c != 0.0);
  pfVar8 = local_120 + 2;
  local_14 = 1.12104e-44;
  do {
    puVar11 = (undefined1 *)(param_5 + *param_4);
    local_18 = *pfVar8 + pfVar8[4] + pfVar8[2] + pfVar8[-2];
    local_10 = (pfVar8[-2] - pfVar8[2]) -
               ((*pfVar8 - pfVar8[4]) * _DAT_007a22b0 - (*pfVar8 + pfVar8[4]));
    local_1c = pfVar8[-1] - pfVar8[5];
    local_c = (local_1c + (pfVar8[3] - pfVar8[1])) * _DAT_007a22ac;
    local_8 = (local_1c * _DAT_007a22a4 - local_c) +
              (((pfVar8[5] + pfVar8[-1]) - (pfVar8[3] + pfVar8[1])) * _DAT_007a22b0 -
              ((local_c - (pfVar8[3] - pfVar8[1]) * _DAT_007a22a8) -
              (pfVar8[5] + pfVar8[-1] + pfVar8[3] + pfVar8[1])));
    lVar12 = __ftol();
    *puVar11 = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[7] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[1] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[6] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[2] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[5] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    puVar11[4] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
    lVar12 = __ftol();
    pfVar8 = pfVar8 + 8;
    param_4 = param_4 + 1;
    local_14 = (float)((int)local_14 + -1);
    puVar11[3] = *(undefined1 *)(((int)lVar12 + 4 >> 3 & 0x3ffU) + iVar9);
  } while (local_14 != 0.0);
  return;
}

