#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00706e30(undefined1 *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 byte *param_6,int param_7,int param_8,uint param_9,int param_10,int param_11,
                 int param_12,int param_13,int param_14,int param_15,uint param_16)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  byte bVar10;
  byte *pbVar11_mg3;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_80 [31];
  byte *pbVar11_mg0;
  byte *pbVar11_mg2;
  byte *pbVar11_mg1;

  _DAT_00857000 = 1;
  if ((2 < param_15) && (2 < (int)param_16)) {
    bVar1 = param_15 <= (int)(param_9 + 1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_15 = param_9 + 1;
    if (bVar1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    if ((int)param_16 <= param_15) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_15 = 3;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_16 = 0x1f;
    piVar12 = local_80;
    do {
      uVar2 = Library::MSVCRT::FUN_0072e6c0();
      uVar3 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = param_16 - 1;
      *piVar12 = ((int)uVar3 % param_15) * param_2 + (int)uVar2 % param_15;
      piVar12 = piVar12 + 1;
    } while (param_16 != 0);
    iVar13 = 0;
    param_12 = param_12 + -1;
    if (-1 < param_12) {
LAB_00706ebf:
      if (param_14 == 1) {
        param_12 = param_12 + -1;
        if (param_12 < 0) {
          return;
        }
        uVar5 = (uint)*param_6;
        param_6 = param_6 + 1;
        iVar11 = param_7;
        if (uVar5 != 0) {
          while( true ) {
            if ((uVar5 & 0x80) == 0) {
              uVar4 = uVar5 & 0x7f;
            }
            else if ((uVar5 & 0x40) == 0) {
              param_6 = param_6 + (uVar5 & 0x3f);
              uVar4 = uVar5 & 0x3f;
            }
            else {
              param_6 = param_6 + 1;
              uVar4 = uVar5 & 0x3f;
            }
            if ((int)(iVar11 - uVar4) < 1) break;
            uVar5 = (uint)*param_6;
            param_6 = param_6 + 1;
            iVar11 = iVar11 - uVar4;
          }
        }
        param_14 = 2;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)*param_6;
      param_6 = param_6 + 1;
      if (param_16 != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_8;
        do {
          if ((param_16 & 0x80) == 0) {
            uVar5 = param_16 & 0x7f;
            if (param_15 < (int)uVar5) goto LAB_00706f7b;
          }
          else {
            uVar5 = param_16 & 0x3f;
            if (param_15 < (int)uVar5) goto LAB_00706f7b;
            if ((param_16 & 0x40) == 0) {
              param_6 = param_6 + uVar5;
            }
            else {
              param_6 = param_6 + 1;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 - uVar5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_16 = (uint)*param_6;
          param_6 = param_6 + 1;
        } while( true );
      }
      goto LAB_007077cd;
    }
  }
  return;
LAB_00706f7b:
  uVar5 = uVar5 - param_15;
  if (((byte)param_16 & 0xc0) == 0x80) {
    param_6 = param_6 + param_15;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_15 = param_11;
  if (param_10 == 0) {
    puVar7 = param_1;
    puVar9 = param_3;
    iVar11 = param_13;
    if ((int)uVar5 <= param_11) {
      do {
        param_9 = param_16 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 - uVar5;
        if (param_9 == 0) {
          if (-1 < (int)(uVar5 - 1)) {
            do {
              if (iVar11 != 1) {
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              iVar11 = iVar11 + 1;
              if (2 < iVar11) {
                iVar11 = 0;
              }
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar6 = puVar7;
          puVar8 = puVar9;
          pbVar11_mg0 = param_6;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              param_6 = param_6 + 1;
              uVar5 = uVar5 - 1;
              iVar11 = 2;
            }
            if ((int)uVar5 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = puVar7[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar8 = puVar9 + 1;
            puVar6 = puVar7 + 1;
            pbVar11_mg0 = param_6 + 1;
            iVar11 = 0;
            uVar5 = uVar5 - 1;
          }
          for (; puVar7 = puVar6, puVar9 = puVar8, param_6 = pbVar11_mg0, 0 < (int)uVar5;
              uVar5 = uVar5 - 3) {
            if (param_5 <= *puVar8) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar6 = puVar6[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar9 = puVar8 + 1;
            puVar7 = puVar6 + 1;
            param_6 = pbVar11_mg0 + 1;
            iVar11 = 1;
            if ((int)(uVar5 - 1) < 1) break;
            param_6 = pbVar11_mg0 + 2;
            iVar11 = 2;
            if ((int)(uVar5 - 2) < 1) break;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = puVar7[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            iVar11 = 0;
            puVar6 = puVar6 + 2;
            puVar8 = puVar8 + 2;
            pbVar11_mg0 = pbVar11_mg0 + 3;
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar6 = puVar7;
          puVar8 = puVar9;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              iVar11 = 2;
              uVar5 = uVar5 - 1;
            }
            if ((int)uVar5 < 1) goto LAB_0070758b;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = puVar7[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar8 = puVar9 + 1;
            puVar6 = puVar7 + 1;
            iVar11 = 0;
            uVar5 = uVar5 - 1;
          }
          for (; puVar7 = puVar6, puVar9 = puVar8, 0 < (int)uVar5; uVar5 = uVar5 - 3) {
            if (param_5 <= *puVar8) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar6 = puVar6[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar9 = puVar8 + 1;
            puVar7 = puVar6 + 1;
            iVar11 = 1;
            if (((int)(uVar5 - 1) < 1) || (iVar11 = 2, (int)(uVar5 - 2) < 1)) break;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = puVar7[*piVar12];
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            iVar11 = 0;
            puVar6 = puVar6 + 2;
            puVar8 = puVar8 + 2;
          }
        }
LAB_0070758b:
        if (param_15 < 1) {
          uVar5 = 0;
          break;
        }
        bVar10 = *param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_16 = (uint)bVar10;
        param_6 = param_6 + 1;
        if ((bVar10 & 0x80) == 0) {
          uVar5 = bVar10 & 0x7f;
        }
        else {
          uVar5 = bVar10 & 0x3f;
        }
      } while ((int)uVar5 <= param_15);
    }
    uVar5 = uVar5 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar11_mg1 = param_6;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            param_6 = param_6 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = puVar7[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          pbVar11_mg1 = param_6 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; param_6 = pbVar11_mg1, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = puVar7[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          param_6 = pbVar11_mg1 + 1;
          if ((param_15 + -1 < 1) || (param_6 = pbVar11_mg1 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar9[1]) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            puVar7[1] = (puVar7 + 1)[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 2;
          puVar7 = puVar7 + 2;
          pbVar11_mg1 = pbVar11_mg1 + 3;
        }
      }
      else {
        param_6 = param_6 + 1;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = puVar7[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = puVar7[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar9[1]) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            puVar7[1] = (puVar7 + 1)[*piVar12];
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 2;
          puVar7 = puVar7 + 2;
        }
      }
    }
  }
  else {
    puVar7 = param_1;
    puVar9 = param_3;
    iVar11 = param_13;
    if ((int)uVar5 <= param_11) {
      do {
        param_9 = param_16 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_15 = param_15 - uVar5;
        if (param_9 == 0) {
          if (-1 < (int)(uVar5 - 1)) {
            do {
              if (iVar11 != 1) {
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              iVar11 = iVar11 + 1;
              if (2 < iVar11) {
                iVar11 = 0;
              }
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else if ((param_16 & 0x40) == 0) {
          puVar6 = puVar7;
          puVar8 = puVar9;
          pbVar11_mg2 = param_6;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              param_6 = param_6 + 1;
              uVar5 = uVar5 - 1;
              iVar11 = 2;
            }
            if ((int)uVar5 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar8 = puVar9 + 1;
            puVar6 = puVar7 + 1;
            pbVar11_mg2 = param_6 + 1;
            iVar11 = 0;
            uVar5 = uVar5 - 1;
          }
          for (; puVar7 = puVar6, puVar9 = puVar8, param_6 = pbVar11_mg2, 0 < (int)uVar5;
              uVar5 = uVar5 - 3) {
            if (param_5 <= *puVar8) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar6 = *(undefined1 *)((uint)(byte)puVar6[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar9 = puVar8 + 1;
            puVar7 = puVar6 + 1;
            param_6 = pbVar11_mg2 + 1;
            iVar11 = 1;
            if ((int)(uVar5 - 1) < 1) break;
            param_6 = pbVar11_mg2 + 2;
            iVar11 = 2;
            if ((int)(uVar5 - 2) < 1) break;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            iVar11 = 0;
            puVar6 = puVar6 + 2;
            puVar8 = puVar8 + 2;
            pbVar11_mg2 = pbVar11_mg2 + 3;
          }
        }
        else {
          param_6 = param_6 + 1;
          puVar6 = puVar7;
          puVar8 = puVar9;
          if (0 < iVar11) {
            if (iVar11 == 1) {
              iVar11 = 2;
              uVar5 = uVar5 - 1;
            }
            if ((int)uVar5 < 1) goto LAB_0070719b;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar8 = puVar9 + 1;
            puVar6 = puVar7 + 1;
            iVar11 = 0;
            uVar5 = uVar5 - 1;
          }
          for (; puVar7 = puVar6, puVar9 = puVar8, 0 < (int)uVar5; uVar5 = uVar5 - 3) {
            if (param_5 <= *puVar8) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar6 = *(undefined1 *)((uint)(byte)puVar6[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            puVar9 = puVar8 + 1;
            puVar7 = puVar6 + 1;
            iVar11 = 1;
            if (((int)(uVar5 - 1) < 1) || (iVar11 = 2, (int)(uVar5 - 2) < 1)) break;
            if (param_5 <= *puVar9) {
              piVar12 = local_80 + iVar13;
              iVar13 = iVar13 + 1;
              *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
              if (0x1e < iVar13) {
                iVar13 = 0;
              }
            }
            iVar11 = 0;
            puVar6 = puVar6 + 2;
            puVar8 = puVar8 + 2;
          }
        }
LAB_0070719b:
        if (param_15 < 1) {
          uVar5 = 0;
          break;
        }
        bVar10 = *param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_16 = (uint)bVar10;
        param_6 = param_6 + 1;
        if ((bVar10 & 0x80) == 0) {
          uVar5 = bVar10 & 0x7f;
        }
        else {
          uVar5 = bVar10 & 0x3f;
        }
      } while ((int)uVar5 <= param_15);
    }
    uVar5 = uVar5 - param_15;
    if ((0 < param_15) && ((param_16 & 0x80) != 0)) {
      if ((param_16 & 0x40) == 0) {
        pbVar11_mg3 = param_6;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            param_6 = param_6 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          pbVar11_mg3 = param_6 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; param_6 = pbVar11_mg3, 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          param_6 = pbVar11_mg3 + 1;
          if ((param_15 + -1 < 1) || (param_6 = pbVar11_mg3 + 2, param_15 + -2 < 1)) break;
          if (param_5 <= puVar9[1]) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            puVar7[1] = *(undefined1 *)((uint)(byte)(puVar7 + 1)[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 2;
          puVar7 = puVar7 + 2;
          pbVar11_mg3 = pbVar11_mg3 + 3;
        }
      }
      else {
        param_6 = param_6 + 1;
        if (0 < iVar11) {
          if (iVar11 == 1) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_15 = param_15 + -1;
          }
          if (param_15 < 1) goto cf_common_join_00707777;
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_15 = param_15 + -1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        for (; 0 < param_15; param_15 = param_15 + -3) {
          if (param_5 <= *puVar9) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            *puVar7 = *(undefined1 *)((uint)(byte)puVar7[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          if ((param_15 + -1 < 1) || (param_15 + -2 < 1)) break;
          if (param_5 <= puVar9[1]) {
            piVar12 = local_80 + iVar13;
            iVar13 = iVar13 + 1;
            puVar7[1] = *(undefined1 *)((uint)(byte)(puVar7 + 1)[*piVar12] + param_10);
            if (0x1e < iVar13) {
              iVar13 = 0;
            }
          }
          puVar9 = puVar9 + 2;
          puVar7 = puVar7 + 2;
        }
      }
    }
  }
cf_common_join_00707777:
  bVar10 = (byte)param_16;
  iVar11 = (param_7 - param_8) - param_11;
  if ((int)uVar5 < iVar11) {
    do {
      iVar11 = iVar11 - uVar5;
      if (((byte)param_16 & 0xc0) == 0x80) {
        param_6 = param_6 + uVar5;
      }
      bVar10 = *param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_16 = (uint)bVar10;
      uVar5 = param_16;
      pbVar2 = param_6 + 1;
      if (((bVar10 & 0x80) != 0) && (uVar5 = param_16 & 0x3f, (bVar10 & 0x40) != 0)) {
        pbVar2 = param_6 + 2;
      }
      param_6 = pbVar2;
    } while ((int)uVar5 < iVar11);
  }
  if ((bVar10 & 0xc0) == 0x80) {
    param_6 = param_6 + iVar11;
  }
LAB_007077cd:
  param_1 = param_1 + param_2;
  param_3 = (ushort *)((int)param_3 + param_4);
  param_14 = param_14 + 1;
  if (2 < param_14) {
    param_14 = 0;
  }
  param_12 = param_12 + -1;
  if (param_12 < 0) {
    return;
  }
  goto LAB_00706ebf;
}

