
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006f8ab0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  ushort *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ushort *puVar9;
  byte *pbVar10_mg0;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar6 = param_6;
  iVar5 = param_10;
  do {
    auto param_10_after_write = iVar5 + -1; /* compiler stack-slot lifetime split */
    if (param_10_after_write < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_12 == 1) {
      param_10_after_write = iVar5 + -2;
      if (param_10_after_write < 0) {
        return;
      }
      uVar4 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar5 = param_7;
      if (uVar4 != 0) {
        while( true ) {
          if ((uVar4 & 0x80) == 0) {
            uVar3 = uVar4 & 0x7f;
          }
          else if ((uVar4 & 0x40) == 0) {
            pbVar6 = pbVar6 + (uVar4 & 0x3f);
            uVar3 = uVar4 & 0x3f;
          }
          else {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar4 & 0x3f;
          }
          if ((int)(iVar5 - uVar3) < 1) break;
          uVar4 = (uint)*pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar5 = iVar5 - uVar3;
        }
      }
      param_12 = 2;
    }
    local_8 = (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
    if (local_8 != 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = (byte *)param_8;
      while( true ) {
        while ((local_8 & 0x80) == 0) {
          uVar4 = local_8 & 0x7f;
          if ((int)param_6 < (int)uVar4) goto LAB_006f8b92;
          param_6 = param_6 + -uVar4;
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_8 = (uint)bVar8;
        }
        uVar4 = local_8 & 0x3f;
        if ((int)param_6 < (int)uVar4) break;
        if ((local_8 & 0x40) == 0) {
          param_6 = param_6 + -uVar4;
          local_8 = (uint)pbVar6[uVar4];
          pbVar6 = pbVar6 + uVar4 + 1;
        }
        else {
          param_6 = param_6 + -uVar4;
          local_8 = (uint)pbVar6[1];
          pbVar6 = pbVar6 + 2;
        }
      }
LAB_006f8b92:
      uVar4 = uVar4 - (int)param_6;
      if (((byte)local_8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + (int)param_6;
      }
      param_6 = (byte *)param_9;
      iVar5 = param_11;
      puVar9 = param_3;
      pbVar10_mg0 = param_1;
      if ((int)uVar4 <= param_9) {
        do {
          local_c = local_8 & 0x80;
          param_6 = param_6 + -uVar4;
          if (local_c == 0) {
            if (-1 < (int)(uVar4 - 1)) {
              do {
                if (iVar5 != 1) {
                  pbVar10_mg0 = pbVar10_mg0 + 1;
                  puVar9 = puVar9 + 1;
                }
                iVar5 = iVar5 + 1;
                if (2 < iVar5) {
                  iVar5 = 0;
                }
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if ((local_8 & 0x40) == 0) {
            pbVar7 = pbVar6;
            puVar1 = puVar9;
            pbVar2 = pbVar10_mg0;
            if (0 < iVar5) {
              if (iVar5 == 1) {
                pbVar6 = pbVar6 + 1;
                iVar5 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = *pbVar6;
              }
              iVar5 = 0;
              uVar4 = uVar4 - 1;
              pbVar7 = pbVar6 + 1;
              puVar1 = puVar9 + 1;
              pbVar2 = pbVar10_mg0 + 1;
            }
            for (; pbVar6 = pbVar7, puVar9 = puVar1, pbVar10_mg0 = pbVar2, 0 < (int)uVar4;
                uVar4 = uVar4 - 3) {
              if (param_5 <= *puVar1) {
                *pbVar2 = *pbVar7;
              }
              puVar9 = puVar1 + 1;
              pbVar10_mg0 = pbVar2 + 1;
              pbVar6 = pbVar7 + 1;
              iVar5 = 1;
              if ((int)(uVar4 - 1) < 1) break;
              pbVar6 = pbVar7 + 2;
              iVar5 = 2;
              if ((int)(uVar4 - 2) < 1) break;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = *pbVar6;
              }
              iVar5 = 0;
              pbVar7 = pbVar7 + 3;
              puVar1 = puVar1 + 2;
              pbVar2 = pbVar2 + 2;
            }
          }
          else {
            bVar8 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            puVar1 = puVar9;
            pbVar7 = pbVar10_mg0;
            if (0 < iVar5) {
              if (iVar5 == 1) {
                iVar5 = 2;
                uVar4 = uVar4 - 1;
              }
              if ((int)uVar4 < 1) goto LAB_006f8cfb;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = bVar8;
              }
              iVar5 = 0;
              uVar4 = uVar4 - 1;
              puVar1 = puVar9 + 1;
              pbVar7 = pbVar10_mg0 + 1;
            }
            for (; puVar9 = puVar1, pbVar10_mg0 = pbVar7, 0 < (int)uVar4; uVar4 = uVar4 - 3) {
              if (param_5 <= *puVar1) {
                *pbVar7 = bVar8;
              }
              puVar9 = puVar1 + 1;
              pbVar10_mg0 = pbVar7 + 1;
              iVar5 = 1;
              if (((int)(uVar4 - 1) < 1) || (iVar5 = 2, (int)(uVar4 - 2) < 1)) break;
              if (param_5 <= *puVar9) {
                *pbVar10_mg0 = bVar8;
              }
              iVar5 = 0;
              puVar1 = puVar1 + 2;
              pbVar7 = pbVar7 + 2;
            }
          }
LAB_006f8cfb:
          if ((int)param_6 < 1) {
            uVar4 = 0;
            break;
          }
          bVar8 = *pbVar6;
          local_8 = (uint)bVar8;
          pbVar6 = pbVar6 + 1;
          if ((bVar8 & 0x80) == 0) {
            uVar4 = bVar8 & 0x7f;
          }
          else {
            uVar4 = bVar8 & 0x3f;
          }
        } while ((int)uVar4 <= (int)param_6);
      }
      uVar4 = uVar4 - (int)param_6;
      if ((0 < (int)param_6) && ((local_8 & 0x80) != 0)) {
        if ((local_8 & 0x40) == 0) {
          pbVar7 = pbVar6;
          if (0 < iVar5) {
            if (iVar5 == 1) {
              pbVar6 = pbVar6 + 1;
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = *pbVar6;
            }
            puVar9 = puVar9 + 1;
            pbVar10_mg0 = pbVar10_mg0 + 1;
            param_6 = param_6 + -1;
            pbVar7 = pbVar6 + 1;
          }
          for (; pbVar6 = pbVar7, 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = *pbVar7;
            }
            pbVar6 = pbVar7 + 1;
            if (((int)(param_6 + -1) < 1) || (pbVar6 = pbVar7 + 2, (int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10_mg0[1] = *pbVar6;
            }
            puVar9 = puVar9 + 2;
            pbVar10_mg0 = pbVar10_mg0 + 2;
            pbVar7 = pbVar7 + 3;
          }
        }
        else {
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (0 < iVar5) {
            if (iVar5 == 1) {
              param_6 = param_6 + -1;
            }
            if ((int)param_6 < 1) goto LAB_006f8e6b;
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = bVar8;
            }
            puVar9 = puVar9 + 1;
            pbVar10_mg0 = pbVar10_mg0 + 1;
            param_6 = param_6 + -1;
          }
          for (; 0 < (int)param_6; param_6 = param_6 + -3) {
            if (param_5 <= *puVar9) {
              *pbVar10_mg0 = bVar8;
            }
            if (((int)(param_6 + -1) < 1) || ((int)(param_6 + -2) < 1)) break;
            if (param_5 <= puVar9[1]) {
              pbVar10_mg0[1] = bVar8;
            }
            puVar9 = puVar9 + 2;
            pbVar10_mg0 = pbVar10_mg0 + 2;
          }
        }
      }
LAB_006f8e6b:
      bVar8 = (byte)local_8;
      iVar5 = (param_7 - param_8) - param_9;
      if ((int)uVar4 < iVar5) {
        do {
          iVar5 = iVar5 - uVar4;
          pbVar7 = pbVar6;
          if (((byte)local_8 & 0xc0) == 0x80) {
            pbVar7 = pbVar6 + uVar4;
          }
          bVar8 = *pbVar7;
          local_8 = (uint)bVar8;
          pbVar6 = pbVar7 + 1;
          uVar4 = local_8;
          if (((bVar8 & 0x80) != 0) && (uVar4 = local_8 & 0x3f, (bVar8 & 0x40) != 0)) {
            pbVar6 = pbVar7 + 2;
          }
        } while ((int)uVar4 < iVar5);
      }
      if ((bVar8 & 0xc0) == 0x80) {
        pbVar6 = pbVar6 + iVar5;
      }
    }
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    param_12 = param_12 + 1;
    iVar5 = param_10_after_write;
    if (2 < param_12) {
      param_12 = 0;
    }
  } while( true );
}

