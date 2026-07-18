
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00633770(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  bool bVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  unkbyte10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  unkbyte10 extraout_ST0_10;
  float10 fVar25;
  unkbyte10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  longlong lVar26;
  int local_18;
  uint local_14;
  
  switch(*(undefined4 *)((int)this + 0x11)) {
  case 0:
    uVar14 = 0;
    if (*(int *)this != 0) {
      iVar15 = *(int *)(*(int *)this + 0xc);
      fVar24 = (float10)(uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5));
      fVar20 = (float10)fsin(fVar24 * (float10)*(float *)((int)this + 0x5d));
      fVar25 = (float10)_DAT_0079cd88;
      fVar8 = (float10)_DAT_007901c0;
      fVar1 = *(float *)((int)this + 0x75);
      fVar6 = *(float *)((int)this + 0x65);
      fVar2 = *(float *)((int)this + 0x65);
      fVar21 = (float10)fcos(fVar24 * (float10)*(float *)((int)this + 0x61));
      fVar24 = (float10)_DAT_0079cd88;
      fVar9 = (float10)_DAT_007901c0;
      fVar3 = *(float *)((int)this + 0x79);
      fVar4 = *(float *)((int)this + 0x6d);
      fVar5 = *(float *)((int)this + 0x6d);
      if (0 < iVar15) {
        do {
          iVar19 = *(int *)this;
          if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
             (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) {
            fVar22 = (float10)fcos((float10)*(float *)((int)this + 0x7d) +
                                   (float10)*(float *)(iVar19 + 0x21) +
                                   (float10)(float)(((float10)fVar1 - (float10)fVar6) *
                                                    (fVar20 + fVar25) * fVar8 + (float10)fVar2));
            fVar23 = (float10)fcos((float10)*(float *)((int)this + 0x81) +
                                   (float10)*(float *)(iVar19 + 0x21) +
                                   (float10)(float)(((float10)fVar3 - (float10)fVar4) *
                                                    (fVar21 + fVar24) * fVar9 + (float10)fVar5));
            fVar23 = fVar23 * (float10)*(float *)((int)this + 0x91);
            fsin(fVar23);
            fcos(fVar22 * (float10)*(float *)((int)this + 0x8d));
            lVar26 = __ftol();
            fsin(extraout_ST1);
            *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
            lVar26 = __ftol();
            fcos((float10)(float)fVar23);
            *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
            lVar26 = __ftol();
            *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar15);
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
      iVar15 = param_1 * 2;
      uVar14 = *(int *)(*(int *)this + 0xc) - param_1;
      fVar1 = _DAT_0079d1a4 - (*(float *)((int)this + 0x91) + *(float *)((int)this + 0x91));
      local_14 = 0;
      if (0 < param_1) {
        local_18 = 0;
        uVar11 = uVar14;
        do {
          iVar19 = *(int *)this;
          if ((uVar11 < *(uint *)(iVar19 + 0xc)) &&
             (iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) {
            fVar25 = ((float10)local_18 * (float10)_DAT_0079d1a4) / (float10)param_1 +
                     (float10)*(float *)((int)this + 0x8d) + (float10)(fVar1 / (float)iVar15);
            fVar24 = ((float10)*(float *)((int)this + 0x69) - (float10)*(float *)((int)this + 0x65))
                     + (float10)*(float *)((int)this + 0x65);
            fsin(fVar24);
            fcos(fVar25);
            fsin(fVar25);
            lVar26 = __ftol();
            *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
            lVar26 = __ftol();
            fcos((float10)(float)fVar24);
            *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
            lVar26 = __ftol();
            *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
          }
          local_18 = local_18 + 2;
          local_14 = local_14 + 1;
          param_1 = *(int *)((int)this + 0x1d);
          uVar11 = uVar11 + 1;
        } while ((int)local_14 < param_1);
      }
      local_14 = 0;
      if (0 < (int)uVar14) {
        do {
          iVar15 = *(int *)this;
          if ((local_14 < *(uint *)(iVar15 + 0xc)) &&
             (iVar15 = *(int *)(iVar15 + 8) * local_14 + *(int *)(iVar15 + 0x1c), iVar15 != 0)) {
            fVar25 = (float10)*(float *)(iVar15 + 0x21) + (float10)*(float *)((int)this + 0x8d);
            fVar24 = (float10)fsin(((float10)*(int *)((int)this + 0x1d) * (float10)(int)local_14 *
                                   (float10)_DAT_0079c5a4) / (float10)*(int *)((int)this + 0x19) +
                                   (float10)*(float *)((int)this + 0x91));
            fVar24 = ((float10)*(float *)((int)this + 0x69) - (float10)*(float *)((int)this + 0x65))
                     * (fVar24 + (float10)_DAT_0079cd88) * (float10)_DAT_007901c0 +
                     (float10)*(float *)((int)this + 0x65);
            fsin(fVar24);
            fcos(fVar25);
            fsin(fVar25);
            lVar26 = __ftol();
            *(int *)(iVar15 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
            lVar26 = __ftol();
            fcos((float10)(float)fVar24);
            *(int *)(iVar15 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
            lVar26 = __ftol();
            *(int *)(iVar15 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
          }
          local_14 = local_14 + 1;
        } while ((int)local_14 < (int)uVar14);
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
    fVar25 = (float10)*(float *)((int)this + 0x91);
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
      pfVar12 = (float *)((int)this + 0x21);
      do {
        fVar1 = (float)(int)local_14 * *(float *)((int)this + 0x7d);
        fVar6 = *(float *)((int)this + 0x91) - fVar1;
        if (fVar6 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar12) {
            if (*pfVar12 < *(float *)((int)this + 0x75)) {
              fVar6 = (*(float *)((int)this + 0x75) + *(float *)((int)this + 0x91)) - fVar1;
            }
            if (fVar6 < _DAT_0079034c) {
              uVar14 = *(int *)((int)this + 0x19) * local_14;
              iVar15 = *(int *)((int)this + 0x19) + uVar14;
              if (*(int *)this != 0) {
                for (; (int)uVar14 < iVar15; uVar14 = uVar14 + 1) {
                  iVar19 = *(int *)this;
                  if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                     (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)
                     ) {
                    *(undefined4 *)(iVar19 + 8) = 0;
                  }
                }
              }
            }
          }
        }
        else if (*pfVar12 <= _DAT_0079034c) {
          uVar14 = *(int *)((int)this + 0x19) * local_14;
          iVar15 = *(int *)((int)this + 0x19) + uVar14;
          if (*(int *)this != 0) {
            for (; (int)uVar14 < iVar15; uVar14 = uVar14 + 1) {
              iVar19 = *(int *)this;
              if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                 (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) {
                *(undefined4 *)(iVar19 + 8) = 1;
              }
            }
          }
        }
        local_14 = local_14 + 1;
        *pfVar12 = fVar6;
        pfVar12 = pfVar12 + 1;
      } while ((int)local_14 < *(int *)((int)this + 0x1d));
    }
    if (*(int *)this != 0) {
      iVar15 = *(int *)(*(int *)this + 0xc);
      uVar14 = 0;
      if (0 < iVar15) {
        do {
          if (*(int *)((int)this + 0x19) != 0) {
            fVar25 = (float10)*(float *)((int)this +
                                        ((int)uVar14 / *(int *)((int)this + 0x19)) * 4 + 0x21);
          }
          iVar19 = *(int *)this;
          if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
             (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) {
            fVar24 = (float10)*(float *)(iVar19 + 0x21) + (float10)*(float *)((int)this + 0x8d);
            fsin(fVar25);
            fcos(fVar24);
            fsin(fVar24);
            lVar26 = __ftol();
            *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
            lVar26 = __ftol();
            fcos(extraout_ST0);
            *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
            lVar26 = __ftol();
            *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
            fVar25 = extraout_ST0_00;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar15);
      }
    }
    *(float *)((int)this + 0x8d) =
         (float)param_2 * *(float *)((int)this + 0x89) * _DAT_0079d078 +
         *(float *)((int)this + 0x8d);
    *(float *)((int)this + 0x91) = *(float *)((int)this + 0x85) + *(float *)((int)this + 0x91);
    return;
  case 3:
    uVar14 = 0;
    bVar10 = false;
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    switch(*(undefined4 *)((int)this + 0x2d)) {
    case 0:
      iVar15 = *(int *)this;
      if (iVar15 != 0) {
        uVar14 = *(uint *)(iVar15 + 0xc);
        fVar1 = (float)(uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5)) *
                *(float *)((int)this + 0x81);
        if (fVar1 < *(float *)((int)this + 0x71)) {
          if (_DAT_0079034c < fVar1) {
            uVar11 = *(int *)((int)this + 0x1d) * 2 - 1;
            if (uVar11 < uVar14) {
              iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c);
            }
            else {
              iVar15 = 0;
            }
            *(undefined4 *)(iVar15 + 8) = 1;
            *(float *)(iVar15 + 0x21) = fVar1 + *(float *)((int)this + 0x41);
            iVar15 = *(int *)this;
            if (uVar14 - 1 < *(uint *)(iVar15 + 0xc)) {
              iVar15 = *(int *)(iVar15 + 8) * (uVar14 - 1) + *(int *)(iVar15 + 0x1c);
            }
            else {
              iVar15 = 0;
            }
            *(undefined4 *)(iVar15 + 8) = 1;
            *(float *)(iVar15 + 0x21) = *(float *)((int)this + 0x41) - fVar1;
          }
          lVar26 = __ftol();
          iVar15 = (int)lVar26;
          fVar1 = (float)(extraout_ST0_01 - (float10)iVar15 * (float10)*(float *)((int)this + 0x75))
          ;
          if (iVar15 < 1) {
            if (*(int *)(*(int *)this + 0xc) == 0) {
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)(*(int *)this + 0x1c);
            }
            *(undefined4 *)(iVar15 + 8) = 1;
            *(undefined4 *)(iVar15 + 0x21) = *(undefined4 *)((int)this + 0x41);
          }
          else {
            iVar19 = 1;
            param_2 = iVar15;
            if (0 < iVar15) {
              do {
                param_2 = param_2 + -1;
                if (iVar19 % 3 == 0) {
                  uVar11 = iVar19 / 3;
                  iVar18 = *(int *)this;
                  if (uVar11 < *(uint *)(iVar18 + 0xc)) {
                    iVar18 = *(int *)(iVar18 + 8) * uVar11 + *(int *)(iVar18 + 0x1c);
                  }
                  else {
                    iVar18 = 0;
                  }
                  *(undefined4 *)(iVar18 + 8) = 1;
                  *(float *)(iVar18 + 0x21) =
                       (float)param_2 * *(float *)((int)this + 0x75) + *(float *)((int)this + 0x41)
                       + fVar1;
                  if (iVar15 != *(int *)((int)this + 0x1d)) {
                    iVar18 = *(int *)this;
                    uVar11 = *(int *)((int)this + 0x1d) / 2 + uVar11;
                    if (uVar11 < *(uint *)(iVar18 + 0xc)) {
                      iVar18 = *(int *)(iVar18 + 8) * uVar11 + *(int *)(iVar18 + 0x1c);
                    }
                    else {
                      iVar18 = 0;
                    }
                    *(undefined4 *)(iVar18 + 8) = 1;
                    *(float *)(iVar18 + 0x21) =
                         *(float *)((int)this + 0x41) -
                         ((float)param_2 * *(float *)((int)this + 0x75) + fVar1);
                  }
                }
                else {
                  iVar18 = iVar19 % 3 + (iVar19 / 3) * 2;
                  uVar11 = iVar18 + *(int *)((int)this + 0x1d) * 2;
                  iVar17 = *(int *)this;
                  if (uVar11 < *(uint *)(iVar17 + 0xc)) {
                    iVar17 = *(int *)(iVar17 + 8) * uVar11 + *(int *)(iVar17 + 0x1c);
                  }
                  else {
                    iVar17 = 0;
                  }
                  fVar6 = (float)param_2;
                  *(undefined4 *)(iVar17 + 8) = 1;
                  *(float *)(iVar17 + 0x21) =
                       fVar6 * *(float *)((int)this + 0x75) + *(float *)((int)this + 0x41) + fVar1;
                  uVar11 = *(int *)((int)this + 0x99) + iVar18;
                  iVar18 = *(int *)this;
                  if (uVar11 < *(uint *)(iVar18 + 0xc)) {
                    iVar17 = *(int *)(iVar18 + 8) * uVar11;
                    iVar18 = *(int *)(iVar18 + 0x1c);
                    *(undefined4 *)(iVar17 + 8 + iVar18) = 1;
                    *(float *)(iVar17 + iVar18 + 0x21) =
                         *(float *)((int)this + 0x41) -
                         (fVar6 * *(float *)((int)this + 0x75) + fVar1);
                  }
                  else {
                    uRam00000008 = 1;
                    fRam00000021 = *(float *)((int)this + 0x41) -
                                   (fVar6 * *(float *)((int)this + 0x75) + fVar1);
                  }
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 <= iVar15);
            }
          }
        }
        else {
          uVar11 = 0;
          bVar10 = true;
          if (0 < (int)uVar14) {
            do {
              iVar15 = *(int *)this;
              if (uVar11 < *(uint *)(iVar15 + 0xc)) {
                iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              uVar11 = uVar11 + 1;
              *(undefined4 *)(iVar15 + 8) = 0;
            } while ((int)uVar11 < (int)uVar14);
          }
          local_14 = 0;
          if (0 < *(int *)((int)this + 0x1d)) {
            param_1 = 2;
            do {
              iVar15 = *(int *)this;
              if (local_14 < *(uint *)(iVar15 + 0xc)) {
                iVar15 = *(int *)(iVar15 + 8) * local_14 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar15 + 8) = 1;
              *(float *)(iVar15 + 0x21) = (float)(int)local_14 * fVar1 * _DAT_007904fc;
              iVar15 = *(int *)this;
              uVar11 = (*(int *)((int)this + 0x1d) + local_14) * 2;
              if (uVar11 < *(uint *)(iVar15 + 0xc)) {
                iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar15 + 8) = 1;
              *(float *)(iVar15 + 0x21) = (float)(param_1 + -1) * fVar1;
              uVar11 = (*(int *)((int)this + 0x1d) + local_14) * 2 + 1;
              iVar15 = *(int *)this;
              if (uVar11 < *(uint *)(iVar15 + 0xc)) {
                iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              fVar6 = (float)param_1;
              local_14 = local_14 + 1;
              param_1 = param_1 + 3;
              fVar1 = *(float *)((int)this + 0x75);
              *(undefined4 *)(iVar15 + 8) = 1;
              *(float *)(iVar15 + 0x21) = fVar6 * fVar1;
            } while ((int)local_14 < *(int *)((int)this + 0x1d));
          }
        }
        uVar11 = 0;
        if (0 < (int)uVar14) {
          do {
            iVar15 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar15 + 0xc)) &&
                (iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c), iVar15 != 0)) &&
               (*(int *)(iVar15 + 8) == 1)) {
              fVar1 = *(float *)((int)this + 0x45);
              fVar25 = (float10)*(float *)(iVar15 + 0x21) + (float10)*(float *)((int)this + 0x41);
              fsin((float10)fVar1);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar15 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)fVar1);
              *(int *)(iVar15 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar15 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar14);
        }
        if (bVar10) {
          *(undefined4 *)((int)this + 0x2d) = 1;
          uVar7 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          *(undefined4 *)((int)this + 9) = 0xf;
          *(undefined4 *)((int)this + 5) = uVar7;
          return;
        }
      }
      break;
    case 1:
      if (*(int *)this != 0) {
        iVar15 = *(int *)(*(int *)this + 0xc);
        uVar14 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5);
        fVar1 = (float)uVar14 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        if (*(uint *)((int)this + 9) <= uVar14) {
          iVar19 = *(int *)((int)this + 0x1d);
          uVar14 = 0;
          if (0 < iVar19) {
            do {
              iVar18 = *(int *)this;
              if (uVar14 < *(uint *)(iVar18 + 0xc)) {
                iVar17 = *(int *)(iVar18 + 8) * uVar14 + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar17 = 0;
              }
              if (iVar19 + uVar14 < *(uint *)(iVar18 + 0xc)) {
                iVar19 = *(int *)(iVar18 + 8) * (iVar19 + uVar14) + *(int *)(iVar18 + 0x1c);
              }
              else {
                iVar19 = 0;
              }
              *(undefined4 *)(iVar19 + 0x21) = *(undefined4 *)(iVar17 + 0x21);
              *(undefined4 *)(iVar19 + 8) = 1;
              iVar19 = *(int *)this;
              uVar11 = (*(int *)((int)this + 0x1d) + uVar14) * 2;
              if (uVar11 < *(uint *)(iVar19 + 0xc)) {
                iVar18 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2;
              if (uVar11 < *(uint *)(iVar19 + 0xc)) {
                iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
              }
              else {
                iVar19 = 0;
              }
              *(undefined4 *)(iVar19 + 0x21) = *(undefined4 *)(iVar18 + 0x21);
              *(undefined4 *)(iVar19 + 8) = 1;
              uVar11 = (*(int *)((int)this + 0x1d) + uVar14) * 2 + 1;
              iVar19 = *(int *)this;
              if (uVar11 < *(uint *)(iVar19 + 0xc)) {
                iVar18 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
              if (uVar11 < *(uint *)(iVar19 + 0xc)) {
                iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
              }
              else {
                iVar19 = 0;
              }
              *(undefined4 *)(iVar19 + 0x21) = *(undefined4 *)(iVar18 + 0x21);
              *(undefined4 *)(iVar19 + 8) = 1;
              iVar19 = *(int *)((int)this + 0x1d);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < iVar19);
          }
          *(float *)((int)this + 0x7d) =
               *(float *)((int)this + 0x75) * _DAT_007904fc * _DAT_00790784;
          lVar26 = __ftol();
          *(undefined4 *)((int)this + 0x2d) = 2;
          *(float *)((int)this + 0x81) = (float)(extraout_ST0_02 / (float10)(int)lVar26);
          fVar6 = _DAT_0079c5a4;
          *(undefined4 *)((int)this + 5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          if (fVar1 <= fVar6) {
            *(float *)((int)this + 0x79) = fVar1;
          }
          else {
            lVar26 = __ftol();
            *(float *)((int)this + 0x79) = fVar1 - (float)((int)lVar26 << 1) * _DAT_0079d1a4;
          }
        }
        uVar14 = 0;
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar6 = *(float *)((int)this + 0x45);
              fVar25 = (float10)fVar1 + (float10)*(float *)(iVar19 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)fVar6);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar15);
          return;
        }
      }
      break;
    case 2:
      if (*(int *)this != 0) {
        iVar15 = *(int *)(*(int *)this + 0xc);
        fVar6 = (float)(uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5));
        fVar1 = fVar6 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        fVar6 = fVar6 * *(float *)((int)this + 0x81);
        if ((*(float *)((int)this + 0x7d) <= fVar6) ||
           (*(float *)((int)this + 0x7d) - fVar6 < _DAT_0079d1bc)) {
          bVar10 = true;
        }
        iVar19 = *(int *)((int)this + 0x1d);
        if (0 < iVar19) {
          do {
            iVar18 = *(int *)this;
            if (iVar19 + uVar14 < *(uint *)(iVar18 + 0xc)) {
              iVar19 = *(int *)(iVar18 + 8) * (iVar19 + uVar14) + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + fVar6;
            iVar19 = *(int *)this;
            uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + fVar6;
            iVar19 = *(int *)this;
            uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            fVar6 = *(float *)((int)this + 0x81);
            *(undefined4 *)(iVar19 + 8) = 1;
            uVar14 = uVar14 + 1;
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + fVar6;
            iVar19 = *(int *)((int)this + 0x1d);
          } while ((int)uVar14 < iVar19);
        }
        uVar14 = 0;
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar6 = *(float *)((int)this + 0x45);
              fVar25 = (float10)fVar1 + (float10)*(float *)(iVar19 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)fVar6);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar15);
        }
        fVar6 = _DAT_0079c5a4;
        if (bVar10) {
          *(undefined4 *)((int)this + 0x2d) = 3;
          if (fVar1 <= fVar6) {
            *(float *)((int)this + 0x79) = fVar1;
          }
          else {
            lVar26 = __ftol();
            *(float *)((int)this + 0x79) = fVar1 - (float)((int)lVar26 << 1) * _DAT_0079d1a4;
          }
          if (*(float *)((int)this + 0x65) != _DAT_0079034c) {
            lVar26 = __ftol();
            uVar14 = (int)(uint)lVar26 >> 0x1f;
            param_1 = ((uint)lVar26 ^ uVar14) - uVar14;
            if (param_1 == 0) {
              param_1 = 1;
            }
            fVar25 = (float10)param_1;
            iVar15 = *(int *)this;
            *(float *)((int)this + 0x51) =
                 (float)(((float10)*(float *)((int)this + 0x69) -
                         (float10)*(float *)((int)this + 0x45)) / fVar25);
            *(float *)((int)this + 0x55) =
                 (float)(((float10)*(float *)((int)this + 0x6d) -
                         (float10)*(float *)((int)this + 0x45)) / fVar25);
            if (*(int *)(iVar15 + 0xc) == 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = *(int *)(iVar15 + 0x1c);
            }
            iVar18 = *(int *)((int)this + 0x19);
            fVar1 = ABS(*(float *)(*(int *)((int)this + 0x39) + iVar18 * 4) -
                        *(float *)(iVar19 + 0x21));
            *(float *)((int)this + 0x49) = fVar1;
            if (*(float *)((int)this + 0x89) < fVar1) {
              __ftol();
              lVar26 = __ftol();
              uVar14 = (int)(uint)lVar26 >> 0x1f;
              *(float *)((int)this + 0x49) =
                   (float)(extraout_ST0_03 -
                          (float10)(int)(((uint)lVar26 ^ uVar14) - uVar14) *
                          (float10)*(float *)((int)this + 0x89));
              fVar25 = extraout_ST1_00;
            }
            if (_DAT_0079034c < *(float *)((int)this + 0x49)) {
              *(float *)((int)this + 0x49) =
                   *(float *)((int)this + 0x49) - *(float *)((int)this + 0x89);
            }
            if (*(uint *)((int)this + 0x1d) < *(uint *)(iVar15 + 0xc)) {
              iVar15 = *(int *)(iVar15 + 8) * *(uint *)((int)this + 0x1d) + *(int *)(iVar15 + 0x1c);
            }
            else {
              iVar15 = 0;
            }
            fVar1 = ABS(*(float *)(*(int *)((int)this + 0x39) + -4 + iVar18 * 8) -
                        *(float *)(iVar15 + 0x21));
            *(float *)((int)this + 0x4d) = fVar1;
            if (*(float *)((int)this + 0x89) < fVar1) {
              __ftol();
              lVar26 = __ftol();
              uVar14 = (int)(uint)lVar26 >> 0x1f;
              *(float *)((int)this + 0x4d) =
                   (float)(extraout_ST0_04 -
                          (float10)(int)(((uint)lVar26 ^ uVar14) - uVar14) *
                          (float10)*(float *)((int)this + 0x89));
              fVar25 = extraout_ST1_01;
            }
            *(float *)((int)this + 0x59) = (float)((float10)*(float *)((int)this + 0x49) / fVar25);
            *(float *)((int)this + 0x5d) = (float)((float10)*(float *)((int)this + 0x4d) / fVar25);
            *(undefined4 *)((int)this + 5) = *(undefined4 *)(DAT_00802a38 + 0xe4);
            return;
          }
        }
      }
      break;
    case 3:
      if (*(int *)this != 0) {
        iVar15 = *(int *)(*(int *)this + 0xc);
        fVar2 = (float)(uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5));
        fVar6 = fVar2 * *(float *)((int)this + 0x61) + *(float *)((int)this + 0x79);
        fVar3 = fVar2 * *(float *)((int)this + 0x51);
        fVar1 = *(float *)((int)this + 0x55);
        if ((fVar3 + *(float *)((int)this + 0x45) <= *(float *)((int)this + 0x69)) ||
           ((*(float *)((int)this + 0x45) - fVar3) + *(float *)((int)this + 0x69) <
            (float)_DAT_0079d1b0)) {
          bVar10 = true;
        }
        if (0 < *(int *)((int)this + 0x1d)) {
          do {
            iVar19 = *(int *)this;
            if (uVar14 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = *(float *)(iVar19 + 0x25) + fVar4;
            iVar19 = *(int *)this;
            uVar11 = (*(int *)((int)this + 0x1d) + uVar14) * 2;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = *(float *)(iVar19 + 0x25) + fVar4;
            iVar19 = *(int *)this;
            uVar11 = (*(int *)((int)this + 0x1d) + uVar14) * 2 + 1;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x59);
            fVar4 = *(float *)((int)this + 0x51);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = *(float *)(iVar19 + 0x25) + fVar4;
            iVar19 = *(int *)this;
            uVar11 = *(int *)((int)this + 0x1d) + uVar14;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar4 + *(float *)(iVar19 + 0x25);
            iVar19 = *(int *)this;
            uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar4 + *(float *)(iVar19 + 0x25);
            uVar11 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            iVar19 = *(int *)this;
            if (uVar11 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            uVar14 = uVar14 + 1;
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar4 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar4 + *(float *)(iVar19 + 0x25);
          } while ((int)uVar14 < *(int *)((int)this + 0x1d));
        }
        iVar19 = *(int *)((int)this + 0x35);
        if ((0 < iVar19) && (!bVar10)) {
          iVar18 = *(int *)((int)this + 0x19) - iVar19;
          fVar4 = *(float *)(*(int *)((int)this + 0x39) + iVar18 * 4);
          if (fVar4 <= fVar2 * fVar1 + *(float *)((int)this + 0x45)) {
            fVar1 = *(float *)((int)this + 0x45);
            iVar16 = 0;
            iVar17 = *(int *)((int)this + 0x1d);
            fVar2 = *(float *)(*(int *)((int)this + 0x39) +
                              (*(int *)((int)this + 0x19) * 2 - iVar19) * 4);
            if (0 < iVar17) {
              param_1 = 0;
              do {
                iVar19 = *(int *)this;
                uVar14 = (iVar18 + 5) * iVar17 + iVar16;
                if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                   (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0))
                {
                  *(float *)(iVar19 + 0x25) = fVar4 - fVar1;
                  fVar5 = *(float *)((int)this + 0x75);
                  *(undefined4 *)(iVar19 + 8) = 1;
                  *(float *)(iVar19 + 0x21) = (float)param_1 * fVar5 + fVar2;
                }
                iVar16 = iVar16 + 1;
                param_1 = param_1 + 3;
                iVar17 = *(int *)((int)this + 0x1d);
              } while (iVar16 < iVar17);
            }
            *(int *)((int)this + 0x35) = *(int *)((int)this + 0x35) + -1;
          }
        }
        iVar19 = *(int *)((int)this + 0x31);
        if ((0 < iVar19) && (!bVar10)) {
          fVar1 = *(float *)(*(int *)((int)this + 0x39) + (iVar19 + -1) * 4);
          if (fVar3 + *(float *)((int)this + 0x45) <= fVar1) {
            fVar2 = *(float *)((int)this + 0x45);
            iVar17 = 0;
            fVar3 = *(float *)(*(int *)((int)this + 0x39) +
                              (*(int *)((int)this + 0x19) + iVar19 + -1) * 4);
            iVar18 = *(int *)((int)this + 0x1d);
            if (0 < iVar18) {
              param_1 = 0;
              do {
                iVar16 = *(int *)this;
                uVar14 = (iVar19 + 4) * iVar18 + iVar17;
                if ((uVar14 < *(uint *)(iVar16 + 0xc)) &&
                   (iVar18 = *(int *)(iVar16 + 8) * uVar14 + *(int *)(iVar16 + 0x1c), iVar18 != 0))
                {
                  *(float *)(iVar18 + 0x25) = fVar1 - fVar2;
                  fVar4 = *(float *)((int)this + 0x75);
                  *(undefined4 *)(iVar18 + 8) = 1;
                  *(float *)(iVar18 + 0x21) = (float)param_1 * fVar4 + fVar3;
                }
                iVar17 = iVar17 + 1;
                param_1 = param_1 + 3;
                iVar18 = *(int *)((int)this + 0x1d);
              } while (iVar17 < iVar18);
            }
            *(int *)((int)this + 0x31) = *(int *)((int)this + 0x31) + -1;
          }
        }
        uVar14 = 0;
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar25 = (float10)fVar6 + (float10)*(float *)(iVar19 + 0x21);
              fVar24 = (float10)*(float *)(iVar19 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar24);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)(float)fVar24);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar15);
        }
        if (bVar10) {
          if (fVar6 <= _DAT_0079c5a4) {
            *(float *)((int)this + 0x79) = fVar6;
          }
          else {
            lVar26 = __ftol();
            *(float *)((int)this + 0x79) = fVar6 - (float)((int)lVar26 << 1) * _DAT_0079d1a4;
          }
          *(undefined4 *)((int)this + 0x2d) = 4;
          uVar7 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          *(undefined4 *)((int)this + 9) = 0x14;
          *(undefined4 *)((int)this + 5) = uVar7;
          return;
        }
      }
      break;
    case 4:
      if (*(int *)this != 0) {
        uVar11 = 0;
        uVar14 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5);
        iVar15 = *(int *)(*(int *)this + 0xc);
        fVar25 = (float10)uVar14 * (float10)*(float *)((int)this + 0x61) +
                 (float10)*(float *)((int)this + 0x79);
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar25 = fVar25 + (float10)*(float *)(iVar19 + 0x21);
              fVar24 = (float10)*(float *)(iVar19 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar24);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)(float)fVar24);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
              fVar25 = extraout_ST0_05;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar15);
        }
        if (*(uint *)((int)this + 9) <= uVar14) {
          lVar26 = __ftol();
          iVar15 = (int)lVar26;
          *(undefined4 *)((int)this + 0x35) = 0;
          *(undefined4 *)((int)this + 0x2d) = 5;
          *(float *)((int)this + 0x55) = (float)-(extraout_ST0_06 / (float10)iVar15);
          *(float *)((int)this + 0x5d) = -(*(float *)((int)this + 0x89) / (float)iVar15);
          fVar25 = (float10)_DAT_0079c5a4;
          uVar7 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          *(int *)((int)this + 9) = iVar15;
          *(undefined4 *)((int)this + 5) = uVar7;
          if (extraout_ST1_02 <= fVar25) {
            *(float *)((int)this + 0x79) = (float)extraout_ST1_02;
            return;
          }
          lVar26 = __ftol();
          *(float *)((int)this + 0x79) =
               (float)(extraout_ST0_07 - (float10)((int)lVar26 << 1) * (float10)_DAT_0079d1a4);
        }
      }
      break;
    case 5:
      if (*(int *)this != 0) {
        iVar15 = *(int *)(*(int *)this + 0xc);
        uVar11 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5);
        fVar24 = (float10)uVar11;
        iVar19 = *(int *)((int)this + 0x1d);
        fVar1 = *(float *)((int)this + 0x55);
        fVar25 = (float10)*(float *)((int)this + 0x79) -
                 fVar24 * (float10)*(float *)((int)this + 0x61);
        if (0 < iVar19) {
          do {
            iVar18 = *(int *)this;
            if (iVar19 + uVar14 < *(uint *)(iVar18 + 0xc)) {
              iVar19 = *(int *)(iVar18 + 8) * (iVar19 + uVar14) + *(int *)(iVar18 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar6 + *(float *)(iVar19 + 0x25);
            iVar19 = *(int *)this;
            uVar13 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2;
            if (uVar13 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar13 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar6 + *(float *)(iVar19 + 0x25);
            iVar19 = *(int *)this;
            uVar13 = (uVar14 + *(int *)((int)this + 0x1d) * 2) * 2 + 1;
            if (uVar13 < *(uint *)(iVar19 + 0xc)) {
              iVar19 = *(int *)(iVar19 + 8) * uVar13 + *(int *)(iVar19 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            uVar14 = uVar14 + 1;
            *(float *)(iVar19 + 0x21) = *(float *)(iVar19 + 0x21) + *(float *)((int)this + 0x5d);
            fVar6 = *(float *)((int)this + 0x55);
            *(undefined4 *)(iVar19 + 8) = 1;
            *(float *)(iVar19 + 0x25) = fVar6 + *(float *)(iVar19 + 0x25);
            iVar19 = *(int *)((int)this + 0x1d);
          } while ((int)uVar14 < iVar19);
        }
        if ((*(int *)((int)this + 0x35) < *(int *)((int)this + 0x19) + -2) &&
           (iVar19 = *(int *)((int)this + 0x19) - *(int *)((int)this + 0x35),
           (float)(fVar24 * (float10)fVar1) + *(float *)((int)this + 0x6d) <=
           *(float *)(*(int *)((int)this + 0x39) + (iVar19 + -2) * 4))) {
          iVar18 = *(int *)((int)this + 0x1d);
          iVar17 = 0;
          if (0 < iVar18) {
            do {
              iVar16 = *(int *)this;
              uVar14 = (iVar19 + 3) * iVar18 + iVar17;
              if (uVar14 < *(uint *)(iVar16 + 0xc)) {
                iVar18 = *(int *)(iVar16 + 8) * uVar14 + *(int *)(iVar16 + 0x1c);
              }
              else {
                iVar18 = 0;
              }
              *(undefined4 *)(iVar18 + 8) = 0;
              iVar18 = *(int *)((int)this + 0x1d);
              iVar17 = iVar17 + 1;
            } while (iVar17 < iVar18);
          }
          *(int *)((int)this + 0x35) = *(int *)((int)this + 0x35) + 1;
        }
        uVar14 = 0;
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar14 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar25 = fVar25 + (float10)*(float *)(iVar19 + 0x21);
              fVar24 = (float10)*(float *)(iVar19 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar24);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)(float)fVar24);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
              fVar25 = extraout_ST0_08;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar15);
        }
        if (*(uint *)((int)this + 9) <= uVar11) {
          if (fVar25 <= (float10)_DAT_0079c5a4) {
            *(float *)((int)this + 0x79) = (float)fVar25;
          }
          else {
            lVar26 = __ftol();
            *(float *)((int)this + 0x79) =
                 (float)(extraout_ST0_09 - (float10)((int)lVar26 << 1) * (float10)_DAT_0079d1a4);
          }
          *(undefined4 *)((int)this + 0x2d) = 6;
          uVar7 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          *(undefined4 *)((int)this + 9) = 0x14f;
          *(undefined4 *)((int)this + 5) = uVar7;
          return;
        }
      }
      break;
    case 6:
      if (*(int *)this != 0) {
        uVar11 = 0;
        uVar14 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 5);
        iVar15 = *(int *)(*(int *)this + 0xc);
        fVar1 = *(float *)((int)this + 0x61);
        fVar6 = *(float *)((int)this + 0x79);
        if (0 < iVar15) {
          do {
            iVar19 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar19 + 0xc)) &&
                (iVar19 = *(int *)(iVar19 + 8) * uVar11 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) &&
               (*(int *)(iVar19 + 8) == 1)) {
              fVar25 = (float10)((float)uVar14 * fVar1 + fVar6) + (float10)*(float *)(iVar19 + 0x21)
              ;
              fVar24 = (float10)*(float *)(iVar19 + 0x25) + (float10)*(float *)((int)this + 0x45);
              fsin(fVar24);
              fcos(fVar25);
              fsin(fVar25);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x8d);
              lVar26 = __ftol();
              fcos((float10)(float)fVar24);
              *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x91);
              lVar26 = __ftol();
              *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x95);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar15);
        }
        if (*(uint *)((int)this + 9) <= uVar14) {
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
      iVar15 = *(int *)(*(int *)this + 0xc);
      iVar19 = *(int *)((int)this + 0x1d);
      uVar14 = 0;
      if (0 < iVar19 * 2) {
        do {
          iVar18 = *(int *)this;
          if ((uVar14 < *(uint *)(iVar18 + 0xc)) &&
             (iVar18 = *(int *)(iVar18 + 8) * uVar14 + *(int *)(iVar18 + 0x1c), iVar18 != 0)) {
            fVar1 = *(float *)(iVar18 + 0x21) + *(float *)((int)this + 0x8d);
            if ((int)uVar14 < iVar19) {
              fVar6 = *(float *)(iVar18 + 0x25);
            }
            else {
              fVar6 = *(float *)((int)this + 0x71);
            }
            fsin((float10)fVar6);
            fcos((float10)fVar1);
            fsin((float10)fVar1);
            lVar26 = __ftol();
            *(int *)(iVar18 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
            lVar26 = __ftol();
            fcos(extraout_ST0_10);
            *(int *)(iVar18 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
            lVar26 = __ftol();
            *(int *)(iVar18 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
          }
          iVar19 = *(int *)((int)this + 0x1d);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar19 * 2);
      }
      for (uVar14 = *(int *)((int)this + 0x1d) * 2; (int)uVar14 < iVar15; uVar14 = uVar14 + 1) {
        iVar19 = *(int *)this;
        if ((uVar14 < *(uint *)(iVar19 + 0xc)) &&
           (iVar19 = *(int *)(iVar19 + 8) * uVar14 + *(int *)(iVar19 + 0x1c), iVar19 != 0)) {
          uVar11 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)(iVar19 + 0x35);
          fVar25 = (float10)*(float *)(iVar19 + 0x21) + (float10)*(float *)((int)this + 0x8d);
          fVar1 = (float)uVar11 * *(float *)((int)this + 0x85) +
                  (float)(uVar11 * uVar11) * *(float *)((int)this + 0x89) * _DAT_0079d1ac +
                  *(float *)(iVar19 + 0x25);
          if (fVar1 <= *(float *)((int)this + 0x71)) {
            *(undefined4 *)(iVar19 + 8) = 1;
          }
          else {
            *(undefined4 *)(iVar19 + 8) = 0;
          }
          if (*(float *)((int)this + 0x79) < fVar1) {
            *(undefined4 *)(iVar19 + 0x25) = *(undefined4 *)((int)this + 0x65);
            *(undefined4 *)(iVar19 + 0x35) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          }
          fsin((float10)fVar1);
          fcos(fVar25);
          fsin(fVar25);
          lVar26 = __ftol();
          *(int *)(iVar19 + 0xd) = (int)lVar26 + *(int *)((int)this + 0x95);
          lVar26 = __ftol();
          fcos((float10)fVar1);
          *(int *)(iVar19 + 0x11) = (int)lVar26 + *(int *)((int)this + 0x99);
          lVar26 = __ftol();
          *(int *)(iVar19 + 0x15) = (int)lVar26 + *(int *)((int)this + 0x9d);
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

