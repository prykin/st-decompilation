
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0063f790(AnonShape_0063F790_F83B8A8C *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  AnonShape_006E3210_FE49985F *pAVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1_01;
  longlong lVar15;
  int local_14;
  int local_10;
  uint local_c;

  local_14 = 0;
  if (param_1->field_0336 == 0) {
    return -1;
  }
  iVar13 = param_1->field_02C0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0336 + 0xc);
  iVar6 = (int)param_1->field_0257 - (iVar13 + 8) * iVar13;
  iVar7 = iVar13 * 0x23 + param_1->field_02B4;
  local_c = 0;
  do {
    iVar12 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar12 + 0xc)) &&
       (iVar12 = *(int *)(iVar12 + 8) * local_c + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
      *(float *)(iVar12 + 0x2c) = (float)iVar7;
      Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0);
      lVar15 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1);
      iVar9 = (int)lVar15 + *(int *)(iVar12 + 0x14);
      *(int *)(iVar12 + 8) = iVar9;
      lVar15 = Library::MSVCRT::__ftol();
      iVar8 = (int)lVar15 + *(int *)(iVar12 + 0x18);
      fVar1 = (float)iVar6 * _DAT_007904f8;
      *(int *)(iVar12 + 0xc) = iVar8;
      *(float *)(iVar12 + 0x10) = fVar1 * _DAT_007904f0;
      pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
      fVar14 = FUN_006e3210(pAVar4,(iVar9 * pAVar4->field_0380) / 0xc9,
                            (iVar8 * pAVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar14;
      if (*(float *)(iVar12 + 0x10) <= fVar1) {
        if (fVar1 <= *(float *)(iVar12 + 0x10)) {
          if (*(float *)(iVar12 + 0x10) <= fVar1 - _DAT_0079d4a8) {
            *(float *)(iVar12 + 0x10) = fVar1;
          }
          else {
            *(float *)(iVar12 + 0x10) = fVar1 - _DAT_0079d4a8;
          }
        }
        else {
          FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar12 + 0x38));
          *(undefined4 *)(iVar12 + 0x38) = 0xffffffff;
          *(undefined4 *)(iVar12 + 0x34) = 0xffffffff;
        }
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x32);
  local_10 = 0;
  local_c = 0x32;
  do {
    iVar12 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar12 + 0xc)) &&
       (iVar12 = *(int *)(iVar12 + 8) * local_c + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
      *(float *)(iVar12 + 0x2c) = (float)iVar7;
      Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0_00);
      lVar15 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1_00);
      iVar9 = (int)lVar15 + *(int *)(iVar12 + 0x14);
      *(int *)(iVar12 + 8) = iVar9;
      lVar15 = Library::MSVCRT::__ftol();
      iVar8 = (int)lVar15 + *(int *)(iVar12 + 0x18);
      fVar1 = (float)iVar6 * _DAT_007904f8;
      *(int *)(iVar12 + 0xc) = iVar8;
      *(float *)(iVar12 + 0x10) = fVar1 * _DAT_007904f0;
      pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
      fVar14 = FUN_006e3210(pAVar4,(iVar9 * pAVar4->field_0380) / 0xc9,
                            (iVar8 * pAVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar14;
      if (fVar1 < *(float *)(iVar12 + 0x10)) {
        local_10 = local_10 + 1;
      }
      else if (fVar1 <= *(float *)(iVar12 + 0x10)) {
        if (fVar1 - _DAT_0079d4a8 < *(float *)(iVar12 + 0x10)) {
          *(float *)(iVar12 + 0x10) = fVar1 - _DAT_0079d4a8;
        }
      }
      else {
        FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar12 + 0x38));
        *(undefined4 *)(iVar12 + 0x38) = 0xffffffff;
        *(undefined4 *)(iVar12 + 0x34) = 0xffffffff;
      }
    }
    iVar12 = local_c - 0x31;
    local_c = local_c + 1;
  } while (iVar12 < 10);
  if (local_10 == 0) {
    local_14 = 1;
  }
  else if (param_1->field_037F != 0) {
    *(int *)(param_1->field_037F + 0xc) = iVar7;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)(param_1->field_037F + 0x15) == '\0') &&
       ((*(byte *)&PTR_00802a38->field_00E4 & 1) == 0)) {
      *(undefined1 *)(param_1->field_037F + 0x15) = 1;
      uVar10 = *(uint *)param_1->field_037F;
      if (-1 < (int)uVar10) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006e9720((void *)param_1->field_0211,uVar10,
                     (uint)*(byte *)((int)param_1->field_037F + 0x15) * 0x100 + DAT_008032b8);
      }
    }
  }
  if (0 < iVar13) {
    iVar6 = iVar13 * 2 + -1;
    iVar7 = param_1->field_02C0 % 0x1e + 6;
    sVar2 = param_1->field_0257;
    uVar10 = iVar7 * 10;
    iVar13 = uVar10 + 10;
    if ((int)uVar10 < iVar13) {
      do {
        iVar12 = param_1->field_0336;
        if (uVar10 < *(uint *)(iVar12 + 0xc)) {
          iVar12 = *(int *)(iVar12 + 8) * uVar10 + *(int *)(iVar12 + 0x1c);
        }
        else {
          iVar12 = 0;
        }
        if (*(int *)(iVar12 + 4) == 2) {
          *(undefined4 *)(iVar12 + 4) = 3;
        }
        if (iVar12 != 0) {
          iVar9 = param_1->field_0336;
          uVar11 = iVar7 * -10 + 0x3c + uVar10;
          if (uVar11 < *(uint *)(iVar9 + 0xc)) {
            iVar9 = *(int *)(iVar9 + 8) * uVar11 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar9 = 0;
          }
          if (-1 < *(int *)(iVar9 + 0x34)) {
            *(float *)(iVar12 + 0x2c) = (float)(param_1->field_02C0 * 0x23 + param_1->field_02B4);
            Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_01);
            lVar15 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST1_01);
            iVar9 = (int)lVar15 + *(int *)(iVar12 + 0x14);
            *(int *)(iVar12 + 8) = iVar9;
            lVar15 = Library::MSVCRT::__ftol();
            iVar8 = (int)lVar15 + *(int *)(iVar12 + 0x18);
            fVar1 = (float)(((iVar6 * -8) / 2 -
                            ((int)(iVar6 * iVar6 + (iVar6 * iVar6 >> 0x1f & 3U)) >> 2)) + (int)sVar2
                           ) * _DAT_007904f8;
            *(int *)(iVar12 + 0xc) = iVar8;
            *(float *)(iVar12 + 0x10) = fVar1 * _DAT_007904f0;
            pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
            fVar14 = FUN_006e3210(pAVar4,(iVar9 * pAVar4->field_0380) / 0xc9,
                                  (iVar8 * pAVar4->field_0380) / 0xc9);
            fVar1 = (float)fVar14;
            if (*(float *)(iVar12 + 0x10) <= fVar1) {
              if (*(float *)(iVar12 + 0x10) < fVar1) {
                FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar12 + 0x38));
                *(undefined4 *)(iVar12 + 0x38) = 0xffffffff;
                *(undefined4 *)(iVar12 + 0x34) = 0xffffffff;
                goto LAB_0063fc75;
              }
              if (*(float *)(iVar12 + 0x10) <= fVar1 - _DAT_0079d4a8) {
                *(float *)(iVar12 + 0x10) = fVar1;
              }
              else {
                *(float *)(iVar12 + 0x10) = fVar1 - _DAT_0079d4a8;
              }
            }
            uVar5 = PTR_00802a38->field_00E4;
            *(undefined4 *)(iVar12 + 0x20) = 10;
            *(undefined4 *)(iVar12 + 0x30) = uVar5;
          }
        }
LAB_0063fc75:
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar13);
    }
  }
  if ((local_14 != 0) && (uVar10 = 0x3c, 0x3c < iVar3)) {
    iVar13 = param_1->field_0336;
    do {
      if ((((uVar10 < *(uint *)(iVar13 + 0xc)) &&
           (iVar6 = *(int *)(iVar13 + 8) * uVar10 + *(int *)(iVar13 + 0x1c), iVar6 != 0)) &&
          (-1 < *(int *)(iVar6 + 0x34))) && (*(int *)(iVar6 + 0x20) < *(int *)(iVar6 + 0x24) + -1))
      {
        local_10 = local_10 + 1;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar3);
  }
  if (local_10 == 0) {
    local_14 = local_14 + 1;
  }
  iVar13 = param_1->field_02C0 + 1;
  param_1->field_02C0 = iVar13;
  param_1->field_02B8 = iVar13 * 0x23 + param_1->field_02B4;
  return local_14;
}

