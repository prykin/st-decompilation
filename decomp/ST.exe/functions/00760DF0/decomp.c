
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760df0(int param_1,AnonShape_00760DF0_41372EAE *param_2,int *param_3,int *param_4,
                 int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  AnonNested_00760DF0_0050_4F781EBD *pAVar9;
  undefined1 *puVar10;
  longlong lVar11;
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

  pAVar9 = param_2->field_0050;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = *(int *)(param_1 + 0x132) + 0x80;
  pfVar7 = local_120;
  local_1c = 1.12104e-44;
  do {
    local_c = (float)param_3[0x38];
    local_18 = (float)param_3[0x10];
    local_8 = (float)param_3[0x28];
    local_20 = param_3[8];
    fVar1 = (float)*param_3 * pAVar9->field_0000;
    if ((((((local_20 == 0 && local_18 == 0.0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         local_8 == 0.0) && param_3[0x30] == 0) && local_c == 0.0) {
      *pfVar7 = fVar1;
      pfVar7[8] = fVar1;
      pfVar7[0x10] = fVar1;
      pfVar7[0x18] = fVar1;
      pfVar7[0x20] = fVar1;
      pfVar7[0x28] = fVar1;
      pfVar7[0x30] = fVar1;
      pfVar7[0x38] = fVar1;
    }
    else {
      fVar4 = (float)(int)local_18 * pAVar9->field_0040;
      fVar3 = (float)param_3[0x20] * pAVar9->field_0080;
      fVar5 = (float)param_3[0x30] * pAVar9->field_00C0;
      fVar2 = fVar3 + fVar1;
      fVar1 = fVar1 - fVar3;
      fVar3 = fVar5 + fVar4;
      fVar4 = (fVar4 - fVar5) * _DAT_007a22b0 - fVar3;
      local_18 = fVar3 + fVar2;
      local_10 = fVar2 - fVar3;
      local_14 = fVar4 + fVar1;
      fVar1 = fVar1 - fVar4;
      fVar5 = (float)local_20 * pAVar9->field_0020;
      fVar2 = (float)param_3[0x18] * pAVar9->field_0060;
      fVar3 = (float)(int)local_8 * pAVar9->field_00A0;
      fVar4 = (float)(int)local_c * pAVar9->field_00E0;
      local_c = fVar3 + fVar2;
      fVar3 = fVar3 - fVar2;
      fVar6 = fVar4 + fVar5;
      fVar5 = fVar5 - fVar4;
      fVar2 = fVar6 + local_c;
      fVar4 = (fVar5 + fVar3) * _DAT_007a22ac;
      fVar3 = (fVar4 - fVar3 * _DAT_007a22a8) - fVar2;
      fVar6 = (fVar6 - local_c) * _DAT_007a22b0 - fVar3;
      local_8 = (fVar5 * _DAT_007a22a4 - fVar4) + fVar6;
      *pfVar7 = fVar2 + local_18;
      pfVar7[0x38] = local_18 - fVar2;
      pfVar7[8] = fVar3 + local_14;
      pfVar7[0x30] = local_14 - fVar3;
      pfVar7[0x10] = fVar6 + fVar1;
      pfVar7[0x28] = fVar1 - fVar6;
      pfVar7[0x20] = local_8 + local_10;
      pfVar7[0x18] = local_10 - local_8;
    }
    param_3 = param_3 + 1;
    pAVar9 = (AnonNested_00760DF0_0050_4F781EBD *)&pAVar9->field_0x4;
    pfVar7 = pfVar7 + 1;
    local_1c = (float)((int)local_1c + -1);
  } while (local_1c != 0.0);
  pfVar7 = local_120 + 2;
  local_14 = 1.12104e-44;
  do {
    puVar10 = (undefined1 *)(param_5 + *param_4);
    local_18 = *pfVar7 + pfVar7[4] + pfVar7[2] + pfVar7[-2];
    local_10 = (pfVar7[-2] - pfVar7[2]) -
               ((*pfVar7 - pfVar7[4]) * _DAT_007a22b0 - (*pfVar7 + pfVar7[4]));
    local_1c = pfVar7[-1] - pfVar7[5];
    local_c = (local_1c + (pfVar7[3] - pfVar7[1])) * _DAT_007a22ac;
    local_8 = (local_1c * _DAT_007a22a4 - local_c) +
              (((pfVar7[5] + pfVar7[-1]) - (pfVar7[3] + pfVar7[1])) * _DAT_007a22b0 -
              ((local_c - (pfVar7[3] - pfVar7[1]) * _DAT_007a22a8) -
              (pfVar7[5] + pfVar7[-1] + pfVar7[3] + pfVar7[1])));
    lVar11 = Library::MSVCRT::__ftol();
    *puVar10 = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[7] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[1] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[6] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[2] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[5] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    puVar10[4] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
    lVar11 = Library::MSVCRT::__ftol();
    pfVar7 = pfVar7 + 8;
    param_4 = param_4 + 1;
    local_14 = (float)((int)local_14 + -1);
    puVar10[3] = *(undefined1 *)(((int)lVar11 + 4 >> 3 & 0x3ffU) + iVar8);
  } while (local_14 != 0.0);
  return;
}

