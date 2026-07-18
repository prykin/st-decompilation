
uint * FUN_00442e50(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_ESI;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  void *unaff_EDI;
  short *psVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined4 local_19c [17];
  short local_158 [3];
  int local_152;
  short local_14e;
  short local_14c;
  short local_14a;
  int local_148;
  int local_13e;
  int local_13a;
  undefined4 local_114;
  undefined4 local_110 [16];
  int local_d0 [6];
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  short local_aa;
  short local_a2;
  int local_94;
  int local_90;
  uint local_88;
  int local_84;
  short local_80;
  short local_7e;
  undefined2 local_7c;
  int local_7a;
  int local_76;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint *local_4c;
  uint *local_48;
  uint local_44;
  int *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  int *local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  uint local_8;
  
  local_d0[4] = 4;
  local_d0[0] = 0x38;
  local_d0[1] = 0x39;
  local_d0[2] = 0x4f;
  local_d0[3] = 0x5e;
  local_84 = 0;
  local_4c = (uint *)0x0;
  local_114 = DAT_00858df8;
  DAT_00858df8 = &local_114;
  iVar4 = __setjmp3(local_110,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_114;
    if (iVar4 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ed,0,iVar4,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar1)();
        return puVar5;
      }
      FUN_006a5e40(iVar4,0,0x7a6004,0x25ee);
    }
    return local_4c;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    uVar10 = *(uint *)(param_3 + 0xc);
    local_3c = uVar10;
    if (((uVar10 != 0) && (local_2c = *(uint *)(param_4 + 0xc), *(uint *)(param_4 + 0xc) != 0)) &&
       (local_38 = *(uint *)(param_5 + 0xc), *(uint *)(param_5 + 0xc) != 0)) goto LAB_00442f1f;
  }
  uVar10 = local_3c;
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x24ce);
LAB_00442f1f:
  iVar4 = 0;
  if (0 < local_d0[4]) {
    piVar7 = local_d0;
    do {
      if (param_2 == *piVar7) {
        local_84 = *(int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar4 * 4);
        break;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 < local_d0[4]);
  }
  if ((local_84 == 0) || (local_28 = *(int *)(local_84 + 0xc), local_28 == 0)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x24d1);
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      FUN_006acc70(param_3,uVar9,&local_8);
      if ((short)local_8 != -1) break;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  if (uVar9 == uVar10) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x24e2);
  }
  piVar7 = local_40;
  uVar10 = 0;
  if (0 < (int)local_2c) {
    do {
      FUN_006acc70(param_4,uVar10,&local_8);
      if ((piVar7 != (int *)0x0) && ((short)local_8 != -1)) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_2c);
  }
  if (uVar10 == local_2c) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x24f4);
  }
  uVar10 = 0;
  if (0 < (int)local_38) {
    do {
      FUN_006acc70(param_5,uVar10,&local_8);
      if ((short)local_8 != -1) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_38);
  }
  if (uVar10 == local_38) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2507);
  }
  local_34 = FUN_006ae290((uint *)0x0,0,0x24,1);
  uVar10 = 0;
  if (0 < (int)local_28) {
    do {
      FUN_006acc70(local_84,uVar10,(undefined4 *)&local_70);
      if ((local_6a != -1) && (local_62 != -1)) {
        bVar2 = false;
        uVar9 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70(param_3,uVar9,&local_8);
            if (local_6a == (short)local_8) {
              bVar2 = true;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)local_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar9 = 0;
          if (0 < (int)local_2c) {
            do {
              FUN_006acc70(param_4,uVar9,&local_8);
              if (local_62 == (short)local_8) {
                bVar2 = true;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)local_2c);
          }
          if (bVar2) {
            FUN_006ae1c0(local_34,(undefined4 *)&local_70);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_28);
  }
  if (local_34[3] == 0) {
    FUN_006ae110((byte *)local_34);
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2522,0,0,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2524);
  }
  local_20 = FUN_006ae290((uint *)0x0,local_3c,6,1);
  local_30 = FUN_006ae290((uint *)0x0,local_2c,6,1);
  iVar4 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  local_d0[5] = iVar4;
  if (iVar4 == 0) {
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x252c,0,0,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x252d);
  }
  uVar10 = *(uint *)(iVar4 + 0xc);
  local_24 = 0;
  local_28 = uVar10;
  if (0 < (int)uVar10) {
    do {
      uVar9 = local_24;
      FUN_006acc70(iVar4,local_24,&local_1c);
      if ((local_1c != (int *)0x0) && (iVar6 = (**(code **)(*local_1c + 0xc))(), iVar6 == 8)) {
        local_48 = thunk_FUN_004233e0((int)local_1c);
        local_b8 = local_48[3];
        if ((local_b8 != 0) && (local_44 = 0, 0 < (int)local_b8)) {
LAB_0044326c:
          uVar10 = local_38;
          FUN_006acc70((int)local_48,local_44,&local_8);
          if ((short)local_8 != -1) {
            piVar7 = (int *)thunk_FUN_0042b620(param_1,local_8,1);
            local_40 = piVar7;
            if (piVar7 == (int *)0x0) {
              iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2539,0,0,&DAT_007a4ccc
                                  );
              if (iVar4 != 0) {
                pcVar1 = (code *)swi(3);
                puVar5 = (uint *)(*pcVar1)();
                return puVar5;
              }
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x253a);
            }
            iVar4 = (**(code **)(*piVar7 + 0x2c))();
            if ((((iVar4 != 8) && (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 != 0x14)) &&
                (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 != 0x1a)) ||
               (iVar4 = thunk_FUN_0045ff10((int)piVar7), iVar4 != 0xc)) goto LAB_004435cd;
            uVar9 = 0;
            if (0 < (int)uVar10) {
              do {
                FUN_006acc70(param_5,uVar9,(undefined4 *)&local_12);
                if ((short)local_8 == local_12) break;
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar10);
            }
            if ((int)uVar9 < (int)uVar10) goto LAB_004435cd;
            uVar15 = thunk_FUN_0048dc90(piVar7,local_19c);
            iVar4 = (int)((ulonglong)uVar15 >> 0x20);
            psVar11 = (short *)uVar15;
            psVar13 = local_158;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)psVar13 = *(undefined4 *)psVar11;
              psVar11 = psVar11 + 2;
              psVar13 = psVar13 + 2;
            }
            *psVar13 = *psVar11;
            uVar10 = local_3c;
            if ((local_152 == -1) || (local_148 == -1)) goto LAB_004435cd;
            if ((((local_158[0] < 0) ||
                 ((DAT_007fb240 <= local_158[0] ||
                  (iVar4 = CONCAT22((short)((ulonglong)uVar15 >> 0x30),local_158[1]),
                  local_158[1] < 0)))) || (DAT_007fb242 <= local_158[1])) ||
               ((local_158[2] < 0 || (DAT_007fb244 <= local_158[2])))) {
              local_40 = (int *)0x0;
            }
            else {
              local_40 = *(int **)(DAT_007fb248 +
                                  ((int)local_158[2] * (int)DAT_007fb246 +
                                   (int)local_158[1] * (int)DAT_007fb240 + (int)local_158[0]) * 8);
              iVar4 = DAT_007fb248;
            }
            uVar8 = (undefined2)((uint)iVar4 >> 0x10);
            if (local_40 == (int *)0x0) goto LAB_004435cd;
            local_8 = CONCAT22((short)((uint)local_40 >> 0x10),*(undefined2 *)((int)local_40 + 0x32)
                              );
            uVar9 = 0;
            if (0 < (int)local_3c) {
              do {
                FUN_006acc70(param_3,uVar9,(undefined4 *)&local_12);
                iVar4 = local_13e;
                uVar8 = extraout_var;
                if ((short)local_8 == local_12) {
                  uVar10 = local_20[3];
                  if (uVar10 == 0) {
                    uVar9 = 0;
                    local_10 = (short)local_8;
                    goto LAB_0044349d;
                  }
                  uVar9 = 0;
                  if ((int)uVar10 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar10);
            }
            goto LAB_004434a2;
          }
          goto LAB_004435cd;
        }
LAB_004435f1:
        FUN_006ae110((byte *)local_48);
      }
      local_24 = uVar9 + 1;
    } while ((int)local_24 < (int)uVar10);
  }
  local_24 = 0;
  if (0 < (int)local_3c) {
    do {
      FUN_006acc70(param_3,local_24,&local_8);
      puVar5 = local_20;
      sVar3 = (short)local_8;
      if (sVar3 != -1) {
        uVar9 = 0;
        uVar10 = local_20[3];
        local_28 = uVar10;
        if (uVar10 != 0) {
          if (0 < (int)uVar10) {
            do {
              FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&local_10);
              sVar3 = (short)local_8;
              if (local_10 == sVar3) break;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
          if (uVar9 != uVar10) goto LAB_00443676;
        }
        local_10 = sVar3;
        local_e = 0;
        FUN_006ae1c0(puVar5,(undefined4 *)&local_10);
      }
LAB_00443676:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_3c);
  }
  local_24 = 0;
  if (0 < (int)local_2c) {
    do {
      FUN_006acc70(param_4,local_24,&local_8);
      puVar5 = local_30;
      sVar3 = (short)local_8;
      if (sVar3 != -1) {
        uVar9 = 0;
        uVar10 = local_30[3];
        local_28 = uVar10;
        if (uVar10 != 0) {
          if (0 < (int)uVar10) {
            do {
              FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&local_10);
              sVar3 = (short)local_8;
              if (local_10 == sVar3) break;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar10);
          }
          if (uVar9 != uVar10) goto LAB_004436f7;
        }
        local_10 = sVar3;
        local_e = 0;
        FUN_006ae1c0(puVar5,(undefined4 *)&local_10);
      }
LAB_004436f7:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_2c);
  }
  uVar10 = 0;
  local_28 = local_34[3];
  if (0 < (int)local_28) {
    do {
      FUN_006acc70((int)local_34,uVar10,(undefined4 *)&local_70);
      uVar12 = 0;
      uVar9 = local_20[3];
      local_3c = uVar9;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)local_20,uVar12,(undefined4 *)&local_10);
          if (local_10 == local_6a) {
            local_54 = local_e;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar9);
      }
      if (uVar12 == uVar9) {
        iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25a4,0,0,&DAT_007a4ccc);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar1)();
          return puVar5;
        }
        FUN_006a5e40(-0x5001fff8,DAT_007ed77c,0x7a6004,0x25a5);
      }
      uVar12 = 0;
      uVar9 = local_30[3];
      local_2c = uVar9;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)local_30,uVar12,(undefined4 *)&local_10);
          if (local_10 == local_62) {
            local_50 = local_e;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar9);
      }
      if (uVar12 == uVar9) {
        iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ad,0,0,&DAT_007a4ccc);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar5 = (uint *)(*pcVar1)();
          return puVar5;
        }
        FUN_006a5e40(-0x5001fff8,DAT_007ed77c,0x7a6004,0x25ae);
      }
      FUN_006ae140(local_34,uVar10,(undefined4 *)&local_70);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_28);
  }
  FUN_006ae110((byte *)local_20);
  FUN_006ae110((byte *)local_30);
  uVar10 = local_38;
  uVar12 = 0;
  uVar9 = 0;
  local_30 = (uint *)0x0;
  puVar5 = local_30;
  if (0 < (int)local_38) {
    do {
      FUN_006acc70(param_5,uVar9,&local_8);
      if ((short)local_8 != -1) {
        uVar12 = uVar12 + 1;
      }
      uVar9 = uVar9 + 1;
      puVar5 = (uint *)uVar12;
    } while ((int)uVar9 < (int)uVar10);
  }
  local_30 = puVar5;
  puVar5 = local_30;
  local_20 = FUN_006ae290((uint *)0x0,(uint)local_30,0x24,1);
  puVar14 = local_34;
  if (0 < (int)puVar5) {
    do {
      local_44 = (uint)puVar5;
      uVar10 = 0;
      local_48 = (uint *)0x5f5e100;
      if (0 < (int)local_28) {
        do {
          FUN_006acc70((int)puVar14,uVar10,(undefined4 *)&local_70);
          if (local_5c + local_54 < 0x65) {
            iVar4 = 0;
          }
          else {
            iVar4 = ((local_5c + local_54 + -100) * local_60) / 100;
          }
          if (local_58 + local_50 < 0x65) {
            local_88 = 0;
          }
          else {
            local_88 = ((local_58 + local_50 + -100) * local_60) / 100;
          }
          puVar5 = (uint *)(local_88 + local_60 + iVar4);
          if ((int)puVar5 < (int)local_48) {
            local_b4 = uVar10;
            local_48 = puVar5;
          }
          uVar10 = uVar10 + 1;
          puVar14 = local_34;
        } while ((int)uVar10 < (int)local_28);
      }
      uVar9 = local_28;
      uVar10 = local_b4;
      FUN_006acc70((int)puVar14,local_b4,(undefined4 *)&local_70);
      local_54 = local_54 + local_5c;
      local_50 = local_50 + local_58;
      FUN_006ae140(puVar14,uVar10,(undefined4 *)&local_70);
      FUN_006ae1c0(local_20,(undefined4 *)&local_70);
      uVar10 = 0;
      if (0 < (int)uVar9) {
        do {
          FUN_006acc70((int)puVar14,uVar10,&local_b0);
          if (local_aa == local_6a) {
            local_94 = local_54;
          }
          if (local_a2 == local_62) {
            local_90 = local_50;
          }
          if (local_a2 == local_62 || local_aa == local_6a) {
            FUN_006ae140(puVar14,uVar10,&local_b0);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
      }
      puVar5 = (uint *)(local_44 - 1);
    } while (local_44 - 1 != 0);
    local_44 = 0;
  }
  FUN_006ae110((byte *)puVar14);
  uVar10 = local_38;
  puVar5 = FUN_006ae290((uint *)0x0,local_38,2,1);
  uVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      FUN_006acc70(param_5,uVar9,&local_8);
      FUN_006ae140(puVar5,uVar9,&local_8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  puVar14 = local_30;
  local_4c = FUN_006ae290((uint *)0x0,(uint)local_30,0xe,1);
  local_24 = 0;
  if (0 < (int)puVar14) {
    do {
      FUN_006acc70((int)local_20,local_24,(undefined4 *)&local_70);
      uVar10 = 0;
      iVar4 = 100000000;
      if (0 < (int)local_38) {
        do {
          FUN_006acc70((int)puVar5,uVar10,&local_8);
          if ((short)local_8 != -1) {
            local_40 = (int *)thunk_FUN_0042b620(param_1,local_8,1);
            thunk_FUN_004162b0(local_40,&local_18,&local_14,&local_16);
            iVar6 = FUN_006aadd0((int)local_18,(int)local_14,(int)local_16,(int)local_70,
                                 (int)local_6e,(int)local_6c);
            if (iVar6 < iVar4) {
              iVar4 = iVar6;
              local_88 = uVar10;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)local_38);
      }
      uVar10 = local_88;
      FUN_006acc70((int)puVar5,local_88,&local_8);
      local_80 = local_6a;
      local_7c = (short)local_8;
      local_7a = local_5c;
      local_7e = local_62;
      local_76 = local_58;
      FUN_006ae1c0(local_4c,(undefined4 *)&local_80);
      local_8 = 0xffff;
      FUN_006ae140(puVar5,uVar10,&local_8);
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_30);
  }
  FUN_006ae110((byte *)puVar5);
  FUN_006ae110((byte *)local_20);
  DAT_00858df8 = (undefined4 *)local_114;
  return local_4c;
  while (uVar9 = uVar9 + 1, uVar8 = extraout_var_00, (int)uVar9 < (int)uVar10) {
LAB_0044343c:
    FUN_006acc70((int)local_20,uVar9,(undefined4 *)&local_10);
    if (local_10 == (short)local_8) {
      local_e = local_e + iVar4;
      FUN_006ae140(local_20,uVar9,(undefined4 *)&local_10);
      uVar8 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar9 == uVar10) {
    local_10 = (short)local_8;
LAB_0044349d:
    local_e = iVar4;
    FUN_006ae140(local_20,uVar9,(undefined4 *)&local_10);
    uVar8 = extraout_var_02;
  }
LAB_004434a2:
  uVar10 = local_2c;
  iVar4 = CONCAT22(uVar8,local_14e);
  if ((((local_14e < 0) || (DAT_007fb240 <= local_14e)) || (local_14c < 0)) ||
     (((DAT_007fb242 <= local_14c || (local_14a < 0)) || (DAT_007fb244 <= local_14a)))) {
    local_40 = (int *)0x0;
  }
  else {
    iVar4 = (int)local_14e;
    local_40 = *(int **)(DAT_007fb248 +
                        ((int)local_14a * (int)DAT_007fb246 + (int)local_14c * (int)DAT_007fb240 +
                        iVar4) * 8);
  }
  if (local_40 != (int *)0x0) {
    local_8 = CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)((int)local_40 + 0x32));
    uVar9 = 0;
    if (0 < (int)local_2c) {
      do {
        FUN_006acc70(param_4,uVar9,(undefined4 *)&local_12);
        puVar5 = local_30;
        sVar3 = (short)local_8;
        if (sVar3 == local_12) {
          uVar10 = local_30[3];
          if (uVar10 == 0) {
            uVar9 = 0;
            goto LAB_004435c8;
          }
          uVar9 = 0;
          if ((int)uVar10 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
  }
LAB_004435cd:
  local_44 = local_44 + 1;
  uVar10 = local_28;
  iVar4 = local_d0[5];
  uVar9 = local_24;
  if ((int)local_b8 <= (int)local_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar9 = uVar9 + 1, (int)uVar9 < (int)uVar10) {
LAB_0044355f:
    FUN_006acc70((int)puVar5,uVar9,(undefined4 *)&local_10);
    sVar3 = (short)local_8;
    if (local_10 == sVar3) {
      local_e = local_e + local_13a;
      FUN_006ae140(puVar5,uVar9,(undefined4 *)&local_10);
      sVar3 = (short)local_8;
      break;
    }
  }
LAB_00443598:
  if (uVar9 == uVar10) {
LAB_004435c8:
    local_10 = sVar3;
    local_e = local_13a;
    FUN_006ae140(local_30,uVar9,(undefined4 *)&local_10);
  }
  goto LAB_004435cd;
}

