
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PutOnPlaceGuardBoats */

void __thiscall
STAllPlayersC::PutOnPlaceGuardBoats
          (STAllPlayersC *this,uint param_1,uint param_2,int param_3,undefined2 param_4,uint param_5
          ,int param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  STBoatC *pSVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  undefined2 *puVar11;
  short *psVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int local_104 [8];
  int local_e4 [7];
  undefined4 local_c8;
  short sStack_c6;
  int local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  short local_6a [33];
  STAllPlayersC *local_28;
  STBoatC *local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar13 = param_5;
  local_c0 = 0;
  local_be = 2;
  local_bc = 0;
  local_ba = 0xffff;
  local_b8 = 2;
  local_b6 = 0;
  local_b4 = 1;
  local_b2 = 2;
  local_b0 = 0;
  local_ae = 0;
  local_ac = 3;
  local_aa = 0;
  local_a8 = 0;
  local_a6 = 1;
  local_a4 = 0;
  local_a2 = 0xffff;
  local_a0 = 3;
  local_9e = 0;
  local_9c = 1;
  local_9a = 3;
  local_98 = 0;
  local_96 = 0xffff;
  local_94 = 1;
  local_92 = 0;
  local_90 = 1;
  local_8e = 1;
  local_8c = 0;
  local_8a = 0;
  local_88 = 4;
  local_86 = 0;
  local_84 = 0xffff;
  local_82 = 4;
  local_80 = 0;
  local_7e = 1;
  local_7c = 4;
  local_7a = 0;
  local_78 = 0;
  local_76 = 0;
  local_74 = 0;
  local_72 = 0xffff;
  local_70 = 0;
  local_6e = 0;
  local_6c = 1;
  local_6a[0] = 0;
  local_6a[1] = 0;
  local_6a[3] = 0;
  local_6a[4] = 2;
  local_6a[5] = 0;
  local_6a[6] = 0;
  local_6a[7] = 2;
  local_6a[8] = 1;
  local_6a[9] = 0;
  local_6a[10] = 3;
  local_6a[0xb] = 0;
  local_6a[0xc] = 0;
  local_6a[0xd] = 1;
  local_6a[0xe] = 1;
  local_6a[0xf] = 0;
  local_6a[0x10] = 3;
  local_6a[0x11] = 1;
  local_6a[0x12] = 0;
  local_6a[0x13] = 1;
  local_6a[0x14] = 0;
  local_6a[0x15] = 0;
  local_6a[0x16] = 4;
  local_6a[0x17] = 0;
  local_6a[0x18] = 0;
  local_6a[0x19] = 0;
  local_6a[0x1a] = 1;
  local_6a[0x1b] = 0;
  local_6a[0x1c] = 4;
  local_6a[0x1d] = 1;
  local_6a[0x1e] = 0;
  local_6a[0x1f] = 0;
  local_6a[0x20] = 0;
  local_e4[0] = 0;
  local_e4[1] = 0xb4;
  local_e4[2] = 0x5a;
  local_e4[3] = 0x10e;
  local_e4[4] = 0x2d;
  local_e4[5] = 0xe1;
  local_e4[6] = 0x87;
  local_c8 = 0x13b;
  if ((param_8 != 0) && (iVar15 = *(int *)(param_8 + 0xc), iVar15 != 0)) {
    sVar3 = (short)param_2;
    sVar2 = (short)param_3;
    local_28 = this;
    if ((param_2 == param_5) && (param_3 == param_6)) {
      iVar5 = -1;
    }
    else {
      sVar4 = (short)param_6;
      iVar5 = FUN_006acf0d((int)(short)(sVar3 * 0xc9 + 100),(int)(short)(sVar2 * 0xc9 + 100),0,
                           (int)(short)((short)param_5 * 0xc9 + 100),
                           (int)(short)(sVar4 * 0xc9 + 100),0);
      iVar5 = ((short)((sVar4 - sVar2) * 0xc9 + 100) * 1000) / iVar5;
      if (iVar5 < -0x39c) {
        iVar5 = 0x5a;
      }
      else if ((iVar5 < -0x39c) || (-0x180 < iVar5)) {
        if ((iVar5 < -0x17f) || (0x17e < iVar5)) {
          if ((iVar5 < 0x17f) || (0x39b < iVar5)) {
            iVar5 = 0x10e;
          }
          else {
            iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0x5a) + 0xe1;
          }
        }
        else {
          iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0xffffff4c) + 0xb4;
        }
      }
      else {
        iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0xffffffa6) + 0x87;
      }
    }
    local_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_14 = CONCAT22(sVar2,sVar3);
    local_10 = CONCAT22(local_10._2_2_,param_4);
    local_1c = iVar15;
    local_20 = iVar15;
    if (iVar5 < 0x88) {
      if (iVar5 == 0x87) {
        local_24 = (STBoatC *)((iVar15 + -1) / 10);
        iVar15 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            _param_4 = local_20;
            if (9 < (int)local_20) {
              _param_4 = 10;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = local_6a;
              local_8 = local_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                if (pSVar7 == (STBoatC *)0x0) {
                  iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d64,0,0,
                                              &DAT_007a4ccc,
                                              s_STAllPlayersC__PutOnPlaceGuardBo_007a8574);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar10 = (sVar3 - sVar4) + -3;
                  sVar4 = ((sVar2 - sVar4) - *psVar12) + -2;
                }
                else {
                  sVar10 = (sVar3 - sVar4) + *psVar12 + -2;
                  sVar4 = (sVar2 - sVar4) + -3;
                }
                local_10 = CONCAT22(sVar10,(undefined2)local_10);
                local_c = CONCAT22(psVar12[1],sVar4);
                iVar5 = thunk_FUN_0045ff10((int)pSVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                }
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            local_1c = local_1c + 10;
            local_20 = local_20 + -10;
          } while (iVar15 <= (int)local_24);
          return;
        }
      }
      else {
        switch(iVar5) {
        case 0:
          local_20 = (iVar15 + -1) / 0xf;
          local_24 = (STBoatC *)0x0;
          if (-1 < (int)local_20) {
            local_8 = 0;
            do {
              _param_4 = local_1c;
              if (0xe < (int)local_1c) {
                _param_4 = 0xf;
              }
              param_6 = 0;
              if (0 < _param_4) {
                puVar11 = &local_be;
                uVar13 = local_8;
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                  if (pSVar7 == (STBoatC *)0x0) {
                    iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d83,0,0,
                                                &DAT_007a4ccc,
                                                s_STAllPlayersC__PutOnPlaceGuardBo_007a8630);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  local_10 = CONCAT22((short)local_24 + 3 + sVar3,(undefined2)local_10);
                  local_c = CONCAT22(*puVar11,puVar11[-1] + sVar2);
                  iVar15 = thunk_FUN_0045ff10((int)pSVar7);
                  if (iVar15 == 5) {
                    thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                  puVar11 = puVar11 + 3;
                } while (param_6 < _param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_8 = local_8 + 0xf;
              local_1c = local_1c + -0xf;
            } while ((int)local_24 <= (int)local_20);
            return;
          }
          break;
        case 0x2d:
          local_24 = (STBoatC *)((iVar15 + -1) / 10);
          iVar15 = 0;
          if (-1 < (int)local_24) {
            local_1c = 0;
            do {
              _param_4 = local_20;
              if (9 < (int)local_20) {
                _param_4 = 10;
              }
              param_6 = 0;
              if (0 < _param_4) {
                psVar12 = local_6a;
                local_8 = local_1c;
                do {
                  psVar12 = psVar12 + 3;
                  FUN_006acc70(param_8,local_8,&param_5);
                  pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                  if (pSVar7 == (STBoatC *)0x0) {
                    iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d45,0,0,
                                                &DAT_007a4ccc,
                                                s_STAllPlayersC__PutOnPlaceGuardBo_007a8668);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  sVar4 = (short)iVar15;
                  if (psVar12[2] == 0) {
                    sVar10 = *psVar12 + sVar4 + 2;
                    sVar4 = (sVar2 - sVar4) + -3;
                  }
                  else {
                    sVar10 = sVar4 + 3;
                    sVar4 = (*psVar12 - sVar4) + -2 + sVar2;
                  }
                  local_10 = CONCAT22(sVar10 + sVar3,(undefined2)local_10);
                  local_c = CONCAT22(psVar12[1],sVar4);
                  iVar5 = thunk_FUN_0045ff10((int)pSVar7);
                  if (iVar5 == 5) {
                    thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                  }
                  param_6 = param_6 + 1;
                  local_8 = local_8 + 1;
                } while (param_6 < _param_4);
              }
              iVar15 = iVar15 + 1;
              local_1c = local_1c + 10;
              local_20 = local_20 + -10;
            } while (iVar15 <= (int)local_24);
            return;
          }
          break;
        case 0x5a:
          local_20 = (iVar15 + -1) / 0xf;
          local_24 = (STBoatC *)0x0;
          if (-1 < (int)local_20) {
            local_1c = 0;
            local_8 = iVar15;
            do {
              _param_4 = local_8;
              if (0xe < (int)local_8) {
                _param_4 = 0xf;
              }
              param_6 = 0;
              if (0 < _param_4) {
                puVar11 = &local_be;
                uVar13 = local_1c;
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                  if (pSVar7 == (STBoatC *)0x0) {
                    iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d2c,0,0,
                                                &DAT_007a4ccc,
                                                s_STAllPlayersC__PutOnPlaceGuardBo_007a86a4);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  local_10 = CONCAT22(puVar11[-1] + sVar3,(undefined2)local_10);
                  local_c = CONCAT22(*puVar11,(sVar2 - (short)local_24) + -3);
                  iVar15 = thunk_FUN_0045ff10((int)pSVar7);
                  if (iVar15 == 5) {
                    thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  else {
                    STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                  puVar11 = puVar11 + 3;
                } while (param_6 < _param_4);
              }
              local_24 = (STBoatC *)((int)local_24 + 1);
              local_1c = local_1c + 0xf;
              local_8 = local_8 + -0xf;
            } while ((int)local_24 <= (int)local_20);
            return;
          }
          break;
        case -1:
          local_c4 = (iVar15 + -1) / 100;
          iVar5 = 0;
          local_20 = 0xffffffff;
          if (-1 < local_c4) {
            local_8 = 0;
            do {
              piVar14 = local_104;
              local_1c = iVar15;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                *piVar14 = 0;
                piVar14 = piVar14 + 1;
              }
              _param_4 = iVar15;
              if (99 < iVar15) {
                _param_4 = 100;
              }
              param_6 = 0;
              uVar13 = local_8;
              if (0 < _param_4) {
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  local_24 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                  if (local_24 == (STBoatC *)0x0) {
                    iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2e0b,0,0,
                                                &DAT_007a4ccc,
                                                s_STAllPlayersC__PutOnPlaceGuardBo_007a85b0);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  do {
                    while( true ) {
                      local_20 = local_20 + 1 & 0x80000007;
                      if ((int)local_20 < 0) {
                        local_20 = (local_20 - 1 | 0xfffffff8) + 1;
                      }
                      iVar15 = local_e4[local_20];
                      if (iVar15 % 0x5a != 0) break;
                      if (local_104[local_20] != 0xf) goto LAB_00448970;
                    }
                  } while (local_104[local_20] == 10);
LAB_00448970:
                  iVar9 = local_104[local_20] + 1;
                  local_104[local_20] = iVar9;
                  sVar4 = (short)iVar5;
                  if (iVar15 < 0xb5) {
                    if (iVar15 == 0xb4) {
                      sVar10 = (sVar3 - sVar4) + -3;
                      sVar4 = (&sStack_c6)[iVar9 * 3] + sVar2;
LAB_00448aaf:
                      local_10 = CONCAT22(sVar10,(undefined2)local_10);
                      local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar9 * 6),sVar4);
                    }
                    else {
                      switch(iVar15) {
                      case 0:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        local_c = CONCAT22(*(undefined2 *)((int)&local_c4 + iVar9 * 6),
                                           (&sStack_c6)[iVar9 * 3] + sVar2);
                        break;
                      default:
switchD_004489a9_caseD_1:
                        iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2e63,
                                                    0,0,&DAT_007a4ccc,
                                                    s_STAllPlayersC__PutOnPlaceGuardBo_007a85ec);
                        if (iVar15 != 0) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        break;
                      case 0x2d:
                        if (local_6a[iVar9 * 3 + 2] == 0) {
                          local_10 = CONCAT22(local_6a[iVar9 * 3] + sVar4 + 2 + sVar3,
                                              (undefined2)local_10);
                          sVar4 = (sVar2 - sVar4) + -3;
                          goto LAB_00448bc0;
                        }
                        sVar10 = (sVar2 - sVar4) + -2 + local_6a[iVar9 * 3];
LAB_00448b30:
                        local_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)local_10);
                        local_c = CONCAT22(local_6a[iVar9 * 3 + 1],sVar10);
                        break;
                      case 0x5a:
                        sVar10 = (&sStack_c6)[iVar9 * 3] + sVar3;
                        sVar4 = (sVar2 - sVar4) + -3;
                        goto LAB_00448aaf;
                      case 0x87:
                        if (local_6a[iVar9 * 3 + 2] != 0) {
                          local_10 = CONCAT22(-sVar4 + -2 + sVar3 + local_6a[iVar9 * 3],
                                              (undefined2)local_10);
                          sVar4 = -sVar4 + -3 + sVar2;
                          goto LAB_00448bc0;
                        }
                        local_10 = CONCAT22(-sVar4 + -3 + sVar3,(undefined2)local_10);
                        local_c = CONCAT22(local_6a[iVar9 * 3 + 1],
                                           ((-sVar4 + sVar2) - local_6a[iVar9 * 3]) + -2);
                      }
                    }
                  }
                  else {
                    if (iVar15 == 0xe1) {
                      if (local_6a[iVar9 * 3 + 2] == 0) {
                        local_10 = CONCAT22(((sVar3 - sVar4) - local_6a[iVar9 * 3]) + -2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                      }
                      else {
                        local_10 = CONCAT22((sVar3 - sVar4) + -3,(undefined2)local_10);
                        sVar4 = ((sVar4 + sVar2) - local_6a[iVar9 * 3]) + 2;
                      }
LAB_00448bc0:
                      sVar10 = local_6a[iVar9 * 3 + 1];
                    }
                    else {
                      if (iVar15 != 0x10e) {
                        if (iVar15 != 0x13b) goto switchD_004489a9_caseD_1;
                        if (local_6a[iVar9 * 3 + 2] == 0) {
                          sVar10 = local_6a[iVar9 * 3] + sVar4 + 2 + sVar2;
                          goto LAB_00448b30;
                        }
                        local_10 = CONCAT22(((sVar4 + sVar3) - local_6a[iVar9 * 3]) + 2,
                                            (undefined2)local_10);
                        sVar4 = sVar4 + 3 + sVar2;
                        goto LAB_00448bc0;
                      }
                      local_10 = CONCAT22((&sStack_c6)[iVar9 * 3] + sVar3,(undefined2)local_10);
                      sVar4 = sVar4 + 3 + sVar2;
                      sVar10 = *(short *)((int)&local_c4 + iVar9 * 6);
                    }
                    local_c = CONCAT22(sVar10,sVar4);
                  }
                  pSVar7 = local_24;
                  iVar15 = thunk_FUN_0045ff10((int)local_24);
                  if (((iVar15 == 5) && (uVar6 = STBoatC::CheckPBoxCmd(pSVar7,CASE_3), uVar6 == 1))
                     || (iVar15 = thunk_FUN_0045ff10((int)pSVar7), iVar15 != 5)) {
                    STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                  }
                  else {
                    thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                } while (param_6 < _param_4);
              }
              local_8 = local_8 + 100;
              iVar5 = iVar5 + 1;
              iVar15 = local_1c + -100;
              if (local_c4 < iVar5) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      switch(iVar5) {
      case 0xb4:
        local_20 = (iVar15 + -1) / 0xf;
        local_24 = (STBoatC *)0x0;
        if (-1 < (int)local_20) {
          local_8 = 0;
          do {
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              _param_4 = 0xf;
            }
            param_6 = 0;
            if (0 < _param_4) {
              puVar11 = &local_be;
              uVar13 = local_8;
              do {
                FUN_006acc70(param_8,uVar13,&param_5);
                pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                if (pSVar7 == (STBoatC *)0x0) {
                  iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d9b,0,0,
                                              &DAT_007a4ccc,
                                              s_STAllPlayersC__PutOnPlaceGuardBo_007a8538);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                local_10 = CONCAT22((sVar3 - (short)local_24) + -3,(undefined2)local_10);
                local_c = CONCAT22(*puVar11,puVar11[-1] + sVar2);
                iVar15 = thunk_FUN_0045ff10((int)pSVar7);
                if (iVar15 == 5) {
                  thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                }
                param_6 = param_6 + 1;
                uVar13 = uVar13 + 1;
                puVar11 = puVar11 + 3;
              } while (param_6 < _param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c + -0xf;
          } while ((int)local_24 <= (int)local_20);
          return;
        }
        break;
      case 0xe1:
        local_24 = (STBoatC *)((iVar15 + -1) / 0x14);
        iVar15 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            _param_4 = local_20;
            if (0x13 < (int)local_20) {
              _param_4 = 0x14;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = local_6a;
              local_8 = local_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                if (pSVar7 == (STBoatC *)0x0) {
                  iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2dd2,0,0,
                                              &DAT_007a4ccc,
                                              s_STAllPlayersC__PutOnPlaceGuardBo_007a84c0);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar8 = sVar4 + 3 + sVar2;
                  local_c = CONCAT22(local_c._2_2_,sVar8);
                  sVar10 = ((sVar3 - sVar4) - *psVar12) + -2;
                  local_c = CONCAT22(psVar12[1],sVar8);
                }
                else {
                  sVar10 = (sVar3 - sVar4) + -3;
                  local_c = CONCAT22(psVar12[1],(sVar4 - *psVar12) + 2 + sVar2);
                }
                local_10 = CONCAT22(sVar10,(undefined2)local_10);
                iVar5 = thunk_FUN_0045ff10((int)pSVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                }
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            local_1c = local_1c + 0x14;
            local_20 = local_20 + -0x14;
          } while (iVar15 <= (int)local_24);
          return;
        }
        break;
      case 0x10e:
        local_20 = (iVar15 + -1) / 0xf;
        local_24 = (STBoatC *)0x0;
        if (-1 < (int)local_20) {
          local_8 = 0;
          do {
            _param_4 = local_1c;
            if (0xe < (int)local_1c) {
              _param_4 = 0xf;
            }
            param_6 = 0;
            if (0 < _param_4) {
              puVar11 = &local_be;
              uVar13 = local_8;
              do {
                FUN_006acc70(param_8,uVar13,&param_5);
                pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                if (pSVar7 == (STBoatC *)0x0) {
                  iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2df1,0,0,
                                              &DAT_007a4ccc,
                                              s_STAllPlayersC__PutOnPlaceGuardBo_007a8484);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                local_10 = CONCAT22(puVar11[-1] + sVar3,(undefined2)local_10);
                local_c = CONCAT22(*puVar11,(short)local_24 + 3 + sVar2);
                iVar15 = thunk_FUN_0045ff10((int)pSVar7);
                if (iVar15 == 5) {
                  thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                }
                param_6 = param_6 + 1;
                uVar13 = uVar13 + 1;
                puVar11 = puVar11 + 3;
              } while (param_6 < _param_4);
            }
            local_24 = (STBoatC *)((int)local_24 + 1);
            local_8 = local_8 + 0xf;
            local_1c = local_1c + -0xf;
          } while ((int)local_24 <= (int)local_20);
          return;
        }
        break;
      case 0x13b:
        local_24 = (STBoatC *)((iVar15 + -1) / 0x14);
        iVar15 = 0;
        if (-1 < (int)local_24) {
          local_1c = 0;
          do {
            _param_4 = local_20;
            if (0x13 < (int)local_20) {
              _param_4 = 0x14;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = local_6a;
              local_8 = local_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,local_8,&param_5);
                pSVar7 = (STBoatC *)GetObjPtr(local_28,param_1,param_5,CASE_1);
                if (pSVar7 == (STBoatC *)0x0) {
                  iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2db3,0,0,
                                              &DAT_007a4ccc,
                                              s_STAllPlayersC__PutOnPlaceGuardBo_007a84fc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar10 = sVar4 + 3;
                  sVar4 = sVar4 + sVar2 + *psVar12 + 2;
                }
                else {
                  sVar10 = (sVar4 - *psVar12) + 2;
                  sVar4 = sVar4 + 3 + sVar2;
                }
                local_10 = CONCAT22(sVar10 + sVar3,(undefined2)local_10);
                local_c = CONCAT22(psVar12[1],sVar4);
                iVar5 = thunk_FUN_0045ff10((int)pSVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pSVar7,local_18,local_14,local_10,local_c);
                }
                else {
                  STBoatC::CmdToObj(pSVar7,CASE_5,&local_18);
                }
                param_6 = param_6 + 1;
                local_8 = local_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            local_1c = local_1c + 0x14;
            local_20 = local_20 + -0x14;
          } while (iVar15 <= (int)local_24);
          return;
        }
      }
    }
  }
  return;
}

