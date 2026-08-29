#include "../../pseudocode_runtime.h"


void FUN_006da1a0(int param_1,int param_2,int param_3,int param_4,
                 RecoveredRecord_006DA1A0_A15A54BB *param_5,int param_6,int param_7,int param_8,
                 byte *param_9,undefined1 *param_10)

{
  short sVar1;
  int *piVar2;
  uint local_EAX_117;
  uint uVar3;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8c [31];
  int *local_10;
  int local_c;
  int local_8;
  byte *pbVar4;

  if ((2 < param_8) && (2 < (int)param_9)) {
    local_8 = (int)param_10 * 2 + 1;
    if (param_8 <= local_8) {
      local_8 = 3;
    }
    if ((int)param_9 <= local_8) {
      local_8 = 3;
    }
    iVar11 = local_8;
    local_c = 0x1f;
    local_10 = local_8c;
    iVar12 = (local_8 + -1) / 2;
    iVar10 = (local_8 + -1) / 2;
    do {

      local_EAX_117 = Library::MSVCRT::FUN_0072e6c0();
      iVar6 = (int)local_EAX_117 % local_8;

      uVar3 = Library::MSVCRT::FUN_0072e6c0();
      piVar2 = local_10;
      local_10 = local_10 + 1;
      *piVar2 = ((int)uVar3 % iVar11 - iVar10) * param_2 + (iVar6 - iVar12);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar6 = param_7 + iVar10;
    iVar7 = param_8 + (1 - local_8);
    pbVar3 = param_9 + (1 - iVar11);
    puVar9 = (undefined1 *)(iVar10 * param_2 + iVar12 + param_1);
    auto param_10_after_write = (undefined1 *)(iVar10 * param_4 + iVar12 + param_3); /* compiler stack-slot lifetime split */
    auto param_7_after_write = 0; /* compiler stack-slot lifetime split */
    if (iVar6 < 1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = &param_5[1].field_0x2 + ((byte)param_5->field_0xd >> 1 & 0xe);
    }
    else {
      param_9 = FUN_006cfe10((RecoveredRecord_006CFE10_B59F6D2D *)param_5,iVar6);
    }
    sVar1 = param_5->field_0012;
    local_c = (int)sVar1;
    auto param_1_after_write = (int)pbVar3; /* compiler stack-slot lifetime split */
    if (0 < (int)pbVar3) {
      do {
        uVar8 = (uint)*param_9;
        param_9 = param_9 + 1;
        iVar11 = param_6 + iVar12;
        if (uVar8 == 0) {
          puVar9 = puVar9 + param_2;
          param_10_after_write = param_10_after_write + param_4;
        }
        else {
          while( true ) {
            while ((uVar8 & 0x80) == 0) {
              uVar4 = uVar8 & 0x7f;
              if (iVar11 < (int)uVar4) goto LAB_006da325;
              bVar5 = *param_9;
              param_9 = param_9 + 1;
              iVar11 = iVar11 - uVar4;
              uVar8 = (uint)bVar5;
            }
            uVar4 = uVar8 & 0x3f;
            if (iVar11 < (int)uVar4) break;
            if ((uVar8 & 0x40) == 0) {
              uVar8 = (uint)param_9[uVar4];
              param_9 = param_9 + uVar4 + 1;
              iVar11 = iVar11 - uVar4;
            }
            else {
              uVar8 = (uint)param_9[1];
              param_9 = param_9 + 2;
              iVar11 = iVar11 - uVar4;
            }
          }
LAB_006da325:
          auto param_5_after_write = (RecoveredRecord_006DA1A0_A15A54BB *)(uVar4 - iVar11); /* compiler stack-slot lifetime split */
          if (((byte)uVar8 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          iVar11 = iVar7;
          if ((int)param_5_after_write <= iVar7) {
            do {
              iVar11 = iVar11 - (int)param_5_after_write;
              if ((uVar8 & 0x80) == 0) {
                puVar9 = &param_5_after_write->field_0x0 + (int)puVar9;
                param_10_after_write = param_10_after_write + (int)param_5_after_write;
              }
              else {
                if ((uVar8 & 0x40) == 0) {
                  param_9 = param_9 + (int)param_5_after_write;
                }
                else {
                  param_9 = param_9 + 1;
                }
                if (0 < (int)param_5_after_write) {
                  do {
                    puVar9[local_8c[param_7_after_write]] = *param_10_after_write;
                    param_7_after_write = param_7_after_write + 1;
                    puVar9 = puVar9 + 1;
                    param_10_after_write = param_10_after_write + 1;
                    if (0x1e < param_7_after_write) {
                      param_7_after_write = 0;
                    }
                    param_5_after_write = (RecoveredRecord_006DA1A0_A15A54BB *)
                              ((int)&param_5_after_write[-1].field_0012 + 1);
                  } while (param_5_after_write != nullptr);
                }
              }
              if (iVar11 < 1) {
                param_5_after_write = nullptr;
                break;
              }
              bVar5 = *param_9;
              uVar8 = (uint)bVar5;
              param_9 = param_9 + 1;
              if ((bVar5 & 0x80) == 0) {
                param_5_after_write = (RecoveredRecord_006DA1A0_A15A54BB *)(uVar8 & 0x7f);
              }
              else {
                param_5_after_write = (RecoveredRecord_006DA1A0_A15A54BB *)(uVar8 & 0x3f);
              }
            } while ((int)param_5_after_write <= iVar11);
          }
          uVar4 = (int)param_5_after_write - iVar11;
          bVar5 = (byte)uVar8;
          if ((uVar8 & 0x80) == 0) {
            puVar9 = puVar9 + iVar11;
            param_10_after_write = param_10_after_write + iVar11;
          }
          else {
            if ((uVar8 & 0x40) == 0) {
              param_9 = param_9 + iVar11;
            }
            else if (0 < iVar11) {
              param_9 = param_9 + 1;
            }
            if (0 < iVar11) {
              do {
                puVar9[local_8c[param_7_after_write]] = *param_10_after_write;
                param_7_after_write = param_7_after_write + 1;
                puVar9 = puVar9 + 1;
                param_10_after_write = param_10_after_write + 1;
                if (0x1e < param_7_after_write) {
                  param_7_after_write = 0;
                }
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
          iVar11 = ((int)sVar1 - (param_6 + iVar12)) - iVar7;
          if ((int)uVar4 < iVar11) {
            do {
              iVar11 = iVar11 - uVar4;
              pbVar4 = param_9;
              if (((byte)uVar8 & 0xc0) == 0x80) {
                pbVar4 = param_9 + uVar4;
              }
              bVar5 = *pbVar4;
              uVar8 = (uint)bVar5;
              param_9 = pbVar4 + 1;
              uVar4 = uVar8;
              if (((bVar5 & 0x80) != 0) && (uVar4 = uVar8 & 0x3f, (bVar5 & 0x40) != 0)) {
                param_9 = pbVar4 + 2;
              }
            } while ((int)uVar4 < iVar11);
          }
          if ((bVar5 & 0xc0) == 0x80) {
            param_9 = param_9 + iVar11;
          }
          puVar9 = puVar9 + (param_2 - iVar7);
          param_10_after_write = param_10_after_write + (param_4 - iVar7);
        }
        param_1_after_write = param_1_after_write + -1;
      } while (param_1_after_write != 0);
    }
  }
  return;
}

