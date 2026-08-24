#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00633770(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float10 fVar22_mgA;
  float10 fVar19_mg1;
  float10 fVar18_mg1;
  float10 fVar17_mg1;
  float10 fVar17_mg2;
  float10 fVar17_mg1_2;
  float10 fVar24_mgD;
  float10 fVar22_mg6;
  float10 fVar24_mgE;
  float10 fVar22_mg7;
  float10 fVar22_mg8;
  float10 fVar17;
  float10 fVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_01;
  float10 fVar24_mgB;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_02;
  float10 fVar24_mgA;
  float10 fVar24_mg8;
  float10 fVar24_mg9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_04;
  float10 fVar24_mg7;
  float10 fVar22_mg4;
  float10 fVar24_mg5;
  float10 fVar24_mg4;
  float10 fVar22_mg3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_07;
  float10 fVar22_mg1;
  float10 fVar24_mg3;
  float10 fVar24_mg2;
  float10 fVar22_mg2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_09;
  float10 fVar24_mg1;
  float10 fVar22_mg0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_10;
  float10 fVar24_mg0;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_02;
  longlong lVar19;
  int local_18;
  uint local_14;
  float fVar1_mg9;
  float fVar6_mg8;
  float fVar6_mg9;
  float fVar1_mgA;
  float fVar1_mgB;
  float fVar6_mgA;
  float fVar1_mgC;
  float fVar1_mgD;
  float fVar6_mgC;
  float fVar6_mgD;
  float fVar1_mgE;
  float10 fVar24_mgF;
  float fVar1_mgF;
  float fVar6_mg10;
  float fVar6_mgF;
  float fVar6_mg11;
  float fVar1_mg11;
  float fVar1_mg13;
  float fVar1_mg12;
  float10 fVar22_mg9;
  float10 fVar21_mg1;
  float10 fVar20_mg1;
  float fVar1_mg0;
  float fVar3_mg0;
  float fVar2_mg0;
  float fVar5_mg0;
  float fVar4_mg0;
  float fVar2_mg1;
  float fVar1_mg1;
  float fVar3_mg1;
  float fVar6_mg1;
  float fVar4_mg1;
  float fVar2_mg2;
  float fVar1_mg2;
  float fVar4_mg2;
  float fVar6_mg2;
  float fVar6_mg3;
  float fVar4_mg3;
  float fVar1_mg4;
  float fVar6_mg4;
  float fVar4_mg4;
  float fVar1_mg5;
  float fVar6_mg5;
  float fVar4_mg5;
  float10 fVar24_mg6;
  float fVar1_mg6;
  float fVar6_mg6;
  float fVar4_mg6;
  float fVar1_mg7;
  float fVar6_mg7;
  float fVar4_mg7;
  float fVar1_mg8;

  switch(STField<undefined4>(this,0x11)) {
  case 0:
    uVar11 = 0;
    if (*(int *)this != 0) {
      iVar12 = *(int *)(*(int *)this + 0xc);
      fVar22_mgA = (float10)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
      fVar19_mg1 = (float10)fsin(fVar22_mgA * (float10)STField<float>(this,0x5d));
      fVar24_mgF = (float10)_DAT_0079cd88;
      fVar21_mg1 = (float10)_DAT_007901c0;
      fVar6 = STField<float>(this,0x75);
      fVar1 = STField<float>(this,0x65);
      fVar2 = STField<float>(this,0x65);
      fVar18_mg1 = (float10)fcos(fVar22_mgA * (float10)STField<float>(this,0x61));
      fVar22_mg9 = (float10)_DAT_0079cd88;
      fVar20_mg1 = (float10)_DAT_007901c0;
      fVar3 = STField<float>(this,0x79);
      fVar4 = STField<float>(this,0x6d);
      fVar5 = STField<float>(this,0x6d);
      if (0 < iVar12) {
        do {
          iVar16 = *(int *)this;
          if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
             (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) {
            fVar17_mg1 = (float10)fcos((float10)STField<float>(this,0x7d) +
                                       (float10)*(float *)(iVar16 + 0x21) +
                                       (float10)(float)(((float10)fVar6 - (float10)fVar1) *
                                                        (fVar19_mg1 + fVar24_mgF) * fVar21_mg1 +
                                                       (float10)fVar2));
            fVar17_mg2 = (float10)fcos((float10)STField<float>(this,0x81) +
                                       (float10)*(float *)(iVar16 + 0x21) +
                                       (float10)(float)(((float10)fVar3 - (float10)fVar4) *
                                                        (fVar18_mg1 + fVar22_mg9) * fVar20_mg1 +
                                                       (float10)fVar5));
            fVar17_mg1_2 = fVar17_mg2 * (float10)STField<float>(this,0x91);
            fsin(fVar17_mg1_2);
            fcos(fVar17_mg1 * (float10)STField<float>(this,0x8d));
            lVar19 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            fsin(extraout_ST1);
            *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
            lVar19 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar17_mg1_2);
            *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar12);
        return;
      }
    }
    break;
  case 1:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (STField<float>(this,0x79) < STField<float>(this,0x8d)) {
      STField<float>(this,0x8d) =
           (STField<float>(this,0x8d) - STField<float>(this,0x79)) +
           STField<float>(this,0x6d);
    }
    if (*(int *)this != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STField<int>(this,0x1d);
      iVar12 = param_1 * 2;
      uVar11 = *(int *)(*(int *)this + 0xc) - param_1;
      fVar1_mg12 = _DAT_0079d1a4 - (STField<float>(this,0x91) + STField<float>(this,0x91));
      local_14 = 0;
      if (0 < param_1) {
        local_18 = 0;
        uVar8 = uVar11;
        do {
          iVar16 = *(int *)this;
          if ((uVar8 < *(uint *)(iVar16 + 0xc)) &&
             (iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) {
            fVar24_mgD = ((float10)local_18 * (float10)_DAT_0079d1a4) / (float10)param_1 +
                         (float10)STField<float>(this,0x8d) +
                         (float10)(fVar1_mg12 / (float)iVar12);
            fVar22_mg6 = ((float10)STField<float>(this,0x69) -
                         (float10)STField<float>(this,0x65)) +
                         (float10)STField<float>(this,0x65);
            fsin(fVar22_mg6);
            fcos(fVar24_mgD);
            fsin(fVar24_mgD);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
            lVar19 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar22_mg6);
            *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
          }
          local_18 = local_18 + 2;
          local_14 = local_14 + 1;
          param_1 = STField<int>(this,0x1d);
          uVar8 = uVar8 + 1;
        } while ((int)local_14 < param_1);
      }
      local_14 = 0;
      if (0 < (int)uVar11) {
        do {
          iVar12 = *(int *)this;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_14 < *(uint *)(iVar12 + 0xc)) &&
             (iVar12 = *(int *)(iVar12 + 8) * local_14 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
            fVar24_mgE = (float10)*(float *)(iVar12 + 0x21) + (float10)STField<float>(this,0x8d);
            fVar22_mg7 = (float10)fsin(((float10)STField<int>(this,0x1d) * (float10)(int)local_14
                                       * (float10)_DAT_0079c5a4) /
                                       (float10)STField<int>(this,0x19) +
                                       (float10)STField<float>(this,0x91));
            fVar22_mg8 = ((float10)STField<float>(this,0x69) -
                         (float10)STField<float>(this,0x65)) *
                         (fVar22_mg7 + (float10)_DAT_0079cd88) * (float10)_DAT_007901c0 +
                         (float10)STField<float>(this,0x65);
            fsin(fVar22_mg8);
            fcos(fVar24_mgE);
            fsin(fVar24_mgE);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar12 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
            lVar19 = Library::MSVCRT::__ftol();
            fcos((float10)(float)fVar22_mg8);
            *(int *)(iVar12 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar12 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
          }
          local_14 = local_14 + 1;
        } while ((int)local_14 < (int)uVar11);
      }
    }
    STField<float>(this,0x8d) = STField<float>(this,0x89) + STField<float>(this,0x8d);
    STField<float>(this,0x91) = STField<float>(this,0x85) + STField<float>(this,0x91);
    if (STField<float>(this,0x81) != _DAT_0079034c) {
      fVar1_mg13 = STField<float>(this,0x81) + STField<float>(this,0x69);
      STField<float>(this,0x69) = fVar1_mg13;
      if (STField<float>(this,0x81) <= _DAT_0079034c) {
        if (fVar1_mg13 <= STField<float>(this,0x65)) {
          STField<float>(this,0x81) = -STField<float>(this,0x81);
          return;
        }
      }
      else if (STField<float>(this,0x75) <= fVar1_mg13) {
        STField<float>(this,0x81) = -STField<float>(this,0x81);
        return;
      }
    }
    break;
  case 2:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    fVar17 = (float10)STField<float>(this,0x91);
    if (STField<float>(this,0x79) < STField<float>(this,0x8d)) {
      STField<float>(this,0x8d) =
           (STField<float>(this,0x8d) - STField<float>(this,0x79)) +
           STField<float>(this,0x6d);
    }
    if (STField<float>(this,0x75) < STField<float>(this,0x91)) {
      STField<float>(this,0x91) =
           (STField<float>(this,0x91) - STField<float>(this,0x75)) +
           STField<float>(this,0x65);
    }
    local_14 = 0;
    if (0 < STField<int>(this,0x1d)) {
      pfVar9 = (float *)((int)this + 0x21);
      do {
        fVar1_mg11 = (float)(int)local_14 * STField<float>(this,0x7d);
        fVar6_mg11 = STField<float>(this,0x91) - fVar1_mg11;
        if (fVar6_mg11 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar9) {
            if (*pfVar9 < STField<float>(this,0x75)) {
              fVar6_mg11 = (STField<float>(this,0x75) + STField<float>(this,0x91)) -
                           fVar1_mg11;
            }
            if (fVar6_mg11 < _DAT_0079034c) {
              uVar11 = STField<int>(this,0x19) * local_14;
              iVar12 = STField<int>(this,0x19) + uVar11;
              if (*(int *)this != 0) {
                for (; (int)uVar11 < iVar12; uVar11 = uVar11 + 1) {
                  iVar16 = *(int *)this;
                  if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                     (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)
                     ) {
                    *(undefined4 *)(iVar16 + 8) = 0;
                  }
                }
              }
            }
          }
        }
        else if (*pfVar9 <= _DAT_0079034c) {
          uVar11 = STField<int>(this,0x19) * local_14;
          iVar12 = STField<int>(this,0x19) + uVar11;
          if (*(int *)this != 0) {
            for (; (int)uVar11 < iVar12; uVar11 = uVar11 + 1) {
              iVar16 = *(int *)this;
              if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                 (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) {
                *(undefined4 *)(iVar16 + 8) = 1;
              }
            }
          }
        }
        local_14 = local_14 + 1;
        *pfVar9 = fVar6_mg11;
        pfVar9 = pfVar9 + 1;
      } while ((int)local_14 < STField<int>(this,0x1d));
    }
    if (*(int *)this != 0) {
      iVar12 = *(int *)(*(int *)this + 0xc);
      uVar11 = 0;
      if (0 < iVar12) {
        do {
          if (STField<int>(this,0x19) != 0) {
            fVar17 = (float10)*(float *)((int)this +
                                        ((int)uVar11 / STField<int>(this,0x19)) * 4 + 0x21);
          }
          iVar16 = *(int *)this;
          if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
             (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) {
            fVar18 = (float10)*(float *)(iVar16 + 0x21) + (float10)STField<float>(this,0x8d);
            fsin(fVar17);
            fcos(fVar18);
            fsin(fVar18);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
            lVar19 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0);
            *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fVar17 = extraout_ST0_00;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar12);
      }
    }
    STField<float>(this,0x8d) =
         (float)param_2 * STField<float>(this,0x89) * _DAT_0079d078 +
         STField<float>(this,0x8d);
    STField<float>(this,0x91) = STField<float>(this,0x85) + STField<float>(this,0x91);
    return;
  case 3:
    uVar11 = 0;
    bVar7 = false;
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    switch(STField<undefined4>(this,0x2d)) {
    case 0:
      iVar12 = *(int *)this;
      if (iVar12 != 0) {
        uVar11 = *(uint *)(iVar12 + 0xc);
        fVar1_mgB = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5)) *
                    STField<float>(this,0x81);
        if (fVar1_mgB < STField<float>(this,0x71)) {
          if (_DAT_0079034c < fVar1_mgB) {
            uVar8 = STField<int>(this,0x1d) * 2 - 1;
            if (uVar8 < uVar11) {
              iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            *(undefined4 *)(iVar12 + 8) = 1;
            *(float *)(iVar12 + 0x21) = fVar1_mgB + STField<float>(this,0x41);
            iVar12 = *(int *)this;
            if (uVar11 - 1 < *(uint *)(iVar12 + 0xc)) {
              iVar12 = *(int *)(iVar12 + 8) * (uVar11 - 1) + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            *(undefined4 *)(iVar12 + 8) = 1;
            *(float *)(iVar12 + 0x21) = STField<float>(this,0x41) - fVar1_mgB;
          }
          lVar19 = Library::MSVCRT::__ftol();
          iVar12 = (int)lVar19;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          fVar1_mgC = (float)(extraout_ST0_01 -
                             (float10)iVar12 * (float10)STField<float>(this,0x75));
          if (iVar12 < 1) {
            if (*(int *)(*(int *)this + 0xc) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)this + 0x1c);
            }
            *(undefined4 *)(iVar12 + 8) = 1;
            *(undefined4 *)(iVar12 + 0x21) = STField<undefined4>(this,0x41);
          }
          else {
            iVar16 = 1;
            auto param_2_after_write = iVar12; /* compiler stack-slot lifetime split */
            if (0 < iVar12) {
              do {
                param_2_after_write = param_2_after_write + -1;
                if (iVar16 % 3 == 0) {
                  uVar8 = iVar16 / 3;
                  iVar15 = *(int *)this;
                  if (uVar8 < *(uint *)(iVar15 + 0xc)) {
                    iVar15 = *(int *)(iVar15 + 8) * uVar8 + *(int *)(iVar15 + 0x1c);
                  }
                  else {
                    iVar15 = 0;
                  }
                  *(undefined4 *)(iVar15 + 8) = 1;
                  *(float *)(iVar15 + 0x21) =
                       (float)param_2_after_write * STField<float>(this,0x75) + STField<float>(this,0x41)
                       + fVar1_mgC;
                  if (iVar12 != STField<int>(this,0x1d)) {
                    iVar15 = *(int *)this;
                    uVar8 = STField<int>(this,0x1d) / 2 + uVar8;
                    if (uVar8 < *(uint *)(iVar15 + 0xc)) {
                      iVar15 = *(int *)(iVar15 + 8) * uVar8 + *(int *)(iVar15 + 0x1c);
                    }
                    else {
                      iVar15 = 0;
                    }
                    *(undefined4 *)(iVar15 + 8) = 1;
                    *(float *)(iVar15 + 0x21) =
                         STField<float>(this,0x41) -
                         ((float)param_2_after_write * STField<float>(this,0x75) + fVar1_mgC);
                  }
                }
                else {
                  iVar15 = iVar16 % 3 + (iVar16 / 3) * 2;
                  uVar8 = iVar15 + STField<int>(this,0x1d) * 2;
                  iVar14 = *(int *)this;
                  if (uVar8 < *(uint *)(iVar14 + 0xc)) {
                    iVar14 = *(int *)(iVar14 + 8) * uVar8 + *(int *)(iVar14 + 0x1c);
                  }
                  else {
                    iVar14 = 0;
                  }
                  fVar6_mgF = (float)param_2_after_write;
                  *(undefined4 *)(iVar14 + 8) = 1;
                  *(float *)(iVar14 + 0x21) =
                       fVar6_mgF * STField<float>(this,0x75) + STField<float>(this,0x41) +
                       fVar1_mgC;
                  uVar8 = STField<int>(this,0x99) + iVar15;
                  iVar15 = *(int *)this;
                  if (uVar8 < *(uint *)(iVar15 + 0xc)) {
                    iVar14 = *(int *)(iVar15 + 8) * uVar8;
                    iVar15 = *(int *)(iVar15 + 0x1c);
                    *(undefined4 *)(iVar14 + 8 + iVar15) = 1;
                    *(float *)(iVar14 + iVar15 + 0x21) =
                         STField<float>(this,0x41) -
                         (fVar6_mgF * STField<float>(this,0x75) + fVar1_mgC);
                  }
                  else {
                    uRam00000008 = 1;
                    fRam00000021 = STField<float>(this,0x41) -
                                   (fVar6_mgF * STField<float>(this,0x75) + fVar1_mgC);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 <= iVar12);
            }
          }
        }
        else {
          uVar8 = 0;
          bVar7 = true;
          if (0 < (int)uVar11) {
            do {
              iVar12 = *(int *)this;
              if (uVar8 < *(uint *)(iVar12 + 0xc)) {
                iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
              }
              else {
                iVar12 = 0;
              }
              uVar8 = uVar8 + 1;
              *(undefined4 *)(iVar12 + 8) = 0;
            } while ((int)uVar8 < (int)uVar11);
          }
          local_14 = 0;
          if (0 < STField<int>(this,0x1d)) {
            param_1 = 2;
            do {
              iVar12 = *(int *)this;
              if (local_14 < *(uint *)(iVar12 + 0xc)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar12 = *(int *)(iVar12 + 8) * local_14 + *(int *)(iVar12 + 0x1c);
              }
              else {
                iVar12 = 0;
              }
              fVar1_mgD = STField<float>(this,0x75);
              *(undefined4 *)(iVar12 + 8) = 1;
              *(float *)(iVar12 + 0x21) = (float)(int)local_14 * fVar1_mgD * _DAT_007904fc;
              iVar12 = *(int *)this;
              uVar8 = (STField<int>(this,0x1d) + local_14) * 2;
              if (uVar8 < *(uint *)(iVar12 + 0xc)) {
                iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
              }
              else {
                iVar12 = 0;
              }
              fVar1_mgE = STField<float>(this,0x75);
              *(undefined4 *)(iVar12 + 8) = 1;
              *(float *)(iVar12 + 0x21) = (float)(param_1 + -1) * fVar1_mgE;
              uVar8 = (STField<int>(this,0x1d) + local_14) * 2 + 1;
              iVar12 = *(int *)this;
              if (uVar8 < *(uint *)(iVar12 + 0xc)) {
                iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
              }
              else {
                iVar12 = 0;
              }
              fVar6_mg10 = (float)param_1;
              local_14 = local_14 + 1;
              param_1 = param_1 + 3;
              fVar1_mgF = STField<float>(this,0x75);
              *(undefined4 *)(iVar12 + 8) = 1;
              *(float *)(iVar12 + 0x21) = fVar6_mg10 * fVar1_mgF;
            } while ((int)local_14 < STField<int>(this,0x1d));
          }
        }
        uVar8 = 0;
        if (0 < (int)uVar11) {
          do {
            iVar12 = *(int *)this;
            if (((uVar8 < *(uint *)(iVar12 + 0xc)) &&
                (iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) &&
               (*(int *)(iVar12 + 8) == 1)) {
              fVar6 = STField<float>(this,0x45);
              fVar24_mgB = (float10)*(float *)(iVar12 + 0x21) +
                           (float10)STField<float>(this,0x41);
              fsin((float10)fVar6);
              fcos(fVar24_mgB);
              fsin(fVar24_mgB);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar12 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)fVar6);
              *(int *)(iVar12 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar12 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar11);
        }
        if (bVar7) {
          STField<undefined4>(this,0x2d) = 1;
          uVar11 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0xf;
          STField<uint>(this,5) = uVar11;
          return;
        }
      }
      break;
    case 1:
      if (*(int *)this != 0) {
        iVar12 = *(int *)(*(int *)this + 0xc);
        uVar11 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        fVar1_mgA = (float)uVar11 * STField<float>(this,0x61) + STField<float>(this,0x79);
        if (STField<uint>(this,9) <= uVar11) {
          iVar16 = STField<int>(this,0x1d);
          uVar11 = 0;
          if (0 < iVar16) {
            do {
              iVar15 = *(int *)this;
              if (uVar11 < *(uint *)(iVar15 + 0xc)) {
                iVar14 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar14 = 0;
              }
              if (iVar16 + uVar11 < *(uint *)(iVar15 + 0xc)) {
                iVar16 = *(int *)(iVar15 + 8) * (iVar16 + uVar11) + *(int *)(iVar15 + 0x1c);
              }
              else {
                iVar16 = 0;
              }
              *(undefined4 *)(iVar16 + 0x21) = *(undefined4 *)(iVar14 + 0x21);
              *(undefined4 *)(iVar16 + 8) = 1;
              iVar16 = *(int *)this;
              uVar8 = (STField<int>(this,0x1d) + uVar11) * 2;
              if (uVar8 < *(uint *)(iVar16 + 0xc)) {
                iVar15 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2;
              if (uVar8 < *(uint *)(iVar16 + 0xc)) {
                iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
              }
              else {
                iVar16 = 0;
              }
              *(undefined4 *)(iVar16 + 0x21) = *(undefined4 *)(iVar15 + 0x21);
              *(undefined4 *)(iVar16 + 8) = 1;
              uVar8 = (STField<int>(this,0x1d) + uVar11) * 2 + 1;
              iVar16 = *(int *)this;
              if (uVar8 < *(uint *)(iVar16 + 0xc)) {
                iVar15 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2 + 1;
              if (uVar8 < *(uint *)(iVar16 + 0xc)) {
                iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
              }
              else {
                iVar16 = 0;
              }
              *(undefined4 *)(iVar16 + 0x21) = *(undefined4 *)(iVar15 + 0x21);
              *(undefined4 *)(iVar16 + 8) = 1;
              iVar16 = STField<int>(this,0x1d);
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < iVar16);
          }
          STField<float>(this,0x7d) =
               STField<float>(this,0x75) * _DAT_007904fc * _DAT_00790784;
          lVar19 = Library::MSVCRT::__ftol();
          STField<undefined4>(this,0x2d) = 2;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x81) = (float)(extraout_ST0_02 / (float10)(int)lVar19);
          fVar6_mgD = _DAT_0079c5a4;
          STField<uint>(this,5) = g_playSystem_00802A38->field_00E4;
          if (fVar1_mgA <= fVar6_mgD) {
            STField<float>(this,0x79) = fVar1_mgA;
          }
          else {
            lVar19 = Library::MSVCRT::__ftol();
            STField<float>(this,0x79) = fVar1_mgA - (float)((int)lVar19 << 1) * _DAT_0079d1a4;
          }
        }
        uVar11 = 0;
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar6 = STField<float>(this,0x45);
              fVar24_mgA = (float10)fVar1_mgA + (float10)*(float *)(iVar16 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24_mgA);
              fsin(fVar24_mgA);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)fVar6);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar12);
          return;
        }
      }
      break;
    case 2:
      if (*(int *)this != 0) {
        iVar12 = *(int *)(*(int *)this + 0xc);
        fVar6_mg7 = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
        fVar1_mg7 = fVar6_mg7 * STField<float>(this,0x61) + STField<float>(this,0x79);
        fVar6_mg6 = fVar6_mg7 * STField<float>(this,0x81);
        if ((STField<float>(this,0x7d) <= fVar6_mg6) ||
           (STField<float>(this,0x7d) - fVar6_mg6 < _DAT_0079d1bc)) {
          bVar7 = true;
        }
        iVar16 = STField<int>(this,0x1d);
        if (0 < iVar16) {
          do {
            iVar15 = *(int *)this;
            if (iVar16 + uVar11 < *(uint *)(iVar15 + 0xc)) {
              iVar16 = *(int *)(iVar15 + 8) * (iVar16 + uVar11) + *(int *)(iVar15 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            fVar6_mg8 = STField<float>(this,0x81);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + fVar6_mg8;
            iVar16 = *(int *)this;
            uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            fVar6_mg9 = STField<float>(this,0x81);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + fVar6_mg9;
            iVar16 = *(int *)this;
            uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2 + 1;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            fVar6_mgA = STField<float>(this,0x81);
            *(undefined4 *)(iVar16 + 8) = 1;
            uVar11 = uVar11 + 1;
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + fVar6_mgA;
            iVar16 = STField<int>(this,0x1d);
          } while ((int)uVar11 < iVar16);
        }
        uVar11 = 0;
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar6 = STField<float>(this,0x45);
              fVar24_mg8 = (float10)fVar1_mg7 + (float10)*(float *)(iVar16 + 0x21);
              fsin((float10)fVar6);
              fcos(fVar24_mg8);
              fsin(fVar24_mg8);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)fVar6);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar12);
        }
        fVar6_mgC = _DAT_0079c5a4;
        if (bVar7) {
          STField<undefined4>(this,0x2d) = 3;
          if (fVar1_mg7 <= fVar6_mgC) {
            STField<float>(this,0x79) = fVar1_mg7;
          }
          else {
            lVar19 = Library::MSVCRT::__ftol();
            STField<float>(this,0x79) = fVar1_mg7 - (float)((int)lVar19 << 1) * _DAT_0079d1a4;
          }
          if (STField<float>(this,0x65) != _DAT_0079034c) {
            lVar19 = Library::MSVCRT::__ftol();
            uVar11 = (int)(uint)lVar19 >> 0x1f;
            param_1 = ((uint)lVar19 ^ uVar11) - uVar11;
            if (param_1 == 0) {
              param_1 = 1;
            }
            fVar24_mg9 = (float10)param_1;
            iVar12 = *(int *)this;
            STField<float>(this,0x51) =
                 (float)(((float10)STField<float>(this,0x69) -
                         (float10)STField<float>(this,0x45)) / fVar24_mg9);
            STField<float>(this,0x55) =
                 (float)(((float10)STField<float>(this,0x6d) -
                         (float10)STField<float>(this,0x45)) / fVar24_mg9);
            if (*(int *)(iVar12 + 0xc) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(iVar12 + 0x1c);
            }
            iVar15 = STField<int>(this,0x19);
            fVar1_mg8 = ABS(*(float *)(STField<int>(this,0x39) + iVar15 * 4) -
                            *(float *)(iVar16 + 0x21));
            STField<float>(this,0x49) = fVar1_mg8;
            if (STField<float>(this,0x89) < fVar1_mg8) {
              Library::MSVCRT::__ftol();
              lVar19 = Library::MSVCRT::__ftol();
              uVar11 = (int)(uint)lVar19 >> 0x1f;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              STField<float>(this,0x49) =
                   (float)(extraout_ST0_03 -
                          (float10)(int)(((uint)lVar19 ^ uVar11) - uVar11) *
                          (float10)STField<float>(this,0x89));
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              fVar24_mg9 = extraout_ST1_00;
            }
            if (_DAT_0079034c < STField<float>(this,0x49)) {
              STField<float>(this,0x49) =
                   STField<float>(this,0x49) - STField<float>(this,0x89);
            }
            if (STField<uint>(this,0x1d) < *(uint *)(iVar12 + 0xc)) {
              iVar12 = *(int *)(iVar12 + 8) * STField<uint>(this,0x1d) + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            fVar1_mg9 = ABS(*(float *)(STField<int>(this,0x39) + -4 + iVar15 * 8) -
                            *(float *)(iVar12 + 0x21));
            STField<float>(this,0x4d) = fVar1_mg9;
            if (STField<float>(this,0x89) < fVar1_mg9) {
              Library::MSVCRT::__ftol();
              lVar19 = Library::MSVCRT::__ftol();
              uVar11 = (int)(uint)lVar19 >> 0x1f;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              STField<float>(this,0x4d) =
                   (float)(extraout_ST0_04 -
                          (float10)(int)(((uint)lVar19 ^ uVar11) - uVar11) *
                          (float10)STField<float>(this,0x89));
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              fVar24_mg9 = extraout_ST1_01;
            }
            STField<float>(this,0x59) =
                 (float)((float10)STField<float>(this,0x49) / fVar24_mg9);
            STField<float>(this,0x5d) =
                 (float)((float10)STField<float>(this,0x4d) / fVar24_mg9);
            STField<uint>(this,5) = g_playSystem_00802A38->field_00E4;
            return;
          }
        }
      }
      break;
    case 3:
      if (*(int *)this != 0) {
        iVar12 = *(int *)(*(int *)this + 0xc);
        fVar2_mg0 = (float)(g_playSystem_00802A38->field_00E4 - STField<int>(this,5));
        fVar6_mg5 = fVar2_mg0 * STField<float>(this,0x61) + STField<float>(this,0x79);
        fVar3_mg0 = fVar2_mg0 * STField<float>(this,0x51);
        fVar1_mg4 = STField<float>(this,0x55);
        if ((fVar3_mg0 + STField<float>(this,0x45) <= STField<float>(this,0x69)) ||
           ((STField<float>(this,0x45) - fVar3_mg0) + STField<float>(this,0x69) <
            (float)_DAT_0079d1b0)) {
          bVar7 = true;
        }
        if (0 < STField<int>(this,0x1d)) {
          do {
            iVar16 = *(int *)this;
            if (uVar11 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x59);
            fVar4_mg0 = STField<float>(this,0x51);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = *(float *)(iVar16 + 0x25) + fVar4_mg0;
            iVar16 = *(int *)this;
            uVar8 = (STField<int>(this,0x1d) + uVar11) * 2;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x59);
            fVar4_mg1 = STField<float>(this,0x51);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = *(float *)(iVar16 + 0x25) + fVar4_mg1;
            iVar16 = *(int *)this;
            uVar8 = (STField<int>(this,0x1d) + uVar11) * 2 + 1;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x59);
            fVar4_mg2 = STField<float>(this,0x51);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = *(float *)(iVar16 + 0x25) + fVar4_mg2;
            iVar16 = *(int *)this;
            uVar8 = STField<int>(this,0x1d) + uVar11;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar4_mg3 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar4_mg3 + *(float *)(iVar16 + 0x25);
            iVar16 = *(int *)this;
            uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar4_mg4 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar4_mg4 + *(float *)(iVar16 + 0x25);
            uVar8 = (uVar11 + STField<int>(this,0x1d) * 2) * 2 + 1;
            iVar16 = *(int *)this;
            if (uVar8 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            uVar11 = uVar11 + 1;
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar4_mg5 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar4_mg5 + *(float *)(iVar16 + 0x25);
          } while ((int)uVar11 < STField<int>(this,0x1d));
        }
        iVar16 = STField<int>(this,0x35);
        if ((0 < iVar16) && (!bVar7)) {
          iVar15 = STField<int>(this,0x19) - iVar16;
          fVar4_mg6 = *(float *)(STField<int>(this,0x39) + iVar15 * 4);
          if (fVar4_mg6 <= fVar2_mg0 * fVar1_mg4 + STField<float>(this,0x45)) {
            fVar1_mg5 = STField<float>(this,0x45);
            iVar13 = 0;
            iVar14 = STField<int>(this,0x1d);
            fVar2_mg1 = *(float *)(STField<int>(this,0x39) +
                                  (STField<int>(this,0x19) * 2 - iVar16) * 4);
            if (0 < iVar14) {
              param_1 = 0;
              do {
                iVar16 = *(int *)this;
                uVar11 = (iVar15 + 5) * iVar14 + iVar13;
                if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                   (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0))
                {
                  *(float *)(iVar16 + 0x25) = fVar4_mg6 - fVar1_mg5;
                  fVar5_mg0 = STField<float>(this,0x75);
                  *(undefined4 *)(iVar16 + 8) = 1;
                  *(float *)(iVar16 + 0x21) = (float)param_1 * fVar5_mg0 + fVar2_mg1;
                }
                iVar13 = iVar13 + 1;
                param_1 = param_1 + 3;
                iVar14 = STField<int>(this,0x1d);
              } while (iVar13 < iVar14);
            }
            STField<int>(this,0x35) = STField<int>(this,0x35) + -1;
          }
        }
        iVar16 = STField<int>(this,0x31);
        if ((0 < iVar16) && (!bVar7)) {
          fVar1_mg6 = *(float *)(STField<int>(this,0x39) + (iVar16 + -1) * 4);
          if (fVar3_mg0 + STField<float>(this,0x45) <= fVar1_mg6) {
            fVar2_mg2 = STField<float>(this,0x45);
            iVar14 = 0;
            fVar3_mg1 = *(float *)(STField<int>(this,0x39) +
                                  (STField<int>(this,0x19) + iVar16 + -1) * 4);
            iVar15 = STField<int>(this,0x1d);
            if (0 < iVar15) {
              param_1 = 0;
              do {
                iVar13 = *(int *)this;
                uVar11 = (iVar16 + 4) * iVar15 + iVar14;
                if ((uVar11 < *(uint *)(iVar13 + 0xc)) &&
                   (iVar15 = *(int *)(iVar13 + 8) * uVar11 + *(int *)(iVar13 + 0x1c), iVar15 != 0))
                {
                  *(float *)(iVar15 + 0x25) = fVar1_mg6 - fVar2_mg2;
                  fVar4_mg7 = STField<float>(this,0x75);
                  *(undefined4 *)(iVar15 + 8) = 1;
                  *(float *)(iVar15 + 0x21) = (float)param_1 * fVar4_mg7 + fVar3_mg1;
                }
                iVar14 = iVar14 + 1;
                param_1 = param_1 + 3;
                iVar15 = STField<int>(this,0x1d);
              } while (iVar14 < iVar15);
            }
            STField<int>(this,0x31) = STField<int>(this,0x31) + -1;
          }
        }
        uVar11 = 0;
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar24_mg7 = (float10)fVar6_mg5 + (float10)*(float *)(iVar16 + 0x21);
              fVar22_mg4 = (float10)*(float *)(iVar16 + 0x25) +
                           (float10)STField<float>(this,0x45);
              fsin(fVar22_mg4);
              fcos(fVar24_mg7);
              fsin(fVar24_mg7);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar22_mg4);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar12);
        }
        if (bVar7) {
          if (fVar6_mg5 <= _DAT_0079c5a4) {
            STField<float>(this,0x79) = fVar6_mg5;
          }
          else {
            lVar19 = Library::MSVCRT::__ftol();
            STField<float>(this,0x79) = fVar6_mg5 - (float)((int)lVar19 << 1) * _DAT_0079d1a4;
          }
          STField<undefined4>(this,0x2d) = 4;
          uVar11 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0x14;
          STField<uint>(this,5) = uVar11;
          return;
        }
      }
      break;
    case 4:
      if (*(int *)this != 0) {
        uVar8 = 0;
        uVar11 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        iVar12 = *(int *)(*(int *)this + 0xc);
        fVar24_mg5 = (float10)uVar11 * (float10)STField<float>(this,0x61) +
                     (float10)STField<float>(this,0x79);
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar8 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar24_mg4 = fVar24_mg5 + (float10)*(float *)(iVar16 + 0x21);
              fVar22_mg3 = (float10)*(float *)(iVar16 + 0x25) +
                           (float10)STField<float>(this,0x45);
              fsin(fVar22_mg3);
              fcos(fVar24_mg4);
              fsin(fVar24_mg4);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar22_mg3);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24_mg5 = extraout_ST0_05;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar12);
        }
        if (STField<uint>(this,9) <= uVar11) {
          lVar19 = Library::MSVCRT::__ftol();
          iVar12 = (int)lVar19;
          STField<undefined4>(this,0x35) = 0;
          STField<undefined4>(this,0x2d) = 5;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x55) = (float)-(extraout_ST0_06 / (float10)iVar12);
          STField<float>(this,0x5d) = -(STField<float>(this,0x89) / (float)iVar12);
          fVar24_mg6 = (float10)_DAT_0079c5a4;
          uVar11 = g_playSystem_00802A38->field_00E4;
          STField<int>(this,9) = iVar12;
          STField<uint>(this,5) = uVar11;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          if (extraout_ST1_02 <= fVar24_mg6) {
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            STField<float>(this,0x79) = (float)extraout_ST1_02;
            return;
          }
          lVar19 = Library::MSVCRT::__ftol();
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STField<float>(this,0x79) =
               (float)(extraout_ST0_07 - (float10)((int)lVar19 << 1) * (float10)_DAT_0079d1a4);
        }
      }
      break;
    case 5:
      if (*(int *)this != 0) {
        iVar12 = *(int *)(*(int *)this + 0xc);
        uVar8 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        fVar22_mg1 = (float10)uVar8;
        iVar16 = STField<int>(this,0x1d);
        fVar6 = STField<float>(this,0x55);
        fVar24_mg3 = (float10)STField<float>(this,0x79) -
                     fVar22_mg1 * (float10)STField<float>(this,0x61);
        if (0 < iVar16) {
          do {
            iVar15 = *(int *)this;
            if (iVar16 + uVar11 < *(uint *)(iVar15 + 0xc)) {
              iVar16 = *(int *)(iVar15 + 8) * (iVar16 + uVar11) + *(int *)(iVar15 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar6_mg2 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar6_mg2 + *(float *)(iVar16 + 0x25);
            iVar16 = *(int *)this;
            uVar10 = (uVar11 + STField<int>(this,0x1d) * 2) * 2;
            if (uVar10 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar10 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar6_mg3 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar6_mg3 + *(float *)(iVar16 + 0x25);
            iVar16 = *(int *)this;
            uVar10 = (uVar11 + STField<int>(this,0x1d) * 2) * 2 + 1;
            if (uVar10 < *(uint *)(iVar16 + 0xc)) {
              iVar16 = *(int *)(iVar16 + 8) * uVar10 + *(int *)(iVar16 + 0x1c);
            }
            else {
              iVar16 = 0;
            }
            uVar11 = uVar11 + 1;
            *(float *)(iVar16 + 0x21) = *(float *)(iVar16 + 0x21) + STField<float>(this,0x5d);
            fVar6_mg4 = STField<float>(this,0x55);
            *(undefined4 *)(iVar16 + 8) = 1;
            *(float *)(iVar16 + 0x25) = fVar6_mg4 + *(float *)(iVar16 + 0x25);
            iVar16 = STField<int>(this,0x1d);
          } while ((int)uVar11 < iVar16);
        }
        if ((STField<int>(this,0x35) < STField<int>(this,0x19) + -2) &&
           (iVar16 = STField<int>(this,0x19) - STField<int>(this,0x35),
           (float)(fVar22_mg1 * (float10)fVar6) + STField<float>(this,0x6d) <=
           *(float *)(STField<int>(this,0x39) + (iVar16 + -2) * 4))) {
          iVar15 = STField<int>(this,0x1d);
          iVar14 = 0;
          if (0 < iVar15) {
            do {
              iVar13 = *(int *)this;
              uVar11 = (iVar16 + 3) * iVar15 + iVar14;
              if (uVar11 < *(uint *)(iVar13 + 0xc)) {
                iVar15 = *(int *)(iVar13 + 8) * uVar11 + *(int *)(iVar13 + 0x1c);
              }
              else {
                iVar15 = 0;
              }
              *(undefined4 *)(iVar15 + 8) = 0;
              iVar15 = STField<int>(this,0x1d);
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar15);
          }
          STField<int>(this,0x35) = STField<int>(this,0x35) + 1;
        }
        uVar11 = 0;
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar11 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar24_mg2 = fVar24_mg3 + (float10)*(float *)(iVar16 + 0x21);
              fVar22_mg2 = (float10)*(float *)(iVar16 + 0x25) +
                           (float10)STField<float>(this,0x45);
              fsin(fVar22_mg2);
              fcos(fVar24_mg2);
              fsin(fVar24_mg2);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar22_mg2);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fVar24_mg3 = extraout_ST0_08;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar12);
        }
        if (STField<uint>(this,9) <= uVar8) {
          if (fVar24_mg3 <= (float10)_DAT_0079c5a4) {
            STField<float>(this,0x79) = (float)fVar24_mg3;
          }
          else {
            lVar19 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            STField<float>(this,0x79) =
                 (float)(extraout_ST0_09 - (float10)((int)lVar19 << 1) * (float10)_DAT_0079d1a4);
          }
          STField<undefined4>(this,0x2d) = 6;
          uVar11 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,9) = 0x14f;
          STField<uint>(this,5) = uVar11;
          return;
        }
      }
      break;
    case 6:
      if (*(int *)this != 0) {
        uVar8 = 0;
        uVar11 = g_playSystem_00802A38->field_00E4 - STField<int>(this,5);
        iVar12 = *(int *)(*(int *)this + 0xc);
        fVar1_mg2 = STField<float>(this,0x61);
        fVar6_mg1 = STField<float>(this,0x79);
        if (0 < iVar12) {
          do {
            iVar16 = *(int *)this;
            if (((uVar8 < *(uint *)(iVar16 + 0xc)) &&
                (iVar16 = *(int *)(iVar16 + 8) * uVar8 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) &&
               (*(int *)(iVar16 + 8) == 1)) {
              fVar24_mg1 = (float10)((float)uVar11 * fVar1_mg2 + fVar6_mg1) +
                           (float10)*(float *)(iVar16 + 0x21);
              fVar22_mg0 = (float10)*(float *)(iVar16 + 0x25) +
                           (float10)STField<float>(this,0x45);
              fsin(fVar22_mg0);
              fcos(fVar24_mg1);
              fsin(fVar24_mg1);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x8d);
              lVar19 = Library::MSVCRT::__ftol();
              fcos((float10)(float)fVar22_mg0);
              *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x91);
              lVar19 = Library::MSVCRT::__ftol();
              *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x95);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar12);
        }
        if (STField<uint>(this,9) <= uVar11) {
          STField<undefined4>(this,0x2d) = 0;
          return;
        }
      }
    }
    break;
  case 4:
    fcos((float10)param_1 * (float10)_DAT_0079d1c4);
    fsin((float10)param_1 * (float10)_DAT_0079d1c4);
    if (*(int *)this != 0) {
      iVar12 = *(int *)(*(int *)this + 0xc);
      iVar16 = STField<int>(this,0x1d);
      uVar11 = 0;
      if (0 < iVar16 * 2) {
        do {
          iVar15 = *(int *)this;
          if ((uVar11 < *(uint *)(iVar15 + 0xc)) &&
             (iVar15 = *(int *)(iVar15 + 8) * uVar11 + *(int *)(iVar15 + 0x1c), iVar15 != 0)) {
            fVar1_mg0 = *(float *)(iVar15 + 0x21) + STField<float>(this,0x8d);
            if ((int)uVar11 < iVar16) {
              fVar6 = *(float *)(iVar15 + 0x25);
            }
            else {
              fVar6 = STField<float>(this,0x71);
            }
            fsin((float10)fVar6);
            fcos((float10)fVar1_mg0);
            fsin((float10)fVar1_mg0);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar15 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
            lVar19 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fcos(extraout_ST0_10);
            *(int *)(iVar15 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
            lVar19 = Library::MSVCRT::__ftol();
            *(int *)(iVar15 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
          }
          iVar16 = STField<int>(this,0x1d);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar16 * 2);
      }
      for (uVar11 = STField<int>(this,0x1d) * 2; (int)uVar11 < iVar12; uVar11 = uVar11 + 1) {
        iVar16 = *(int *)this;
        if ((uVar11 < *(uint *)(iVar16 + 0xc)) &&
           (iVar16 = *(int *)(iVar16 + 8) * uVar11 + *(int *)(iVar16 + 0x1c), iVar16 != 0)) {
          uVar8 = g_playSystem_00802A38->field_00E4 - *(int *)(iVar16 + 0x35);
          fVar24_mg0 = (float10)*(float *)(iVar16 + 0x21) + (float10)STField<float>(this,0x8d);
          fVar1_mg1 = (float)uVar8 * STField<float>(this,0x85) +
                      (float)(uVar8 * uVar8) * STField<float>(this,0x89) * _DAT_0079d1ac +
                      *(float *)(iVar16 + 0x25);
          if (fVar1_mg1 <= STField<float>(this,0x71)) {
            *(undefined4 *)(iVar16 + 8) = 1;
          }
          else {
            *(undefined4 *)(iVar16 + 8) = 0;
          }
          if (STField<float>(this,0x79) < fVar1_mg1) {
            *(undefined4 *)(iVar16 + 0x25) = STField<undefined4>(this,0x65);
            *(uint *)(iVar16 + 0x35) = g_playSystem_00802A38->field_00E4;
          }
          fsin((float10)fVar1_mg1);
          fcos(fVar24_mg0);
          fsin(fVar24_mg0);
          lVar19 = Library::MSVCRT::__ftol();
          *(int *)(iVar16 + 0xd) = (int)lVar19 + STField<int>(this,0x95);
          lVar19 = Library::MSVCRT::__ftol();
          fcos((float10)fVar1_mg1);
          *(int *)(iVar16 + 0x11) = (int)lVar19 + STField<int>(this,0x99);
          lVar19 = Library::MSVCRT::__ftol();
          *(int *)(iVar16 + 0x15) = (int)lVar19 + STField<int>(this,0x9d);
        }
      }
      if (STField<float>(this,0x71) < STField<float>(this,0x79)) {
        STField<float>(this,0x71) =
             STField<float>(this,0x89) + STField<float>(this,0x89) +
             STField<float>(this,0x71);
      }
      STField<float>(this,0x8d) = STField<float>(this,0x89) + STField<float>(this,0x8d);
      return;
    }
  }
  return;
}

