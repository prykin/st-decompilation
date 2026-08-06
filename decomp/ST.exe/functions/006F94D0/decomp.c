
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006f94d0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,uint param_12)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6_mg0;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint local_c;
  uint local_8;

  _DAT_00857000 = 1;
  pbVar7 = param_6;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + -1;
    if (param_10 < 0) {
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    while (((param_12 & 1) == 0 && (param_10 = param_10 + -1, -1 < param_10))) {
      uVar3 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar5 = param_7;
      if (uVar3 != 0) {
        while( true ) {
          if ((uVar3 & 0x80) == 0) {
            uVar2 = uVar3 & 0x7f;
          }
          else if ((uVar3 & 0x40) == 0) {
            pbVar7 = pbVar7 + (uVar3 & 0x3f);
            uVar2 = uVar3 & 0x3f;
          }
          else {
            pbVar7 = pbVar7 + 1;
            uVar2 = uVar3 & 0x3f;
          }
          if ((int)(iVar5 - uVar2) < 1) break;
          uVar3 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
          iVar5 = iVar5 - uVar2;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = param_12 + 1;
      if (4 < (int)param_12) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = 0;
      }
    }
    local_8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (local_8 == 0) goto LAB_006f9a4c;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)param_8;
    while( true ) {
      while ((local_8 & 0x80) == 0) {
        uVar3 = local_8 & 0x7f;
        if ((int)param_6 < (int)uVar3) goto LAB_006f95b9;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar3;
        bVar6 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        local_8 = (uint)bVar6;
      }
      uVar3 = local_8 & 0x3f;
      if ((int)param_6 < (int)uVar3) break;
      if ((local_8 & 0x40) == 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar7[uVar3];
        pbVar7 = pbVar7 + uVar3 + 1;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar3;
        local_8 = (uint)pbVar7[1];
        pbVar7 = pbVar7 + 2;
      }
    }
LAB_006f95b9:
    uVar3 = uVar3 - (int)param_6;
    if (((byte)local_8 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + (int)param_6;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = (byte *)param_9;
    iVar5 = param_11;
    pbVar6_mg0 = param_1;
    puVar10 = param_3;
    if ((int)uVar3 <= param_9) {
      do {
        local_c = local_8 & 0x80;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -uVar3;
        if (local_c == 0) {
          if (-1 < (int)(uVar3 - 1)) {
            do {
              if (((byte)iVar5 & 1) == 1) {
                pbVar6_mg0 = pbVar6_mg0 + 1;
                puVar10 = puVar10 + 1;
              }
              iVar5 = iVar5 + 1;
              if (4 < iVar5) {
                iVar5 = 0;
              }
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          goto LAB_006f97ed;
        }
        if ((local_8 & 0x40) == 0) {
          if (iVar5 < 1) {
switchD_006f9702_default:
            if (0 < (int)uVar3) {
              pbVar8 = pbVar7 + 1;
              pbVar1 = pbVar6_mg0;
              puVar9 = puVar10;
              for (iVar4 = uVar3 - 1; iVar5 = 1, pbVar6_mg0 = pbVar1, pbVar7 = pbVar8,
                  puVar10 = puVar9, 0 < iVar4; iVar4 = iVar4 + -5) {
                if (param_5 <= *puVar9) {
                  *pbVar1 = *pbVar8;
                }
                puVar10 = puVar9 + 1;
                pbVar6_mg0 = pbVar1 + 1;
                pbVar7 = pbVar8 + 1;
                iVar5 = 2;
                if (iVar4 + -1 < 1) break;
                pbVar7 = pbVar8 + 2;
                iVar5 = 3;
                if (iVar4 + -2 < 1) break;
                if (param_5 <= *puVar10) {
                  *pbVar6_mg0 = *pbVar7;
                }
                puVar10 = puVar9 + 2;
                pbVar6_mg0 = pbVar1 + 2;
                pbVar7 = pbVar8 + 3;
                iVar5 = 4;
                if (iVar4 + -3 < 1) break;
                pbVar7 = pbVar8 + 4;
                iVar5 = 0;
                if (iVar4 + -4 < 1) break;
                pbVar8 = pbVar8 + 5;
                pbVar1 = pbVar6_mg0;
                puVar9 = puVar10;
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar7;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              pbVar7 = pbVar7 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9702_caseD_3;
            case 4:
              goto switchD_006f9702_caseD_4;
            default:
              goto switchD_006f9702_default;
            }
            pbVar7 = pbVar7 + 1;
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9702_caseD_3:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar7;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              pbVar7 = pbVar7 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9702_caseD_4:
                pbVar7 = pbVar7 + 1;
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                goto switchD_006f9702_default;
              }
            }
          }
        }
        else {
          bVar6 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar6_mg0;
          puVar9 = puVar10;
          if (iVar5 < 1) {
switchD_006f9617_default:
            pbVar6_mg0 = pbVar8;
            puVar10 = puVar9;
            if (0 < (int)uVar3) {
              iVar4 = uVar3 - 1;
              iVar5 = 1;
              if (0 < iVar4) {
                while( true ) {
                  if (param_5 <= *puVar9) {
                    *pbVar8 = bVar6;
                  }
                  puVar10 = puVar9 + 1;
                  pbVar6_mg0 = pbVar8 + 1;
                  iVar5 = 2;
                  if ((iVar4 + -1 < 1) || (iVar5 = 3, iVar4 + -2 < 1)) break;
                  if (param_5 <= *puVar10) {
                    *pbVar6_mg0 = bVar6;
                  }
                  puVar10 = puVar9 + 2;
                  pbVar6_mg0 = pbVar8 + 2;
                  iVar5 = 4;
                  if ((iVar4 + -3 < 1) || (iVar5 = 0, iVar4 + -4 < 1)) break;
                  iVar4 = iVar4 + -5;
                  iVar5 = 1;
                  pbVar8 = pbVar6_mg0;
                  puVar9 = puVar10;
                  if (iVar4 < 1) break;
                }
              }
            }
          }
          else {
            switch(iVar5) {
            case 1:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = bVar6;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 2;
              if ((int)uVar3 < 1) goto LAB_006f97ed;
              break;
            case 2:
              break;
            case 3:
              goto switchD_006f9617_caseD_3;
            case 4:
              goto switchD_006f9617_caseD_4;
            default:
              goto switchD_006f9617_default;
            }
            uVar3 = uVar3 - 1;
            iVar5 = 3;
            if (0 < (int)uVar3) {
switchD_006f9617_caseD_3:
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = bVar6;
              }
              puVar10 = puVar10 + 1;
              pbVar6_mg0 = pbVar6_mg0 + 1;
              uVar3 = uVar3 - 1;
              iVar5 = 4;
              if (0 < (int)uVar3) {
switchD_006f9617_caseD_4:
                iVar5 = 0;
                uVar3 = uVar3 - 1;
                pbVar8 = pbVar6_mg0;
                puVar9 = puVar10;
                goto switchD_006f9617_default;
              }
            }
          }
        }
LAB_006f97ed:
        if ((int)param_6 < 1) {
          uVar3 = 0;
          break;
        }
        bVar6 = *pbVar7;
        local_8 = (uint)bVar6;
        pbVar7 = pbVar7 + 1;
        if ((bVar6 & 0x80) == 0) {
          uVar3 = bVar6 & 0x7f;
        }
        else {
          uVar3 = bVar6 & 0x3f;
        }
      } while ((int)uVar3 <= (int)param_6);
    }
    uVar3 = uVar3 - (int)param_6;
    if (((int)param_6 < 1) || ((local_8 & 0x80) == 0)) goto LAB_006f99fd;
    if ((local_8 & 0x40) == 0) {
      if (iVar5 < 1) goto switchD_006f9933_default;
      pbVar8 = pbVar7;
      switch(iVar5) {
      case 1:
        if (param_5 <= *puVar10) {
          *pbVar6_mg0 = *pbVar7;
        }
        puVar10 = puVar10 + 1;
        pbVar6_mg0 = pbVar6_mg0 + 1;
        pbVar7 = pbVar7 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
        if ((int)param_6 < 1) break;
        goto LAB_006f995e;
      case 2:
LAB_006f995e:
        pbVar8 = pbVar7 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
        pbVar7 = pbVar8;
        if (0 < (int)param_6) {
switchD_006f9933_caseD_3:
          if (param_5 <= *puVar10) {
            *pbVar6_mg0 = *pbVar8;
          }
          puVar10 = puVar10 + 1;
          pbVar6_mg0 = pbVar6_mg0 + 1;
          pbVar7 = pbVar8 + 1;
          if (0 < (int)(param_6 + -1)) {
            pbVar7 = pbVar8 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -2;
            goto switchD_006f9933_default;
          }
        }
        break;
      case 3:
        goto switchD_006f9933_caseD_3;
      case 4:
        pbVar7 = pbVar7 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = param_6 + -1;
      default:
switchD_006f9933_default:
        if (0 < (int)param_6) {
          pbVar8 = pbVar7 + 1;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -1;
          pbVar7 = pbVar8;
          if (0 < (int)param_6) {
            while( true ) {
              if (param_5 <= *puVar10) {
                *pbVar6_mg0 = *pbVar8;
              }
              pbVar7 = pbVar8 + 1;
              if (((int)(param_6 + -1) < 1) || (pbVar7 = pbVar8 + 2, (int)(param_6 + -2) < 1))
              break;
              if (param_5 <= puVar10[1]) {
                pbVar6_mg0[1] = pbVar8[2];
              }
              puVar10 = puVar10 + 2;
              pbVar6_mg0 = pbVar6_mg0 + 2;
              pbVar7 = pbVar8 + 3;
              if (((int)(param_6 + -3) < 1) || (pbVar7 = pbVar8 + 4, (int)(param_6 + -4) < 1))
              break;
              pbVar8 = pbVar8 + 5;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -5;
              pbVar7 = pbVar8;
              if ((int)param_6 < 1) break;
            }
          }
        }
      }
      goto LAB_006f99fd;
    }
    bVar6 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if (iVar5 < 1) goto switchD_006f9854_default;
    switch(iVar5) {
    case 1:
      if (param_5 <= *puVar10) {
        *pbVar6_mg0 = bVar6;
      }
      puVar10 = puVar10 + 1;
      pbVar6_mg0 = pbVar6_mg0 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = param_6 + -1;
      if ((int)param_6 < 1) break;
      goto LAB_006f9884;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 2:
LAB_006f9884:
      param_6 = param_6 + -1;
      if (0 < (int)param_6) {
LAB_006f9895:
        if (param_5 <= *puVar10) {
          *pbVar6_mg0 = bVar6;
        }
        puVar10 = puVar10 + 1;
        pbVar6_mg0 = pbVar6_mg0 + 1;
        if (0 < (int)(param_6 + -1)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = param_6 + -2;
          goto switchD_006f9854_default;
        }
      }
      break;
    case 3:
      goto LAB_006f9895;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    case 4:
      param_6 = param_6 + -1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    default:
switchD_006f9854_default:
      if ((0 < (int)param_6) && (param_6 = param_6 + -1, 0 < (int)param_6)) {
        while( true ) {
          if (param_5 <= *puVar10) {
            *pbVar6_mg0 = bVar6;
          }
          if ((int)(param_6 + -2) < 1) break;
          if (param_5 <= puVar10[1]) {
            pbVar6_mg0[1] = bVar6;
          }
          puVar10 = puVar10 + 2;
          pbVar6_mg0 = pbVar6_mg0 + 2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((int)(param_6 + -4) < 1) || (param_6 = param_6 + -5, (int)param_6 < 1)) break;
        }
      }
    }
LAB_006f99fd:
    bVar6 = (byte)local_8;
    iVar5 = (param_7 - param_8) - param_9;
    if ((int)uVar3 < iVar5) {
      do {
        iVar5 = iVar5 - uVar3;
        pbVar8 = pbVar7;
        if (((byte)local_8 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + uVar3;
        }
        bVar6 = *pbVar8;
        local_8 = (uint)bVar6;
        pbVar7 = pbVar8 + 1;
        uVar3 = local_8;
        if (((bVar6 & 0x80) != 0) && (uVar3 = local_8 & 0x3f, (bVar6 & 0x40) != 0)) {
          pbVar7 = pbVar8 + 2;
        }
      } while ((int)uVar3 < iVar5);
    }
    if ((bVar6 & 0xc0) == 0x80) {
      pbVar7 = pbVar7 + iVar5;
    }
LAB_006f9a4c:
    param_1 = param_1 + param_2;
    param_3 = (ushort *)((int)param_3 + param_4);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_12 = param_12 + 1;
    if (4 < (int)param_12) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_12 = 0;
    }
  } while( true );
}

