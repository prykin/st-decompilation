#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __fastcall FUN_00717970(ST3DSMAPContext *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  char *pcVar11;
  void *pvVar12;
  int iVar13;
  byte *puVar14;
  longlong lVar15;
  int local_5c;
  double local_44;
  int local_30;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  float local_c;
  float local_8;

  if ((param_1->field_04BA == 0) || (param_1->field_04A2 == 0)) {
switchD_007179c7_default:
    return 0;
  }
  ST3DSMAPContext::sub_006E1C20
            (param_1,(float)param_1->field_0030,param_1->field_0034,
             (float)((float10)param_1->field_00D0 + (float10)param_1->field_00D0),&local_8,&local_c);
  switch(param_1->field_00A8) {
  case CASE_0:
    local_44 = (double)((param_1->field_04B2 * 10) / 2) +
               ((double)local_8 - (double)local_c) * _DAT_0079df60;
    dVar4 = (param_1->field_00C8 * _DAT_0079e248 + (double)local_8 + (double)local_c) *
            _DAT_0079df60 - _DAT_0079e240;
    goto LAB_00717b22;
  case CASE_1:
    iVar5 = param_1->field_04B6;
    local_44 = (param_1->field_00C8 * _DAT_0079e248 + (double)local_8 + (double)local_c) *
               _DAT_0079df60 - _DAT_0079e240;
    dVar4 = (double)local_c - (double)local_8;
    break;
  case CASE_2:
    local_44 = (double)((param_1->field_04B2 * 10) / 2) +
               ((double)local_c - (double)local_8) * _DAT_0079df60;
    dVar4 = (double)(param_1->field_04B6 * 10 + -10) +
            ((-(double)local_8 - (double)local_c) - param_1->field_00C8 * _DAT_0079e248) *
            _DAT_0079df60 + _DAT_0079e240;
    goto LAB_00717b22;
  case CASE_3:
    iVar5 = param_1->field_04B6;
    local_44 = (double)(param_1->field_04B2 * 10 + -10) +
               ((-(double)local_8 - (double)local_c) - param_1->field_00C8 * _DAT_0079e248) *
               _DAT_0079df60 + _DAT_0079e240;
    dVar4 = (double)local_8 - (double)local_c;
    break;
  default:
    goto switchD_007179c7_default;
  }
  dVar4 = (double)((iVar5 * 10) / 2) + dVar4 * _DAT_0079df60;
LAB_00717b22:
  if (local_44 < _DAT_0079d670) {
    lVar15 = Library::MSVCRT::__ftol();
    param_1->field_047E = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    Library::MSVCRT::FUN_0073459a(extraout_ECX_00);
  }
  else {
    lVar15 = Library::MSVCRT::__ftol();
    param_1->field_047E = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    Library::MSVCRT::FUN_0073459a(extraout_ECX);
  }
  lVar15 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar15;
  dVar4 = dVar4 * _DAT_0079df60;
  param_1->field_0476 = iVar5;
  if (dVar4 < _DAT_0079d670) {
    lVar15 = Library::MSVCRT::__ftol();
    param_1->field_0482 = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    Library::MSVCRT::FUN_0073459a(extraout_ECX_02);
  }
  else {
    lVar15 = Library::MSVCRT::__ftol();
    param_1->field_0482 = (int)lVar15;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    Library::MSVCRT::FUN_0073459a(extraout_ECX_01);
  }
  lVar15 = Library::MSVCRT::__ftol();
  iVar7 = (int)lVar15;
  iVar6 = param_1->field_0030;
  param_1->field_047A = iVar7;
  iVar3 = param_1->field_04E6;
  param_1->field_048E = iVar6;
  iVar10 = param_1->field_0034;
  param_1->field_0492 = iVar10;
  if (param_1->field_047E < 0) {
    param_1->field_0476 = 0;
    param_1->field_048E = (iVar6 - param_1->field_047E * param_1->field_04E2) + iVar5;
    param_1->field_047E = 0;
  }
  local_1c = param_1->field_04B2;
  iVar5 = param_1->field_047E +
          (((param_1->field_04E2 - iVar6) - iVar5) + -1 + param_1->field_0038) / param_1->field_04E2
  ;
  param_1->field_0486 = iVar5;
  if (local_1c < iVar5) {
    param_1->field_0486 = local_1c;
  }
  if (param_1->field_0482 < 0) {
    param_1->field_047A = 0;
    param_1->field_0492 = (iVar10 - param_1->field_0482 * iVar3) + iVar7;
    param_1->field_0482 = 0;
  }
  local_30 = param_1->field_0482;
  iVar5 = (((iVar3 - iVar10) - iVar7) + -1 + param_1->field_003C) / iVar3 + local_30;
  param_1->field_048A = iVar5;
  if ((int)param_1->field_04B6 < iVar5) {
    param_1->field_048A = param_1->field_04B6;
  }
  local_1c = local_30 * local_1c;
  iVar5 = local_30 * param_1->field_04BE + param_1->field_04BA;
  pvVar12 = (void *)((int)param_1->field_0018 + local_1c);
  iVar6 = (&param_1->field_04A2)[param_1->field_00A8] + local_1c;
  local_10 = param_1->field_0492 + param_1->field_047A;
  if (local_30 < param_1->field_048A) {
    do {
      local_14 = param_1->field_0476 + param_1->field_048E;
      local_20 = param_1->field_047E;
      if (local_20 < (int)param_1->field_0486) {
        pcVar11 = (char *)(local_20 + (int)pvVar12);
        do {
          pbVar1 = (byte *)(pcVar11 + (iVar6 - (int)pvVar12));
          if ((*(byte *)((int)param_1->field_046E +
                        ((int)((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) >> 3)) >>
               (((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) & 7) & 1) != 0) {
            cVar2 = (&DAT_007f0594)[(uint)*pbVar1 * 0x10 + (uint)pbVar1[iVar5 - iVar6]];
            if ((param_1->field_02D8 == 0) && (cVar2 != *pcVar11)) {
              *pcVar11 = cVar2;
              iVar3 = param_1->field_0030;
              iVar10 = param_1->field_04E2;
              iVar7 = param_1->field_04E6;
              local_5c = local_14;
              if (local_14 < iVar3) {
                iVar10 = (iVar10 - iVar3) + local_14;
                local_5c = iVar3;
              }
              if (param_1->field_0038 < local_5c + iVar10) {
                iVar10 = param_1->field_0038 - local_5c;
              }
              iVar3 = param_1->field_0034;
              iVar13 = local_10;
              if (local_10 < iVar3) {
                iVar7 = (iVar7 - iVar3) + local_10;
                iVar13 = iVar3;
              }
              if (param_1->field_003C < iVar7 + iVar13) {
                iVar7 = param_1->field_003C - iVar13;
              }
              if ((0 < iVar10) && (0 < iVar7)) {
                FUN_006b5f80(param_1->field_0000,param_1->field_0020 + local_5c,
                             param_1->field_0024 + iVar13,iVar10,iVar7);
              }
            }
            else {
              *pcVar11 = cVar2;
            }
          }
          local_14 = local_14 + param_1->field_04E2;
          local_20 = local_20 + 1;
          pcVar11 = pcVar11 + 1;
        } while (local_20 < (int)param_1->field_0486);
      }
      iVar3 = param_1->field_04B2;
      iVar5 = iVar5 + param_1->field_04BE;
      local_1c = local_1c + iVar3;
      pvVar12 = (void *)((int)pvVar12 + iVar3);
      iVar6 = iVar6 + iVar3;
      local_10 = local_10 + param_1->field_04E6;
      local_30 = local_30 + 1;
    } while (local_30 < param_1->field_048A);
  }
  iVar5 = param_1->field_048E;
  iVar6 = param_1->field_0476 + (param_1->field_0486 - param_1->field_047E) * param_1->field_04E2;
  param_1->field_0496 = iVar6;
  if (param_1->field_0038 < iVar6 + iVar5) {
    param_1->field_0496 = param_1->field_0038 - iVar5;
  }
  iVar6 = (param_1->field_048A - param_1->field_0482) * param_1->field_04E6 + param_1->field_047A;
  iVar3 = param_1->field_0492;
  param_1->field_049A = iVar6;
  if (param_1->field_003C < iVar6 + iVar3) {
    param_1->field_049A = param_1->field_003C - iVar3;
  }
  iVar6 = param_1->field_04C2 * param_1->field_04BE + 7;
  param_1->field_0492 = param_1->field_0024 + iVar3;
  param_1->field_048E = param_1->field_0020 + iVar5;
  uVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  puVar14 = (byte *)(param_1->field_046E);
  memset(puVar14, 0, uVar8); /* compiler bulk-zero initialization */
  param_1->field_046A = 0;
  return 0;
}

