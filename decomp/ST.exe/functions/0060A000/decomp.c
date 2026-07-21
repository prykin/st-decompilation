
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0060a000(AnonShape_0060A000_715F6478 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_02;
  longlong lVar7;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_18 = 0;
  if (param_1->field_0234 != 0) {
    local_14 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = *(int *)(param_1->field_0234 + 0xc);
    switch(param_1->field_020D) {
    case 0:
    case 3:
      if (param_1->field_01F5 == 0x4d) {
        local_8 = local_8 / param_1->field_021D;
        local_18 = (int)(0x3ed / (longlong)param_1->field_021D);
      }
      fVar6 = (float10)_DAT_0079c5a4 / (float10)local_8;
      if (param_1->field_020D == 3) {
        param_1->field_01FD = param_1->field_01F9;
      }
      break;
    default:
      fVar6 = (float10)_DAT_0079c5a4 / (float10)local_8;
      break;
    case 2:
    case 4:
      fVar6 = (float10)_DAT_0079cd28 / (float10)local_8;
      local_14 = local_8 / 2;
    }
    local_10 = 0;
    param_1->field_0226 = param_1->field_01FD;
    param_1->field_0230 = 1;
    local_c = 0;
    if (0 < local_8) {
      do {
        if (param_1->field_01F5 == 0x4d) {
          iVar4 = 0;
          if (0 < param_1->field_021D) {
            do {
              uVar3 = iVar4 * local_8 + local_c;
              iVar1 = param_1->field_0234;
              if ((uVar3 < *(uint *)(iVar1 + 0xc)) &&
                 (puVar5 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c)),
                 puVar5 != (undefined4 *)0x0)) {
                puVar5[0xb] = (float)((float10)(int)local_c * fVar6);
                fcos((float10)(int)local_c * fVar6);
                lVar7 = Library::MSVCRT::__ftol();
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fsin(extraout_ST0);
                puVar5[3] = (int)lVar7 + param_1->field_01E9;
                lVar7 = Library::MSVCRT::__ftol();
                puVar5[4] = (int)lVar7 + param_1->field_01ED;
                puVar5[5] = iVar4 * local_18 + param_1->field_01F1;
                puVar5[6] = param_1->field_01E9;
                puVar5[7] = param_1->field_01ED;
                puVar5[8] = param_1->field_01F1;
                puVar5[1] = 0xffffffff;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fVar6 = extraout_ST0_00;
                if (iVar4 == 0) {
                  uVar2 = param_1->field_0215;
                  puVar5[9] = local_10;
                  *puVar5 = uVar2;
                  puVar5[10] = 7;
                  if ((int)local_c % 3 == 0) {
                    puVar5[1] = 0;
                  }
                }
                else {
                  uVar2 = param_1->field_0211;
                  puVar5[10] = 0;
                  *puVar5 = uVar2;
                  iVar1 = param_1->field_01FD;
                  uVar3 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar3;
                  puVar5[9] = 0;
                  puVar5[0xd] = 0;
                  puVar5[0xc] = (float)((uVar3 >> 0x10) % (iVar1 - 99U) + 200);
                }
              }
              local_10 = local_10 + 1;
              if (6 < local_10) {
                local_10 = 0;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_1->field_021D);
          }
        }
        else {
          iVar4 = param_1->field_0234;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_c < *(uint *)(iVar4 + 0xc)) &&
             (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * local_c + *(int *)(iVar4 + 0x1c)),
             puVar5 != (undefined4 *)0x0)) {
            puVar5[0xb] = (float)((float10)(int)local_c * fVar6);
            fcos((float10)(int)local_c * fVar6);
            lVar7 = Library::MSVCRT::__ftol();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST0_01);
            puVar5[3] = (int)lVar7 + param_1->field_01E9;
            lVar7 = Library::MSVCRT::__ftol();
            puVar5[4] = (int)lVar7 + param_1->field_01ED;
            puVar5[5] = param_1->field_01F1;
            iVar4 = param_1->field_01E9;
            puVar5[6] = iVar4;
            puVar5[7] = param_1->field_01ED;
            if (param_1->field_01F5 == 0x4d) {
              puVar5[6] = iVar4 + 100;
              puVar5[7] = puVar5[7] + 100;
            }
            puVar5[8] = param_1->field_01F1;
            if ((param_1->field_020D == 4) && ((int)local_c <= local_14)) {
              puVar5[0xc] = (float)(int)local_c * param_1->field_022A;
            }
            if ((local_14 < 1) || ((int)local_c <= local_14)) {
              *puVar5 = param_1->field_0211;
            }
            else {
              *puVar5 = param_1->field_0215;
            }
            puVar5[10] = 0;
            puVar5[9] = local_10;
            local_10 = local_10 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fVar6 = extraout_ST0_02;
            if (-1 < local_10) {
              local_10 = 0;
            }
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < local_8);
    }
    param_1->field_0254 = 0;
    return 0;
  }
  return 0;
}

