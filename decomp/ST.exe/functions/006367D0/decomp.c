#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_006367d0(int *param_1)

{
  bool bVar1;
  uint uVar4;
  int iVar5;
  int iVar2;
  uint uVar3;
  uint local_EAX_994;
  int local_EAX_1400;
  uint uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short local_10;
  int local_c;
  int local_8;

  bVar1 = false;
  if (param_1[0xb] != 0) {
    uVar11 = g_playSystem_00802A38->field_00E4 - param_1[0xc];
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar2 = (param_1[8] * uVar11 - (uVar11 * uVar11 * 0x29) / 100) + param_1[6];
        param_1[7] = iVar2;
        local_c = 0;
        if (0 < param_1[2]) {
          do {
            iVar12 = *param_1;
            local_8 = 0;
            uVar9 = iVar12 * local_c;
            if (local_c == param_1[9]) {
              if (0 < iVar12) {
                do {
                  iVar12 = param_1[0xb];
                  if ((uVar9 < *(uint *)(iVar12 + 0xc)) &&
                     (iVar12 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar12 != 0))
                  {
                    if (iVar2 < 300) {
                      uVar3 = Library::MSVCRT::FUN_0072e6c0();
                      uVar3 = uVar3 % ((uVar11 * 3 >> 1) + 0x1f);
                      uVar4 = Library::MSVCRT::FUN_0072e6c0();
                      uVar5 = uVar4 & 0x80000001;
                      if ((int)uVar5 < 0) {
                        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
                      }
                      iVar6 = (-(uint)(uVar5 != 0) & 2) - 1;
                      *(int *)(iVar12 + 0xe) =
                           /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                           (*(int *)(iVar12 + 0x26) * param_1[7]) / 10000 +
                           (int)(*(int *)(iVar12 + 0x2a) * iVar6 * uVar3) / 10000 + param_1[3];
                      *(int *)(iVar12 + 0x12) =
                           /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                           ((*(int *)(iVar12 + 0x2a) * param_1[7]) / 10000 -
                           (int)(*(int *)(iVar12 + 0x26) * iVar6 * uVar3) / 10000) + param_1[4];
                      iVar6 = param_1[5];
                      *(undefined4 *)(iVar12 + 0x1a) = 4;
                      *(int *)(iVar12 + 0x16) = iVar6;
                      uVar3 = uVar11 / 6 + 4;
                      *(uint *)(iVar12 + 0x1e) = uVar3;
                      if (10 < uVar3) {
                        *(undefined4 *)(iVar12 + 0x1e) = 10;
                      }
                      iVar6 = *(int *)(iVar12 + 0xe);
                      *(int *)(iVar12 + 0x22) = param_1[2] + 4;
                      local_10 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
                      iVar6 = *(int *)(iVar12 + 0x12);
                      sVar7 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
                      iVar6 = *(int *)(iVar12 + 0x16);
                      sVar8 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
                      iVar5 = thunk_FUN_004961b0(local_10,sVar7,sVar8);
                      if (iVar5 == 0) {
                        *(undefined4 *)(iVar12 + 8) = 0;
                      }
                      else {
                        *(undefined4 *)(iVar12 + 8) = 1;
                      }
                      ((undefined1 *)iVar12)[0xc] = 1;
                      bVar1 = true;
                    }
                    else {
                      *(undefined4 *)(iVar12 + 8) = 0;
                    }
                  }
                  local_8 = local_8 + 1;
                  uVar9 = uVar9 + 1;
                } while (local_8 < *param_1);
              }
            }
            else if (0 < iVar12) {
              do {
                iVar12 = param_1[0xb];
                if (((uVar9 < *(uint *)(iVar12 + 0xc)) &&
                    (iVar12 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar12 != 0))
                   && (*(int *)(iVar12 + 8) == 1)) {
                  ((undefined1 *)iVar12)[0xc] = 0;
                  iVar6 = *(int *)(iVar12 + 0x1e) + 1;
                  *(int *)(iVar12 + 0x1e) = iVar6;
                  if (iVar6 < *(int *)(iVar12 + 0x22)) {
                    *(undefined4 *)(iVar12 + 8) = 1;
                    bVar1 = true;
                  }
                  else {
                    *(undefined4 *)(iVar12 + 8) = 0;
                  }
                }
                local_8 = local_8 + 1;
                uVar9 = uVar9 + 1;
              } while (local_8 < *param_1);
            }
            local_c = local_c + 1;
          } while (local_c < param_1[2]);
        }
        iVar2 = param_1[9];
        param_1[9] = iVar2 + 1;
        if (param_1[2] <= iVar2 + 1) {
          param_1[9] = 0;
        }
        if (!bVar1) {
          return 1;
        }
        return 0;
      }
      if (iVar2 != 2) {
        return 1;
      }
    }
    iVar2 = (param_1[8] * uVar11 - (uVar11 * uVar11 * 0x21) / 100) + param_1[6];
    param_1[7] = iVar2;
    local_c = 0;
    if (0 < param_1[2]) {
      do {
        iVar12 = *param_1;
        uVar9 = iVar12 * local_c;
        if (local_c == param_1[9]) {
          local_8 = 0;
          if (0 < iVar12) {
            do {
              iVar12 = param_1[0xb];
              if ((uVar9 < *(uint *)(iVar12 + 0xc)) &&
                 (iVar12 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) {
                if (iVar2 < 500) {
                  uVar3 = Library::MSVCRT::FUN_0072e6c0();
                  uVar3 = uVar3 % ((uVar11 * 3 >> 1) + 0x1f);
                  local_EAX_994 = Library::MSVCRT::FUN_0072e6c0();
                  uVar5 = local_EAX_994 & 0x80000001;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
                  }
                  iVar6 = (-(uint)(uVar5 != 0) & 2) - 1;
                  *(int *)(iVar12 + 0xe) =
                       /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                       (*(int *)(iVar12 + 0x26) * param_1[7]) / 10000 +
                       (int)(*(int *)(iVar12 + 0x2a) * iVar6 * uVar3) / 10000 + param_1[3];
                  *(int *)(iVar12 + 0x12) =
                       /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                       ((*(int *)(iVar12 + 0x2a) * param_1[7]) / 10000 -
                       (int)(*(int *)(iVar12 + 0x26) * iVar6 * uVar3) / 10000) + param_1[4];
                  *(int *)(iVar12 + 0x16) = param_1[5];
                  *(undefined4 *)(iVar12 + 0x1a) = 4;
                  if (param_1[1] == 0) {
                    uVar3 = uVar11 / 6 + 4;
                    *(uint *)(iVar12 + 0x1e) = uVar3;
                    if (10 < uVar3) {
                      *(undefined4 *)(iVar12 + 0x1e) = 10;
                    }
                    *(int *)(iVar12 + 0x22) = param_1[2] + *(int *)(iVar12 + 0x1e);
                  }
                  else {
                    iVar6 = uVar11 / 3 + 4;
                    *(int *)(iVar12 + 0x1e) = iVar6;
                    *(int *)(iVar12 + 0x22) = iVar6 + param_1[2];
                  }
                  iVar6 = *(int *)(iVar12 + 0xe);
                  *(int *)(iVar12 + 0x22) = param_1[2] + 4;
                  local_10 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
                  iVar6 = *(int *)(iVar12 + 0x12);
                  sVar7 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
                  iVar6 = *(int *)(iVar12 + 0x16);
                  sVar8 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
                  local_EAX_1400 = thunk_FUN_004961b0(local_10,sVar7,sVar8);
                  if (local_EAX_1400 == 0) {
                    *(undefined4 *)(iVar12 + 8) = 0;
                  }
                  else {
                    *(undefined4 *)(iVar12 + 8) = 1;
                  }
                  ((undefined1 *)iVar12)[0xc] = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar12 + 8) = 0;
                }
              }
              local_8 = local_8 + 1;
              uVar9 = uVar9 + 1;
            } while (local_8 < *param_1);
          }
        }
        else {
          iVar6 = 0;
          if (0 < iVar12) {
            do {
              iVar12 = param_1[0xb];
              if (((uVar9 < *(uint *)(iVar12 + 0xc)) &&
                  (iVar12 = *(int *)(iVar12 + 8) * uVar9 + *(int *)(iVar12 + 0x1c), iVar12 != 0)) &&
                 (*(int *)(iVar12 + 8) == 1)) {
                ((undefined1 *)iVar12)[0xc] = 0;
                iVar10 = *(int *)(iVar12 + 0x1e) + 1;
                *(int *)(iVar12 + 0x1e) = iVar10;
                if (iVar10 < *(int *)(iVar12 + 0x22)) {
                  *(undefined4 *)(iVar12 + 8) = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar12 + 8) = 0;
                }
              }
              iVar6 = iVar6 + 1;
              uVar9 = uVar9 + 1;
            } while (iVar6 < *param_1);
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[2]);
    }
    iVar2 = param_1[9];
    param_1[9] = iVar2 + 1;
    if (param_1[2] <= iVar2 + 1) {
      param_1[9] = 0;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

