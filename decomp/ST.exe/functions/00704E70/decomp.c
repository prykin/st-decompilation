#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_00704e70(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5_mg0;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar6;

  _DAT_00857000 = 1;
  pbVar8 = param_3;
  iVar6 = param_7;
  do {
    auto param_7_after_write = iVar6 + -1; /* compiler stack-slot lifetime split */
    if (param_7_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_9 == 1) {
      param_7_after_write = iVar6 + -2;
      if (param_7_after_write < 0) {
        return;
      }
      uVar3 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar6 = param_4;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar8 = pbVar8 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar8 = pbVar8 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar6 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar2;
        }
      }
      param_9 = 2;
    }
    auto param_3_after_write = (byte *)(uint)*pbVar8; /* compiler stack-slot lifetime split */
    pbVar8 = pbVar8 + 1;
    iVar6 = param_5;
    if (param_3_after_write != nullptr) {
      while( true ) {
        while (((uint)param_3_after_write & 0x80) == 0) {
          uVar3 = (uint)param_3_after_write & 0x7f;
          if (iVar6 < (int)uVar3) goto LAB_00704f33;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          iVar6 = iVar6 - uVar3;
          param_3_after_write = (byte *)(uint)bVar1;
        }
        uVar3 = (uint)param_3_after_write & 0x3f;
        if (iVar6 < (int)uVar3) break;
        if (((uint)param_3_after_write & 0x40) == 0) {
          param_3_after_write = (byte *)(uint)pbVar8[uVar3];
          pbVar8 = pbVar8 + uVar3 + 1;
          iVar6 = iVar6 - uVar3;
        }
        else {
          param_3_after_write = (byte *)(uint)pbVar8[1];
          pbVar8 = pbVar8 + 2;
          iVar6 = iVar6 - uVar3;
        }
      }
LAB_00704f33:
      uVar3 = uVar3 - iVar6;
      if (((byte)param_3_after_write & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
      pbVar5_mg0 = param_1;
      iVar6 = param_6;
      iVar7 = param_8;
      if ((int)uVar3 <= param_6) {
        do {
          iVar6 = iVar6 - uVar3;
          if (((uint)param_3_after_write & 0x80) == 0) {
            if (-1 < (int)(uVar3 - 1)) {
              do {
                if (iVar7 != 1) {
                  pbVar5_mg0 = pbVar5_mg0 + 1;
                }
                iVar7 = iVar7 + 1;
                if (2 < iVar7) {
                  iVar7 = 0;
                }
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
          }
          else if (((uint)param_3_after_write & 0x40) == 0) {
            if (0 < iVar7) {
              if (iVar7 == 1) {
                pbVar8 = pbVar8 + 1;
                iVar7 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              iVar7 = 0;
              *pbVar5_mg0 = *pbVar8;
              pbVar5_mg0 = pbVar5_mg0 + 1;
              pbVar8 = pbVar8 + 1;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5_mg0 = *pbVar8;
              pbVar5 = pbVar5_mg0 + 1;
              pbVar9 = pbVar8 + 1;
              for (iVar4 = uVar3 - 1; iVar7 = 1, pbVar5_mg0 = pbVar5, pbVar8 = pbVar9, 0 < iVar4;
                  iVar4 = iVar4 + -3) {
                pbVar8 = pbVar9 + 1;
                iVar7 = 2;
                if (iVar4 + -1 < 1) break;
                iVar7 = 0;
                *pbVar5 = *pbVar8;
                pbVar5_mg0 = pbVar5 + 1;
                pbVar8 = pbVar9 + 2;
                if (iVar4 + -2 < 1) break;
                *pbVar5_mg0 = *pbVar8;
                pbVar5 = pbVar5 + 2;
                pbVar9 = pbVar9 + 3;
              }
            }
          }
          else {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            if (0 < iVar7) {
              if (iVar7 == 1) {
                iVar7 = 2;
                uVar3 = uVar3 - 1;
              }
              if ((int)uVar3 < 1) goto LAB_0070503b;
              *pbVar5_mg0 = bVar1;
              pbVar5_mg0 = pbVar5_mg0 + 1;
              iVar7 = 0;
              uVar3 = uVar3 - 1;
            }
            if (0 < (int)uVar3) {
              *pbVar5_mg0 = bVar1;
              pbVar5 = pbVar5_mg0 + 1;
              for (iVar4 = uVar3 - 1;
                  (iVar7 = 1, pbVar5_mg0 = pbVar5, 0 < iVar4 && (iVar7 = 2, 0 < iVar4 + -1));
                  iVar4 = iVar4 + -3) {
                *pbVar5 = bVar1;
                iVar7 = 0;
                pbVar5_mg0 = pbVar5 + 1;
                if (iVar4 + -2 < 1) break;
                pbVar5[1] = bVar1;
                pbVar5 = pbVar5 + 2;
              }
            }
          }
LAB_0070503b:
          if (iVar6 < 1) {
            uVar3 = 0;
            break;
          }
          bVar1 = *pbVar8;
          param_3_after_write = (byte *)(uint)bVar1;
          pbVar8 = pbVar8 + 1;
          if ((bVar1 & 0x80) == 0) {
            uVar3 = bVar1 & 0x7f;
          }
          else {
            uVar3 = bVar1 & 0x3f;
          }
        } while ((int)uVar3 <= iVar6);
      }
      pbVar6 = (byte *)(uVar3 - iVar6);
      if ((0 < iVar6) && (((uint)param_3_after_write & 0x80) != 0)) {
        if (((uint)param_3_after_write & 0x40) == 0) {
          if (0 < iVar7) {
            if (iVar7 == 1) {
              pbVar8 = pbVar8 + 1;
              iVar6 = iVar6 + -1;
            }
            if (iVar6 < 1) goto LAB_007050fd;
            *pbVar5_mg0 = *pbVar8;
            pbVar5_mg0 = pbVar5_mg0 + 1;
            pbVar8 = pbVar8 + 1;
            iVar6 = iVar6 + -1;
          }
          if (0 < iVar6) {
            *pbVar5_mg0 = *pbVar8;
            pbVar5 = pbVar8 + 1;
            for (iVar6 = iVar6 + -1; pbVar8 = pbVar5, 0 < iVar6; iVar6 = iVar6 + -3) {
              pbVar8 = pbVar5 + 1;
              if (iVar6 + -1 < 1) break;
              pbVar5_mg0[1] = *pbVar8;
              pbVar5_mg0 = pbVar5_mg0 + 2;
              pbVar8 = pbVar5 + 2;
              if (iVar6 + -2 < 1) break;
              *pbVar5_mg0 = *pbVar8;
              pbVar5 = pbVar5 + 3;
            }
          }
        }
        else {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (0 < iVar7) {
            if (iVar7 == 1) {
              iVar6 = iVar6 + -1;
            }
            if (iVar6 < 1) goto LAB_007050fd;
            *pbVar5_mg0 = bVar1;
            pbVar5_mg0 = pbVar5_mg0 + 1;
            iVar6 = iVar6 + -1;
          }
          if (0 < iVar6) {
            *pbVar5_mg0 = bVar1;
            for (iVar6 = iVar6 + -1; (0 < iVar6 && (0 < iVar6 + -1)); iVar6 = iVar6 + -3) {
              pbVar5_mg0[1] = bVar1;
              pbVar5_mg0 = pbVar5_mg0 + 2;
              if (iVar6 + -2 < 1) break;
              *pbVar5_mg0 = bVar1;
            }
          }
        }
      }
LAB_007050fd:
      iVar6 = (param_4 - param_5) - param_6;
      bVar1 = (byte)param_3_after_write;
      if ((int)pbVar6 < iVar6) {
        do {
          iVar6 = iVar6 - (int)pbVar6;
          pbVar5 = pbVar8;
          if (((byte)param_3_after_write & 0xc0) == 0x80) {
            pbVar5 = pbVar8 + (int)pbVar6;
          }
          bVar1 = *pbVar5;
          param_3_after_write = (byte *)(uint)bVar1;
          pbVar8 = pbVar5 + 1;
          pbVar6 = param_3_after_write;
          if (((bVar1 & 0x80) != 0) &&
             (pbVar6 = (byte *)((uint)param_3_after_write & 0x3f), (bVar1 & 0x40) != 0)) {
            pbVar8 = pbVar5 + 2;
          }
        } while ((int)pbVar6 < iVar6);
      }
      STPiece<0,1>(param_3_after_write) = bVar1;
      if (((byte)param_3_after_write & 0xc0) == 0x80) {
        pbVar8 = pbVar8 + iVar6;
      }
    }
    param_1 = param_1 + param_2;
    param_9 = param_9 + 1;
    iVar6 = param_7_after_write;
    if (2 < param_9) {
      param_9 = 0;
    }
  } while( true );
}

