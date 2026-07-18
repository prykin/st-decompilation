
uint * thunk_FUN_00683c70(uint *param_1,char *param_2,undefined4 *param_3,int *param_4,
                         undefined *param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined2 extraout_var_08;
  undefined4 *puVar7;
  char *pcVar8;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar9;
  uint uVar10;
  void *this;
  void *this_00;
  void *this_01;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_02;
  void *this_03;
  int iVar11;
  int iVar12;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 uVar13;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined4 unaff_ESI;
  void *pvVar14;
  void *unaff_EDI;
  undefined4 **ppuVar15;
  uint *puVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int *piVar19;
  float10 fVar20;
  byte *pbVar21;
  uint *puVar22;
  undefined4 uVar23;
  byte abStack_8ec [256];
  byte abStack_7ec [256];
  char acStack_6ec [260];
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  char acStack_5d8 [260];
  undefined4 uStack_4d4;
  byte abStack_4cc [260];
  byte abStack_3c8 [256];
  char acStack_2c8 [260];
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined1 uStack_1c2;
  undefined4 uStack_1c1;
  undefined4 uStack_1bd;
  undefined4 uStack_1b9;
  undefined4 uStack_1b5;
  undefined1 uStack_1b1;
  undefined4 uStack_1b0;
  undefined4 auStack_1ac [16];
  undefined4 uStack_16c;
  undefined4 auStack_168 [16];
  undefined4 auStack_128 [3];
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined1 uStack_114;
  char acStack_113 [23];
  undefined4 *puStack_fc;
  int iStack_f8;
  undefined4 *puStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint *puStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint *puStack_a8;
  byte abStack_a4 [4];
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_9a;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined2 uStack_81;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined2 uStack_79;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined2 uStack_69;
  undefined1 uStack_64;
  undefined2 uStack_63;
  undefined2 uStack_61;
  undefined1 uStack_5c;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_54;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined1 uStack_4c;
  undefined2 uStack_4b;
  undefined2 uStack_49;
  undefined1 uStack_44;
  undefined2 uStack_43;
  undefined2 uStack_41;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  byte *pbStack_2c;
  byte *pbStack_28;
  byte *pbStack_24;
  byte *pbStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  byte *pbStack_c;
  char cStack_5;
  
  iStack_30 = 1;
  pbStack_28 = (byte *)0x0;
  pbStack_2c = (byte *)0x0;
  pbStack_24 = (byte *)0x0;
  pbStack_20 = (byte *)0x0;
  pbStack_c = (byte *)0x0;
  uVar9 = 0xffffffff;
  pcVar8 = &DAT_008016a0;
  do {
    pcVar18 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar18;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar8 = pcVar18 + -uVar9;
  pcVar18 = (char *)&DAT_008488b4;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uStack_1b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_1b0;
  iVar4 = __setjmp3(auStack_1ac,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (param_1 == (uint *)0x0) {
      FUN_006a5e40(-6,DAT_007ed77c,0x7d5604,0x43a);
    }
    thunk_FUN_00672b60((char *)param_1,&PTR_LAB_007d3fa8);
    DAT_00858df8 = &uStack_16c;
    uStack_16c = uStack_1b0;
    iVar4 = __setjmp3(auStack_168,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      thunk_FUN_006729b0(this,1);
      thunk_FUN_006729f0(this_00,0);
      thunk_FUN_00672930(1);
      thunk_FUN_00672970(this_01,1);
      thunk_FUN_006728f0((undefined4 *)&DAT_007d3f78);
      DAT_008489d0 = (undefined4 *)0x0;
      DAT_008489b4 = (uint *)0x0;
      DAT_008489b8 = (uint *)0x0;
      DAT_008489bc = (uint *)0x0;
      DAT_008489c0 = 0;
      DAT_008489c4 = (uint *)0x0;
      DAT_008489c8 = (uint *)0x0;
      DAT_008489cc = (undefined4 *)0x0;
      DAT_008489d4 = (uint *)0x0;
      DAT_008489d8 = (uint *)0x0;
      DAT_008489dc = (uint *)0x0;
      thunk_FUN_00680530();
      thunk_FUN_00680310();
      DAT_007d3fa4 = 1;
      puVar7 = &DAT_00811a90;
      for (iVar4 = 0xac5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      DAT_008488b0 = 0;
      DAT_00811a90 = 0;
      DAT_00811a98 = 0;
      thunk_FUN_00680040();
      if (param_2 == (char *)0x0) {
        FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0x467);
      }
      iVar4 = thunk_FUN_0067f030((byte *)s__main_path_007d5674,param_2,(uint *)0x0);
      if (iVar4 == 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x468);
      }
      iVar4 = thunk_FUN_0067f030((byte *)s__inc_path_007d5668,param_2 + 0x104,(uint *)0x0);
      if (iVar4 == 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x469);
      }
      iVar4 = thunk_FUN_0067f030((byte *)s__maps_path_007d5658,param_2 + 0x208,(uint *)0x0);
      if (iVar4 == 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x46a);
      }
      uVar9 = thunk_FUN_0067f740((byte *)s__env_var0_007d564c,*(undefined4 *)(param_2 + 0x30c));
      if ((int)uVar9 < 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x46b);
      }
      uVar9 = thunk_FUN_0067f740((byte *)s__env_var1_007d5640,*(undefined4 *)(param_2 + 0x310));
      if ((int)uVar9 < 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x46c);
      }
      uVar9 = thunk_FUN_0067f740((byte *)s__env_var2_007d5634,*(undefined4 *)(param_2 + 0x314));
      if ((int)uVar9 < 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x46d);
      }
      GetFullPathNameA((LPCSTR)param_1,0x104,(LPSTR)abStack_4cc,(LPSTR *)0x0);
      FUN_0072e730(abStack_4cc,abStack_a4,abStack_7ec,abStack_8ec,abStack_3c8);
      __makepath((char *)abStack_4cc,(char *)abStack_a4,(char *)abStack_7ec,(char *)0x0,(char *)0x0)
      ;
      iVar4 = thunk_FUN_0067f030((byte *)s__curr_path_007d55f4,(char *)abStack_4cc,(uint *)0x0);
      if (iVar4 == 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x471);
      }
      pbVar21 = abStack_4cc;
      puVar22 = (uint *)0x0;
      pbVar5 = thunk_FUN_0067ece0(DAT_00848a24);
      iVar4 = thunk_FUN_0067f030(pbVar5,(char *)pbVar21,puVar22);
      if (iVar4 == 0) {
        FUN_006a5e40(-2,DAT_007ed77c,0x7d5604,0x472);
      }
switchD_006841b6_default:
      if (iStack_30 != 0) {
        iVar4 = thunk_FUN_006736f0();
        if (iVar4 < 0) {
          FUN_006a5e40(iVar4,DAT_007ed77c,0x7d5604,0x477);
        }
      }
      if (param_5 != (undefined *)0x0) {
        ppuVar15 = &puStack_fc;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppuVar15 = (undefined4 *)0x0;
          ppuVar15 = ppuVar15 + 1;
        }
        iStack_f8 = DAT_00857554;
        FUN_0072e730((byte *)DAT_0085753c,(byte *)0x0,(byte *)0x0,(byte *)0x0,abStack_3c8);
        if (abStack_3c8[0] == 0) {
          if (param_1 != (uint *)0x0) {
            uVar9 = 0xffffffff;
            puVar22 = param_1;
            do {
              puVar16 = puVar22;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              puVar16 = (uint *)((int)puVar22 + 1);
              uVar10 = *puVar22;
              puVar22 = puVar16;
            } while ((char)uVar10 != '\0');
            uVar9 = ~uVar9;
            puVar7 = (undefined4 *)((int)puVar16 - uVar9);
            puVar17 = &DAT_0084790c;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar17 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar17 = puVar17 + 1;
            }
            goto LAB_006840bc;
          }
        }
        else if (DAT_0085753c != (uint *)0x0) {
          uVar9 = 0xffffffff;
          puVar22 = DAT_0085753c;
          do {
            puVar16 = puVar22;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            puVar16 = (uint *)((int)puVar22 + 1);
            uVar10 = *puVar22;
            puVar22 = puVar16;
          } while ((byte)uVar10 != 0);
          uVar9 = ~uVar9;
          puVar7 = (undefined4 *)((int)puVar16 - uVar9);
          puVar17 = &DAT_0084790c;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar17 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar17 = puVar17 + 1;
          }
LAB_006840bc:
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar17 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
        }
        puStack_fc = &DAT_0084790c;
        _strncpy((char *)&DAT_00847d0c,DAT_0085755c,0x3fe);
        puStack_f4 = &DAT_00847d0c;
        if (DAT_008489d0 != (undefined4 *)0x0) {
          uStack_e8 = DAT_00848a0c;
          uStack_ec = DAT_00848a10;
          if ((char *)((int)DAT_008489d0 + 0x231) != (char *)0x0) {
            uVar9 = 0xffffffff;
            pcVar8 = (char *)((int)DAT_008489d0 + 0x231);
            do {
              pcVar18 = pcVar8;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar18 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar18;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar8 = pcVar18 + -uVar9;
            pcVar18 = (char *)&DAT_0084810c;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar18 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar18 = pcVar18 + 1;
            }
          }
          puStack_f0 = &DAT_0084810c;
        }
        iVar4 = (*(code *)param_5)(&puStack_fc);
        if (iVar4 != 0) {
          FUN_006a5e40(-0x65,DAT_007ed77c,0x7d5604,0x48a);
        }
      }
      iStack_30 = 1;
      if (DAT_007d2d18 == 0x1c) {
        puVar22 = param_1;
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 6;
        }
LAB_0068a687:
        if (puVar22 == (uint *)0x0) {
          FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x9dd);
        }
        thunk_FUN_006484f0((int *)&DAT_008489b4);
        thunk_FUN_0067d160((int *)&DAT_008489b8);
        thunk_FUN_0065d0f0((int *)&DAT_008489bc);
        thunk_FUN_00691540((int *)&DAT_008489c8);
        thunk_FUN_006686c0((int *)&DAT_008489c4);
        thunk_FUN_0065d1f0((int *)&DAT_008489cc);
        if (DAT_008489d4 != (uint *)0x0) {
          FUN_006ae110((byte *)DAT_008489d4);
          DAT_008489d4 = (uint *)0x0;
        }
        if (DAT_008489dc != (uint *)0x0) {
          FUN_006b5570((byte *)DAT_008489dc);
          DAT_008489dc = (uint *)0x0;
        }
        thunk_FUN_00680070();
        thunk_FUN_0064a800(&DAT_00848a14);
        bVar3 = thunk_FUN_00672f00();
        iVar4 = CONCAT31(extraout_var_04,bVar3);
        while (iVar4 != 0) {
          bVar3 = thunk_FUN_00672f00();
          iVar4 = CONCAT31(extraout_var_05,bVar3);
        }
        thunk_FUN_006807d0(&DAT_008489d0);
        DAT_00858df8 = (undefined4 *)uStack_16c;
        return puVar22;
      }
      switch((&DAT_00811a90)[DAT_008488b0 * 0xac5]) {
      case 0:
        if (DAT_007d2d18 == 0x3b7) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            FUN_006a5e40(-0x6e,DAT_007ed77c,0x7d5604,0x494);
          }
          iVar11 = DAT_008488b0;
          iVar4 = DAT_008488b0 * 0x2b14;
          *(undefined4 *)(&DAT_008143f4 + (&DAT_0081458c)[DAT_008488b0 * 0xac5] * 8 + iVar4) = 1;
          iVar4 = iVar4 + (&DAT_0081458c)[iVar11 * 0xac5] * 8;
          pvVar14 = *(void **)(&DAT_008143f4 + iVar4);
          if (((pvVar14 == (void *)0x0) && (*(int *)(&DAT_008143f8 + iVar4) == 0)) ||
             ((pvVar14 == (void *)0x1 && (*(int *)(&DAT_008143f8 + iVar4) != 0)))) {
            thunk_FUN_00672ab0(pvVar14,1);
            bVar2 = 1;
            pvVar14 = extraout_ECX_00;
          }
          else {
LAB_006842cf:
            thunk_FUN_00672ab0(pvVar14,0);
            bVar2 = 0;
            pvVar14 = extraout_ECX_01;
          }
LAB_006842d6:
          thunk_FUN_00672af0(pvVar14,bVar2);
        }
        else if (DAT_007d2d18 == 0x3b8) {
          if ((int)(&DAT_0081458c)[DAT_008488b0 * 0xac5] < 1) {
            FUN_006a5e40(-0x6e,DAT_007ed77c,0x7d5604,0x49f);
          }
          iVar4 = DAT_008488b0 * 0x2b14;
          pvVar14 = (void *)((&DAT_0081458c)[DAT_008488b0 * 0xac5] + -1);
          (&DAT_0081458c)[DAT_008488b0 * 0xac5] = pvVar14;
          if (((int)pvVar14 < 1) ||
             (((*(int *)(&DAT_008143f4 + (int)pvVar14 * 8 + iVar4) != 0 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar14 * 8 + iVar4) != 0)) &&
              ((*(int *)(&DAT_008143f4 + (int)pvVar14 * 8 + iVar4) != 1 ||
               (*(int *)(&DAT_008143f8 + (int)pvVar14 * 8 + iVar4) == 0)))))) goto LAB_006842cf;
          thunk_FUN_00672ab0(pvVar14,1);
          bVar2 = 1;
          pvVar14 = extraout_ECX;
          goto LAB_006842d6;
        }
        iVar11 = DAT_008488b0 * 0x2b14;
        iVar4 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
        if ((iVar4 < 1) ||
           (((*(int *)(&DAT_008143f4 + iVar4 * 8 + iVar11) != 0 ||
             (*(int *)(&DAT_008143f8 + iVar4 * 8 + iVar11) != 0)) &&
            ((*(int *)(&DAT_008143f4 + iVar4 * 8 + iVar11) != 1 ||
             (*(int *)(&DAT_008143f8 + iVar4 * 8 + iVar11) == 0)))))) {
          if (DAT_007d2d18 < 0x475) {
            if (DAT_007d2d18 < 0x456) {
              if (0x3ed < DAT_007d2d18) {
                switch(DAT_007d2d18) {
                case 0x3f2:
                case 0x3f3:
                case 0x3fc:
                case 0x3fd:
                case 0x406:
                case 0x407:
                case 0x408:
                case 0x409:
                case 0x41a:
                case 0x41b:
                case 0x424:
                case 0x425:
                case 0x426:
                case 0x427:
                case 0x428:
                case 0x429:
                case 0x42a:
                case 0x42b:
                case 0x42c:
                case 0x42d:
                case 0x42e:
                case 0x42f:
                case 0x430:
                case 0x431:
                case 0x432:
                case 0x44c:
                case 0x44d:
                  goto switchD_00684bb9_caseD_3f2;
                default:
                  goto switchD_006841b6_default;
                }
              }
              if (DAT_007d2d18 < 1000) {
                if (DAT_007d2d18 < 0x24) {
                  if (DAT_007d2d18 != 0x23) {
                    if (DAT_007d2d18 == 0x19) {
                      iVar4 = thunk_FUN_00683670();
                      if (iVar4 == 0) {
                        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x5a1);
                      }
                      if (DAT_008489cc == (undefined4 *)0x0) {
                        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x5a2);
                      }
                      iVar11 = DAT_008488b0 + 1;
                      puVar7 = &DAT_00811a90 + iVar11 * 0xac5;
                      DAT_008488b0 = iVar11;
                      for (iVar6 = 0xac5; pbVar21 = DAT_00857528, iVar12 = DAT_007d2d18, iVar6 != 0;
                          iVar6 = iVar6 + -1) {
                        *puVar7 = 0;
                        puVar7 = puVar7 + 1;
                      }
                      (&DAT_00811a90)[iVar11 * 0xac5] = 4;
                      (&DAT_00811a94)[iVar11 * 0xac5] = iVar12;
                      pcVar8 = _strncpy((char *)(&DAT_00811aa4 + iVar11 * 0xac5),(char *)pbVar21,
                                        0x3f);
                      uStack_bc = CONCAT22((short)((uint)pcVar8 >> 0x10),
                                           *(undefined2 *)(iVar4 + 0x472));
                      iStack_d0 = *(int *)(*(int *)((int)DAT_008489cc + 0xf) + 0xc) + 1;
                      iVar11 = thunk_FUN_006838b0((int *)(iVar4 + 0x46e),'\x02',(byte *)&iStack_d0,
                                                  *(int *)(iVar4 + 0x456));
                      uStack_4c = 0xb;
                      uStack_4b = 0x19;
                      uStack_49 = 1;
                      (&DAT_00814590)[DAT_008488b0 * 0xac5] = iVar11;
                      thunk_FUN_0064a830((int *)(iVar4 + 0x46e),(undefined4 *)&uStack_4c);
                      FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_bc);
                    }
                    else if (DAT_007d2d18 == 0x1a) {
                      if (DAT_008488b0 < 2) {
                        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x5ba);
                      }
                      DAT_008488b0 = DAT_008488b0 + -1;
                      iVar4 = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
                      if (iVar4 < 0x43) {
                        if (iVar4 == 0x42) {
                          iVar4 = thunk_FUN_00683670();
                          if (iVar4 == 0) {
                            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x60c);
                          }
                          if (DAT_008489cc == (undefined4 *)0x0) {
                            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x60d);
                          }
                          uStack_c8 = *(undefined4 *)(iVar4 + 0x472);
                          piVar19 = (int *)(iVar4 + 0x46e);
                          thunk_FUN_006838b0(piVar19,'\x02',
                                             (byte *)(&DAT_00814594 + DAT_008488b0 * 0xac5),
                                             *(int *)(iVar4 + 0x456));
                          uStack_5c = 0xb;
                          uStack_5b = 0x21;
                          uStack_59 = 1;
                          thunk_FUN_0064a830(piVar19,(undefined4 *)&uStack_5c);
                          FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_c8);
                          iVar4 = thunk_FUN_0064a910((int)piVar19,
                                                     (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                          if (iVar4 == 0) {
                            FUN_006a5e40(-0x6c,DAT_007ed77c,0x7d5604,0x61a);
                          }
                          *(undefined4 *)(iVar4 + 1) =
                               *(undefined4 *)(*(int *)((int)DAT_008489cc + 0xf) + 0xc);
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                        else {
                          if (iVar4 == 0x19) {
                            iVar4 = thunk_FUN_00683670();
                            if (iVar4 == 0) {
                              FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x5fc);
                            }
                            if (DAT_008489cc == (undefined4 *)0x0) {
                              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x5fd);
                            }
                            uStack_c0 = *(undefined4 *)(iVar4 + 0x472);
                            uStack_6c = 0xb;
                            uStack_6b = 0x323;
                            uStack_69 = 0;
                            thunk_FUN_0064a830((int *)(iVar4 + 0x46e),(undefined4 *)&uStack_6c);
                            FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_c0);
                            iVar4 = thunk_FUN_0064a910(iVar4 + 0x46e,
                                                       (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (iVar4 == 0) {
                              uVar23 = 0x607;
LAB_00684777:
                              FUN_006a5e40(-0x6c,DAT_007ed77c,0x7d5604,uVar23);
                            }
                          }
                          else {
                            if (iVar4 != 0x23) goto LAB_00684989;
                            iVar4 = thunk_FUN_00683670();
                            if (iVar4 == 0) {
                              FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x5ec);
                            }
                            if (DAT_008489cc == (undefined4 *)0x0) {
                              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x5ed);
                            }
                            uStack_b8 = *(undefined4 *)(iVar4 + 0x472);
                            uStack_7c = 0xb;
                            uStack_7b = 0x322;
                            uStack_79 = 0;
                            thunk_FUN_0064a830((int *)(iVar4 + 0x46e),(undefined4 *)&uStack_7c);
                            FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_b8);
                            iVar4 = thunk_FUN_0064a910(iVar4 + 0x46e,
                                                       (&DAT_00814590)[DAT_008488b0 * 0xac5]);
                            if (iVar4 == 0) {
                              uVar23 = 0x5f7;
                              goto LAB_00684777;
                            }
                          }
                          *(undefined4 *)(iVar4 + 1) =
                               *(undefined4 *)(*(int *)((int)DAT_008489cc + 0xf) + 0xc);
                          DAT_008488b0 = DAT_008488b0 + -1;
                        }
                      }
                      else {
                        if ((0x455 < iVar4) && (iVar4 < 0x475)) {
                          if (DAT_008489cc == (undefined4 *)0x0) {
                            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x5dc);
                          }
                          iVar4 = thunk_FUN_00683670();
                          if (iVar4 == 0) {
                            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x5dd);
                          }
                          uStack_b4 = *(undefined4 *)(iVar4 + 0x472);
                          uStack_44 = 0xb;
                          uStack_43 = 0x514;
                          uStack_41 = 0;
                          thunk_FUN_0064a830((int *)(iVar4 + 0x46e),(undefined4 *)&uStack_44);
                          FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_b4);
                          FUN_006ae1c0(*(uint **)(iVar4 + 0x462),DAT_008489cc);
                          FUN_006ab060(&DAT_008489cc);
                        }
LAB_00684989:
                        DAT_008488b0 = DAT_008488b0 + -1;
                      }
                    }
                    else if (DAT_007d2d18 == 0x22) {
                      iVar11 = DAT_008488b0 + 1;
                      puVar7 = &DAT_00811a90 + iVar11 * 0xac5;
                      DAT_008488b0 = iVar11;
                      for (iVar4 = 0xac5; pbVar21 = DAT_00857528, iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar7 = 0;
                        puVar7 = puVar7 + 1;
                      }
                      (&DAT_00811a90)[iVar11 * 0xac5] = 1;
                      _strncpy((char *)(&DAT_00811aa4 + iVar11 * 0xac5),(char *)pbVar21,0x3f);
                      bVar2 = thunk_FUN_006800a0(DAT_00857528);
                      iVar4 = DAT_008488b0;
                      (&DAT_00811a9c)[DAT_008488b0 * 0xac5] = CONCAT31(extraout_var,bVar2);
                      if (CONCAT31(extraout_var,bVar2) == 5) {
                        if (DAT_008489cc == (undefined4 *)0x0) {
                          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x4bb);
                        }
                        iVar4 = DAT_008488b0;
                        uVar23 = thunk_FUN_0067ff00((char *)DAT_00857528);
                        (&DAT_00811aa0)[iVar4 * 0xac5] = uVar23;
                      }
                      iVar11 = DAT_008488b0;
                      if ((&DAT_00811a9c)[iVar4 * 0xac5] == 6) {
                        if (DAT_008489cc == (undefined4 *)0x0) {
                          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x4bf);
                        }
                        iVar4 = DAT_008488b0;
                        uVar23 = thunk_FUN_0067ff50((char *)DAT_00857528);
                        iVar11 = DAT_008488b0;
                        (&DAT_00811aa0)[iVar4 * 0xac5] = uVar23;
                      }
                      if ((&DAT_00811a9c)[iVar4 * 0xac5] == 7) {
                        iVar4 = iVar11;
                        if (DAT_008489cc == (undefined4 *)0x0) {
                          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x4c3);
                          iVar4 = DAT_008488b0;
                        }
                        uVar23 = thunk_FUN_0067ffa0((char *)DAT_00857528);
                        (&DAT_00811aa0)[iVar4 * 0xac5] = uVar23;
                      }
                      if ((&DAT_00811a9c)[iVar4 * 0xac5] == 8) {
                        if (DAT_008489cc == (undefined4 *)0x0) {
                          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x4c7);
                        }
                        uVar23 = thunk_FUN_0067fff0((char *)DAT_00857528);
                        (&DAT_00811aa0)[DAT_008488b0 * 0xac5] = uVar23;
                      }
                    }
                    goto switchD_006841b6_default;
                  }
                }
                else if ((DAT_007d2d18 != 0x35) && (DAT_007d2d18 != 0x42)) {
                  if (DAT_007d2d18 == 0x3b6) {
                    if (0x31 < iVar4) {
                      FUN_006a5e40(-0x66,DAT_007ed77c,0x7d5604,0x4cc);
                    }
                    iVar11 = DAT_008488b0;
                    iVar6 = DAT_008488b0 * 0x2b14;
                    iVar4 = (&DAT_0081458c)[DAT_008488b0 * 0xac5];
                    iVar12 = DAT_008488b0 + 1;
                    (&DAT_0081458c)[DAT_008488b0 * 0xac5] = iVar4 + 1;
                    DAT_008488b0 = iVar12;
                    *(undefined4 *)(&DAT_008143f4 + (iVar4 + 1) * 8 + iVar6) = 0;
                    *(undefined4 *)(&DAT_008143f8 + (&DAT_0081458c)[iVar11 * 0xac5] * 8 + iVar6) = 0
                    ;
                    puVar7 = &DAT_00811a90 + iVar12 * 0xac5;
                    for (iVar4 = 0xac5; pbVar21 = DAT_00857528, iVar11 = DAT_007d2d18, iVar4 != 0;
                        iVar4 = iVar4 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    (&DAT_00811a90)[iVar12 * 0xac5] = 2;
                    (&DAT_00811a94)[iVar12 * 0xac5] = iVar11;
                    _strncpy((char *)(&DAT_00811aa4 + iVar12 * 0xac5),(char *)pbVar21,0x3f);
                    DAT_007d3fa4 = 0;
                  }
                  goto switchD_006841b6_default;
                }
              }
            }
          }
          else if (DAT_007d2d18 < 0x57c) {
            if (DAT_007d2d18 < 0x578) {
              switch(DAT_007d2d18) {
              case 0x4b0:
              case 0x4b1:
              case 0x4b2:
              case 0x4b3:
              case 0x4b4:
              case 0x4b5:
              case 0x514:
              case 0x515:
              case 0x516:
              case 0x517:
              case 0x518:
              case 0x519:
              case 0x51a:
              case 0x51b:
              case 0x528:
              case 0x529:
              case 0x52a:
              case 0x532:
              case 0x533:
              case 0x534:
              case 0x535:
              case 0x536:
              case 0x537:
              case 0x546:
              case 0x547:
              case 0x548:
              case 0x549:
              case 0x54a:
              case 0x54b:
              case 0x54c:
              case 0x54d:
              case 0x54e:
              case 0x55a:
              case 0x55b:
              case 0x55c:
              case 0x55d:
              case 0x55e:
              case 0x55f:
              case 0x560:
              case 0x561:
              case 0x562:
              case 0x563:
              case 0x564:
              case 0x565:
              case 0x566:
              case 0x567:
              case 0x568:
              case 0x569:
              case 0x56a:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if (DAT_007d2d18 < 0x5c9) {
            if (DAT_007d2d18 != 0x5c8) {
              switch(DAT_007d2d18) {
              case 0x582:
              case 0x583:
              case 0x584:
              case 0x585:
              case 0x58c:
              case 0x58d:
              case 0x58e:
              case 0x58f:
              case 0x590:
              case 0x591:
              case 0x592:
              case 0x593:
              case 0x594:
              case 0x595:
              case 0x596:
              case 0x597:
              case 0x598:
              case 0x599:
              case 0x59a:
              case 0x59b:
              case 0x59c:
              case 0x59d:
              case 0x5aa:
              case 0x5ab:
              case 0x5ac:
              case 0x5ad:
              case 0x5ae:
              case 0x5af:
              case 0x5b0:
              case 0x5b1:
              case 0x5b2:
              case 0x5b3:
              case 0x5b4:
              case 0x5b5:
              case 0x5b6:
              case 0x5b7:
              case 0x5b8:
              case 0x5b9:
                break;
              default:
                goto switchD_006841b6_default;
              }
            }
          }
          else if ((DAT_007d2d18 < 0x5dc) || ((0x5fe < DAT_007d2d18 && (DAT_007d2d18 != 0x76c))))
          goto switchD_006841b6_default;
switchD_00684bb9_caseD_3f2:
          iVar11 = DAT_008488b0 + 1;
          puVar7 = &DAT_00811a90 + iVar11 * 0xac5;
          DAT_008488b0 = iVar11;
          for (iVar4 = 0xac5; pbVar21 = DAT_00857528, iVar6 = DAT_007d2d18, iVar4 != 0;
              iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          (&DAT_00811a90)[iVar11 * 0xac5] = 2;
          (&DAT_00811a94)[iVar11 * 0xac5] = iVar6;
          _strncpy((char *)(&DAT_00811aa4 + iVar11 * 0xac5),(char *)pbVar21,0x3f);
        }
        goto switchD_006841b6_default;
      case 1:
        if (DAT_007d2d18 != 0x1d) {
          switch(DAT_007d2d18) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            if (DAT_008489cc == (undefined4 *)0x0) {
              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x631);
            }
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar4 != 5) && (iVar4 != 6)) && (iVar4 != 7)) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            break;
          default:
            if (DAT_007d2d18 == 0x29) {
              thunk_FUN_006802a0(-0x7b,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            else {
              thunk_FUN_006826a0(DAT_007d2d18);
            }
            break;
          case 4:
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar4 == 5) || (iVar4 == 6)) || ((iVar4 == 7 || (iVar4 == 8)))) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            break;
          case 5:
            if (DAT_008489cc == (undefined4 *)0x0) {
              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x627);
            }
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar4 != 5) && (iVar4 != 6)) && (iVar4 != 7)) && (iVar4 != 8)) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
          }
          iVar11 = DAT_008488b0 + 1;
          (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
          iVar6 = iVar11 * 0x2b14;
          puVar7 = &DAT_00811a90 + iVar11 * 0xac5;
          DAT_008488b0 = iVar11;
          for (iVar4 = 0xac5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          (&DAT_00811a90)[iVar11 * 0xac5] = 3;
          uVar9 = 0xffffffff;
          (&DAT_00811a94)[iVar11 * 0xac5] = 1;
          pcVar8 = (char *)(iVar6 + 0x80ef90);
          do {
            pcVar18 = pcVar8;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar18 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar18;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar8 = pcVar18 + -uVar9;
          pcVar18 = (char *)(&DAT_00811aa4 + iVar11 * 0xac5);
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar18 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar18 = pcVar18 + 1;
          }
          (&DAT_00811a9c)[iVar11 * 0xac5] = *(undefined4 *)(iVar6 + 0x80ef88);
          iVar4 = DAT_007d2d18;
          (&DAT_00811aa0)[iVar11 * 0xac5] = *(undefined4 *)(iVar6 + 0x80ef8c);
          (&DAT_00811ae4)[iVar11 * 0xac5] = iVar4;
        }
        goto switchD_006841b6_default;
      case 2:
        goto switchD_006841b6_caseD_2;
      case 3:
        DAT_00848a14 = thunk_FUN_0064a630(10);
        if (DAT_007d2d18 != 0x39) {
          thunk_FUN_00683600();
        }
        if ((DAT_007d2d18 != 0x10) && (DAT_007d2d18 != 0x39)) {
          if (DAT_007d2d18 != 0x3a) {
            if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
              FUN_006a5e40(-0x71,DAT_007ed77c,0x7d5604,0x9d0);
              thunk_FUN_0064a800(&DAT_00848a14);
            }
            else {
              FUN_006a5e40(-0x72,DAT_007ed77c,0x7d5604,0x9d1);
              thunk_FUN_0064a800(&DAT_00848a14);
            }
            goto switchD_006841b6_default;
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] == 2) {
            FUN_006a5e40(-0x71,DAT_007ed77c,0x7d5604,0x938);
          }
          if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 1) {
            FUN_006a5e40(-0x69,DAT_007ed77c,0x7d5604,0x939);
          }
          if (DAT_00848a14[1] < 1) {
            FUN_006a5e40(-0x69,DAT_007ed77c,0x7d5604,0x93a);
          }
          switch((&DAT_00811ae4)[DAT_008488b0 * 0xac5]) {
          case 2:
          case 0x17:
          case 0x2d:
          case 0x31:
          case 0x3e:
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if (((iVar4 != 5) && (iVar4 != 6)) && (iVar4 != 7)) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            iVar11 = thunk_FUN_00683670();
            iVar4 = iVar11;
            if (iVar11 == 0) {
              iVar4 = FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x9a7);
            }
            uVar13 = (undefined2)((uint)iVar4 >> 0x10);
            if (DAT_008489cc == (undefined4 *)0x0) {
              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x9a8);
              uVar13 = extraout_var_08;
            }
            uStack_b0 = CONCAT22(uVar13,*(undefined2 *)(iVar11 + 0x472));
            piVar19 = (int *)(iVar11 + 0x46e);
            thunk_FUN_006838b0(piVar19,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               *(int *)(iVar11 + 0x456));
            pcVar8 = (char *)thunk_FUN_0064a910((int)DAT_00848a14,0);
            if ((DAT_00848a14[1] == 1) && (cVar1 = *pcVar8, cVar1 != '\a')) {
              if ((cVar1 != '\x04') && (cVar1 != '\x01')) {
                thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              thunk_FUN_006838b0(piVar19,'\x02',(byte *)(pcVar8 + 1),*(int *)(iVar11 + 0x456));
            }
            else {
              thunk_FUN_00683780(piVar19,(int)DAT_00848a14,*(int *)(iVar11 + 0x456));
            }
            uStack_1c = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              uStack_1c = 0;
              break;
            case 6:
              uStack_1c = 1;
              break;
            case 7:
              uStack_1c = 2;
              break;
            case 8:
              uStack_1c = 3;
            }
            thunk_FUN_006838b0(piVar19,'\x02',(byte *)&uStack_1c,*(int *)(iVar11 + 0x456));
            uStack_84 = 0xb;
            uStack_81 = 3;
            uStack_83 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);
            thunk_FUN_0064a830(piVar19,(undefined4 *)&uStack_84);
            puVar7 = &uStack_b0;
            break;
          default:
            uVar23 = 0x9c8;
            uVar9 = 0xffffff97;
            goto LAB_0068a22b;
          case 4:
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar4 == 5) || (iVar4 == 6)) || (iVar4 == 7)) || (iVar4 == 8)) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            pcVar8 = (char *)thunk_FUN_0064a910((int)DAT_00848a14,0);
            if ((DAT_00848a14[1] != 1) || (cVar1 = *pcVar8, cVar1 == '\a')) {
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 4)) {
                thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              uVar9 = thunk_FUN_0067fdf0(DAT_00848a14,(byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5)
                                        );
              if ((int)uVar9 < 0) {
                FUN_006a5e40(uVar9,DAT_007ed77c,0x7d5604,0x96e);
              }
              DAT_008488b0 = DAT_008488b0 + -2;
              DAT_00848a14 = (int *)0x0;
              thunk_FUN_0064a800(&DAT_00848a14);
              goto switchD_006841b6_default;
            }
            switch(cVar1) {
            case '\x01':
            case '\x04':
              iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (iVar4 == 0) {
                if (cVar1 == '\x01') {
                  uVar23 = *(undefined4 *)(pcVar8 + 1);
                }
                else {
                  uVar23 = thunk_FUN_0067f4b0((int)*(short *)(pcVar8 + 1));
                }
                uVar9 = thunk_FUN_0067f740((byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),uVar23);
                if ((int)uVar9 < 0) {
                  uVar23 = 0x953;
                  goto LAB_0068a22b;
                }
              }
              else if (iVar4 == 2) {
                if (cVar1 == '\x01') {
                  uVar23 = *(undefined4 *)(pcVar8 + 1);
                }
                else {
                  uVar23 = thunk_FUN_0067f4b0((int)*(short *)(pcVar8 + 1));
                }
                uVar9 = thunk_FUN_0067f740((byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),uVar23);
                if ((int)uVar9 < 0) {
                  uVar23 = 0x94c;
                  goto LAB_0068a22b;
                }
              }
              else {
                if (iVar4 != 3) {
                  thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
                  DAT_008488b0 = DAT_008488b0 + -2;
                  thunk_FUN_0064a800(&DAT_00848a14);
                  goto switchD_006841b6_default;
                }
                if (cVar1 == '\x02') {
                  fStack_88 = *(float *)(pcVar8 + 1);
                }
                else {
                  fVar20 = thunk_FUN_0067f820((int)*(short *)(pcVar8 + 1));
                  fStack_88 = (float)fVar20;
                }
                uVar9 = thunk_FUN_0067fab0((byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),fStack_88)
                ;
                if ((int)uVar9 < 0) {
                  uVar23 = 0x948;
                  goto LAB_0068a22b;
                }
              }
              break;
            case '\x02':
            case '\x05':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 3)) {
                thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              if (*pcVar8 == '\x02') {
                fStack_8c = *(float *)(pcVar8 + 1);
              }
              else {
                fVar20 = thunk_FUN_0067f820((int)*(short *)(pcVar8 + 1));
                fStack_8c = (float)fVar20;
              }
              uVar9 = thunk_FUN_0067fab0((byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),fStack_8c);
              if ((int)uVar9 < 0) {
                uVar23 = 0x95a;
                goto LAB_0068a22b;
              }
              break;
            case '\x03':
            case '\x06':
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 0) &&
                 ((&DAT_00811a9c)[DAT_008488b0 * 0xac5] != 1)) {
                thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              if (((&DAT_00811a9c)[DAT_008488b0 * 0xac5] == 0) && (*pcVar8 == '\x03')) {
                iVar4 = thunk_FUN_0067f0f0((char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),
                                           (int)*(short *)(pcVar8 + 1));
                if (iVar4 == 0) {
                  uVar23 = 0x961;
                  uVar9 = 0xffffff95;
                  goto LAB_0068a22b;
                }
              }
              else {
                pcVar8 = (char *)thunk_FUN_0067ee40((int)*(short *)(pcVar8 + 1));
                if (pcVar8 == (char *)0x0) {
                  FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x964);
                }
                iVar4 = thunk_FUN_0067f030((byte *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5),pcVar8,
                                           (uint *)0x0);
                if (iVar4 == 0) {
                  uVar23 = 0x965;
                  uVar9 = 0xfffffffe;
                  goto LAB_0068a22b;
                }
              }
              break;
            default:
              uVar23 = 0x969;
              uVar9 = 0xffffff95;
LAB_0068a22b:
              FUN_006a5e40(uVar9,DAT_007ed77c,0x7d5604,uVar23);
            }
            DAT_008488b0 = DAT_008488b0 + -2;
            thunk_FUN_0064a800(&DAT_00848a14);
            goto switchD_006841b6_default;
          case 5:
            iVar4 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
            if ((((iVar4 != 5) && (iVar4 != 6)) && (iVar4 != 7)) && (iVar4 != 8)) {
              thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            iVar4 = thunk_FUN_00683670();
            uVar13 = extraout_var_11;
            if (iVar4 == 0) {
              FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x977);
              uVar13 = extraout_var_12;
            }
            if (DAT_008489cc == (undefined4 *)0x0) {
              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x978);
              uVar13 = extraout_var_13;
            }
            uStack_d4 = CONCAT22(uVar13,*(undefined2 *)(iVar4 + 0x472));
            piVar19 = (int *)(iVar4 + 0x46e);
            thunk_FUN_006838b0(piVar19,'\x02',(byte *)(&DAT_00811aa0 + DAT_008488b0 * 0xac5),
                               *(int *)(iVar4 + 0x456));
            pcVar8 = (char *)thunk_FUN_0064a910((int)DAT_00848a14,0);
            if ((DAT_00848a14[1] == 1) && (cStack_5 = *pcVar8, cStack_5 != '\a')) {
              iVar11 = (&DAT_00811a9c)[DAT_008488b0 * 0xac5];
              if (4 < iVar11) {
                if (iVar11 < 8) {
                  if ((cStack_5 != '\x04') && (cStack_5 != '\x01')) {
                    thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
                  }
                  thunk_FUN_006838b0(piVar19,'\x02',(byte *)(pcVar8 + 1),*(int *)(iVar4 + 0x456));
                }
                else if (iVar11 == 8) {
                  if ((cStack_5 != '\x06') && (cStack_5 != '\x03')) {
                    thunk_FUN_006802a0(-0x74,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
                  }
                  thunk_FUN_006838b0(piVar19,'\x01',*(byte **)(pcVar8 + 1),*(int *)(iVar4 + 0x456));
                }
              }
            }
            else {
              thunk_FUN_00683780(piVar19,(int)DAT_00848a14,*(int *)(iVar4 + 0x456));
            }
            uStack_14 = 0;
            switch((&DAT_00811a9c)[DAT_008488b0 * 0xac5]) {
            case 5:
              uStack_14 = 0;
              break;
            case 6:
              uStack_14 = 1;
              break;
            case 7:
              uStack_14 = 2;
              break;
            case 8:
              uStack_14 = 3;
            }
            thunk_FUN_006838b0(piVar19,'\x02',(byte *)&uStack_14,*(int *)(iVar4 + 0x456));
            uStack_74 = 0xb;
            uStack_71 = 3;
            uStack_73 = *(undefined2 *)(&DAT_00811ae4 + DAT_008488b0 * 0xac5);
            thunk_FUN_0064a830(piVar19,(undefined4 *)&uStack_74);
            puVar7 = &uStack_d4;
          }
          FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),puVar7);
          DAT_008488b0 = DAT_008488b0 + -2;
          thunk_FUN_0064a800(&DAT_00848a14);
          goto switchD_006841b6_default;
        }
        if ((&DAT_00811a94)[DAT_008488b0 * 0xac5] != 2) {
          FUN_006a5e40(-0x69,DAT_007ed77c,0x7d5604,0x906);
        }
        if (0 < DAT_00848a14[1]) {
          pcVar8 = (char *)thunk_FUN_0064a910((int)DAT_00848a14,0);
          iVar4 = DAT_008488b0;
          if ((DAT_00848a14[1] == 1) && (*pcVar8 != '\a')) {
            switch(*pcVar8) {
            case '\x01':
            case '\x04':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 2;
              (&DAT_008110b0)[iVar4 * 0xac5] = (&DAT_008110b0)[iVar4 * 0xac5] + 1;
              if (*pcVar8 == '\x01') {
                uVar23 = *(undefined4 *)(pcVar8 + 1);
                DAT_008488b0 = iVar4;
              }
              else {
                uVar23 = thunk_FUN_0067f4b0((int)*(short *)(pcVar8 + 1));
              }
              *(undefined4 *)
               (&DAT_0080f16c + (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4)
                   = uVar23;
              (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x02':
            case '\x05':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 3;
              (&DAT_008110b0)[iVar4 * 0xac5] = (&DAT_008110b0)[iVar4 * 0xac5] + 1;
              if (*pcVar8 == '\x02') {
                fVar20 = (float10)*(float *)(pcVar8 + 1);
                DAT_008488b0 = iVar4;
              }
              else {
                fVar20 = thunk_FUN_0067f820((int)*(short *)(pcVar8 + 1));
              }
              *(float *)(&DAT_00810110 +
                        (DAT_008488b0 * 0xac5 + (&DAT_0081010c)[DAT_008488b0 * 0xac5]) * 4) =
                   (float)fVar20;
              (&DAT_0081010c)[DAT_008488b0 * 0xac5] = (&DAT_0081010c)[DAT_008488b0 * 0xac5] + 1;
              break;
            case '\x03':
            case '\x06':
              (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 1;
              (&DAT_008110b0)[iVar4 * 0xac5] = (&DAT_008110b0)[iVar4 * 0xac5] + 1;
              uVar23 = thunk_FUN_0067ee40((int)*(short *)(pcVar8 + 1));
              *(undefined4 *)
               (&DAT_0080efd8 + (DAT_008488b0 * 0xac5 + (&DAT_0080efd4)[DAT_008488b0 * 0xac5]) * 4)
                   = uVar23;
              (&DAT_0080efd4)[DAT_008488b0 * 0xac5] = (&DAT_0080efd4)[DAT_008488b0 * 0xac5] + 1;
              break;
            default:
              FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x923);
            }
          }
          else {
            pcVar8 = thunk_FUN_0067fbd0();
            uVar9 = thunk_FUN_0067fd20(DAT_00848a14,pcVar8);
            if ((int)uVar9 < 0) {
              FUN_006a5e40(uVar9,DAT_007ed77c,0x7d5604,0x927);
            }
            DAT_00848a14 = (int *)0x0;
            (&DAT_008110b4)[(&DAT_008110b0)[DAT_008488b0 * 0xac5] + DAT_008488b0 * 0x2b14] = 4;
            (&DAT_008110b0)[DAT_008488b0 * 0xac5] = (&DAT_008110b0)[DAT_008488b0 * 0xac5] + 1;
            *(uint *)(&DAT_0080f16c +
                     (DAT_008488b0 * 0xac5 + (&DAT_0080f168)[DAT_008488b0 * 0xac5]) * 4) = uVar9;
            (&DAT_0080f168)[DAT_008488b0 * 0xac5] = (&DAT_0080f168)[DAT_008488b0 * 0xac5] + 1;
          }
        }
        DAT_008488b0 = DAT_008488b0 + -1;
        iStack_30 = 0;
        thunk_FUN_0064a800(&DAT_00848a14);
        goto switchD_006841b6_default;
      case 4:
        if (DAT_007d2d18 == 6) {
          DAT_008488b0 = DAT_008488b0 + 1;
          iVar4 = DAT_008488b0 * 0xac5;
          puVar7 = &DAT_00811a90 + iVar4;
          for (iVar11 = 0xac5; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          (&DAT_00811a90)[iVar4] = 0;
        }
        else if (DAT_007d2d18 != 0x1d) {
          FUN_006a5e40(-0x6c,DAT_007ed77c,0x7d5604,0x658);
        }
      default:
        goto switchD_006841b6_default;
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_16c;
    if (param_4 != (int *)0x0) {
      piVar19 = param_4;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar19 = 0;
        piVar19 = piVar19 + 1;
      }
      *param_4 = iVar4;
      param_4[2] = DAT_00857554;
      FUN_0072e730((byte *)DAT_0085753c,(byte *)0x0,(byte *)0x0,(byte *)0x0,abStack_3c8);
      if (abStack_3c8[0] != 0) {
        param_1 = DAT_0085753c;
      }
      if (param_1 != (uint *)0x0) {
        uVar9 = 0xffffffff;
        do {
          puVar22 = param_1;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          puVar22 = (uint *)((int)param_1 + 1);
          uVar10 = *param_1;
          param_1 = puVar22;
        } while ((byte)uVar10 != 0);
        uVar9 = ~uVar9;
        puVar7 = (undefined4 *)((int)puVar22 - uVar9);
        puVar17 = &DAT_0084790c;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar17 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar17 = puVar17 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar17 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
      }
      param_4[1] = (int)&DAT_0084790c;
      _strncpy((char *)&DAT_00847d0c,DAT_0085755c,0x3fe);
      param_4[3] = (int)&DAT_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
      param_4[5] = DAT_00857544;
    }
    thunk_FUN_006484f0((int *)&DAT_008489b4);
    thunk_FUN_006484f0((int *)&pbStack_20);
    thunk_FUN_0067d160((int *)&DAT_008489b8);
    thunk_FUN_0067d160((int *)&pbStack_28);
    thunk_FUN_0065d0f0((int *)&DAT_008489bc);
    thunk_FUN_0065d0f0((int *)&pbStack_c);
    thunk_FUN_00691540((int *)&DAT_008489c8);
    thunk_FUN_00691540((int *)&pbStack_24);
    thunk_FUN_006686c0((int *)&DAT_008489c4);
    thunk_FUN_006686c0((int *)&pbStack_2c);
    thunk_FUN_0065d1f0((int *)&DAT_008489cc);
    if (DAT_008489d4 != (uint *)0x0) {
      FUN_006ae110((byte *)DAT_008489d4);
      DAT_008489d4 = (uint *)0x0;
    }
    if (DAT_008489dc != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_008489dc);
      DAT_008489dc = (uint *)0x0;
    }
    thunk_FUN_00680070();
    thunk_FUN_0064a800(&DAT_00848a14);
    bVar3 = thunk_FUN_00672f00();
    iVar4 = CONCAT31(extraout_var_06,bVar3);
    while (iVar4 != 0) {
      bVar3 = thunk_FUN_00672f00();
      iVar4 = CONCAT31(extraout_var_07,bVar3);
    }
    thunk_FUN_006807d0(&DAT_008489d0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      return (uint *)0x0;
    }
  }
  else {
    DAT_00858df8 = (undefined4 *)uStack_1b0;
    if (param_4 != (int *)0x0) {
      piVar19 = param_4;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar19 = 0;
        piVar19 = piVar19 + 1;
      }
      *param_4 = iVar4;
      param_4[2] = 0;
      if (param_1 != (uint *)0x0) {
        uVar9 = 0xffffffff;
        do {
          puVar22 = param_1;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          puVar22 = (uint *)((int)param_1 + 1);
          uVar10 = *param_1;
          param_1 = puVar22;
        } while ((char)uVar10 != '\0');
        uVar9 = ~uVar9;
        puVar7 = (undefined4 *)((int)puVar22 - uVar9);
        puVar17 = &DAT_0084790c;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar17 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar17 = puVar17 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar17 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
      }
      param_4[1] = (int)&DAT_0084790c;
      uVar9 = 0xffffffff;
      pcVar8 = &DAT_008016a0;
      do {
        pcVar18 = pcVar8;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar18 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar8 = pcVar18 + -uVar9;
      pcVar18 = (char *)&DAT_00847d0c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      param_4[3] = (int)&DAT_00847d0c;
      param_4[4] = (int)&DAT_008488b4;
    }
  }
  return (uint *)0x0;
switchD_006841b6_caseD_2:
  if (((&DAT_00811a98)[DAT_008488b0 * 0xac5] == 0) && (DAT_007d2d18 != 0x29)) {
    pcVar8 = thunk_FUN_00674af0(0x29);
    thunk_FUN_006802a0(-0x70,pcVar8);
  }
  iVar4 = DAT_008488b0;
  (&DAT_00811a98)[DAT_008488b0 * 0xac5] = (&DAT_00811a98)[DAT_008488b0 * 0xac5] + 1;
  if ((DAT_007d2d18 == 0x10) || (DAT_007d2d18 == 0x29)) {
    iVar11 = DAT_008488b0 + 1;
    puVar7 = &DAT_00811a90 + iVar11 * 0xac5;
    DAT_008488b0 = iVar11;
    for (iVar4 = 0xac5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    (&DAT_00811a90)[iVar11 * 0xac5] = 3;
    (&DAT_00811a94)[iVar11 * 0xac5] = 2;
    pcVar8 = thunk_FUN_0067ec60((&DAT_008110b0)[iVar11 * 0xac5]);
    uVar9 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar18 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar18 + -uVar9;
    pcVar18 = (char *)(&DAT_00811aa4 + iVar11 * 0xac5);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar18 = pcVar18 + 1;
    }
    (&DAT_00811a9c)[iVar11 * 0xac5] = 0;
    (&DAT_00811ae4)[iVar11 * 0xac5] = 4;
    goto switchD_006841b6_default;
  }
  if (DAT_007d2d18 != 0x39) {
    FUN_006a5e40(-0x71,DAT_007ed77c,0x7d5604,0x8fd);
    goto switchD_006841b6_default;
  }
  iVar11 = (&DAT_00811a94)[iVar4 * 0xac5];
  if (iVar11 < 0x568) {
    if (iVar11 == 0x567) {
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a0);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a0;
        goto LAB_006877a0;
      }
      goto LAB_006877b6;
    }
    if (0x4b3 < iVar11) {
      switch(iVar11) {
      case 0x4b4:
        if (DAT_008489d8 == (uint *)0x0) {
          FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x83f);
        }
        puVar22 = DAT_008489d8;
        if (DAT_008489d0 == (undefined4 *)0x0) {
          DAT_008489d8 = (uint *)0x0;
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 10;
          }
          goto LAB_0068a687;
        }
        FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x841);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b5:
        iVar4 = thunk_FUN_00681e60();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489d8 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x84d);
        }
        pcVar8 = acStack_6ec;
        for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + 4;
        }
        _strncpy(acStack_6ec,(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],0x103);
        _strncpy(acStack_5d8,(char *)(&DAT_00811af0)[DAT_008488b0 * 0xac5],0x103);
        uStack_5e8 = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        uStack_5e4 = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        uStack_5e0 = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        uStack_5dc = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        uStack_4d4 = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        FUN_006ae1c0(DAT_008489d8,(undefined4 *)acStack_6ec);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      default:
        goto switchD_00685456_default;
      case 0x514:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x875);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x875;
          goto LAB_006876ab;
        }
        goto LAB_006876c1;
      case 0x515:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x876);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x876;
          goto LAB_006876fe;
        }
        goto LAB_00687714;
      case 0x516:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x877);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x877;
LAB_00687750:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        break;
      case 0x517:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x878);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x878;
LAB_006877a0:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_006877b6;
      case 0x518:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x879);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x879;
LAB_006877ef:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687805;
      case 0x519:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x87a);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x87a;
LAB_0068783f:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687855;
      case 0x51a:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x87b);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x87b;
LAB_0068788e:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_006878a4;
      case 0x51b:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x87c);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x87c);
        }
        iVar11 = thunk_FUN_00682050(1,1);
        goto joined_r0x00689693;
      case 0x528:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x87e);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x87e;
          goto LAB_00687750;
        }
        break;
      case 0x529:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x87f);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x87f;
          goto LAB_0068783f;
        }
        goto LAB_00687855;
      case 0x52a:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x880);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x880;
          goto LAB_00687750;
        }
        break;
      case 0x532:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x882);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x882;
LAB_006879ea:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687a00;
      case 0x533:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x883);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x883);
        }
        iVar11 = thunk_FUN_00682050(4,1);
        goto LAB_006895d5;
      case 0x534:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x884);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x884;
LAB_00687a9d:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687ab3;
      case 0x535:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x885);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x885;
LAB_00687aec:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687b02;
      case 0x536:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x886);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x886;
          goto LAB_006879ea;
        }
        goto LAB_00687a00;
      case 0x537:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x887);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x887);
        }
        iVar11 = thunk_FUN_00682050(2,1);
        goto LAB_006895d5;
      case 0x546:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x889);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x889);
        }
        iVar11 = 7;
        goto LAB_0068956e;
      case 0x547:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88a);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88a;
          goto LAB_0068788e;
        }
        goto LAB_006878a4;
      case 0x548:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88b);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88b;
          goto LAB_0068783f;
        }
        goto LAB_00687855;
      case 0x549:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88c);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88c;
          goto LAB_006877ef;
        }
        goto LAB_00687805;
      case 0x54a:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88d);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88d;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x54b:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88e);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88e;
          goto LAB_0068788e;
        }
        goto LAB_006878a4;
      case 0x54c:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x88f);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x88f;
          goto LAB_0068783f;
        }
        goto LAB_00687855;
      case 0x54d:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x890);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x890;
          goto LAB_00687750;
        }
        break;
      case 0x54e:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x891);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x891;
          goto LAB_00687a9d;
        }
LAB_00687ab3:
        iVar11 = 5;
        goto LAB_0068956e;
      case 0x55a:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x893);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x893;
          goto LAB_00687750;
        }
        break;
      case 0x55b:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x894);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x894;
          goto LAB_006879ea;
        }
LAB_00687a00:
        iVar11 = thunk_FUN_00682050(2,1);
        goto joined_r0x00689693;
      case 0x55c:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x895);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x895;
          goto LAB_00687750;
        }
        break;
      case 0x55d:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x896);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x896;
LAB_00687f2d:
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
        }
        goto LAB_00687f43;
      case 0x55e:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x897);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x897;
          goto LAB_00687aec;
        }
        goto LAB_00687b02;
      case 0x55f:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x898);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x898;
          goto LAB_00687f2d;
        }
LAB_00687f43:
        iVar11 = thunk_FUN_00682050(3,1);
        goto joined_r0x00689693;
      case 0x560:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x899);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x899;
          goto LAB_00687750;
        }
        break;
      case 0x561:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89a);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89a;
          goto LAB_0068783f;
        }
        goto LAB_00687855;
      case 0x562:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89b);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89b;
          goto LAB_00687aec;
        }
LAB_00687b02:
        iVar11 = thunk_FUN_00682050(3,1);
        goto LAB_006895d5;
      case 0x563:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89c);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89c;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x564:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89d);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89d;
          goto LAB_0068788e;
        }
LAB_006878a4:
        iVar11 = 2;
        goto LAB_006895cd;
      case 0x565:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89e);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89e;
          goto LAB_006877a0;
        }
LAB_006877b6:
        iVar11 = 3;
        goto LAB_0068956e;
      case 0x566:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x89f);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x89f;
          goto LAB_00687750;
        }
      }
LAB_00687766:
      iVar11 = 3;
LAB_006895cd:
      iVar11 = thunk_FUN_00681f70(iVar11);
LAB_006895d5:
      if (iVar11 == 0) {
        thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
      }
      iVar11 = *(int *)(iVar4 + 0x456);
      uVar13 = (undefined2)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
      goto LAB_006896f6;
    }
    if (iVar11 == 0x4b3) {
      if (DAT_008489d8 != (uint *)0x0) {
        FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x83a);
      }
      DAT_008489d8 = FUN_006ae290((uint *)0x0,5,0x220,5);
      DAT_008488b0 = DAT_008488b0 + -1;
      goto switchD_006841b6_default;
    }
    if (iVar11 < 0x425) {
      if (iVar11 == 0x424) {
        iVar4 = thunk_FUN_00681070();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (((DAT_008489c4 != (uint *)0x0) || (DAT_008489bc != (uint *)0x0)) ||
           (DAT_008489b4 != (uint *)0x0)) {
          FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x72e);
        }
        DAT_008489c4 = thunk_FUN_00668180((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                          *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                          *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                                          *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5),
                                          *(undefined1 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5));
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
      if (iVar11 < 0x3f3) {
        if (iVar11 == 0x3f2) {
          iVar4 = thunk_FUN_00681ef0();
          if (iVar4 == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          if (DAT_008489dc != (uint *)0x0) {
            FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x85b);
          }
          DAT_008489dc = FUN_006b54f0((uint *)0x0,5,5);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        if (iVar11 < 0x3ea) {
          if (iVar11 == 0x3e9) {
            iVar4 = thunk_FUN_00680c20();
            if (iVar4 == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            if (DAT_008489d0 != (undefined4 *)0x0) {
              thunk_FUN_006807d0(&DAT_008489d0);
            }
            DAT_008489d0 = thunk_FUN_00680650((byte *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (0x42 < iVar11) {
            if (iVar11 == 0x3b6) {
              if ((iVar4 < 1) || ((int)(&DAT_00811a78)[iVar4 * 0xac5] < 1)) {
                FUN_006a5e40(-0x6e,DAT_007ed77c,0x7d5604,0x66c);
              }
              iVar4 = thunk_FUN_00680b00();
              if (iVar4 == 0) {
                thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              iVar11 = DAT_008488b0;
              DAT_007d3fa4 = 1;
              iVar4 = DAT_008488b0 * 0x2b14;
              *(undefined4 *)(&DAT_008118e4 + (&DAT_00811a78)[DAT_008488b0 * 0xac5] * 8 + iVar4) =
                   (&DAT_00811c80)[DAT_008488b0 * 0xac5];
              iVar4 = iVar4 + (&DAT_00811a78)[iVar11 * 0xac5] * 8;
              pvVar14 = *(void **)(&DAT_008118e0 + iVar4);
              if (((pvVar14 == (void *)0x0) && (*(int *)(&DAT_008118e4 + iVar4) == 0)) ||
                 ((pvVar14 == (void *)0x1 && (*(int *)(&DAT_008118e4 + iVar4) != 0)))) {
                thunk_FUN_00672ab0(pvVar14,1);
                thunk_FUN_00672af0(this_02,1);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
              else {
                thunk_FUN_00672ab0(pvVar14,0);
                thunk_FUN_00672af0(this_03,0);
                DAT_008488b0 = DAT_008488b0 + -1;
              }
            }
            else {
              if (iVar11 != 1000) goto switchD_00685456_default;
              iVar4 = thunk_FUN_00680c20();
              if (iVar4 == 0) {
                thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              }
              if (DAT_008489d0 != (undefined4 *)0x0) {
                thunk_FUN_006807d0(&DAT_008489d0);
              }
              DAT_008489d0 = thunk_FUN_00680590((byte *)(&DAT_00811aec)[DAT_008488b0 * 0xac5]);
              DAT_008488b0 = DAT_008488b0 + -1;
            }
            goto switchD_006841b6_default;
          }
          if ((iVar11 == 0x42) || (iVar11 == 0x23)) {
            iVar4 = thunk_FUN_00683670();
            if (iVar4 == 0) {
              FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x6ae);
            }
            if (DAT_008489cc == (undefined4 *)0x0) {
              FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x6af);
            }
            iVar11 = thunk_FUN_00680bd0();
            uVar13 = extraout_var_09;
            if (iVar11 == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
              uVar13 = extraout_var_10;
            }
            uStack_c4 = CONCAT22(uVar13,*(undefined2 *)(iVar4 + 0x472));
            piVar19 = (int *)(iVar4 + 0x46e);
            iVar11 = *(int *)(iVar4 + 0x456);
            if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {
              thunk_FUN_006838b0(piVar19,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                 iVar11);
            }
            else {
              iVar6 = thunk_FUN_0067fca0((&DAT_00811c80)[DAT_008488b0 * 0xac5]);
              thunk_FUN_00683780(piVar19,iVar6,iVar11);
            }
            iStack_cc = *(int *)(*(int *)((int)DAT_008489cc + 0xf) + 0xc) + 1;
            iVar11 = thunk_FUN_006838b0(piVar19,'\x02',(byte *)&iStack_cc,*(int *)(iVar4 + 0x456));
            iVar4 = DAT_008488b0;
            uStack_54 = 0xb;
            uStack_51 = 2;
            (&DAT_00814590)[DAT_008488b0 * 0xac5] = iVar11;
            uStack_53 = *(undefined2 *)(&DAT_00811a94 + iVar4 * 0xac5);
            thunk_FUN_0064a830(piVar19,(undefined4 *)&uStack_54);
            iVar4 = DAT_008488b0;
            uVar9 = FUN_006ae1c0(*(uint **)((int)DAT_008489cc + 0xf),&uStack_c4);
            (&DAT_00814594)[iVar4 * 0xac5] = uVar9;
            (&DAT_00811a90)[iVar4 * 0xac5] = 4;
            goto switchD_006841b6_default;
          }
          if (iVar11 == 0x35) {
            bVar3 = thunk_FUN_00681f10();
            if (CONCAT31(extraout_var_00,bVar3) == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            if (DAT_008489dc == (uint *)0x0) {
              FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x86f);
            }
            FUN_006b5aa0((int)DAT_008489dc,(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else {
          switch(iVar11) {
          case 0x3ea:
            iVar4 = thunk_FUN_00680c20();
            if (iVar4 == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            if (DAT_008489d0 != (undefined4 *)0x0) {
              thunk_FUN_006807d0(&DAT_008489d0);
            }
            DAT_008489d0 = thunk_FUN_00680710((byte *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                              (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3eb:
            if (DAT_008489d0 != (undefined4 *)0x0) {
              thunk_FUN_006807d0(&DAT_008489d0);
              DAT_008488b0 = DAT_008488b0 + -1;
              goto switchD_006841b6_default;
            }
            break;
          case 0x3ec:
            bVar3 = thunk_FUN_00680d00();
            if (CONCAT31(extraout_var_01,bVar3) == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            thunk_FUN_00680550(*(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          case 0x3ed:
            iVar4 = thunk_FUN_00680c70();
            if (iVar4 == 0) {
              thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
            }
            thunk_FUN_00680340((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c80)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c84)[DAT_008488b0 * 0xac5],
                               (&DAT_00811c88)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
      }
      else {
        switch(iVar11) {
        case 0x3f3:
          if (DAT_008489dc == (uint *)0x0) {
            FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x860);
          }
          puVar22 = DAT_008489dc;
          if (DAT_008489d0 == (undefined4 *)0x0) {
            DAT_008489dc = (uint *)0x0;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 9;
            }
            goto LAB_0068a687;
          }
          thunk_FUN_006809f0(DAT_008489dc);
          if (DAT_008489dc != (uint *)0x0) {
            FUN_006b5570((byte *)DAT_008489dc);
            DAT_008489dc = (uint *)0x0;
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          break;
        case 0x3fc:
          iVar4 = thunk_FUN_00680fa0();
          if (iVar4 == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          if ((((DAT_008489b8 != (uint *)0x0) || (DAT_008489b4 != (uint *)0x0)) ||
              (DAT_008489c4 != (uint *)0x0)) ||
             ((DAT_008489c8 != (uint *)0x0 || (DAT_008489bc != (uint *)0x0)))) {
            FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x74c);
          }
          DAT_008489b4 = thunk_FUN_00648400((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                            (&DAT_00811c80)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x3fd:
          if ((DAT_008489b4 == (uint *)0x0) || (DAT_008489c0 == 1)) {
            FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x751);
          }
          puVar22 = DAT_008489b4;
          if (DAT_008489d0 == (undefined4 *)0x0) {
            DAT_008489b4 = (uint *)0x0;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 4;
            }
            goto LAB_0068a687;
          }
          pbStack_c = (byte *)thunk_FUN_0065cd10(*(undefined4 **)((int)DAT_008489b4 + 0x4e),
                                                 &uStack_18);
          pbStack_20 = (byte *)thunk_FUN_00648620(DAT_008489b4,(undefined4 *)pbStack_c,uStack_18,
                                                  &uStack_10);
          thunk_FUN_0065d0f0((int *)&pbStack_c);
          thunk_FUN_006484f0((int *)&DAT_008489b4);
          thunk_FUN_006809b0(pbStack_20,uStack_10);
          thunk_FUN_006484f0((int *)&pbStack_20);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x406:
          iVar4 = thunk_FUN_00680d40();
          if (iVar4 == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          if ((((DAT_008489b8 != (uint *)0x0) || (DAT_008489b4 != (uint *)0x0)) ||
              (DAT_008489c4 != (uint *)0x0)) ||
             ((DAT_008489c8 != (uint *)0x0 || (DAT_008489bc != (uint *)0x0)))) {
            FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x6e5);
          }
          DAT_008489b8 = thunk_FUN_0067cf30((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                            (char *)(&DAT_00811af0)[DAT_008488b0 * 0xac5],
                                            (&DAT_00811c84)[DAT_008488b0 * 0xac5]);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x407:
          if ((DAT_008489b8 == (uint *)0x0) || (DAT_008489c0 == 1)) {
            FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x6ea);
          }
          puVar22 = DAT_008489b8;
          if (DAT_008489d0 == (undefined4 *)0x0) {
            DAT_008489b8 = (uint *)0x0;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 3;
            }
            goto LAB_0068a687;
          }
          pbStack_c = (byte *)thunk_FUN_0065cd10(*(undefined4 **)((int)DAT_008489b8 + 0x106),
                                                 &uStack_18);
          pbStack_28 = (byte *)thunk_FUN_0067d3b0(DAT_008489b8,(undefined4 *)pbStack_c,uStack_18,
                                                  &uStack_10);
          thunk_FUN_0065d0f0((int *)&pbStack_c);
          thunk_FUN_0067d160((int *)&DAT_008489b8);
          thunk_FUN_006809b0(pbStack_28,uStack_10);
          thunk_FUN_0067d160((int *)&pbStack_28);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x408:
          if (DAT_008489b8 == (uint *)0x0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x6fc);
          }
          iVar4 = thunk_FUN_00680e00();
          if (iVar4 == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          *(undefined1 *)((int)DAT_008489b8 + 0x71) =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined4 *)((int)DAT_008489b8 + 0x6d) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x409:
          if (DAT_008489b8 == (uint *)0x0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x703);
          }
          bVar3 = thunk_FUN_00680e50();
          if (CONCAT31(extraout_var_02,bVar3) == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          *(undefined1 *)((int)DAT_008489b8 + 0xa3) =
               *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
          *(undefined2 *)(DAT_008489b8 + 0x29) =
               *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
          *(undefined2 *)((int)DAT_008489b8 + 0xa6) =
               *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
          *(undefined2 *)(DAT_008489b8 + 0x2a) =
               *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
          *(undefined4 *)((int)DAT_008489b8 + 0xaa) = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41a:
          iVar4 = thunk_FUN_00680ee0();
          if (iVar4 == 0) {
            thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
          }
          if (((DAT_008489c8 != (uint *)0x0) || (DAT_008489bc != (uint *)0x0)) ||
             ((DAT_008489b4 != (uint *)0x0 || (DAT_008489c4 != (uint *)0x0)))) {
            FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x70e);
          }
          DAT_008489c8 = thunk_FUN_00690e90((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],
                                            *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                            *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5));
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        case 0x41b:
          if (DAT_008489c8 == (uint *)0x0) {
            FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x713);
          }
          puVar22 = DAT_008489c8;
          if (DAT_008489b8 == (uint *)0x0) {
            if (DAT_008489d0 == (undefined4 *)0x0) {
              DAT_008489c8 = (uint *)0x0;
              if (param_3 != (undefined4 *)0x0) {
                *param_3 = 2;
              }
              goto LAB_0068a687;
            }
            pbStack_24 = (byte *)thunk_FUN_00691190(DAT_008489c8,&uStack_10);
            thunk_FUN_00691540((int *)&DAT_008489c8);
            thunk_FUN_006809b0(pbStack_24,uStack_10);
            thunk_FUN_00691540((int *)&pbStack_24);
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          else {
            puStack_e4 = DAT_008489c8;
            uStack_e0 = 0;
            uStack_dc = 0;
            uStack_d8 = DAT_008489c8[5];
            FUN_006ae1c0(*(uint **)((int)DAT_008489b8 + 0xc2),&puStack_e4);
            DAT_008489c8 = (uint *)0x0;
            DAT_008488b0 = DAT_008488b0 + -1;
          }
          goto switchD_006841b6_default;
        }
      }
    }
    else {
      switch(iVar11) {
      case 0x425:
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x733);
        }
        puVar22 = DAT_008489c4;
        if (DAT_008489c8 == (uint *)0x0) {
          if (DAT_008489d0 == (undefined4 *)0x0) {
            DAT_008489c4 = (uint *)0x0;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 1;
            }
            goto LAB_0068a687;
          }
          pbStack_2c = (byte *)thunk_FUN_006684e0(DAT_008489c4,&uStack_10);
          thunk_FUN_006686c0((int *)&DAT_008489c4);
          thunk_FUN_006809b0(pbStack_2c,uStack_10);
          thunk_FUN_006686c0((int *)&pbStack_2c);
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        else {
          uStack_ac = 0;
          if (DAT_008489c4 == (uint *)0x0) {
            puStack_a8 = (uint *)0x0;
          }
          else {
            puStack_a8 = DAT_008489c4 + -8;
          }
          FUN_006ae1c0(*(uint **)((int)DAT_008489c8 + 0x85),&uStack_ac);
          DAT_008489c4 = (uint *)0x0;
          DAT_008488b0 = DAT_008488b0 + -1;
        }
        goto switchD_006841b6_default;
      case 0x426:
        iVar4 = thunk_FUN_00681140();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x78d);
        }
        puVar7 = auStack_128;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        auStack_128[0] = (&DAT_00811c80)[DAT_008488b0 * 0xac5];
        auStack_128[1] = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        auStack_128[2] = (&DAT_00811c88)[DAT_008488b0 * 0xac5];
        uStack_11c = *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        uStack_11a = *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5);
        uStack_118 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        uStack_116 = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        uStack_114 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];
        _strncpy(acStack_113,(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],0xe);
        FUN_006ae1c0(*(uint **)((int)DAT_008489c4 + 0x1eb),auStack_128);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x427:
        iVar4 = thunk_FUN_00681280();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x79d);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0xdf) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x428:
        iVar4 = thunk_FUN_00681400();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7b1);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0xf5) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0xf6) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(int *)((int)DAT_008489c4 + 0xfa) = (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x429:
        iVar4 = thunk_FUN_006812d0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7a3);
        }
        *(undefined1 *)(DAT_008489c4 + 0x38) = *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5)
        ;
        *(undefined2 *)((int)DAT_008489c4 + 0xe1) =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        *(undefined2 *)((int)DAT_008489c4 + 0xe3) =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined2 *)((int)DAT_008489c4 + 0xe5) =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0xf1) = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        *(int *)((int)DAT_008489c4 + 0xe7) = *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19;
        *(undefined2 *)((int)DAT_008489c4 + 0xeb) = (&DAT_00811c98)[DAT_008488b0 * 0x158a];
        *(undefined2 *)((int)DAT_008489c4 + 0xed) =
             *(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14);
        *(undefined2 *)((int)DAT_008489c4 + 0xef) = (&DAT_00811ca0)[DAT_008488b0 * 0x158a];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42a:
        iVar4 = thunk_FUN_006814a0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7b9);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x102) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0x109) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(int *)((int)DAT_008489c4 + 0x103) = (&DAT_00811c88)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42b:
        iVar4 = thunk_FUN_00681540();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7c1);
        }
        uStack_9c = *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        uStack_a0 = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                             *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        uStack_90 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        uStack_9a = (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        uStack_96 = (&DAT_00811c94)[DAT_008488b0 * 0x158a];
        uStack_94 = CONCAT22(*(undefined2 *)(&DAT_00811c9c + DAT_008488b0 * 0x2b14),
                             (&DAT_00811c98)[DAT_008488b0 * 0x158a]);
        FUN_006ae1c0(*(uint **)((int)DAT_008489c4 + 0x203),&uStack_a0);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42c:
        iVar4 = thunk_FUN_00681670();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,2000);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x119) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0x11a) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)((int)DAT_008489c4 + 0x11e) =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined2 *)(DAT_008489c4 + 0x48) = *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5)
        ;
        *(undefined4 *)((int)DAT_008489c4 + 0x126) = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        *(int *)((int)DAT_008489c4 + 0x122) = *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19
        ;
        *(int *)((int)DAT_008489c4 + 0x12a) = *(int *)(&DAT_00811c98 + DAT_008488b0 * 0x158a) * 0x19
        ;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42d:
        iVar4 = thunk_FUN_006818b0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7e7);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x143) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        DAT_008489c4[0x51] = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)(DAT_008489c4 + 0x52) = *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5)
        ;
        *(undefined2 *)((int)DAT_008489c4 + 0x14a) =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        DAT_008489c4[0x53] = (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42e:
        iVar4 = thunk_FUN_006819a0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7f1);
        }
        uStack_3c = CONCAT22(*(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5),
                             *(undefined2 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5));
        uStack_38 = CONCAT22(*(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5),
                             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5));
        uStack_34 = CONCAT22((&DAT_00811c94)[DAT_008488b0 * 0x158a],
                             *(undefined2 *)(&DAT_00811c90 + DAT_008488b0 * 0xac5));
        FUN_006ae1c0(*(uint **)((int)DAT_008489c4 + 0x20f),&uStack_3c);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x42f:
        iVar4 = thunk_FUN_006817a0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7dc);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x132) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0x133) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)((int)DAT_008489c4 + 0x137) =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined2 *)((int)DAT_008489c4 + 0x139) =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0x13f) = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        *(int *)((int)DAT_008489c4 + 0x13b) = *(int *)(&DAT_00811c94 + DAT_008488b0 * 0x158a) * 0x19
        ;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x430:
        iVar4 = thunk_FUN_00681ad0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x7fe);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x156) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        *(undefined2 *)((int)DAT_008489c4 + 0x157) =
             *(undefined2 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        *(undefined2 *)((int)DAT_008489c4 + 0x159) =
             *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        *(undefined4 *)((int)DAT_008489c4 + 0x15b) = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        *(undefined4 *)((int)DAT_008489c4 + 0x15f) = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x431:
        iVar4 = thunk_FUN_00681bb0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x808);
        }
        *(undefined1 *)((int)DAT_008489c4 + 0x167) =
             *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        DAT_008489c4[0x5a] = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined2 *)(DAT_008489c4 + 0x5b) = *(undefined2 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5)
        ;
        *(undefined2 *)((int)DAT_008489c4 + 0x16e) =
             *(undefined2 *)(&DAT_00811c8c + DAT_008488b0 * 0xac5);
        DAT_008489c4[0x5c] = (&DAT_00811c90)[DAT_008488b0 * 0xac5] * 0x19;
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x432:
        iVar4 = thunk_FUN_00681ca0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489c4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x812);
        }
        *(undefined1 *)(DAT_008489c4 + 0x5d) = *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5)
        ;
        *(undefined4 *)((int)DAT_008489c4 + 0x23f) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x44c:
        DAT_008489c0 = 1;
        iVar4 = thunk_FUN_00680ff0();
        if (iVar4 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if ((DAT_008489c4 != (uint *)0x0) || (DAT_008489c8 != (uint *)0x0)) {
          FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x765);
        }
        if (DAT_008489b8 == (uint *)0x0) {
          if (DAT_008489b4 == (uint *)0x0) {
            if (DAT_008489bc != (uint *)0x0) {
              FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x774);
            }
            DAT_008489bc = thunk_FUN_0065c9e0((char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5]);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
          if (*(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
            puVar7 = (undefined4 *)(*(int *)((int)DAT_008489b4 + 0x4e) + 6);
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            _strncpy((char *)(*(int *)((int)DAT_008489b4 + 0x4e) + 6),
                     (char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],0x3f);
            DAT_008488b0 = DAT_008488b0 + -1;
            goto switchD_006841b6_default;
          }
        }
        else if (*(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5] != '\0') {
          puVar7 = (undefined4 *)(*(int *)((int)DAT_008489b8 + 0x106) + 6);
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          _strncpy((char *)(*(int *)((int)DAT_008489b8 + 0x106) + 6),
                   (char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],0x3f);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x44d:
        DAT_008489c0 = 0;
        if (DAT_008489cc != (undefined4 *)0x0) {
          FUN_006a5e40(-0x91,DAT_007ed77c,0x7d5604,0x77a);
        }
        if ((DAT_008489b8 == (uint *)0x0) && (DAT_008489b4 == (uint *)0x0)) {
          if (DAT_008489bc == (uint *)0x0) {
            FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x77c);
          }
          puVar22 = DAT_008489bc;
          if (DAT_008489d0 == (undefined4 *)0x0) {
            DAT_008489bc = (uint *)0x0;
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 5;
            }
            goto LAB_0068a687;
          }
          pbStack_c = (byte *)thunk_FUN_0065cd10(DAT_008489bc,&uStack_18);
          thunk_FUN_0065d0f0((int *)&DAT_008489bc);
          thunk_FUN_006809b0(pbStack_c,uStack_18);
          thunk_FUN_0065d0f0((int *)&pbStack_c);
          DAT_008488b0 = DAT_008488b0 + -1;
          goto switchD_006841b6_default;
        }
        break;
      case 0x456:
      case 0x457:
      case 0x458:
      case 0x459:
      case 0x45a:
      case 0x45b:
      case 0x45c:
      case 0x45d:
      case 0x45e:
      case 0x45f:
      case 0x460:
      case 0x461:
      case 0x462:
      case 0x463:
      case 0x464:
      case 0x465:
      case 0x466:
      case 0x467:
      case 0x468:
      case 0x469:
      case 0x46a:
      case 0x46b:
      case 0x46c:
      case 0x46d:
      case 0x46e:
      case 0x46f:
      case 0x470:
      case 0x471:
      case 0x472:
      case 0x473:
      case 0x474:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x698);
        }
        iVar11 = thunk_FUN_00680b50();
        if (iVar11 == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489cc != (undefined4 *)0x0) {
          FUN_006a5e40(-0x90,DAT_007ed77c,0x7d5604,0x69a);
        }
        DAT_008489cc = thunk_FUN_0065d120();
        piVar19 = (int *)(iVar4 + 0x46e);
        *(undefined4 *)((int)DAT_008489cc + 1) = (&DAT_00811c84)[DAT_008488b0 * 0xac5];
        *(undefined4 *)((int)DAT_008489cc + 5) = (&DAT_00811a94)[DAT_008488b0 * 0xac5];
        if ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] == '\x02') {
          iVar4 = thunk_FUN_006838b0(piVar19,'\x02',(byte *)(&DAT_00811c80 + DAT_008488b0 * 0xac5),
                                     *(int *)(iVar4 + 0x456));
          uVar13 = (undefined2)iVar4;
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x456);
          iVar11 = thunk_FUN_0067fca0((&DAT_00811c80)[DAT_008488b0 * 0xac5]);
          iVar4 = thunk_FUN_00683780(piVar19,iVar11,iVar4);
          uVar13 = (undefined2)iVar4;
        }
        *(undefined2 *)((int)DAT_008489cc + 9) = uVar13;
        uStack_64 = 0xb;
        uStack_61 = 1;
        uStack_63 = *(undefined2 *)(&DAT_00811a94 + DAT_008488b0 * 0xac5);
        thunk_FUN_0064a830(piVar19,(undefined4 *)&uStack_64);
        (&DAT_00811a90)[DAT_008488b0 * 0xac5] = 4;
        goto switchD_006841b6_default;
      case 0x4b0:
        if (DAT_008489d4 != (uint *)0x0) {
          FUN_006a5e40(-0x8c,DAT_007ed77c,0x7d5604,0x818);
        }
        DAT_008489d4 = FUN_006ae290((uint *)0x0,3,0x118,1);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b1:
        if (DAT_008489d4 == (uint *)0x0) {
          FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x81d);
        }
        puVar22 = DAT_008489d4;
        if (DAT_008489d0 == (undefined4 *)0x0) {
          DAT_008489d4 = (uint *)0x0;
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0x40;
          }
          goto LAB_0068a687;
        }
        FUN_006a5e40(-0x8d,DAT_007ed77c,0x7d5604,0x81f);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      case 0x4b2:
        bVar3 = thunk_FUN_00681d20();
        if (CONCAT31(extraout_var_03,bVar3) == 0) {
          thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
        }
        if (DAT_008489d4 == (uint *)0x0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x82b);
        }
        pcVar8 = acStack_2c8;
        for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + 4;
        }
        _strncpy(acStack_2c8,(char *)(&DAT_00811aec)[DAT_008488b0 * 0xac5],0x103);
        uStack_1c4 = *(undefined1 *)(&DAT_00811c80 + DAT_008488b0 * 0xac5);
        uStack_1c3 = *(undefined1 *)(&DAT_00811c84 + DAT_008488b0 * 0xac5);
        uStack_1c2 = *(undefined1 *)(&DAT_00811c88 + DAT_008488b0 * 0xac5);
        uStack_1c1 = (&DAT_00811c8c)[DAT_008488b0 * 0xac5];
        uStack_1bd = (&DAT_00811c90)[DAT_008488b0 * 0xac5];
        uStack_1b9 = *(undefined4 *)(&DAT_00811c94 + DAT_008488b0 * 0x158a);
        uStack_1b5 = *(undefined4 *)(&DAT_00811c98 + DAT_008488b0 * 0x158a);
        uStack_1b1 = (&DAT_00811c9c)[DAT_008488b0 * 0x2b14];
        FUN_006ae1c0(DAT_008489d4,(undefined4 *)acStack_2c8);
        DAT_008488b0 = DAT_008488b0 + -1;
        goto switchD_006841b6_default;
      }
    }
  }
  else {
    if (0x5b6 < iVar11) {
      if (0x5ec < iVar11) {
        if (0x76c < iVar11) goto switchD_00685456_default;
        if (iVar11 == 0x76c) {
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f8);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8f8);
          }
          iVar11 = thunk_FUN_00681f70(1);
          goto joined_r0x00689693;
        }
        switch(iVar11) {
        case 0x5ed:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ec);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8ec;
LAB_0068883f:
            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
          }
          goto LAB_00688855;
        case 0x5ee:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ed);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8ed;
            goto LAB_006877a0;
          }
          goto LAB_006877b6;
        case 0x5ef:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ee);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8ee);
          }
          iVar11 = 9;
          goto LAB_006895cd;
        case 0x5f0:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ef);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8ef;
            goto LAB_006882e6;
          }
          break;
        case 0x5f1:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e5);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8e5;
            goto LAB_006882e6;
          }
          break;
        case 0x5f2:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e6);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8e6;
            goto LAB_006877ef;
          }
          goto LAB_00687805;
        case 0x5f3:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e7);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8e7;
            goto LAB_006882e6;
          }
          break;
        case 0x5f4:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e8);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8e8;
            goto LAB_006877ef;
          }
          goto LAB_00687805;
        case 0x5f5:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e9);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8e9;
LAB_00689556:
            FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
          }
          goto LAB_0068956c;
        case 0x5f6:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ea);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8ea;
            goto LAB_00687750;
          }
          goto LAB_00687766;
        case 0x5f7:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8eb);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8eb;
            goto LAB_006882e6;
          }
          break;
        case 0x5f8:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f0);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f0;
            goto LAB_006877ef;
          }
          goto LAB_00687805;
        case 0x5f9:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f2);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f2;
            goto LAB_0068883f;
          }
          goto LAB_00688855;
        case 0x5fa:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f3);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f3;
            goto LAB_00689556;
          }
          goto LAB_0068956c;
        case 0x5fb:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f4);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f4;
            goto LAB_0068883f;
          }
LAB_00688855:
          iVar11 = 6;
          goto LAB_006895cd;
        case 0x5fc:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f5);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f5;
            goto LAB_00689556;
          }
LAB_0068956c:
          iVar11 = 6;
          goto LAB_0068956e;
        case 0x5fd:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f1);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f1;
            goto LAB_006882e6;
          }
          break;
        case 0x5fe:
          iVar4 = thunk_FUN_00683670();
          if (iVar4 == 0) {
            FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8f6);
          }
          if (DAT_008489cc == (undefined4 *)0x0) {
            uVar23 = 0x8f6;
            goto LAB_006895b5;
          }
          goto LAB_006895cb;
        default:
          goto switchD_00685456_default;
        }
        goto LAB_006882fc;
      }
      if (iVar11 == 0x5ec) {
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e4);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8e4;
          goto LAB_00687750;
        }
        goto LAB_00687766;
      }
      switch(iVar11) {
      case 0x5b7:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ce);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8ce;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x5b8:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8cf);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8cf;
          goto LAB_00687750;
        }
        goto LAB_00687766;
      case 0x5b9:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d0);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d0;
          goto LAB_006879ea;
        }
        goto LAB_00687a00;
      default:
        goto switchD_00685456_default;
      case 0x5c8:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8cb);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8cb);
          iVar11 = 4;
          goto LAB_006895cd;
        }
        break;
      case 0x5dc:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d4);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8d4);
        }
        iVar11 = thunk_FUN_006820f0(2,1,2);
        goto LAB_006895d5;
      case 0x5dd:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d5);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d5;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x5de:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d6);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d6;
          goto LAB_00687750;
        }
        goto LAB_00687766;
      case 0x5df:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d7);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d7;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x5e0:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d8);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d8;
          goto LAB_006877ef;
        }
        break;
      case 0x5e1:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d9);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8d9;
          goto LAB_006882e6;
        }
        goto LAB_006882fc;
      case 0x5e2:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8da);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8da;
          goto LAB_00687aec;
        }
        goto LAB_00687b02;
      case 0x5e3:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8db);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8db;
          goto LAB_006877a0;
        }
        goto LAB_006877b6;
      case 0x5e4:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8dc);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8dc;
          goto LAB_006877ef;
        }
        break;
      case 0x5e5:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8de);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8de;
          goto LAB_006877ef;
        }
        break;
      case 0x5e6:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8dd);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8dd;
          goto LAB_006882e6;
        }
        goto LAB_006882fc;
      case 0x5e7:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8df);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8df;
          goto LAB_006882e6;
        }
        goto LAB_006882fc;
      case 0x5e8:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e0);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8e0;
          goto LAB_00687750;
        }
        goto LAB_00687766;
      case 0x5e9:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e1);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8e1;
          goto LAB_006882e6;
        }
LAB_006882fc:
        iVar11 = 4;
        goto LAB_0068956e;
      case 0x5ea:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e2);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          uVar23 = 0x8e2;
          goto LAB_006877ef;
        }
        break;
      case 0x5eb:
        iVar4 = thunk_FUN_00683670();
        if (iVar4 == 0) {
          FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8e3);
        }
        if (DAT_008489cc == (undefined4 *)0x0) {
          FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8e3);
        }
        iVar11 = 9;
        goto LAB_0068956e;
      }
LAB_00687805:
      iVar11 = 4;
      goto LAB_006895cd;
    }
    if (iVar11 == 0x5b6) {
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d2);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8d2;
        goto LAB_00689556;
      }
      goto LAB_0068956c;
    }
    switch(iVar11) {
    case 0x568:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a1);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8a1);
        iVar11 = 2;
        goto LAB_006895cd;
      }
      goto LAB_006878a4;
    case 0x569:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a2);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a2;
        goto LAB_0068783f;
      }
      break;
    case 0x56a:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a3);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a3;
LAB_0068821f:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
      goto LAB_00688235;
    default:
      goto switchD_00685456_default;
    case 0x578:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a6);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a6;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x579:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a7);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a7;
LAB_006882e6:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
      goto LAB_006882fc;
    case 0x57a:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a8);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a8;
        goto LAB_0068821f;
      }
      goto LAB_00688235;
    case 0x57b:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a9);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a9;
        goto LAB_006877a0;
      }
      goto LAB_006877b6;
    case 0x582:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ab);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ab;
LAB_006883ac:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
      goto LAB_006883c2;
    case 0x583:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ac);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ac;
        goto LAB_0068783f;
      }
      break;
    case 0x584:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ad);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ad;
        goto LAB_0068821f;
      }
LAB_00688235:
      iVar11 = 1;
      goto LAB_006895cd;
    case 0x585:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8a4);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8a4;
LAB_006876fe:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
      goto LAB_00687714;
    case 0x58c:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b4);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8b4);
      }
      iVar11 = thunk_FUN_006821d0(1,3);
      goto joined_r0x00689693;
    case 0x58d:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b1);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b1;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x58e:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b2);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b2;
        goto LAB_0068783f;
      }
      break;
    case 0x58f:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b3);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b3;
        goto LAB_0068788e;
      }
      goto LAB_006878a4;
    case 0x590:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b5);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b5;
LAB_006895b5:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
LAB_006895cb:
      iVar11 = 7;
      goto LAB_006895cd;
    case 0x591:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b6);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b6;
        goto LAB_0068783f;
      }
      break;
    case 0x592:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b7);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b7;
        goto LAB_006883ac;
      }
LAB_006883c2:
      iVar11 = 5;
      goto LAB_006895cd;
    case 0x593:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b8);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b8;
        goto LAB_006876fe;
      }
LAB_00687714:
      iVar11 = thunk_FUN_00681f50();
      goto joined_r0x00689693;
    case 0x594:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b9);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8b9);
      }
      iVar11 = thunk_FUN_00681fe0(2);
      goto LAB_006895d5;
    case 0x595:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ae);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ae;
        goto LAB_006882e6;
      }
      goto LAB_006882fc;
    case 0x596:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8af);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8af;
LAB_006876ab:
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,uVar23);
      }
      goto LAB_006876c1;
    case 0x597:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8b0);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8b0;
        goto LAB_0068783f;
      }
      break;
    case 0x598:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ba);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ba;
        goto LAB_00687a9d;
      }
      goto LAB_00687ab3;
    case 0x599:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8bb);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8bb;
        goto LAB_006876ab;
      }
LAB_006876c1:
      iVar11 = thunk_FUN_00681f50();
      goto LAB_006895d5;
    case 0x59a:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8bc);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        FUN_006a5e40(-0x8f,DAT_007ed77c,0x7d5604,0x8bc);
      }
      iVar11 = thunk_FUN_00681fe0(2);
      goto joined_r0x00689693;
    case 0x59b:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8bd);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8bd;
        goto LAB_0068883f;
      }
      goto LAB_00688855;
    case 0x59c:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8be);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8be;
        goto LAB_0068783f;
      }
      break;
    case 0x59d:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8bf);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8bf;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x5aa:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c1);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c1;
        goto LAB_006877a0;
      }
      goto LAB_006877b6;
    case 0x5ab:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c2);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c2;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x5ac:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c3);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c3;
        goto LAB_006877a0;
      }
      goto LAB_006877b6;
    case 0x5ad:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c4);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c4;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x5ae:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c5);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c5;
        goto LAB_0068783f;
      }
      break;
    case 0x5af:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c6);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c6;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x5b0:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c7);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c7;
        goto LAB_0068783f;
      }
      break;
    case 0x5b1:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c8);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c8;
        goto LAB_0068788e;
      }
      goto LAB_006878a4;
    case 0x5b2:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8c9);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8c9;
        goto LAB_0068783f;
      }
      break;
    case 0x5b3:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8ca);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8ca;
        goto LAB_00687750;
      }
      goto LAB_00687766;
    case 0x5b4:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8cd);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8cd;
        goto LAB_006879ea;
      }
      goto LAB_00687a00;
    case 0x5b5:
      iVar4 = thunk_FUN_00683670();
      if (iVar4 == 0) {
        FUN_006a5e40(-0x8e,DAT_007ed77c,0x7d5604,0x8d1);
      }
      if (DAT_008489cc == (undefined4 *)0x0) {
        uVar23 = 0x8d1;
        goto LAB_006877ef;
      }
      goto LAB_00687805;
    }
LAB_00687855:
    iVar11 = 2;
LAB_0068956e:
    iVar11 = thunk_FUN_00681f70(iVar11);
joined_r0x00689693:
    if (iVar11 == 0) {
      thunk_FUN_006802a0(-0x7d,(char *)(&DAT_00811aa4 + DAT_008488b0 * 0xac5));
    }
    iVar11 = *(int *)(iVar4 + 0x456);
    uVar13 = (undefined2)(&DAT_00811a94)[DAT_008488b0 * 0xac5];
LAB_006896f6:
    thunk_FUN_006839d0((int)DAT_008489cc,(int *)(iVar4 + 0x46e),uVar13,iVar11);
  }
switchD_00685456_default:
  DAT_008488b0 = DAT_008488b0 + -1;
  goto switchD_006841b6_default;
}

