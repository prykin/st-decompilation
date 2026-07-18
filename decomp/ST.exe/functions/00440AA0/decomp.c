
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignDocks */

uint * __thiscall
STAllPlayersC::_AssignDocks(STAllPlayersC *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  void *unaff_EDI;
  uint uVar13;
  short *psVar14;
  undefined4 *puVar15;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  undefined4 local_c8;
  undefined4 local_c4 [16];
  int local_84;
  int local_80;
  int *local_7c;
  uint *local_78;
  int local_74;
  uint *local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  uint *local_54;
  uint local_50;
  short local_4c;
  undefined2 local_4a;
  uint local_48;
  uint *local_44;
  STAllPlayersC *local_40;
  short local_3c;
  undefined4 uStack_3a;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  uint local_2c;
  uint local_28;
  short local_22;
  uint local_20;
  uint local_1c;
  short local_16;
  short local_14;
  short local_12;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_70 = (uint *)0x0;
  local_c8 = DAT_00858df8;
  local_80 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  DAT_00858df8 = &local_c8;
  local_40 = this;
  iVar3 = __setjmp3(local_c4,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_c8;
    if (iVar3 != -0x5001fff7) {
      iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x234b,0,iVar3,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar1)();
        return puVar5;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x234c);
    }
    return local_70;
  }
  if ((((param_2 == 0) || (param_3 == 0)) ||
      (uVar13 = *(uint *)(param_2 + 0xc), local_20 = uVar13, uVar13 == 0)) ||
     (local_48 = *(uint *)(param_3 + 0xc), local_48 == 0)) {
    uVar13 = local_20;
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2215);
  }
  if ((local_80 == 0) || (local_84 = *(int *)(local_80 + 0xc), local_84 == 0)) {
    FUN_006a5e40(-0x5001fff8,DAT_007ed77c,0x7a6004,0x2216);
  }
  uVar12 = 0;
  if (0 < (int)uVar13) {
    do {
      FUN_006acc70(param_2,uVar12,&local_28);
      if ((short)local_28 == -1) {
LAB_00440bab:
        FUN_006b0c70(param_2,uVar12);
        uVar13 = uVar13 - 1;
        uVar12 = uVar12 - 1;
        local_20 = uVar13;
      }
      else {
        piVar4 = (int *)thunk_FUN_0042b620(param_1,local_28,1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440bab;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  if (uVar13 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x221e);
  }
  uVar12 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70(param_3,uVar12,&local_28);
      if ((short)local_28 == -1) {
LAB_00440c19:
        FUN_006b0c70(param_3,uVar12);
        local_48 = local_48 - 1;
        uVar12 = uVar12 - 1;
      }
      else {
        piVar4 = (int *)thunk_FUN_0042b620(param_1,local_28,1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440c19;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)local_48);
  }
  if (local_48 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2225);
  }
  puVar5 = FUN_006ae290((uint *)0x0,uVar13,0xc,1);
  uVar12 = 0;
  local_44 = puVar5;
  if (0 < (int)uVar13) {
    do {
      local_10 = (uint *)0x0;
      local_8 = 0;
      local_c = 0;
      FUN_006ae140(puVar5,uVar12,&local_10);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  local_1c = 0;
  if (0 < local_84) {
    do {
      uVar13 = local_1c;
      FUN_006acc70(local_80,local_1c,&local_7c);
      if (((local_7c != (int *)0x0) && (iVar3 = (**(code **)(*local_7c + 0xc))(), iVar3 == 4)) &&
         (*(short *)((int)local_7c + 0x27) != 0)) {
        local_6c = *(uint *)((int)local_7c + 0x29);
        local_2c = 0;
        local_78 = *(uint **)(local_6c + 0xc);
        if (0 < (int)local_78) {
          do {
            FUN_006acc70(local_6c,local_2c,&local_28);
            if ((short)local_28 != -1) {
              pvVar6 = (void *)thunk_FUN_0042b620(param_1,local_28,1);
              if (pvVar6 == (void *)0x0) {
                iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2239,0,0,
                                     &DAT_007a4ccc);
                if (iVar3 != 0) {
                  pcVar1 = (code *)swi(3);
                  puVar5 = (uint *)(*pcVar1)();
                  return puVar5;
                }
                FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x223a);
              }
              if ((*(int *)((int)pvVar6 + 0x20) == 0x14) &&
                 (iVar3 = thunk_FUN_0045ff10((int)pvVar6), iVar3 == 4)) {
                puVar7 = (undefined4 *)thunk_FUN_0048dcc0(pvVar6,local_130);
                psVar14 = &local_fc;
                for (iVar3 = 0xd; uVar13 = local_48, iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)psVar14 = *puVar7;
                  puVar7 = puVar7 + 1;
                  psVar14 = psVar14 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar12 = 0;
                  if (0 < (int)local_48) {
                    do {
                      FUN_006acc70(param_3,uVar12,(undefined4 *)&local_22);
                      if ((short)local_28 == local_22) break;
                      uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < (int)uVar13);
                  }
                  if ((int)uVar13 <= (int)uVar12) {
                    if ((((local_fc < 0) || (DAT_007fb240 <= local_fc)) || (local_fa < 0)) ||
                       (((DAT_007fb242 <= local_fa || (local_f8 < 0)) || (DAT_007fb244 <= local_f8))
                       )) {
                      piVar4 = (int *)0x0;
                    }
                    else {
                      piVar4 = *(int **)(DAT_007fb248 +
                                        ((int)local_f8 * (int)DAT_007fb246 +
                                         (int)local_fa * (int)DAT_007fb240 + (int)local_fc) * 8);
                    }
                    if (((piVar4 != (int *)0x0) && (piVar4[9] == (int)(char)param_1)) &&
                       ((iVar3 = (**(code **)(*piVar4 + 0x2c))(), iVar3 == 0x33 &&
                        (iVar3 = (**(code **)(*piVar4 + 0xf8))(), uVar13 = local_20, iVar3 == 1))))
                    {
                      uVar12 = 0;
                      if (0 < (int)local_20) {
                        do {
                          FUN_006acc70(param_2,uVar12,(undefined4 *)&local_22);
                          if (local_22 == *(short *)((int)piVar4 + 0x32)) break;
                          uVar12 = uVar12 + 1;
                        } while ((int)uVar12 < (int)uVar13);
                      }
                      puVar5 = local_44;
                      if (uVar12 != uVar13) {
                        FUN_006acc70((int)local_44,uVar12,&local_10);
                        if (local_10 == (uint *)0x0) {
                          local_10 = FUN_006ae290((uint *)0x0,1,6,1);
                          FUN_006ae140(puVar5,uVar12,&local_10);
                        }
                        local_3c = (short)local_28;
                        FUN_006ae1c0(local_10,(undefined4 *)&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar13 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar13 + 1;
    } while ((int)local_1c < local_84);
  }
  uVar13 = local_48;
  puVar5 = FUN_006ae290((uint *)0x0,local_48,4,1);
  uVar12 = 0;
  local_78 = puVar5;
  if (0 < (int)uVar13) {
    do {
      local_54 = FUN_006ae290((uint *)0x0,local_20,4,1);
      FUN_006ae140(puVar5,uVar12,&local_54);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar13 = local_1c;
      FUN_006acc70(param_2,local_1c,&local_28);
      pvVar6 = (void *)thunk_FUN_0042b620(param_1,local_28,1);
      thunk_FUN_004162b0(pvVar6,&local_12,&local_14,&local_16);
      uVar12 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
      puVar7 = DAT_007fb280;
      puVar15 = DAT_007fb238;
      for (uVar10 = (uVar12 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar12 * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                   (int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      FUN_006acc70((int)local_44,uVar13,&local_10);
      if (((local_10 != (uint *)0x0) && (local_64 = local_10[3], local_64 != 0)) &&
         (uVar13 = 0, 0 < (int)local_64)) {
        do {
          FUN_006acc70((int)local_10,uVar13,(undefined4 *)&local_3c);
          piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22((undefined2)uStack_3a,local_3c),1);
          thunk_FUN_004162b0(piVar4,&local_12,&local_14,&local_16);
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          bVar2 = thunk_FUN_00430750(iVar3);
          uStack_3a = ((*(short *)((int)DAT_007fb238 +
                                  ((int)local_16 * (int)DAT_007fb27e +
                                   (int)local_14 * (int)DAT_007fb278 + (int)local_12) * 2) * 0xc9 +
                       -0xc9) / 3) / (int)(uint)bVar2;
          FUN_006ae140(local_10,uVar13,(undefined4 *)&local_3c);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_64);
      }
      uVar13 = 0;
      if (0 < (int)local_48) {
        do {
          FUN_006acc70(param_3,uVar13,&local_28);
          piVar4 = (int *)thunk_FUN_0042b620(param_1,local_28,1);
          thunk_FUN_004162b0(piVar4,&local_12,&local_14,&local_16);
          local_68 = (int)*(short *)((int)DAT_007fb238 +
                                    ((int)local_16 * (int)DAT_007fb27e +
                                     (int)local_14 * (int)DAT_007fb278 + (int)local_12) * 2);
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            iVar3 = (**(code **)(*piVar4 + 0x2c))();
            bVar2 = thunk_FUN_00430750(iVar3);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar2;
          }
          FUN_006acc70((int)local_78,uVar13,&local_54);
          FUN_006ae140(local_54,local_1c,&local_68);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar13 = local_20;
  puVar5 = local_44;
  if (0 < (int)local_20) {
    do {
      FUN_006acc70((int)puVar5,local_1c,&local_10);
      if ((local_10 != (uint *)0x0) && (local_64 = local_10[3], local_64 != 0)) {
        puVar11 = local_10;
        uVar13 = local_64;
        if (local_64 == 1) {
          FUN_006acc70((int)local_10,0,(undefined4 *)&local_3c);
          piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22((undefined2)uStack_3a,local_3c),1);
          local_60 = thunk_FUN_00486b40((int)piVar4);
          iVar3 = (**(code **)(*piVar4 + 0x78))();
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar8 = (**(code **)(*piVar4 + 0x2c))();
          local_c = (int)(*(int *)(&DAT_007e049c + iVar8 * 4) * local_60) / iVar3 + uStack_3a;
          FUN_006ae140(puVar5,local_1c,&local_10);
          uVar13 = local_20;
        }
        else {
          while (uVar13 = uVar13 - 1, 0 < (int)uVar13) {
            uVar12 = 0;
            if (0 < (int)uVar13) {
              do {
                FUN_006acc70((int)puVar11,uVar12,(undefined4 *)&local_34);
                uVar10 = uVar12 + 1;
                FUN_006acc70((int)local_10,uVar10,(undefined4 *)&local_5c);
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  FUN_006ae140(local_10,uVar12,(undefined4 *)&local_5c);
                  FUN_006ae140(local_10,uVar10,(undefined4 *)&local_34);
                }
                puVar11 = local_10;
                uVar12 = uVar10;
              } while ((int)uVar10 < (int)uVar13);
            }
          }
          FUN_006acc70((int)puVar11,0,(undefined4 *)&local_34);
          piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_32,local_34),1);
          iVar3 = thunk_FUN_00486b40((int)piVar4);
          iVar8 = (**(code **)(*piVar4 + 0x78))();
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar9 = (**(code **)(*piVar4 + 0x2c))();
          local_74 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8;
          iVar3 = 0;
          local_50 = CONCAT22(uStack_30,uStack_32) + local_74;
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              FUN_006acc70((int)local_10,local_2c,(undefined4 *)&local_5c);
              piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_5a,local_5c),1);
              local_60 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              iVar8 = (int)(*(int *)(&DAT_007e049c + iVar9 * 4) * local_60) / iVar8;
              local_50 = local_50 + iVar8;
              iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      local_74;
              if (iVar3 < 1) {
                local_50 = local_50 - iVar3;
                iVar3 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar8;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          FUN_006ae140(local_44,local_1c,&local_10);
          uVar13 = local_20;
          puVar5 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar13);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70(param_3,local_1c,(undefined4 *)&local_3c);
      uVar12 = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)local_78,local_1c,&local_54);
          FUN_006acc70((int)local_54,uVar12,&uStack_3a);
          FUN_006acc70((int)puVar5,uVar12,&local_10);
          if (uStack_3a == -1) {
            local_8 = 1000000000;
          }
          else {
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,6,1);
            }
            FUN_006ae1c0(local_10,(undefined4 *)&local_3c);
            local_8 = 0;
          }
          FUN_006ae140(puVar5,uVar12,&local_10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
      local_2c = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)puVar5,local_2c,&local_10);
          if (local_8 != 1000000000) {
            local_64 = local_10[3];
            uVar13 = local_64;
            if (local_64 == 1) {
              FUN_006acc70((int)local_10,0,(undefined4 *)&local_3c);
              piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22((undefined2)uStack_3a,local_3c),1)
              ;
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              local_8 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8 + uStack_3a;
            }
            else {
              while (uVar13 = uVar13 - 1, 0 < (int)uVar13) {
                uVar12 = 0;
                if (0 < (int)uVar13) {
                  do {
                    FUN_006acc70((int)local_10,uVar12,(undefined4 *)&local_34);
                    uVar10 = uVar12 + 1;
                    FUN_006acc70((int)local_10,uVar10,(undefined4 *)&local_5c);
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      FUN_006ae140(local_10,uVar12,(undefined4 *)&local_5c);
                      FUN_006ae140(local_10,uVar10,(undefined4 *)&local_34);
                    }
                    uVar12 = uVar10;
                  } while ((int)uVar10 < (int)uVar13);
                }
              }
              FUN_006acc70((int)local_10,0,(undefined4 *)&local_34);
              piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_32,local_34),1);
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar8 = (**(code **)(*piVar4 + 0x78))();
              if (iVar8 < 1) {
                iVar8 = 1;
              }
              iVar9 = (**(code **)(*piVar4 + 0x2c))();
              local_74 = (*(int *)(&DAT_007e049c + iVar9 * 4) * iVar3) / iVar8;
              iVar3 = 0;
              local_50 = CONCAT22(uStack_30,uStack_32) + local_74;
              local_6c = 1;
              if (1 < (int)local_64) {
                do {
                  FUN_006acc70((int)local_10,local_6c,(undefined4 *)&local_5c);
                  piVar4 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_5a,local_5c),1);
                  local_60 = thunk_FUN_00486b40((int)piVar4);
                  iVar8 = (**(code **)(*piVar4 + 0x78))();
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  iVar9 = (**(code **)(*piVar4 + 0x2c))();
                  iVar8 = (int)(*(int *)(&DAT_007e049c + iVar9 * 4) * local_60) / iVar8;
                  local_50 = local_50 + iVar8;
                  iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          local_74;
                  if (iVar3 < 1) {
                    local_50 = local_50 - iVar3;
                    iVar3 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  local_6c = local_6c + 1;
                  local_74 = iVar8;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            FUN_006ae140(local_44,local_2c,&local_10);
            uVar13 = local_20;
            puVar5 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar13);
      }
      if (local_70 == (uint *)0x0) {
        local_70 = FUN_006ae290((uint *)0x0,0,4,1);
      }
      FUN_006acc70(param_3,local_1c,(undefined4 *)&local_4c);
      uVar12 = 0;
      if (0 < (int)uVar13) {
        do {
          FUN_006acc70((int)puVar5,uVar12,&local_10);
          if (local_8 != 1000000000) break;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar13);
      }
      if (uVar12 == uVar13) {
        local_4a = 0xffff;
        FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
      }
      else if (uVar12 == uVar13 - 1) {
        FUN_006acc70(param_2,uVar12,(undefined4 *)&local_4a);
        FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
        local_c = local_8;
        FUN_006ae140(puVar5,uVar12,&local_10);
      }
      else {
        uVar13 = uVar12 + 1;
        local_6c = local_8;
        local_60 = uVar12;
        if ((int)uVar13 < (int)local_20) {
          do {
            FUN_006acc70((int)puVar5,uVar13,&local_10);
            if ((local_8 != 1000000000) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar12 = uVar13;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_20);
        }
        local_60 = uVar12;
        FUN_006acc70(param_2,uVar12,(undefined4 *)&local_4a);
        FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
        FUN_006acc70((int)puVar5,uVar12,&local_10);
        local_c = local_8;
        FUN_006ae140(puVar5,uVar12,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar12) {
              FUN_006acc70((int)puVar5,local_2c,&local_10);
              if (local_8 != 1000000000) {
                uVar12 = 0;
                uVar13 = local_10[3];
                if (0 < (int)uVar13) {
                  do {
                    FUN_006acc70((int)local_10,uVar12,(undefined4 *)&local_3c);
                    if (local_3c == local_4c) {
                      FUN_006b0c70((int)local_10,uVar12);
                      puVar5 = local_44;
                      break;
                    }
                    uVar12 = uVar12 + 1;
                    puVar5 = local_44;
                  } while ((int)uVar12 < (int)uVar13);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar12 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar13 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar12 = 0;
  if (0 < (int)uVar13) {
    do {
      FUN_006acc70((int)puVar5,uVar12,&local_10);
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  FUN_006ae110((byte *)puVar5);
  uVar13 = local_48;
  puVar5 = local_78;
  uVar12 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70((int)puVar5,uVar12,&local_54);
      if (local_54 != (uint *)0x0) {
        FUN_006ae110((byte *)local_54);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar13);
  }
  FUN_006ae110((byte *)puVar5);
  DAT_00858df8 = (undefined4 *)local_c8;
  return local_70;
}

