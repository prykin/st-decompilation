
uint * FUN_00565820(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   uint param_7)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  uint uVar14;
  void *unaff_EDI;
  int iVar15;
  bool bVar16;
  InternalExceptionFrame local_d8;
  uint local_94 [10];
  byte local_6c;
  undefined3 uStack_6b;
  int local_68;
  int local_64;
  int local_60;
  short *local_5c;
  uint *local_58;
  short *local_54;
  uint *local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  uint *local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_94[5] = 0;
  local_94[0] = 0;
  local_94[6] = 0;
  local_94[1] = 0;
  local_94[7] = 0;
  local_94[2] = 0;
  local_94[8] = 0;
  local_94[3] = 0;
  local_94[9] = 0;
  local_94[4] = 0;
  local_24 = (uint *)0x0;
  local_48 = (undefined4 *)0x0;
  local_14 = (int *)0x0;
  local_60 = 0;
  local_d8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d8;
  iVar4 = __setjmp3(local_d8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    local_14 = FUN_00561240(param_4,param_5,param_6);
    iVar9 = local_14[2];
    iVar4 = local_14[4] + 2;
    iVar15 = iVar9 + 2;
    iVar12 = iVar4 * iVar15;
    local_28 = iVar4;
    local_c = iVar15;
    local_48 = FUN_006aac10(iVar12 * 7);
    local_20 = (uint *)0x0;
    local_2c = (uint *)0x0;
    local_30 = local_14[1] + -1 + param_2;
    if (local_30 < 0) {
      local_20 = (uint *)-local_30;
      local_c = local_30 + iVar15;
      local_30 = 0;
    }
    iVar7 = local_14[2] + local_14[1] + param_2;
    if (DAT_007fb278 <= iVar7) {
      local_c = local_c + -1 + (DAT_007fb278 - iVar7);
    }
    iVar7 = local_14[3] + -1 + param_3;
    local_44 = iVar7;
    if (iVar7 < 0) {
      local_44 = 0;
      local_2c = (uint *)-iVar7;
      iVar4 = iVar4 + iVar7;
      local_28 = iVar4;
    }
    iVar7 = local_14[4] + local_14[3] + param_3;
    if (DAT_007fb27a <= iVar7) {
      iVar4 = iVar4 + -1 + (DAT_007fb27a - iVar7);
      local_28 = iVar4;
    }
    local_34 = (uint *)((int)local_48 + (int)local_2c * iVar15 + (int)local_20 + iVar12);
    local_10 = 0;
    puVar6 = local_34;
    if (0 < iVar4) {
      do {
        local_18 = puVar6;
        local_54 = (short *)(DAT_007fb280 +
                            ((int)DAT_007fb278 * (local_44 + local_10) + local_30) * 2);
        local_1c = (uint *)(DAT_007fb248 +
                           ((int)DAT_007fb240 * (local_44 + local_10) + local_30) * 8);
        local_8 = 0;
        if (0 < local_c) {
          do {
            local_5c = local_54;
            pbVar13 = (byte *)((int)local_18 + local_8);
            local_68 = -1 - iVar12;
            local_64 = 1 - iVar12;
            local_38 = 5;
            local_4c = iVar15 - iVar12;
            local_50 = local_1c;
            do {
              if ((local_50[1] != 0) && (*(int *)(local_50[1] + 0x20) == 0x1ae)) {
                if (0 < local_10) {
                  if (0 < local_8) {
                    pbVar13[(-iVar15 - iVar12) + -1] = pbVar13[(-iVar15 - iVar12) + -1] | 2;
                    pbVar13[-1 - iVar15] = pbVar13[-1 - iVar15] | 2;
                    pbVar13[iVar12 + (-1 - iVar15)] = pbVar13[iVar12 + (-1 - iVar15)] | 2;
                  }
                  pbVar8 = pbVar13 + (-iVar15 - iVar12);
                  *pbVar8 = *pbVar8 | 2;
                  pbVar5 = pbVar13 + -iVar15;
                  *pbVar5 = *pbVar5 | 2;
                  pbVar5[iVar12] = pbVar5[iVar12] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar8[1] = pbVar8[1] | 2;
                    pbVar5[1] = pbVar5[1] | 2;
                    pbVar5[iVar12 + 1] = pbVar5[iVar12 + 1] | 2;
                  }
                }
                if (0 < local_8) {
                  pbVar13[-1 - iVar12] = pbVar13[-1 - iVar12] | 2;
                  pbVar13[iVar12 + local_68] = pbVar13[iVar12 + local_68] | 2;
                  pbVar13[iVar12 + -1] = pbVar13[iVar12 + -1] | 2;
                }
                pbVar5 = pbVar13 + -iVar12;
                *pbVar5 = *pbVar5 | 2;
                *pbVar13 = *pbVar13 | 2;
                pbVar13[iVar12] = pbVar13[iVar12] | 2;
                if (local_8 < local_c + -1) {
                  pbVar5[1] = pbVar5[1] | 2;
                  pbVar13[local_64 + iVar12] = pbVar13[local_64 + iVar12] | 2;
                  pbVar13[iVar12 + 1] = pbVar13[iVar12 + 1] | 2;
                }
                if (local_10 < local_28 + -1) {
                  if (0 < local_8) {
                    pbVar5[iVar9 + 1] = pbVar5[iVar9 + 1] | 2;
                    pbVar13[iVar9 + 1] = pbVar13[iVar9 + 1] | 2;
                    pbVar13[iVar15 + iVar12 + -1] = pbVar13[iVar15 + iVar12 + -1] | 2;
                  }
                  pbVar5[iVar15] = pbVar5[iVar15] | 2;
                  pbVar13[local_4c + iVar12] = pbVar13[local_4c + iVar12] | 2;
                  pbVar13[iVar12 + iVar15] = pbVar13[iVar12 + iVar15] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar5[iVar9 + 3] = pbVar5[iVar9 + 3] | 2;
                    pbVar13[iVar9 + 3] = pbVar13[iVar9 + 3] | 2;
                    pbVar13[iVar12 + iVar15 + 1] = pbVar13[iVar12 + iVar15 + 1] | 2;
                  }
                }
              }
              if (*local_5c != 0) {
                if ((*local_50 != 0) && (param_1 != 0xff)) {
                  bVar1 = *(byte *)(*local_50 + 0x24);
                  _local_6c = CONCAT31(uStack_6b,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == (byte)param_1) {
LAB_00565c6c:
                      iVar4 = 0;
                    }
                    else {
                      uVar14 = (uint)bVar1;
                      uVar10 = param_1 & 0xff;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14) == '\0')) {
                        iVar4 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14) == '\0')) {
                        iVar4 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14) == '\x01')) {
                        iVar4 = 1;
                      }
                      else {
                        if ((cVar2 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14) != '\x01'))
                        goto LAB_00565c6c;
                        iVar4 = 2;
                      }
                    }
                    bVar16 = iVar4 < 0;
                  }
                  else {
                    bVar16 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar16) {
                    if (0 < local_10) {
                      if (0 < local_8) {
                        pbVar13[(-iVar15 - iVar12) + -1] = pbVar13[(-iVar15 - iVar12) + -1] | 3;
                        pbVar13[-1 - iVar15] = pbVar13[-1 - iVar15] | 3;
                        pbVar13[iVar12 + (-1 - iVar15)] = pbVar13[iVar12 + (-1 - iVar15)] | 3;
                      }
                      pbVar8 = pbVar13 + (-iVar15 - iVar12);
                      *pbVar8 = *pbVar8 | 3;
                      pbVar5 = pbVar13 + -iVar15;
                      *pbVar5 = *pbVar5 | 3;
                      pbVar5[iVar12] = pbVar5[iVar12] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar8[1] = pbVar8[1] | 3;
                        pbVar5[1] = pbVar5[1] | 3;
                        pbVar5[iVar12 + 1] = pbVar5[iVar12 + 1] | 3;
                      }
                    }
                    if (0 < local_8) {
                      pbVar13[-1 - iVar12] = pbVar13[-1 - iVar12] | 3;
                      pbVar13[iVar12 + local_68] = pbVar13[iVar12 + local_68] | 3;
                      pbVar13[iVar12 + -1] = pbVar13[iVar12 + -1] | 3;
                    }
                    pbVar5 = pbVar13 + -iVar12;
                    *pbVar5 = *pbVar5 | 3;
                    *pbVar13 = *pbVar13 | 3;
                    pbVar13[iVar12] = pbVar13[iVar12] | 3;
                    if (local_8 < local_c + -1) {
                      pbVar5[1] = pbVar5[1] | 3;
                      pbVar13[local_64 + iVar12] = pbVar13[local_64 + iVar12] | 3;
                      pbVar13[iVar12 + 1] = pbVar13[iVar12 + 1] | 3;
                    }
                    if (local_10 < local_28 + -1) {
                      if (0 < local_8) {
                        pbVar5[iVar9 + 1] = pbVar5[iVar9 + 1] | 3;
                        pbVar13[iVar9 + 1] = pbVar13[iVar9 + 1] | 3;
                        pbVar13[iVar15 + iVar12 + -1] = pbVar13[iVar15 + iVar12 + -1] | 3;
                      }
                      pbVar5[iVar15] = pbVar5[iVar15] | 3;
                      pbVar13[local_4c + iVar12] = pbVar13[local_4c + iVar12] | 3;
                      pbVar13[iVar12 + iVar15] = pbVar13[iVar12 + iVar15] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar5[iVar9 + 3] = pbVar5[iVar9 + 3] | 3;
                        pbVar13[iVar9 + 3] = pbVar13[iVar9 + 3] | 3;
                        pbVar13[iVar12 + iVar15 + 1] = pbVar13[iVar12 + iVar15 + 1] | 3;
                      }
                    }
                  }
                }
                *pbVar13 = *pbVar13 | 1;
              }
              pbVar13 = pbVar13 + iVar12;
              local_5c = local_5c + DAT_007fb27e;
              local_50 = local_50 + DAT_007fb246 * 2;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = local_1c + 2;
          } while (local_8 < local_c);
        }
        local_18 = (uint *)((int)local_18 + iVar15);
        local_10 = local_10 + 1;
        iVar4 = local_28;
        puVar6 = local_18;
      } while (local_10 < local_28);
    }
    if (local_20 == (uint *)0x0) {
      local_c = local_c + -1;
      local_20 = (uint *)0x1;
      local_34 = (uint *)((int)local_34 + 1);
      local_30 = local_30 + 1;
    }
    if (local_14[2] + 1 < (int)local_20 + local_c) {
      local_c = (local_14[2] - (int)local_20) + 1;
    }
    if (local_2c == (uint *)0x0) {
      iVar4 = iVar4 + -1;
      local_34 = (uint *)((int)local_34 + iVar15);
      local_44 = local_44 + 1;
      local_2c = (uint *)0x1;
      local_28 = iVar4;
    }
    if (local_14[4] + 1 < (int)local_2c + iVar4) {
      local_28 = (local_14[4] - (int)local_2c) + 1;
    }
    local_38 = param_2 - local_30;
    puVar6 = FUN_006ae290((uint *)0x0,(int)(*local_14 + (*local_14 >> 0x1f & 3U)) >> 2,6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = puVar6;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = puVar6[3];
      local_20 = local_1c;
      if (0 < local_28) {
        local_18 = (uint *)((int)local_2c * 8);
        do {
          iVar4 = *(int *)((int)(local_18 + 4) + (int)local_14) + local_38;
          iVar7 = *(int *)((int)(local_18 + 3) + (int)local_14) + local_38;
          local_4c = iVar4;
          if (iVar7 <= iVar4) {
            do {
              if ((((-1 < iVar7) && (iVar7 < local_c)) && (-1 < local_10)) &&
                 ((local_10 < local_28 && (*(char *)(iVar7 + (int)local_20) == '\0')))) {
                local_40 = (short)iVar7 + (short)local_30;
                local_3e = (short)local_10 + (short)local_44;
                local_3c = (undefined2)local_8;
                FUN_006ae1c0(puVar6,(undefined4 *)&local_40);
                local_94[local_8] = local_94[local_8] + 1;
                iVar4 = iVar7 - iVar12;
                pbVar13 = (byte *)((iVar4 - iVar15) + (int)local_20);
                pbVar13[-1] = pbVar13[-1] | 2;
                *pbVar13 = *pbVar13 | 2;
                pbVar13[1] = pbVar13[1] | 2;
                pbVar13 = (byte *)(iVar4 + (int)local_20);
                pbVar13[-1] = *(byte *)(iVar4 + -1 + (int)local_20) | 2;
                *pbVar13 = *pbVar13 | 2;
                pbVar13[1] = pbVar13[1] | 2;
                pbVar13[iVar9 + 1] = pbVar13[iVar9 + 1] | 2;
                pbVar13[iVar15] = pbVar13[iVar15] | 2;
                pbVar13[iVar9 + 3] = pbVar13[iVar9 + 3] | 2;
                pbVar13 = (byte *)((iVar7 - iVar15) + (int)local_20);
                pbVar13[-1] = *(byte *)((iVar7 - iVar15) + -1 + (int)local_20) | 2;
                *pbVar13 = *pbVar13 | 2;
                pbVar13[1] = pbVar13[1] | 2;
                *(byte *)(iVar7 + -1 + (int)local_20) = *(byte *)(iVar7 + -1 + (int)local_20) | 2;
                *(byte *)(iVar7 + (int)local_20) = *(byte *)(iVar7 + (int)local_20) | 2;
                *(byte *)(iVar7 + 1 + (int)local_20) = *(byte *)(iVar7 + 1 + (int)local_20) | 2;
                pbVar5 = (byte *)((int)local_20 + iVar7 + iVar9 + 1);
                *pbVar5 = *pbVar5 | 2;
                pbVar5 = (byte *)((int)local_20 + iVar7 + iVar15);
                *pbVar5 = *pbVar5 | 2;
                pbVar5 = (byte *)((int)local_20 + iVar7 + iVar9 + 3);
                *pbVar5 = *pbVar5 | 2;
                pbVar13[iVar12 + -1] = pbVar13[iVar12 + -1] | 2;
                pbVar13[iVar12] = pbVar13[iVar12] | 2;
                pbVar13[iVar12 + 1] = pbVar13[iVar12 + 1] | 2;
                *(byte *)((int)local_20 + iVar7 + iVar12 + -1) =
                     *(byte *)((int)local_20 + iVar7 + iVar12 + -1) | 2;
                *(byte *)((int)local_20 + iVar7 + iVar12) =
                     *(byte *)((int)local_20 + iVar7 + iVar12) | 2;
                *(byte *)((int)local_20 + iVar7 + iVar12 + 1) =
                     *(byte *)((int)local_20 + iVar7 + iVar12 + 1) | 2;
                iVar4 = iVar15 + iVar12;
                *(byte *)((int)local_20 + iVar7 + iVar4 + -1) =
                     *(byte *)((int)local_20 + iVar7 + iVar4 + -1) | 2;
                *(byte *)((int)local_20 + iVar7 + iVar4) =
                     *(byte *)((int)local_20 + iVar7 + iVar4) | 2;
                *(byte *)((int)local_20 + iVar7 + iVar4 + 1) =
                     *(byte *)((int)local_20 + iVar7 + iVar4 + 1) | 2;
                puVar6 = local_24;
                iVar4 = local_4c;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 <= iVar4);
          }
          local_18 = local_18 + 2;
          local_10 = local_10 + 1;
          local_20 = (uint *)((int)local_20 + iVar15);
        } while (local_10 < local_28);
      }
      local_8 = local_8 + 1;
      local_1c = (uint *)((int)local_1c + iVar12);
    } while (local_8 < 5);
    if ((0 < (int)param_7) && ((int)param_7 < (int)puVar6[3])) {
      local_1c = FUN_006ae290((uint *)0x0,param_7,6,10);
      while( true ) {
        iVar9 = 0;
        local_2c = local_94;
        uVar14 = 0xffffffff;
        local_18 = (uint *)0x0;
        iVar4 = -(int)local_58;
        do {
          if (((int)uVar14 < (int)*local_2c) ||
             ((uVar14 == *local_2c &&
              (uVar10 = (int)(iVar4 + 3U) >> 0x1f, uVar11 = (int)(iVar9 + 3U) >> 0x1f,
              (int)((iVar9 + 3U ^ uVar11) - uVar11) < (int)((iVar4 + 3U ^ uVar10) - uVar10))))) {
            local_58 = local_18;
            uVar14 = *local_2c;
            iVar4 = iVar9;
          }
          iVar9 = iVar9 + -1;
          local_18 = (uint *)((int)local_18 + 1);
          local_2c = local_2c + 1;
        } while (-5 < iVar9);
        if ((int)uVar14 < 1) goto LAB_0056623f;
        uVar10 = local_94[(int)local_58 + 5];
        if ((int)param_7 < (int)uVar14) break;
        iVar4 = 0;
        if (0 < (int)uVar14) {
          do {
            uVar11 = FUN_006acc70((int)local_24,iVar4 + uVar10,(undefined4 *)&local_40);
            if (-1 < (int)uVar11) {
              FUN_006ae1c0(local_1c,(undefined4 *)&local_40);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar14);
        }
        param_7 = param_7 - uVar14;
        if ((int)param_7 < 1) goto LAB_0056623f;
        local_94[(int)local_58 + 5] = 0;
      }
      iVar4 = param_7 + 1;
      iVar9 = uVar10 * 0x10000 + -0x10000;
      if (0 < (int)param_7) {
        do {
          iVar9 = iVar9 + (int)((uVar14 + 1) * 0x10000) / iVar4;
          uVar10 = FUN_006acc70((int)local_24,iVar9 >> 0x10,(undefined4 *)&local_40);
          if (-1 < (int)uVar10) {
            FUN_006ae1c0(local_1c,(undefined4 *)&local_40);
          }
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
LAB_0056623f:
      FUN_006ae110((byte *)local_24);
      local_24 = local_1c;
    }
    g_currentExceptionFrame = local_d8.previous;
    iVar4 = local_60;
  }
  else {
    g_currentExceptionFrame = local_d8.previous;
    iVar9 = ReportDebugMessage(s_E____titans_scoreai_cpp_007c96b0,0xeff,0,iVar4,&DAT_007a4ccc,
                               s_AiMinesDistribTgts_007c9700);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar3)();
      return puVar6;
    }
  }
  local_60 = iVar4;
  iVar4 = local_60;
  FUN_006ab060(&local_48);
  FUN_006ab060(&local_14);
  if (iVar4 == 0) {
    return local_24;
  }
  FUN_006ab060(&local_24);
  RaiseInternalException(iVar4,DAT_007ed77c,s_E____titans_scoreai_cpp_007c96b0,0xf0f);
  return (uint *)0x0;
}

