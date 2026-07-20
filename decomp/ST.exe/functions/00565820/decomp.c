
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 3839 | 3855 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * AiMinesDistribTgts(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                         uint param_7)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  AnonShape_006ACC70_C8641025 *pAVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 unaff_ESI;
  byte *pbVar14;
  uint uVar15;
  void *unaff_EDI;
  int iVar16;
  bool bVar17;
  InternalExceptionFrame local_d8;
  uint local_94 [10];
  byte local_6c;
  undefined3 uStack_6b;
  int local_68;
  int local_64;
  int local_60;
  short *local_5c;
  AnonShape_006ACC70_C8641025 *local_58;
  short *local_54;
  AnonShape_006ACC70_C8641025 *local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  AnonShape_006ACC70_C8641025 *local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  AnonShape_006ACC70_C8641025 *local_24;
  AnonShape_006ACC70_C8641025 *local_20;
  AnonShape_006ACC70_C8641025 *local_1c;
  AnonShape_006ACC70_C8641025 *local_18;
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
  local_24 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_14 = (int *)0x0;
  local_60 = 0;
  local_d8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d8;
  iVar4 = Library::MSVCRT::__setjmp3(local_d8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    local_14 = FUN_00561240(param_4,param_5,param_6);
    iVar10 = local_14[2];
    iVar4 = local_14[4] + 2;
    iVar16 = iVar10 + 2;
    iVar13 = iVar4 * iVar16;
    local_28 = iVar4;
    local_c = iVar16;
    local_48 = Library::DKW::LIB::FUN_006aac10(iVar13 * 7);
    local_20 = (AnonShape_006ACC70_C8641025 *)0x0;
    local_2c = (uint *)0x0;
    local_30 = local_14[1] + -1 + param_2;
    if (local_30 < 0) {
      local_20 = (AnonShape_006ACC70_C8641025 *)-local_30;
      local_c = local_30 + iVar16;
      local_30 = 0;
    }
    iVar8 = local_14[2] + local_14[1] + param_2;
    if (SHORT_007fb278 <= iVar8) {
      local_c = local_c + -1 + (SHORT_007fb278 - iVar8);
    }
    iVar8 = local_14[3] + -1 + param_3;
    local_44 = iVar8;
    if (iVar8 < 0) {
      local_44 = 0;
      local_2c = (uint *)-iVar8;
      iVar4 = iVar4 + iVar8;
      local_28 = iVar4;
    }
    iVar8 = local_14[4] + local_14[3] + param_3;
    if (SHORT_007fb27a <= iVar8) {
      iVar4 = iVar4 + -1 + (SHORT_007fb27a - iVar8);
      local_28 = iVar4;
    }
    local_34 = (AnonShape_006ACC70_C8641025 *)
               ((int)local_48 + (int)local_2c * iVar16 + (int)local_20 + iVar13);
    local_10 = 0;
    pAVar6 = local_34;
    if (0 < iVar4) {
      do {
        local_18 = pAVar6;
        local_54 = (short *)(DAT_007fb280 +
                            ((int)SHORT_007fb278 * (local_44 + local_10) + local_30) * 2);
        local_1c = (AnonShape_006ACC70_C8641025 *)
                   (g_worldCells + (int)SHORT_007fb240 * (local_44 + local_10) + local_30);
        local_8 = 0;
        if (0 < local_c) {
          do {
            local_5c = local_54;
            pbVar14 = (byte *)((int)&local_18->field_0x0 + local_8);
            local_68 = -1 - iVar13;
            local_64 = 1 - iVar13;
            local_38 = 5;
            local_4c = iVar16 - iVar13;
            local_50 = local_1c;
            do {
              if ((*(int *)&local_50->field_0x4 != 0) &&
                 (*(int *)(*(int *)&local_50->field_0x4 + 0x20) == 0x1ae)) {
                if (0 < local_10) {
                  if (0 < local_8) {
                    pbVar14[(-iVar16 - iVar13) + -1] = pbVar14[(-iVar16 - iVar13) + -1] | 2;
                    pbVar14[-1 - iVar16] = pbVar14[-1 - iVar16] | 2;
                    pbVar14[iVar13 + (-1 - iVar16)] = pbVar14[iVar13 + (-1 - iVar16)] | 2;
                  }
                  pbVar9 = pbVar14 + (-iVar16 - iVar13);
                  *pbVar9 = *pbVar9 | 2;
                  pbVar5 = pbVar14 + -iVar16;
                  *pbVar5 = *pbVar5 | 2;
                  pbVar5[iVar13] = pbVar5[iVar13] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar9[1] = pbVar9[1] | 2;
                    pbVar5[1] = pbVar5[1] | 2;
                    pbVar5[iVar13 + 1] = pbVar5[iVar13 + 1] | 2;
                  }
                }
                if (0 < local_8) {
                  pbVar14[-1 - iVar13] = pbVar14[-1 - iVar13] | 2;
                  pbVar14[iVar13 + local_68] = pbVar14[iVar13 + local_68] | 2;
                  pbVar14[iVar13 + -1] = pbVar14[iVar13 + -1] | 2;
                }
                pbVar5 = pbVar14 + -iVar13;
                *pbVar5 = *pbVar5 | 2;
                *pbVar14 = *pbVar14 | 2;
                pbVar14[iVar13] = pbVar14[iVar13] | 2;
                if (local_8 < local_c + -1) {
                  pbVar5[1] = pbVar5[1] | 2;
                  pbVar14[local_64 + iVar13] = pbVar14[local_64 + iVar13] | 2;
                  pbVar14[iVar13 + 1] = pbVar14[iVar13 + 1] | 2;
                }
                if (local_10 < local_28 + -1) {
                  if (0 < local_8) {
                    pbVar5[iVar10 + 1] = pbVar5[iVar10 + 1] | 2;
                    pbVar14[iVar10 + 1] = pbVar14[iVar10 + 1] | 2;
                    pbVar14[iVar16 + iVar13 + -1] = pbVar14[iVar16 + iVar13 + -1] | 2;
                  }
                  pbVar5[iVar16] = pbVar5[iVar16] | 2;
                  pbVar14[local_4c + iVar13] = pbVar14[local_4c + iVar13] | 2;
                  pbVar14[iVar13 + iVar16] = pbVar14[iVar13 + iVar16] | 2;
                  if (local_8 < local_c + -1) {
                    pbVar5[iVar10 + 3] = pbVar5[iVar10 + 3] | 2;
                    pbVar14[iVar10 + 3] = pbVar14[iVar10 + 3] | 2;
                    pbVar14[iVar13 + iVar16 + 1] = pbVar14[iVar13 + iVar16 + 1] | 2;
                  }
                }
              }
              if (*local_5c != 0) {
                if ((*(STWorldObject **)local_50 != (STWorldObject *)0x0) && (param_1 != 0xff)) {
                  bVar1 = *(byte *)&(*(STWorldObject **)local_50)[1].vtable;
                  _local_6c = CONCAT31(uStack_6b,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == (byte)param_1) {
LAB_00565c6c:
                      iVar4 = 0;
                    }
                    else {
                      uVar15 = (uint)bVar1;
                      uVar11 = param_1 & 0xff;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar15 * 8 + uVar11);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar15) == '\0')) {
                        iVar4 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar15) == '\0')) {
                        iVar4 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar15) == '\x01')) {
                        iVar4 = 1;
                      }
                      else {
                        if ((cVar2 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar15) != '\x01'))
                        goto LAB_00565c6c;
                        iVar4 = 2;
                      }
                    }
                    bVar17 = iVar4 < 0;
                  }
                  else {
                    bVar17 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar17) {
                    if (0 < local_10) {
                      if (0 < local_8) {
                        pbVar14[(-iVar16 - iVar13) + -1] = pbVar14[(-iVar16 - iVar13) + -1] | 3;
                        pbVar14[-1 - iVar16] = pbVar14[-1 - iVar16] | 3;
                        pbVar14[iVar13 + (-1 - iVar16)] = pbVar14[iVar13 + (-1 - iVar16)] | 3;
                      }
                      pbVar9 = pbVar14 + (-iVar16 - iVar13);
                      *pbVar9 = *pbVar9 | 3;
                      pbVar5 = pbVar14 + -iVar16;
                      *pbVar5 = *pbVar5 | 3;
                      pbVar5[iVar13] = pbVar5[iVar13] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar9[1] = pbVar9[1] | 3;
                        pbVar5[1] = pbVar5[1] | 3;
                        pbVar5[iVar13 + 1] = pbVar5[iVar13 + 1] | 3;
                      }
                    }
                    if (0 < local_8) {
                      pbVar14[-1 - iVar13] = pbVar14[-1 - iVar13] | 3;
                      pbVar14[iVar13 + local_68] = pbVar14[iVar13 + local_68] | 3;
                      pbVar14[iVar13 + -1] = pbVar14[iVar13 + -1] | 3;
                    }
                    pbVar5 = pbVar14 + -iVar13;
                    *pbVar5 = *pbVar5 | 3;
                    *pbVar14 = *pbVar14 | 3;
                    pbVar14[iVar13] = pbVar14[iVar13] | 3;
                    if (local_8 < local_c + -1) {
                      pbVar5[1] = pbVar5[1] | 3;
                      pbVar14[local_64 + iVar13] = pbVar14[local_64 + iVar13] | 3;
                      pbVar14[iVar13 + 1] = pbVar14[iVar13 + 1] | 3;
                    }
                    if (local_10 < local_28 + -1) {
                      if (0 < local_8) {
                        pbVar5[iVar10 + 1] = pbVar5[iVar10 + 1] | 3;
                        pbVar14[iVar10 + 1] = pbVar14[iVar10 + 1] | 3;
                        pbVar14[iVar16 + iVar13 + -1] = pbVar14[iVar16 + iVar13 + -1] | 3;
                      }
                      pbVar5[iVar16] = pbVar5[iVar16] | 3;
                      pbVar14[local_4c + iVar13] = pbVar14[local_4c + iVar13] | 3;
                      pbVar14[iVar13 + iVar16] = pbVar14[iVar13 + iVar16] | 3;
                      if (local_8 < local_c + -1) {
                        pbVar5[iVar10 + 3] = pbVar5[iVar10 + 3] | 3;
                        pbVar14[iVar10 + 3] = pbVar14[iVar10 + 3] | 3;
                        pbVar14[iVar13 + iVar16 + 1] = pbVar14[iVar13 + iVar16 + 1] | 3;
                      }
                    }
                  }
                }
                *pbVar14 = *pbVar14 | 1;
              }
              pbVar14 = pbVar14 + iVar13;
              local_5c = local_5c + SHORT_007fb27e;
              local_50 = (AnonShape_006ACC70_C8641025 *)
                         ((int)&local_50->field_0x0 + SHORT_007fb246 * 2 * 4);
              local_38 = local_38 + -1;
            } while (local_38 != 0);
            local_8 = local_8 + 1;
            local_54 = local_54 + 1;
            local_1c = (AnonShape_006ACC70_C8641025 *)&local_1c->field_0008;
          } while (local_8 < local_c);
        }
        local_18 = (AnonShape_006ACC70_C8641025 *)(&local_18->field_0x2 + iVar10);
        local_10 = local_10 + 1;
        iVar4 = local_28;
        pAVar6 = local_18;
      } while (local_10 < local_28);
    }
    if (local_20 == (AnonShape_006ACC70_C8641025 *)0x0) {
      local_c = local_c + -1;
      local_20 = (AnonShape_006ACC70_C8641025 *)0x1;
      local_34 = (AnonShape_006ACC70_C8641025 *)&local_34->field_0x1;
      local_30 = local_30 + 1;
    }
    if (local_14[2] + 1 < (int)local_20 + local_c) {
      local_c = (local_14[2] - (int)local_20) + 1;
    }
    if (local_2c == (uint *)0x0) {
      iVar4 = iVar4 + -1;
      local_34 = (AnonShape_006ACC70_C8641025 *)(&local_34->field_0x2 + iVar10);
      local_44 = local_44 + 1;
      local_2c = (uint *)0x1;
      local_28 = iVar4;
    }
    if (local_14[4] + 1 < (int)local_2c + iVar4) {
      local_28 = (local_14[4] - (int)local_2c) + 1;
    }
    local_38 = param_2 - local_30;
    pAVar6 = (AnonShape_006ACC70_C8641025 *)
             Library::DKW::TBL::FUN_006ae290
                       ((uint *)0x0,(int)(*local_14 + (*local_14 >> 0x1f & 3U)) >> 2,6,10);
    local_8 = 0;
    local_1c = local_34;
    local_24 = pAVar6;
    do {
      local_10 = 0;
      local_94[local_8 + 5] = pAVar6->field_000C;
      local_20 = local_1c;
      if (0 < local_28) {
        local_18 = (AnonShape_006ACC70_C8641025 *)((int)local_2c * 8);
        do {
          iVar4 = *(int *)((int)local_18 + 0x10 + (int)local_14) + local_38;
          iVar8 = *(int *)((int)local_18 + 0xc + (int)local_14) + local_38;
          local_4c = iVar4;
          if (iVar8 <= iVar4) {
            do {
              if ((((-1 < iVar8) && (iVar8 < local_c)) && (-1 < local_10)) &&
                 ((local_10 < local_28 && (*(char *)((int)&local_20->field_0x0 + iVar8) == '\0'))))
              {
                local_40 = (short)iVar8 + (short)local_30;
                local_3e = (short)local_10 + (short)local_44;
                local_3c = (undefined2)local_8;
                Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar6,(undefined4 *)&local_40);
                local_94[local_8] = local_94[local_8] + 1;
                iVar4 = iVar8 - iVar13;
                pbVar14 = (byte *)((iVar4 - iVar16) + (int)local_20);
                pbVar14[-1] = pbVar14[-1] | 2;
                *pbVar14 = *pbVar14 | 2;
                pbVar14[1] = pbVar14[1] | 2;
                pbVar14 = (byte *)(iVar4 + (int)local_20);
                pbVar14[-1] = *(byte *)(iVar4 + -1 + (int)local_20) | 2;
                *pbVar14 = *pbVar14 | 2;
                pbVar14[1] = pbVar14[1] | 2;
                pbVar14[iVar10 + 1] = pbVar14[iVar10 + 1] | 2;
                pbVar14[iVar16] = pbVar14[iVar16] | 2;
                pbVar14[iVar10 + 3] = pbVar14[iVar10 + 3] | 2;
                pbVar14 = (byte *)((iVar8 - iVar16) + (int)local_20);
                pbVar14[-1] = *(byte *)((iVar8 - iVar16) + -1 + (int)local_20) | 2;
                *pbVar14 = *pbVar14 | 2;
                pbVar14[1] = pbVar14[1] | 2;
                *(byte *)(iVar8 + -1 + (int)local_20) = *(byte *)(iVar8 + -1 + (int)local_20) | 2;
                *(byte *)((int)&local_20->field_0x0 + iVar8) =
                     *(byte *)((int)&local_20->field_0x0 + iVar8) | 2;
                (&local_20->field_0x1)[iVar8] = (&local_20->field_0x1)[iVar8] | 2;
                (&local_20->field_0x1)[iVar8 + iVar10] = (&local_20->field_0x1)[iVar8 + iVar10] | 2;
                (&local_20->field_0x2)[iVar8 + iVar16 + -2] =
                     (&local_20->field_0x2)[iVar8 + iVar16 + -2] | 2;
                (&local_20->field_0x3)[iVar8 + iVar10] = (&local_20->field_0x3)[iVar8 + iVar10] | 2;
                pbVar14[iVar13 + -1] = pbVar14[iVar13 + -1] | 2;
                pbVar14[iVar13] = pbVar14[iVar13] | 2;
                pbVar14[iVar13 + 1] = pbVar14[iVar13 + 1] | 2;
                *(byte *)((int)local_20 + iVar8 + iVar13 + -1) =
                     *(byte *)((int)local_20 + iVar8 + iVar13 + -1) | 2;
                *(byte *)((int)&local_20->field_0x0 + iVar8 + iVar13) =
                     *(byte *)((int)&local_20->field_0x0 + iVar8 + iVar13) | 2;
                (&local_20->field_0x1)[iVar8 + iVar13] = (&local_20->field_0x1)[iVar8 + iVar13] | 2;
                iVar4 = iVar16 + iVar13;
                (&local_20->field_0x1)[iVar8 + iVar4 + -2] =
                     (&local_20->field_0x1)[iVar8 + iVar4 + -2] | 2;
                (&local_20->field_0x2)[iVar8 + iVar4 + -2] =
                     (&local_20->field_0x2)[iVar8 + iVar4 + -2] | 2;
                (&local_20->field_0x3)[iVar8 + iVar4 + -2] =
                     (&local_20->field_0x3)[iVar8 + iVar4 + -2] | 2;
                pAVar6 = local_24;
                iVar4 = local_4c;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= iVar4);
          }
          local_18 = (AnonShape_006ACC70_C8641025 *)((int)local_18 + 8);
          local_10 = local_10 + 1;
          local_20 = (AnonShape_006ACC70_C8641025 *)(&local_20->field_0x2 + iVar10);
        } while (local_10 < local_28);
      }
      local_8 = local_8 + 1;
      local_1c = (AnonShape_006ACC70_C8641025 *)((int)&local_1c->field_0x0 + iVar13);
    } while (local_8 < 5);
    if ((0 < (int)param_7) && ((int)param_7 < (int)pAVar6->field_000C)) {
      local_1c = (AnonShape_006ACC70_C8641025 *)
                 Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_7,6,10);
      while( true ) {
        iVar10 = 0;
        local_2c = local_94;
        uVar15 = 0xffffffff;
        local_18 = (AnonShape_006ACC70_C8641025 *)0x0;
        iVar4 = -(int)local_58;
        do {
          if (((int)uVar15 < (int)*local_2c) ||
             ((uVar15 == *local_2c &&
              (uVar11 = (int)(iVar4 + 3U) >> 0x1f, uVar12 = (int)(iVar10 + 3U) >> 0x1f,
              (int)((iVar10 + 3U ^ uVar12) - uVar12) < (int)((iVar4 + 3U ^ uVar11) - uVar11))))) {
            local_58 = local_18;
            uVar15 = *local_2c;
            iVar4 = iVar10;
          }
          iVar10 = iVar10 + -1;
          local_18 = (AnonShape_006ACC70_C8641025 *)&local_18->field_0x1;
          local_2c = local_2c + 1;
        } while (-5 < iVar10);
        if ((int)uVar15 < 1) goto cf_common_exit_0056623F;
        uVar11 = local_94[(int)&local_58->field_0x5];
        if ((int)param_7 < (int)uVar15) break;
        iVar4 = 0;
        if (0 < (int)uVar15) {
          do {
            uVar12 = FUN_006acc70(local_24,iVar4 + uVar11,(undefined4 *)&local_40);
            if (-1 < (int)uVar12) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)local_1c,(undefined4 *)&local_40);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar15);
        }
        param_7 = param_7 - uVar15;
        if ((int)param_7 < 1) goto cf_common_exit_0056623F;
        local_94[(int)&local_58->field_0x5] = 0;
      }
      iVar4 = param_7 + 1;
      iVar10 = uVar11 * 0x10000 + -0x10000;
      if (0 < (int)param_7) {
        do {
          iVar10 = iVar10 + (int)((uVar15 + 1) * 0x10000) / iVar4;
          uVar11 = FUN_006acc70(local_24,iVar10 >> 0x10,(undefined4 *)&local_40);
          if (-1 < (int)uVar11) {
            Library::DKW::TBL::FUN_006ae1c0((uint *)local_1c,(undefined4 *)&local_40);
          }
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
cf_common_exit_0056623F:
      FUN_006ae110((byte *)local_24);
      local_24 = local_1c;
    }
    g_currentExceptionFrame = local_d8.previous;
    iVar4 = local_60;
  }
  else {
    g_currentExceptionFrame = local_d8.previous;
    iVar10 = ReportDebugMessage(s_E____titans_scoreai_cpp_007c96b0,0xeff,0,iVar4,&DAT_007a4ccc,
                                s_AiMinesDistribTgts_007c9700);
    if (iVar10 != 0) {
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
  }
  local_60 = iVar4;
  iVar4 = local_60;
  FUN_006ab060(&local_48);
  FUN_006ab060(&local_14);
  if (iVar4 == 0) {
    return (uint *)local_24;
  }
  FUN_006ab060(&local_24);
  RaiseInternalException(iVar4,g_overwriteContext_007ED77C,s_E____titans_scoreai_cpp_007c96b0,0xf0f)
  ;
  return (uint *)0x0;
}

