#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007068d0(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12)

{
  uint local_EAX_94;
  uint uVar1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int local_88 [31];
  int local_c;
  int local_8;

  _DAT_00857000 = 1;
  if ((2 < param_11) && (2 < param_12)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = param_9 + 1;
    if (param_11 <= param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 3;
    }
    if (param_12 <= param_9) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_9 = 3;
    }
    local_8 = 0x1f;
    piVar8 = local_88;
    do {
      local_EAX_94 = Library::MSVCRT::FUN_0072e6c0();
      local_c = (int)local_EAX_94 % param_9;
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      *piVar8 = ((int)uVar1 % param_9) * param_2 + local_c;
      local_8 = local_8 + -1;
      piVar8 = piVar8 + 1;
    } while (local_8 != 0);
    iVar9 = 0;
    iVar3 = param_11 + (1 - param_9);
    puVar4 = param_1;
    puVar11 = param_3;
    for (iVar1 = param_12 - param_9; -1 < iVar1; iVar1 = iVar1 + -1) {
      uVar6 = (uint)*param_6;
      param_6 = param_6 + 1;
      iVar10 = param_8;
      if (uVar6 == 0) {
        puVar4 = puVar4 + param_2;
        puVar11 = (ushort *)((int)puVar11 + param_4);
      }
      else {
        while( true ) {
          while ((uVar6 & 0x80) == 0) {
            uVar2 = uVar6 & 0x7f;
            if (iVar10 < (int)uVar2) goto LAB_007069ed;
            bVar5 = *param_6;
            param_6 = param_6 + 1;
            iVar10 = iVar10 - uVar2;
            uVar6 = (uint)bVar5;
          }
          uVar2 = uVar6 & 0x3f;
          if (iVar10 < (int)uVar2) break;
          if ((uVar6 & 0x40) == 0) {
            uVar6 = (uint)param_6[uVar2];
            param_6 = param_6 + uVar2 + 1;
            iVar10 = iVar10 - uVar2;
          }
          else {
            uVar6 = (uint)param_6[1];
            param_6 = param_6 + 2;
            iVar10 = iVar10 - uVar2;
          }
        }
LAB_007069ed:
        param_1 = (undefined1 *)(uVar2 - iVar10);
        if (((byte)uVar6 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_9 = iVar3;
        param_3 = puVar11;
        if (param_10 == 0) {
          if ((int)param_1 <= iVar3) {
            do {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 - (int)param_1;
              if ((uVar6 & 0x80) == 0) {
                puVar4 = puVar4 + (int)param_1;
                param_3 = param_3 + (int)param_1;
              }
              else if ((uVar6 & 0x40) == 0) {
                if (-1 < (int)((int)param_1 - 1U)) {
                  param_6 = param_6 + (int)param_1;
                  do {
                    if (param_5 <= *param_3) {
                      piVar8 = local_88 + iVar9;
                      iVar9 = iVar9 + 1;
                      *puVar4 = puVar4[*piVar8];
                      if (0x1e < iVar9) {
                        iVar9 = 0;
                      }
                    }
                    param_3 = param_3 + 1;
                    puVar4 = puVar4 + 1;
                    param_1 = param_1 + -1;
                  } while (param_1 != nullptr);
                }
              }
              else {
                param_6 = param_6 + 1;
                if (-1 < (int)((int)param_1 - 1U)) {
                  do {
                    if (param_5 <= *param_3) {
                      piVar8 = local_88 + iVar9;
                      iVar9 = iVar9 + 1;
                      *puVar4 = puVar4[*piVar8];
                      if (0x1e < iVar9) {
                        iVar9 = 0;
                      }
                    }
                    param_3 = param_3 + 1;
                    puVar4 = puVar4 + 1;
                    param_1 = param_1 + -1;
                  } while (param_1 != nullptr);
                }
              }
              if (param_9 < 1) {
                param_1 = nullptr;
                break;
              }
              bVar5 = *param_6;
              uVar6 = (uint)bVar5;
              param_6 = param_6 + 1;
              if ((bVar5 & 0x80) == 0) {
                param_1 = (undefined1 *)(uVar6 & 0x7f);
              }
              else {
                param_1 = (undefined1 *)(uVar6 & 0x3f);
              }
            } while ((int)param_1 <= param_9);
          }
          uVar2 = (int)param_1 - param_9;
          if ((uVar6 & 0x80) == 0) goto LAB_00706d9b;
          if ((uVar6 & 0x40) == 0) {
            if (-1 < param_9 + -1) {
              param_6 = param_6 + param_9;
              do {
                if (param_5 <= *param_3) {
                  piVar8 = local_88 + iVar9;
                  iVar9 = iVar9 + 1;
                  *puVar4 = puVar4[*piVar8];
                  if (0x1e < iVar9) {
                    iVar9 = 0;
                  }
                }
                param_3 = param_3 + 1;
                puVar4 = puVar4 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_9 = param_9 + -1;
              } while (param_9 != 0);
            }
          }
          else if ((0 < param_9) && (param_6 = param_6 + 1, -1 < param_9 + -1)) {
            do {
              if (param_5 <= *param_3) {
                piVar8 = local_88 + iVar9;
                iVar9 = iVar9 + 1;
                *puVar4 = puVar4[*piVar8];
                if (0x1e < iVar9) {
                  iVar9 = 0;
                }
              }
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 + -1;
            } while (param_9 != 0);
          }
        }
        else {
          if ((int)param_1 <= iVar3) {
            do {
              param_3 = (ushort *)(uVar6 & 0x80);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 - (int)param_1;
              if (param_3 == nullptr) {
                puVar4 = puVar4 + (int)param_1;
                puVar11 = puVar11 + (int)param_1;
              }
              else {
                param_3 = (ushort *)param_1;
                if ((uVar6 & 0x40) == 0) {
                  if (-1 < (int)((int)param_1 - 1U)) {
                    param_6 = param_6 + (int)param_1;
                    do {
                      if (param_5 <= *puVar11) {
                        piVar8 = local_88 + iVar9;
                        iVar9 = iVar9 + 1;
                        *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar8] + param_10);
                        if (0x1e < iVar9) {
                          iVar9 = 0;
                        }
                      }
                      puVar11 = puVar11 + 1;
                      puVar4 = puVar4 + 1;
                      param_3 = (ushort *)((int)param_3 + -1);
                    } while (param_3 != nullptr);
                  }
                }
                else {
                  param_6 = param_6 + 1;
                  if (-1 < (int)((int)param_1 - 1U)) {
                    do {
                      if (param_5 <= *puVar11) {
                        piVar8 = local_88 + iVar9;
                        iVar9 = iVar9 + 1;
                        *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar8] + param_10);
                        if (0x1e < iVar9) {
                          iVar9 = 0;
                        }
                      }
                      puVar11 = puVar11 + 1;
                      puVar4 = puVar4 + 1;
                      param_3 = (ushort *)((int)param_3 + -1);
                    } while (param_3 != nullptr);
                  }
                }
              }
              param_3 = puVar11;
              if (param_9 < 1) {
                param_1 = nullptr;
                break;
              }
              bVar5 = *param_6;
              uVar6 = (uint)bVar5;
              param_6 = param_6 + 1;
              if ((bVar5 & 0x80) == 0) {
                param_1 = (undefined1 *)(uVar6 & 0x7f);
              }
              else {
                param_1 = (undefined1 *)(uVar6 & 0x3f);
              }
            } while ((int)param_1 <= param_9);
          }
          uVar2 = (int)param_1 - param_9;
          if ((uVar6 & 0x80) == 0) {
LAB_00706d9b:
            param_3 = param_3 + param_9;
            puVar4 = puVar4 + param_9;
          }
          else if ((uVar6 & 0x40) == 0) {
            if (-1 < param_9 + -1) {
              param_6 = param_6 + param_9;
              do {
                if (param_5 <= *param_3) {
                  piVar8 = local_88 + iVar9;
                  iVar9 = iVar9 + 1;
                  *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar8] + param_10);
                  if (0x1e < iVar9) {
                    iVar9 = 0;
                  }
                }
                param_3 = param_3 + 1;
                puVar4 = puVar4 + 1;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_9 = param_9 + -1;
              } while (param_9 != 0);
            }
          }
          else if ((0 < param_9) && (param_6 = param_6 + 1, -1 < param_9 + -1)) {
            do {
              if (param_5 <= *param_3) {
                piVar8 = local_88 + iVar9;
                iVar9 = iVar9 + 1;
                *puVar4 = *(undefined1 *)((uint)(byte)puVar4[*piVar8] + param_10);
                if (0x1e < iVar9) {
                  iVar9 = 0;
                }
              }
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_9 = param_9 + -1;
            } while (param_9 != 0);
          }
        }
        bVar5 = (byte)uVar6;
        iVar10 = (param_7 - param_8) - iVar3;
        if ((int)uVar2 < iVar10) {
          do {
            iVar10 = iVar10 - uVar2;
            pbVar7 = param_6;
            if (((byte)uVar6 & 0xc0) == 0x80) {
              pbVar7 = param_6 + uVar2;
            }
            bVar5 = *pbVar7;
            uVar6 = (uint)bVar5;
            param_6 = pbVar7 + 1;
            uVar2 = uVar6;
            if (((bVar5 & 0x80) != 0) && (uVar2 = uVar6 & 0x3f, (bVar5 & 0x40) != 0)) {
              param_6 = pbVar7 + 2;
            }
          } while ((int)uVar2 < iVar10);
        }
        if ((bVar5 & 0xc0) == 0x80) {
          param_6 = param_6 + iVar10;
        }
        puVar4 = puVar4 + (param_2 - iVar3);
        puVar11 = (ushort *)((int)param_3 + param_4 + iVar3 * -2);
      }
    }
  }
  return;
}

