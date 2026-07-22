
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00633770(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_10;
  float10 fVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_02;
  longlong lVar25;
  int local_18;
  uint local_14;

  switch(*(undefined4 *)((int)this + 0x11)) {
  case 0:
    uVar13 = 0;
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      fVar23 = (float10)(g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5));
      fVar19 = (float10)fsin(fVar23 * (float10)*(float *)((int)this + 0x5d));
      fVar24 = (float10)_DAT_0079cd88;
      fVar7 = (float10)_DAT_007901c0;
      fVar1 = *(float *)((int)this + 0x75);
      fVar6 = *(float *)((int)this + 0x65);
      fVar2 = *(float *)((int)this + 0x65);
      fVar20 = (float10)fcos(fVar23 * (float10)*(float *)((int)this + 0x61));
      fVar23 = (float10)_DAT_0079cd88;
      fVar8 = (float10)_DAT_007901c0;
      fVar3 = *(float *)((int)this + 0x79);
      fVar4 = *(float *)((int)this + 0x6d);
      fVar5 = *(float *)((int)this + 0x6d);
      if (0 < iVar14) {
        do {
          iVar18 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar21 = (float10)fcos((float10)*(float *)((int)this + 0x7d) +
                                   (float10)*(float *)(iVar18 + 0x21) +
                                   (float10)(float)(((float10)fVar1 - (float10)fVar6) *
                                                    (fVar19 + fVar24) * fVar7 + (float10)fVar2));
            fVar22 = (float10)fcos((float10)*(float *)((int)this + 0x81) +
                                   (float10)*(float *)(iVar18 + 0x21) +
                                   (float10)(float)(((float10)fVar3 - (float10)fVar4) *
                                                    (fVar20 + fVar23) * fVar8 + (float10)fVar5));
            fVar22 = fVar22 * (float10)*(float *)((int)this + 0x91);
            fsin(fVar22);
            fcos(fVar21 * (float10)*(float *)((int)this + 0x8d));
            lVar25 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST1);
            *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
            lVar25 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar22);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
        return;
      }
    }
    break;
  case 1:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (*(float *)((int)this + 0x79) < *(float *)((int)this + 0x8d)) {
      *(float *)((int)this + 0x8d) =
           (*(float *)((int)this + 0x8d) - *(float *)((int)this + 0x79)) +
           *(float *)((int)this + 0x6d);
    }
    if (*(int *)this != 0) {
      param_1 = *(int *)((int)this + 0x1d);
      iVar14 = param_1 * 2;
      uVar13 = *(int *)(*(int *)this + 0xc) - param_1;
      fVar1 = _DAT_0079d1a4 - (*(float *)((int)this + 0x91) + *(float *)((int)this + 0x91));
      local_14 = 0;
      if (0 < param_1) {
        local_18 = 0;
        uVar10 = uVar13;
        do {
          iVar18 = *(int *)this;
          if ((uVar10 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar24 = ((float10)local_18 * (float10)_DAT_0079d1a4) / (float10)param_1 +
                     (float10)*(float *)((int)this + 0x8d) + (float10)(fVar1 / (float)iVar14);
            fVar23 = ((float10)*(float *)((int)this + 0x69) - (float10)*(float *)((int)this + 0x65))
                     + (float10)*(float *)((int)this + 0x65);
            fsin(fVar23);
            fcos(fVar24);
            fsin(fVar24);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
            lVar25 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar23);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
          }
          local_18 = local_18 + 2;
          local_14 = local_14 + 1;
          param_1 = *(int *)((int)this + 0x1d);
          uVar10 = uVar10 + 1;
        } while ((int)local_14 < param_1);
      }
      local_14 = 0;
      if (0 < (int)uVar13) {
        do {
          iVar14 = *(int *)this;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_14 < *(uint *)(iVar14 + 0xc)) &&
             (iVar14 = *(int *)(iVar14 + 8) * local_14 + *(int *)(iVar14 + 0x1c), iVar14 != 0)) {
            fVar24 = (float10)*(float *)(iVar14 + 0x21) + (float10)*(float *)((int)this + 0x8d);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            fVar23 = (float10)fsin(((float10)*(int *)((int)this + 0x1d) * (float10)(int)local_14 *
                                   (float10)_DAT_0079c5a4) / (float10)*(int *)((int)this + 0x19) +
                                   (float10)*(float *)((int)this + 0x91));
            fVar23 = ((float10)*(float *)((int)this + 0x69) - (float10)*(float *)((int)this + 0x65))
                     * (fVar23 + (float10)_DAT_0079cd88) * (float10)_DAT_007901c0 +
                     (float10)*(float *)((int)this + 0x65);
            fsin(fVar23);
            fcos(fVar24);
            fsin(fVar24);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar14 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
            lVar25 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar23);
            *(int *)(iVar14 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar14 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
          }
          local_14 = local_14 + 1;
        } while ((int)local_14 < (int)uVar13);
      }
    }
    *(float *)((int)this + 0x8d) = *(float *)((int)this + 0x89) + *(float *)((int)this + 0x8d);
    *(float *)((int)this + 0x91) = *(float *)((int)this + 0x85) + *(float *)((int)this + 0x91);
    if (*(float *)((int)this + 0x81) != _DAT_0079034c) {
      fVar1 = *(float *)((int)this + 0x81) + *(float *)((int)this + 0x69);
      *(float *)((int)this + 0x69) = fVar1;
      if (*(float *)((int)this + 0x81) <= _DAT_0079034c) {
        if (fVar1 <= *(float *)((int)this + 0x65)) {
          *(float *)((int)this + 0x81) = -*(float *)((int)this + 0x81);
          return;
        }
      }
      else if (*(float *)((int)this + 0x75) <= fVar1) {
        *(float *)((int)this + 0x81) = -*(float *)((int)this + 0x81);
        return;
      }
    }
    break;
  case 2:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    fVar24 = (float10)*(float *)((int)this + 0x91);
    if (*(float *)((int)this + 0x79) < *(float *)((int)this + 0x8d)) {
      *(float *)((int)this + 0x8d) =
           (*(float *)((int)this + 0x8d) - *(float *)((int)this + 0x79)) +
           *(float *)((int)this + 0x6d);
    }
    if (*(float *)((int)this + 0x75) < *(float *)((int)this + 0x91)) {
      *(float *)((int)this + 0x91) =
           (*(float *)((int)this + 0x91) - *(float *)((int)this + 0x75)) +
           *(float *)((int)this + 0x65);
    }
    local_14 = 0;
    if (0 < *(int *)((int)this + 0x1d)) {
      pfVar11 = (float *)((int)this + 0x21);
      do {
        fVar1 = (float)(int)local_14 * *(float *)((int)this + 0x7d);
        fVar6 = *(float *)((int)this + 0x91) - fVar1;
        if (fVar6 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar11) {
            if (*pfVar11 < *(float *)((int)this + 0x75)) {
              fVar6 = (*(float *)((int)this + 0x75) + *(float *)((int)this + 0x91)) - fVar1;
            }
            if (fVar6 < _DAT_0079034c) {
              uVar13 = *(int *)((int)this + 0x19) * local_14;
              iVar14 = *(int *)((int)this + 0x19) + uVar13;
              if (*(int *)this != 0) {
                for (; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
                  iVar18 = *(int *)this;
                  if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                     (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)
                     ) {
                    *(undefined4 *)(iVar18 + 8) = 0;
                  }
                }
              }
            }
          }
        }
        else if (*pfVar11 <= _DAT_0079034c) {
          uVar13 = *(int *)((int)this + 0x19) * local_14;
          iVar14 = *(int *)((int)this + 0x19) + uVar13;
          if (*(int *)this != 0) {
            for (; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
              iVar18 = *(int *)this;
              if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                 (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
                *(undefined4 *)(iVar18 + 8) = 1;
              }
            }
          }
        }
        local_14 = local_14 + 1;
        *pfVar11 = fVar6;
        pfVar11 = pfVar11 + 1;
      } while ((int)local_14 < *(int *)((int)this + 0x1d));
    }
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      uVar13 = 0;
      if (0 < iVar14) {
        do {
          if (*(int *)((int)this + 0x19) != 0) {
            fVar24 = (float10)*(float *)((int)this +
                                        ((int)uVar13 / *(int *)((int)this + 0x19)) * 4 + 0x21);
          }
          iVar18 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar23 = (float10)*(float *)(iVar18 + 0x21) + (float10)*(float *)((int)this + 0x8d);
            fsin(fVar24);
            fcos(fVar23);
            fsin(fVar23);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
            lVar25 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0);
            *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fVar24 = extraout_ST0_00;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
      }
    }
    *(float *)((int)this + 0x8d) =
         (float)param_2 * *(float *)((int)this + 0x89) * _DAT_0079d078 +
         *(float *)((int)this + 0x8d);
    *(float *)((int)this + 0x91) = *(float *)((int)this + 0x85) + *(float *)((int)this + 0x91);
    return;
  case 3:
    uVar13 = 0;
    bVar9 = false;
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    switch(*(undefined4 *)((int)this + 0x2d)) {
    case 0:
      iVar14 = *(int *)this;
      if (iVar14 != 0) {
        uVar13 = *(uint *)(iVar14 + 0xc);
        fVar1 = (float)(g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5)) *
                *(float *)((int)this + 0x81);
        if (fVar1 < *(float *)((int)this + 0x71)) {
          if (_DAT_0079034c < fVar1) {
            uVar10 = *(int *)((int)this + 0x1d) * 2 - 1;
            if (uVar10 < uVar13) {
              iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(float *)(iVar14 + 0x21) = fVar1 + *(float *)((int)this + 0x41);
            iVar14 = *(int *)this;
            if (uVar13 - 1 < *(uint *)(iVar14 + 0xc)) {
              iVar14 = *(int *)(iVar14 + 8) * (uVar13 - 1) + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(float *)(iVar14 + 0x21) = *(float *)((int)this + 0x41) - fVar1;
          }
          lVar25 = Library::MSVCRT::__ftol();
          iVar14 = (int)lVar25;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar1 = (float)(extraout_ST0_01 - (float10)iVar14 * (float10)*(float *)((int)this + 0x75))
          ;
          if (iVar14 < 1) {
            if (*(int *)(*(int *)this + 0xc) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(*(int *)this + 0x1c);
            }
            *(undefined4 *)(iVar14 + 8) = 1;
            *(undefined4 *)(iVar14 + 0x21) = *(undefined4 *)((int)this + 0x41);
          }
          else {
            iVar18 = 1;
            param_2 = iVar14;
            if (0 < iVar14) {
              do {
                param_2 = param_2 + -1;
                if (iVar18 % 3 == 0) {
                  uVar10 = iVar18 / 3;
                  iVar17 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                    iVar17 = *(int *)(iVar17 + 8) * uVar10 + *(int *)(iVar17 + 0x1c);
                  }
                  else {
                    iVar17 = 0;
                  }
                  *(undefined4 *)(iVar17 + 8) = 1;
                  *(float *)(iVar17 + 0x21) =
                       (float)param_2 * *(float *)((int)this + 0x75) + *(float *)((int)this + 0x41)
                       + fVar1;
                  if (iVar14 != *(int *)((int)this + 0x1d)) {
                    iVar17 = *(int *)this;
                    uVar10 = *(int *)((int)this + 0x1d) / 2 + uVar10;
                    if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                      iVar17 = *(int *)(iVar17 + 8) * uVar10 + *(int *)(iVar17 + 0x1c);
                    }
                    else {
                      iVar17 = 0;
                    }
                    *(undefined4 *)(iVar17 + 8) = 1;
                    *(float *)(iVar17 + 0x21) =
                         *(float *)((int)this + 0x41) -
                         ((float)param_2 * *(float *)((int)this + 0x75) + fVar1);
                  }
                }
                else {
                  iVar17 = iVar18 % 3 + (iVar18 / 3) * 2;
                  uVar10 = iVar17 + *(int *)((int)this + 0x1d) * 2;
                  iVar16 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar16 + 0xc)) {
                    iVar16 = *(int *)(iVar16 + 8) * uVar10 + *(int *)(iVar16 + 0x1c);
                  }
                  else {
                    iVar16 = 0;
                  }
                  fVar6 = (float)param_2;
                  *(undefined4 *)(iVar16 + 8) = 1;
                  *(float *)(iVar16 + 0x21) =
                       fVar6 * *(float *)((int)this + 0x75) + *(float *)((int)this + 0x41) + fVar1;
                  uVar10 = *(int *)((int)this + 0x99) + iVar17;
                  iVar17 = *(int *)this;
                  if (uVar10 < *(uint *)(iVar17 + 0xc)) {
                    iVar16 = *(int *)(iVar17 + 8) * uVar10;
                    iVar17 = *(int *)(iVar17 + 0x1c);
                    *(undefined4 *)(iVar16 + 8 + iVar17) = 1;
                    *(float *)(iVar16 + iVar17 + 0x21) =
                         *(float *)((int)this + 0x41) -
                         (fVar6 * *(float *)((int)this + 0x75) + fVar1);
                  }
                  else {
                    uRam00000008 = 1;
                    fRam00000021 = *(float *)((int)this + 0x41) -
                                   (fVar6 * *(float *)((int)this + 0x75) + fVar1);
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 <= iVar14);
            }
          }
        }
        else {
          uVar10 = 0;
          bVar9 = true;
          if (0 < (int)uVar13) {
            do {
              iVar14 = *(int *)this;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              uVar10 = uVar10 + 1;
              *(undefined4 *)(iVar14 + 8) = 0;
            } while ((int)uVar10 < (int)uVar13);
          }
          local_14 = 0;
          if (0 < *(int *)((int)this + 0x1d)) {
            param_1 = 2;
            do {
              iVar14 = *(int *)this;
              if (local_14 < *(uint *)(iVar14 + 0xc)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar14 = *(int *)(iVar14 + 8) * local_14 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = (float)(int)local_14 * fVar1 * _DAT_007904fc;
              iVar14 = *(int *)this;
              uVar10 = (*(int *)((int)this + 0x1d) + local_14) * 2;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = (float)(param_1 + -1) * fVar1;
              uVar10 = (*(int *)((int)this + 0x1d) + local_14) * 2 + 1;
              iVar14 = *(int *)this;
              if (uVar10 < *(uint *)(iVar14 + 0xc)) {
                iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              fVar6 = (float)param_1;
              local_14 = local_14 + 1;
              param_1 = param_1 + 3;
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar14 + 8) = 1;
              *(float *)(iVar14 + 0x21) = fVar6 * fVar1;
            } while ((int)local_14 < *(int *)((int)this + 0x1d));
          }
        }
        uVar10 = 0;
        if (0 < (int)uVar13) {
          do {
            iVar14 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar14 + 0xc)) &&
                (iVar14 = *(int *)(iVar14 + 8) * uVar10 + *(int *)(iVar14 + 0x1c), iVar14 != 0)) &&
               (*(int *)(iVar14 + 8) == 1)) {
              fVar1 = *(float *)((int)this + 0x45);
              fVar24 = (float10)*(float *)(iVar14 + 0x21) + (float10)*(float *)((int)this + 0x41);
              fsin((float10)fVar1);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar14 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)fVar1);
              *(int *)(iVar14 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar14 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar13);
        }
        if (bVar9) {
          *(undefined4 *)((int)this + 0x2d) = 1;
          uVar13 = g_playSystem_00802A38->field_00E4;
          *(undefined4 *)((int)this + 9) = 0xf;
          *(uint *)((int)this + 5) = uVar13;
          return;
        }
      }
      break;
    case 1:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        uVar13 = g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5);
        fVar1 = (float)uVar13 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        if (*(uint *)((int)this + 9) <= uVar13) {
          iVar18 = *(int *)((int)this + 0x1d);
          uVar13 = 0;
          if (0 < iVar18) {
            do {
              iVar17 = *(int *)this;
              if (uVar13 < *(uint *)(iVar17 + 0xc)) {
                iVar16 = *(int *)(iVar17 + 8) * uVar13 + *(int *)(iVar17 + 0x1c);
              }
              else {
                iVar16 = 0;
              }
              if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
                iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar16 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              iVar18 = *(int *)this;
              uVar10 = (*(int *)((int)this + 0x1d) + uVar13) * 2;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar17 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar17 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              uVar10 = (*(int *)((int)this + 0x1d) + uVar13) * 2 + 1;
              iVar18 = *(int *)this;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar17 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
              if (uVar10 < *(uint *)(iVar18 + 0xc)) {
                iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 0x21) = *(undefined4 *)(iVar17 + 0x21);
              *(undefined4 *)(iVar18 + 8) = 1;
              iVar18 = *(int *)((int)this + 0x1d);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < iVar18);
          }
          *(float *)((int)this + 0x7d) =
               *(float *)((int)this + 0x75) * _DAT_007904fc * _DAT_00790784;
          lVar25 = Library::MSVCRT::__ftol();
          *(undefined4 *)((int)this + 0x2d) = 2;
          *(float *)((int)this + 0x81) = (float)(extraout_ST0_02 / (float10)(int)lVar25);
          fVar6 = _DAT_0079c5a4;
          *(uint *)((int)this + 5) = g_playSystem_00802A38->field_00E4;
          if (fVar1 <= fVar6) {
            *(float *)((int)this + 0x79) = fVar1;
          }
          else {
            lVar25 = Library::MSVCRT::__ftol();
            *(float *)((int)this + 0x79) = fVar1 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar6 = *(float *)((int)this + 0x45);
              fVar24 = (float10)fVar1 + (float10)*(float *)(iVar18 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)fVar6);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
          return;
        }
      }
      break;
    case 2:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar6 = (float)(g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5));
        fVar1 = fVar6 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        fVar6 = fVar6 * *(float *)((int)this + 0x81);
        if ((*(float *)((int)this + 0x7d) <= fVar6) ||
           (*(float *)((int)this + 0x7d) - fVar6 < _DAT_0079d1bc)) {
          bVar9 = true;
        }
        iVar18 = *(int *)((int)this + 0x1d);
        if (0 < iVar18) {
          do {
            iVar17 = *(int *)this;
            if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
              iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar18 + 8) = 1;
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + fVar6;
            iVar18 = *(int *)((int)this + 0x1d);
          } while ((int)uVar13 < iVar18);
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar6 = *(float *)((int)this + 0x45);
              fVar24 = (float10)fVar1 + (float10)*(float *)(iVar18 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)fVar6);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        fVar6 = _DAT_0079c5a4;
        if (bVar9) {
          *(undefined4 *)((int)this + 0x2d) = 3;
          if (fVar1 <= fVar6) {
            *(float *)((int)this + 0x79) = fVar1;
          }
          else {
            lVar25 = Library::MSVCRT::__ftol();
            *(float *)((int)this + 0x79) = fVar1 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
          if (*(float *)((int)this + 0x65) != _DAT_0079034c) {
            lVar25 = Library::MSVCRT::__ftol();
            uVar13 = (int)(uint)lVar25 >> 0x1f;
            param_1 = ((uint)lVar25 ^ uVar13) - uVar13;
            if (param_1 == 0) {
              param_1 = 1;
            }
            fVar24 = (float10)param_1;
            iVar14 = *(int *)this;
            *(float *)((int)this + 0x51) =
                 (float)(((float10)*(float *)((int)this + 0x69) -
                         (float10)*(float *)((int)this + 0x45)) / fVar24);
            *(float *)((int)this + 0x55) =
                 (float)(((float10)*(float *)((int)this + 0x6d) -
                         (float10)*(float *)((int)this + 0x45)) / fVar24);
            if (*(int *)(iVar14 + 0xc) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(iVar14 + 0x1c);
            }
            iVar17 = *(int *)((int)this + 0x19);
            fVar1 = ABS(*(float *)(*(int *)((int)this + 0x39) + iVar17 * 4) -
                        *(float *)(iVar18 + 0x21));
            *(float *)((int)this + 0x49) = fVar1;
            if (*(float *)((int)this + 0x89) < fVar1) {
              Library::MSVCRT::__ftol();
              lVar25 = Library::MSVCRT::__ftol();
              uVar13 = (int)(uint)lVar25 >> 0x1f;
              *(float *)((int)this + 0x49) =
                   /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                   (float)(extraout_ST0_03 -
                          (float10)(int)(((uint)lVar25 ^ uVar13) - uVar13) *
                          (float10)*(float *)((int)this + 0x89));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST1_00;
            }
            if (_DAT_0079034c < *(float *)((int)this + 0x49)) {
              *(float *)((int)this + 0x49) =
                   *(float *)((int)this + 0x49) - *(float *)((int)this + 0x89);
            }
            if (*(uint *)((int)this + 0x1d) < *(uint *)(iVar14 + 0xc)) {
              iVar14 = *(int *)(iVar14 + 8) * *(uint *)((int)this + 0x1d) + *(int *)(iVar14 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            fVar1 = ABS(*(float *)(*(int *)((int)this + 0x39) + -4 + iVar17 * 8) -
                        *(float *)(iVar14 + 0x21));
            *(float *)((int)this + 0x4d) = fVar1;
            if (*(float *)((int)this + 0x89) < fVar1) {
              Library::MSVCRT::__ftol();
              lVar25 = Library::MSVCRT::__ftol();
              uVar13 = (int)(uint)lVar25 >> 0x1f;
              *(float *)((int)this + 0x4d) =
                   /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                   (float)(extraout_ST0_04 -
                          (float10)(int)(((uint)lVar25 ^ uVar13) - uVar13) *
                          (float10)*(float *)((int)this + 0x89));
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST1_01;
            }
            *(float *)((int)this + 0x59) = (float)((float10)*(float *)((int)this + 0x49) / fVar24);
            *(float *)((int)this + 0x5d) = (float)((float10)*(float *)((int)this + 0x4d) / fVar24);
            *(uint *)((int)this + 5) = g_playSystem_00802A38->field_00E4;
            return;
          }
        }
      }
      break;
    case 3:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar2 = (float)(g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5));
        fVar6 = fVar2 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        fVar3 = fVar2 * *(float *)((int)this + 0x51);
        fVar1 = *(float *)((int)this + 0x55);
        if ((fVar3 + *(float *)((int)this + 0x45) <= *(float *)((int)this + 0x69)) ||
           ((*(float *)((int)this + 0x45) - fVar3) + *(float *)((int)this + 0x69) <
            (float)_DAT_0079d1b0)) {
          bVar9 = true;
        }
        if (0 < *(int *)((int)this + 0x1d)) {
          do {
            iVar18 = *(int *)this;
            if (uVar13 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = (*(int *)((int)this + 0x1d) + uVar13) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = (*(int *)((int)this + 0x1d) + uVar13) * 2 + 1;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = *(float *)(iVar18 + 0x25) + fVar4;
            iVar18 = *(int *)this;
            uVar10 = *(int *)((int)this + 0x1d) + uVar13;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
            uVar10 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            iVar18 = *(int *)this;
            if (uVar10 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar4 + *(float *)(iVar18 + 0x25);
          } while ((int)uVar13 < *(int *)((int)this + 0x1d));
        }
        iVar18 = *(int *)((int)this + 0x35);
        if ((0 < iVar18) && (!bVar9)) {
          iVar17 = *(int *)((int)this + 0x19) - iVar18;
          fVar4 = *(float *)(*(int *)((int)this + 0x39) + iVar17 * 4);
          if (fVar4 <= fVar2 * fVar1 + *(float *)((int)this + 0x45)) {
            fVar1 = *(float *)((int)this + 0x45);
            iVar15 = 0;
            iVar16 = *(int *)((int)this + 0x1d);
            fVar2 = *(float *)(*(int *)((int)this + 0x39) +
                              (*(int *)((int)this + 0x19) * 2 - iVar18) * 4);
            if (0 < iVar16) {
              param_1 = 0;
              do {
                iVar18 = *(int *)this;
                uVar13 = (iVar17 + 5) * iVar16 + iVar15;
                if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                   (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0))
                {
                  *(float *)(iVar18 + 0x25) = fVar4 - fVar1;
                  fVar5 = *(float *)((int)this + 0x75);
                  *(undefined4 *)(iVar18 + 8) = 1;
                  *(float *)(iVar18 + 0x21) = (float)param_1 * fVar5 + fVar2;
                }
                iVar15 = iVar15 + 1;
                param_1 = param_1 + 3;
                iVar16 = *(int *)((int)this + 0x1d);
              } while (iVar15 < iVar16);
            }
            *(int *)((int)this + 0x35) = *(int *)((int)this + 0x35) + -1;
          }
        }
        iVar18 = *(int *)((int)this + 0x31);
        if ((0 < iVar18) && (!bVar9)) {
          fVar1 = *(float *)(*(int *)((int)this + 0x39) + (iVar18 + -1) * 4);
          if (fVar3 + *(float *)((int)this + 0x45) <= fVar1) {
            fVar2 = *(float *)((int)this + 0x45);
            iVar16 = 0;
            fVar3 = *(float *)(*(int *)((int)this + 0x39) +
                              (*(int *)((int)this + 0x19) + iVar18 + -1) * 4);
            iVar17 = *(int *)((int)this + 0x1d);
            if (0 < iVar17) {
              param_1 = 0;
              do {
                iVar15 = *(int *)this;
                uVar13 = (iVar18 + 4) * iVar17 + iVar16;
                if ((uVar13 < *(uint *)(iVar15 + 0xc)) &&
                   (iVar17 = *(int *)(iVar15 + 8) * uVar13 + *(int *)(iVar15 + 0x1c), iVar17 != 0))
                {
                  *(float *)(iVar17 + 0x25) = fVar1 - fVar2;
                  fVar4 = *(float *)((int)this + 0x75);
                  *(undefined4 *)(iVar17 + 8) = 1;
                  *(float *)(iVar17 + 0x21) = (float)param_1 * fVar4 + fVar3;
                }
                iVar16 = iVar16 + 1;
                param_1 = param_1 + 3;
                iVar17 = *(int *)((int)this + 0x1d);
              } while (iVar16 < iVar17);
            }
            *(int *)((int)this + 0x31) = *(int *)((int)this + 0x31) + -1;
          }
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = (float10)fVar6 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        if (bVar9) {
          if (fVar6 <= _DAT_0079c5a4) {
            *(float *)((int)this + 0x79) = fVar6;
          }
          else {
            lVar25 = Library::MSVCRT::__ftol();
            *(float *)((int)this + 0x79) = fVar6 - (float)((int)lVar25 << 1) * _DAT_0079d1a4;
          }
          *(undefined4 *)((int)this + 0x2d) = 4;
          uVar13 = g_playSystem_00802A38->field_00E4;
          *(undefined4 *)((int)this + 9) = 0x14;
          *(uint *)((int)this + 5) = uVar13;
          return;
        }
      }
      break;
    case 4:
      if (*(int *)this != 0) {
        uVar10 = 0;
        uVar13 = g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5);
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar24 = (float10)uVar13 * (float10)*(float *)((int)this + 0x61) +
                 (float10)*(float *)((int)this + 0x79);
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = fVar24 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST0_05;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar14);
        }
        if (*(uint *)((int)this + 9) <= uVar13) {
          lVar25 = Library::MSVCRT::__ftol();
          iVar14 = (int)lVar25;
          *(undefined4 *)((int)this + 0x35) = 0;
          *(undefined4 *)((int)this + 0x2d) = 5;
          *(float *)((int)this + 0x55) = (float)-(extraout_ST0_06 / (float10)iVar14);
          *(float *)((int)this + 0x5d) = -(*(float *)((int)this + 0x89) / (float)iVar14);
          fVar24 = (float10)_DAT_0079c5a4;
          uVar13 = g_playSystem_00802A38->field_00E4;
          *(int *)((int)this + 9) = iVar14;
          *(uint *)((int)this + 5) = uVar13;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (extraout_ST1_02 <= fVar24) {
            *(float *)((int)this + 0x79) = (float)extraout_ST1_02;
            return;
          }
          lVar25 = Library::MSVCRT::__ftol();
          *(float *)((int)this + 0x79) =
               /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
               (float)(extraout_ST0_07 - (float10)((int)lVar25 << 1) * (float10)_DAT_0079d1a4);
        }
      }
      break;
    case 5:
      if (*(int *)this != 0) {
        iVar14 = *(int *)(*(int *)this + 0xc);
        uVar10 = g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5);
        fVar23 = (float10)uVar10;
        iVar18 = *(int *)((int)this + 0x1d);
        fVar1 = *(float *)((int)this + 0x55);
        fVar24 = (float10)*(float *)((int)this + 0x79) -
                 fVar23 * (float10)*(float *)((int)this + 0x61);
        if (0 < iVar18) {
          do {
            iVar17 = *(int *)this;
            if (iVar18 + uVar13 < *(uint *)(iVar17 + 0xc)) {
              iVar18 = *(int *)(iVar17 + 8) * (iVar18 + uVar13) + *(int *)(iVar17 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar12 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar12 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar12 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)this;
            uVar12 = (uVar13 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            if (uVar12 < *(uint *)(iVar18 + 0xc)) {
              iVar18 = *(int *)(iVar18 + 8) * uVar12 + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar18 = 0;
            }
            uVar13 = uVar13 + 1;
            *(float *)(iVar18 + 0x21) = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar18 + 8) = 1;
            *(float *)(iVar18 + 0x25) = fVar6 + *(float *)(iVar18 + 0x25);
            iVar18 = *(int *)((int)this + 0x1d);
          } while ((int)uVar13 < iVar18);
        }
        if ((*(int *)((int)this + 0x35) < *(int *)((int)this + 0x19) + -2) &&
           (iVar18 = *(int *)((int)this + 0x19) - *(int *)((int)this + 0x35),
           (float)(fVar23 * (float10)fVar1) + *(float *)((int)this + 0x6d) <=
           *(float *)(*(int *)((int)this + 0x39) + (iVar18 + -2) * 4))) {
          iVar17 = *(int *)((int)this + 0x1d);
          iVar16 = 0;
          if (0 < iVar17) {
            do {
              iVar15 = *(int *)this;
              uVar13 = (iVar18 + 3) * iVar17 + iVar16;
              if (uVar13 < *(uint *)(iVar15 + 0xc)) {
                iVar17 = *(int *)(iVar15 + 8) * uVar13 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              *(undefined4 *)(iVar17 + 8) = 0;
              iVar17 = *(int *)((int)this + 0x1d);
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar17);
          }
          *(int *)((int)this + 0x35) = *(int *)((int)this + 0x35) + 1;
        }
        uVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar13 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = fVar24 + (float10)*(float *)(iVar18 + 0x21);
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24 = extraout_ST0_08;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar14);
        }
        if (*(uint *)((int)this + 9) <= uVar10) {
          if (fVar24 <= (float10)_DAT_0079c5a4) {
            *(float *)((int)this + 0x79) = (float)fVar24;
          }
          else {
            lVar25 = Library::MSVCRT::__ftol();
            *(float *)((int)this + 0x79) =
                 /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                 (float)(extraout_ST0_09 - (float10)((int)lVar25 << 1) * (float10)_DAT_0079d1a4);
          }
          *(undefined4 *)((int)this + 0x2d) = 6;
          uVar13 = g_playSystem_00802A38->field_00E4;
          *(undefined4 *)((int)this + 9) = 0x14f;
          *(uint *)((int)this + 5) = uVar13;
          return;
        }
      }
      break;
    case 6:
      if (*(int *)this != 0) {
        uVar10 = 0;
        uVar13 = g_playSystem_00802A38->field_00E4 - *(int *)((int)this + 5);
        iVar14 = *(int *)(*(int *)this + 0xc);
        fVar1 = *(float *)((int)this + 0x61);
        fVar6 = *(float *)((int)this + 0x79);
        if (0 < iVar14) {
          do {
            iVar18 = *(int *)this;
            if (((uVar10 < *(uint *)(iVar18 + 0xc)) &&
                (iVar18 = *(int *)(iVar18 + 8) * uVar10 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) &&
               (*(int *)(iVar18 + 8) == 1)) {
              fVar24 = (float10)((float)uVar13 * fVar1 + fVar6) + (float10)*(float *)(iVar18 + 0x21)
              ;
              fVar23 = (float10)*(float *)(iVar18 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar23);
              fcos(fVar24);
              fsin(fVar24);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x8d);
              lVar25 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar23);
              *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x91);
              lVar25 = Library::MSVCRT::__ftol();
              *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x95);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar14);
        }
        if (*(uint *)((int)this + 9) <= uVar13) {
          *(undefined4 *)((int)this + 0x2d) = 0;
          return;
        }
      }
    }
    break;
  case 4:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (*(int *)this != 0) {
      iVar14 = *(int *)(*(int *)this + 0xc);
      iVar18 = *(int *)((int)this + 0x1d);
      uVar13 = 0;
      if (0 < iVar18 * 2) {
        do {
          iVar17 = *(int *)this;
          if ((uVar13 < *(uint *)(iVar17 + 0xc)) &&
             (iVar17 = *(int *)(iVar17 + 8) * uVar13 + *(int *)(iVar17 + 0x1c), iVar17 != 0)) {
            fVar1 = *(float *)(iVar17 + 0x21) + *(float *)((int)this + 0x8d);
            if ((int)uVar13 < iVar18) {
              fVar6 = *(float *)(iVar17 + 0x25);
            }
            else {
              fVar6 = *(float *)((int)this + 0x71);
            }
            fsin((float10)fVar6);
            fcos((float10)fVar1);
            fsin((float10)fVar1);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar17 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
            lVar25 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_10);
            *(int *)(iVar17 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
            lVar25 = Library::MSVCRT::__ftol();
            *(int *)(iVar17 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
          }
          iVar18 = *(int *)((int)this + 0x1d);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar18 * 2);
      }
      for (uVar13 = *(int *)((int)this + 0x1d) * 2; (int)uVar13 < iVar14; uVar13 = uVar13 + 1) {
        iVar18 = *(int *)this;
        if ((uVar13 < *(uint *)(iVar18 + 0xc)) &&
           (iVar18 = *(int *)(iVar18 + 8) * uVar13 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
          uVar10 = g_playSystem_00802A38->field_00E4 - *(int *)(iVar18 + 0x35);
          fVar24 = (float10)*(float *)(iVar18 + 0x21) + (float10)*(float *)((int)this + 0x8d);
          fVar1 = (float)uVar10 * *(float *)((int)this + 0x85) +
                  (float)(uVar10 * uVar10) * *(float *)((int)this + 0x89) * _DAT_0079d1ac +
                  *(float *)(iVar18 + 0x25);
          if (fVar1 <= *(float *)((int)this + 0x71)) {
            *(undefined4 *)(iVar18 + 8) = 1;
          }
          else {
            *(undefined4 *)(iVar18 + 8) = 0;
          }
          if (*(float *)((int)this + 0x79) < fVar1) {
            *(undefined4 *)(iVar18 + 0x25) = *(undefined4 *)((int)this + 0x65);
            *(uint *)(iVar18 + 0x35) = g_playSystem_00802A38->field_00E4;
          }
          fsin((float10)fVar1);
          fcos(fVar24);
          fsin(fVar24);
          lVar25 = Library::MSVCRT::__ftol();
          *(int *)(iVar18 + 0xd) = (int)lVar25 + *(int *)((int)this + 0x95);
          lVar25 = Library::MSVCRT::__ftol();
          fcos((float10)fVar1);
          *(int *)(iVar18 + 0x11) = (int)lVar25 + *(int *)((int)this + 0x99);
          lVar25 = Library::MSVCRT::__ftol();
          *(int *)(iVar18 + 0x15) = (int)lVar25 + *(int *)((int)this + 0x9d);
        }
      }
      if (*(float *)((int)this + 0x71) < *(float *)((int)this + 0x79)) {
        *(float *)((int)this + 0x71) =
             *(float *)((int)this + 0x89) + *(float *)((int)this + 0x89) +
             *(float *)((int)this + 0x71);
      }
      *(float *)((int)this + 0x8d) = *(float *)((int)this + 0x89) + *(float *)((int)this + 0x8d);
      return;
    }
  }
  return;
}

