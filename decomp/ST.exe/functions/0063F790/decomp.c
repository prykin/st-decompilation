
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0063f790(AnonShape_0063F790_F83B8A8C *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  AnonShape_006E3210_FE49985F *pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  float10 fVar13;
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
  longlong lVar14;
  int local_14;
  int local_10;
  uint local_c;

  local_14 = 0;
  if (param_1->field_0336 == 0) {
    return -1;
  }
  iVar12 = param_1->field_02C0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0336 + 0xc);
  iVar5 = (int)param_1->field_0257 - (iVar12 + 8) * iVar12;
  iVar6 = iVar12 * 0x23 + param_1->field_02B4;
  local_c = 0;
  do {
    iVar11 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar11 + 0xc)) &&
       (iVar11 = *(int *)(iVar11 + 8) * local_c + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
      *(float *)(iVar11 + 0x2c) = (float)iVar6;
      Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0);
      lVar14 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1);
      iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
      *(int *)(iVar11 + 8) = iVar8;
      lVar14 = Library::MSVCRT::__ftol();
      iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
      fVar1 = (float)iVar5 * _DAT_007904f8;
      *(int *)(iVar11 + 0xc) = iVar7;
      *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
      pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
      fVar13 = FUN_006e3210(pAVar4,(iVar8 * pAVar4->field_0380) / 0xc9,
                            (iVar7 * pAVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar13;
      if (*(float *)(iVar11 + 0x10) <= fVar1) {
        if (fVar1 <= *(float *)(iVar11 + 0x10)) {
          if (*(float *)(iVar11 + 0x10) <= fVar1 - _DAT_0079d4a8) {
            *(float *)(iVar11 + 0x10) = fVar1;
          }
          else {
            *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
          }
        }
        else {
          FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
          *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
          *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
        }
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x32);
  local_10 = 0;
  local_c = 0x32;
  do {
    iVar11 = param_1->field_0336;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((local_c < *(uint *)(iVar11 + 0xc)) &&
       (iVar11 = *(int *)(iVar11 + 8) * local_c + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
      *(float *)(iVar11 + 0x2c) = (float)iVar6;
      Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fcos(extraout_ST0_00);
      lVar14 = Library::MSVCRT::__ftol();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1_00);
      iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
      *(int *)(iVar11 + 8) = iVar8;
      lVar14 = Library::MSVCRT::__ftol();
      iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
      fVar1 = (float)iVar5 * _DAT_007904f8;
      *(int *)(iVar11 + 0xc) = iVar7;
      *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
      pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
      fVar13 = FUN_006e3210(pAVar4,(iVar8 * pAVar4->field_0380) / 0xc9,
                            (iVar7 * pAVar4->field_0380) / 0xc9);
      fVar1 = (float)fVar13;
      if (fVar1 < *(float *)(iVar11 + 0x10)) {
        local_10 = local_10 + 1;
      }
      else if (fVar1 <= *(float *)(iVar11 + 0x10)) {
        if (fVar1 - _DAT_0079d4a8 < *(float *)(iVar11 + 0x10)) {
          *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
        }
      }
      else {
        FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
        *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
        *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
      }
    }
    iVar11 = local_c - 0x31;
    local_c = local_c + 1;
  } while (iVar11 < 10);
  if (local_10 == 0) {
    local_14 = 1;
  }
  else if (param_1->field_037F != 0) {
    *(int *)(param_1->field_037F + 0xc) = iVar6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(char *)(param_1->field_037F + 0x15) == '\0') && ((PTR_00802a38->field_00E4 & 1) == 0)) {
      *(undefined1 *)(param_1->field_037F + 0x15) = 1;
      uVar9 = *(uint *)param_1->field_037F;
      if (-1 < (int)uVar9) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006e9720((void *)param_1->field_0211,uVar9,
                     (uint)*(byte *)((int)param_1->field_037F + 0x15) * 0x100 + DAT_008032b8);
      }
    }
  }
  if (0 < iVar12) {
    iVar5 = iVar12 * 2 + -1;
    iVar6 = param_1->field_02C0 % 0x1e + 6;
    sVar2 = param_1->field_0257;
    uVar9 = iVar6 * 10;
    iVar12 = uVar9 + 10;
    if ((int)uVar9 < iVar12) {
      do {
        iVar11 = param_1->field_0336;
        if (uVar9 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar9 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        if (*(int *)(iVar11 + 4) == 2) {
          *(undefined4 *)(iVar11 + 4) = 3;
        }
        if (iVar11 != 0) {
          iVar8 = param_1->field_0336;
          uVar10 = iVar6 * -10 + 0x3c + uVar9;
          if (uVar10 < *(uint *)(iVar8 + 0xc)) {
            iVar8 = *(int *)(iVar8 + 8) * uVar10 + *(int *)(iVar8 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          if (-1 < *(int *)(iVar8 + 0x34)) {
            *(float *)(iVar11 + 0x2c) = (float)(param_1->field_02C0 * 0x23 + param_1->field_02B4);
            Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_01);
            lVar14 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST1_01);
            iVar8 = (int)lVar14 + *(int *)(iVar11 + 0x14);
            *(int *)(iVar11 + 8) = iVar8;
            lVar14 = Library::MSVCRT::__ftol();
            iVar7 = (int)lVar14 + *(int *)(iVar11 + 0x18);
            fVar1 = (float)(((iVar5 * -8) / 2 -
                            ((int)(iVar5 * iVar5 + (iVar5 * iVar5 >> 0x1f & 3U)) >> 2)) + (int)sVar2
                           ) * _DAT_007904f8;
            *(int *)(iVar11 + 0xc) = iVar7;
            *(float *)(iVar11 + 0x10) = fVar1 * _DAT_007904f0;
            pAVar4 = (AnonShape_006E3210_FE49985F *)param_1->field_0211;
            fVar13 = FUN_006e3210(pAVar4,(iVar8 * pAVar4->field_0380) / 0xc9,
                                  (iVar7 * pAVar4->field_0380) / 0xc9);
            fVar1 = (float)fVar13;
            if (*(float *)(iVar11 + 0x10) <= fVar1) {
              if (*(float *)(iVar11 + 0x10) < fVar1) {
                FUN_006e8ba0((void *)param_1->field_0211,*(uint *)(iVar11 + 0x38));
                *(undefined4 *)(iVar11 + 0x38) = 0xffffffff;
                *(undefined4 *)(iVar11 + 0x34) = 0xffffffff;
                goto LAB_0063fc75;
              }
              if (*(float *)(iVar11 + 0x10) <= fVar1 - _DAT_0079d4a8) {
                *(float *)(iVar11 + 0x10) = fVar1;
              }
              else {
                *(float *)(iVar11 + 0x10) = fVar1 - _DAT_0079d4a8;
              }
            }
            uVar10 = PTR_00802a38->field_00E4;
            *(undefined4 *)(iVar11 + 0x20) = 10;
            *(uint *)(iVar11 + 0x30) = uVar10;
          }
        }
LAB_0063fc75:
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar12);
    }
  }
  if ((local_14 != 0) && (uVar9 = 0x3c, 0x3c < iVar3)) {
    iVar12 = param_1->field_0336;
    do {
      if ((((uVar9 < *(uint *)(iVar12 + 0xc)) &&
           (iVar5 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar5 != 0)) &&
          (-1 < *(int *)(iVar5 + 0x34))) && (*(int *)(iVar5 + 0x20) < *(int *)(iVar5 + 0x24) + -1))
      {
        local_10 = local_10 + 1;
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar3);
  }
  if (local_10 == 0) {
    local_14 = local_14 + 1;
  }
  iVar12 = param_1->field_02C0 + 1;
  param_1->field_02C0 = iVar12;
  param_1->field_02B8 = iVar12 * 0x23 + param_1->field_02B4;
  return local_14;
}

