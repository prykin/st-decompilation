#include "../../pseudocode_runtime.h"


void __fastcall FUN_0060aa00(AnonShape_0060AA00_19A5DB50 *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  unkbyte10 extraout_ST1;
  longlong lVar8;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_8;

  local_8 = 0.0;
  local_14 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(param_1->field_0234 + 0xc);
  switch(param_1->field_020D) {
  case 1:
  case 3:
    if (param_1->field_01F5 == 0x4d) {
      local_8 = 0.0072;
      local_10 = local_10 / param_1->field_021D;
    }
    else if (param_1->field_01F5 == 0x4c) {
      local_8 = 0.009;
    }
    else {
      local_8 = 0.36;
    }
    break;
  case 2:
  case 4:
    local_8 = 0.36;
    local_14 = local_10 / 2;
  }
  local_1c = 0;
  if (0 < local_10) {
    do {
      if (param_1->field_01F5 == 0x4d) {
        local_18 = 0;
        if (0 < param_1->field_021D) {
          do {
            iVar6 = param_1->field_0234;
            uVar3 = local_18 * local_10 + local_1c;
            if ((uVar3 < STField<uint>(iVar6,0xC)) &&
               (iVar6 = STField<int>(iVar6,0x8) * uVar3 + STField<int>(iVar6,0x1C), iVar6 != 0)) {
              fVar7 = (float10)STField<float>(iVar6,0x2C) - (float10)local_8;
              STField<float>(iVar6,0x2C) = (float)fVar7;
              if (local_18 != 0) {
                uVar3 = STField<int>(iVar6,0x34) + 1;
                STField<uint>(iVar6,0x34) = uVar3;
                STField<float>(iVar6,0x30) = (float)((uVar3 >> 1) + 10) + STField<float>(iVar6,0x30);
                lVar8 = Library::MSVCRT::__ftol();
                STField<int>(iVar6,0x24) = (int)lVar8;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((float10)(param_1->field_01FD + 100) <= extraout_ST0) {
                  STField<undefined4>(iVar6,0x30) = 0x43480000;
                  STField<undefined4>(iVar6,0x34) = 0;
                }
                Library::MSVCRT::__ftol();
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fVar7 = extraout_ST0_00;
              }
              fcos(fVar7);
              lVar8 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              fsin(extraout_ST1);
              iVar1 = (int)lVar8 + STField<int>(iVar6,0x18);
              STField<int>(iVar6,0xC) = iVar1;
              lVar8 = Library::MSVCRT::__ftol();
              iVar4 = (int)lVar8 + STField<int>(iVar6,0x1C);
              STField<int>(iVar6,0x10) = iVar4;
              ST3DSMAPContext::sub_006E3210
                        (g_sT3DSMAPContext_00807598,
                         (iVar1 * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
                         (iVar4 * g_sT3DSMAPContext_00807598->field_0380) / 0xc9);
              lVar8 = Library::MSVCRT::__ftol();
              STField<int>(iVar6,0x14) = (short)lVar8 + 0x2d;
            }
            local_18 = local_18 + 1;
          } while (local_18 < param_1->field_021D);
        }
      }
      else {
        iVar6 = param_1->field_0234;
        if ((local_1c < STField<uint>(iVar6,0xC)) &&
           (iVar6 = STField<int>(iVar6,0x8) * local_1c + STField<int>(iVar6,0x1C), iVar6 != 0)) {
          if (param_1->field_020D == 3) {
            STField<float>(iVar6,0x2C) = STField<float>(iVar6,0x2C) - local_8;
          }
          else if ((param_1->field_020D == 4) && ((int)local_1c <= local_14)) {
            STField<float>(iVar6,0x2C) = STField<float>(iVar6,0x2C) - local_8;
            Library::MSVCRT::__ftol();
            fVar2 = param_1->field_022A + STField<float>(iVar6,0x30);
            STField<float>(iVar6,0x30) = fVar2;
            if ((float)param_1->field_01F9 <= fVar2) {
              STField<float>(iVar6,0x30) = (float)(int)param_1->field_01FD;
            }
          }
          else {
            STField<float>(iVar6,0x2C) = local_8 + STField<float>(iVar6,0x2C);
          }
          fcos((float10)STField<float>(iVar6,0x2C));
          lVar8 = Library::MSVCRT::__ftol();
          fsin((float10)STField<float>(iVar6,0x2C));
          STField<int>(iVar6,0xC) = (int)lVar8 + STField<int>(iVar6,0x18);
          lVar8 = Library::MSVCRT::__ftol();
          STField<int>(iVar6,0x10) = (int)lVar8 + STField<int>(iVar6,0x1C);
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_10);
  }
  if ((param_1->field_020D != 4) && (param_1->field_020D != 3)) {
    param_1->field_022A = (float)(param_1->field_0230 * 0x1e);
    lVar8 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar8;
    param_1->field_0226 = iVar6;
    if (iVar6 < param_1->field_01F9) {
      if (iVar6 <= (int)param_1->field_01FD) {
        param_1->field_0230 = 1;
      }
    }
    else {
      param_1->field_0226 = param_1->field_01FD;
      uVar3 = g_playSystem_00802A38->field_00E4;
      param_1->field_0248 = 1;
      param_1->field_0250 = uVar3 + 0x1e;
    }
  }
  uVar3 = param_1->field_0226 - param_1->field_01F9 / 2;
  uVar5 = (int)uVar3 >> 0x1f;
  if ((((float)(int)((uVar3 ^ uVar5) - uVar5) < param_1->field_022A) &&
      (param_1->field_022F == '\0')) &&
     ((param_1->field_01F5 == 0x43 || (param_1->field_01F5 == 0x42)))) {
    thunk_FUN_0060aef0(param_1);
    param_1->field_022F = 1;
  }
  return;
}

