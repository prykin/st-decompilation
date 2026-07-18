
void __fastcall thunk_FUN_004a0fa0(void *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 extraout_EAX;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  int extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  undefined4 extraout_ECX_22;
  int extraout_ECX_23;
  int extraout_ECX_24;
  int extraout_ECX_25;
  int extraout_ECX_26;
  int extraout_ECX_27;
  int extraout_ECX_28;
  int extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar12;
  undefined4 **ppuStack_19c;
  undefined4 auStack_198 [16];
  void *pvStack_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  undefined4 uStack_14a;
  undefined4 uStack_146;
  undefined4 uStack_142;
  undefined4 uStack_13e;
  undefined4 uStack_13a;
  undefined2 uStack_136;
  undefined1 uStack_134;
  undefined2 uStack_133;
  uint *apuStack_130 [3];
  short sStack_124;
  short sStack_122;
  short sStack_120;
  undefined4 uStack_114;
  short sStack_110;
  undefined4 uStack_102;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  uint uStack_e8;
  undefined4 auStack_e4 [3];
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined4 uStack_ce;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined4 uStack_9e;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  undefined4 uStack_81;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  uint *puStack_28;
  undefined2 uStack_22;
  short sStack_20;
  short sStack_1e;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint *puStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_14 = *(uint *)(*(int *)((int)param_1 + 0x2d) + 0xc);
  uStack_e8 = 0xffffffff;
  puStack_c = (uint *)0x0;
  puStack_10 = (uint *)0x0;
  ppuStack_19c = DAT_00858df8;
  DAT_00858df8 = &ppuStack_19c;
  pvStack_158 = param_1;
  iVar3 = __setjmp3(auStack_198,0,unaff_EDI,unaff_ESI);
  pvVar2 = pvStack_158;
  uVar10 = uStack_14;
  uVar11 = uStack_14;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 ***)ppuStack_19c;
    if (iVar3 == -0x5001fff7) {
      return;
    }
    iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10dc,0,iVar3,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar3,0,0x7abe3c,0x10dd);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
    FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
    uVar4 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                        *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1);
    if ((uVar4 == 0) || (*(int *)(uVar4 + 0x20) != 0x14)) {
      FUN_006b0c70(*(int *)((int)pvVar2 + 0x2d),uVar11);
      uVar10 = uVar10 - 1;
    }
  }
  if (uVar10 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xdf7);
  }
  iVar3 = *(int *)((int)pvVar2 + 0x1e6);
  uVar11 = *(uint *)(*(int *)((int)pvVar2 + 0x2d) + 0xc);
  uStack_14 = uVar11;
  if (iVar3 == 1) {
    thunk_FUN_00497cd0(*(int *)((int)pvVar2 + 0x2d),*(int *)((int)pvVar2 + 0x3d),
                       *(int *)((int)pvVar2 + 0x41),*(int *)((int)pvVar2 + 0x45));
    uVar10 = 0;
    uStack_18 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    uStack_40 = 0xffff;
    uStack_3e = 0xffff;
    uStack_3c = 0xffff;
    iStack_44 = iVar3;
    if (uVar11 != 0) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1
                                           );
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe03);
        }
        thunk_FUN_0045ef00(pvVar5,1,&iStack_44);
        uStack_18 = uStack_18 + 1;
        uVar10 = uStack_18 & 0xffff;
        iVar3 = extraout_ECX_00;
      } while (uVar10 < uVar11);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 3) {
    uStack_18 = 0;
    uStack_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        uVar10 = FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar10 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1
                                           );
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe46);
        }
        thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
        uStack_18 = uStack_18 + 1;
        uVar10 = uStack_18 & 0xffff;
        iVar3 = extraout_ECX_01;
      } while (uVar10 < uVar11);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 2) {
    thunk_FUN_00499de0(*(uint **)((int)pvVar2 + 0x2d));
    iVar3 = extraout_ECX_02;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 6) {
    uStack_4c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    thunk_FUN_004a7490((int)pvVar2);
    puStack_28 = FUN_006ae290((uint *)0x0,0,2,1);
    if (*(int *)(*(int *)((int)pvVar2 + 0x22e) + 0xc) == 0) {
      uVar10 = 0;
      uStack_18 = 0;
      if (uVar11 != 0) {
        uVar11 = 0;
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
          sStack_110 = (short)uStack_8;
          uStack_114 = 0;
          uStack_102 = 0;
          FUN_006ae140(*(uint **)((int)pvVar2 + 0x22e),uVar10,&uStack_114);
          uStack_48 = uVar10;
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EAX >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe77,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe78);
          }
          FUN_006ae1c0(puStack_28,&uStack_8);
          thunk_FUN_0045ef00(pvVar5,6,&uStack_4c);
          uVar10 = uVar10 + 1;
          uStack_18 = uStack_18 + 1;
          uVar11 = uStack_18 & 0xffff;
        } while (uVar11 < uStack_14);
      }
    }
    else {
      uStack_18 = 0;
      if (uVar11 != 0) {
        do {
          uVar11 = *(uint *)(*(int *)((int)pvVar2 + 0x22e) + 0xc);
          uVar10 = uVar11;
          uVar4 = uStack_18;
          while (uVar11 = uVar11 - 1, uStack_18 = uVar4, -1 < (int)uVar11) {
            FUN_006acc70(*(int *)((int)pvVar2 + 0x22e),uVar11,&uStack_114);
            uVar4 = uStack_18;
            if (sStack_110 == -1) {
              uVar10 = uVar11;
            }
          }
          FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar4 & 0xffff,&uStack_8);
          uStack_114 = 0;
          uStack_102 = 0;
          sStack_110 = (short)uStack_8;
          FUN_006ae140(*(uint **)((int)pvVar2 + 0x22e),uVar10,&uStack_114);
          uStack_48 = uVar10;
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe64,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe65);
          }
          FUN_006ae1c0(puStack_28,&uStack_8);
          thunk_FUN_0045ef00(pvVar5,6,&uStack_4c);
          uStack_18 = uVar4 + 1;
        } while ((uStack_18 & 0xffff) < uStack_14);
      }
    }
    FUN_006acc70(*(int *)((int)pvVar2 + 0x22a),*(uint *)((int)pvVar2 + 0x232),
                 (undefined4 *)&sStack_124);
    puVar9 = puStack_28;
    if (puStack_28[3] != 0) {
      thunk_FUN_00497cd0((int)puStack_28,(int)sStack_124,(int)sStack_122,(int)sStack_120);
    }
    FUN_006ae110((byte *)puVar9);
    iVar3 = extraout_ECX_03;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 7) {
    uVar11 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    uStack_40 = 0xffff;
    uStack_3e = 0xffff;
    uStack_3c = 0xffff;
    iStack_44 = iVar3;
    if (uStack_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1
                                           );
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe8c);
        }
        thunk_FUN_004162b0(pvVar5,&sStack_20,&sStack_1e,&uStack_22);
        thunk_FUN_00481520(pvVar5,(int)sStack_20,(int)sStack_1e,*(undefined4 *)((int)pvVar2 + 0x222)
                          );
        thunk_FUN_0045ef00(pvVar5,1,&iStack_44);
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
        iVar3 = extraout_ECX_04;
      } while (uVar10 < uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 8) {
    uStack_18 = 0;
    uStack_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (uStack_14 != 0) {
      do {
        uVar11 = uStack_18 & 0xffff;
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe9a);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 != 8) && (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 != 0x14)) &&
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 != 0x1a)) {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 == 0) {
              thunk_FUN_0045ef00(piVar6,3,&uStack_1c);
            }
            else {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
            }
            FUN_006b0c70(*(int *)((int)pvVar2 + 0x2d),uVar11);
            uStack_18 = uStack_18 + 0xffff;
            uStack_14 = uStack_14 - 1;
          }
        }
        uStack_18 = uStack_18 + 1;
      } while ((uStack_18 & 0xffff) < uStack_14);
    }
    uVar11 = 0;
    uStack_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (uStack_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xeb0);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(puStack_10,&uStack_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_18);
    }
    puVar9 = puStack_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uStack_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                       puStack_10,puStack_c);
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    thunk_FUN_004a3430(1,*(int *)((int)pvVar2 + 0x24e),*(int *)((int)pvVar2 + 0x266),
                       *(int *)((int)pvVar2 + 0x2d));
    iVar3 = extraout_ECX_06;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 9) {
    uVar11 = 0;
    uStack_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_154 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_150 = *(undefined2 *)((int)pvVar2 + 0x276);
    uStack_14e = *(undefined2 *)((int)pvVar2 + 0x278);
    uStack_14a = *(undefined4 *)((int)pvVar2 + 0x27c);
    uStack_14c = *(undefined2 *)((int)pvVar2 + 0x27a);
    uStack_146 = *(undefined4 *)((int)pvVar2 + 0x280);
    uStack_133 = *(undefined2 *)((int)pvVar2 + 0x293);
    uStack_142 = *(undefined4 *)((int)pvVar2 + 0x284);
    uStack_13e = *(undefined4 *)((int)pvVar2 + 0x288);
    uStack_13a = *(undefined4 *)((int)pvVar2 + 0x28c);
    uStack_136 = *(undefined2 *)((int)pvVar2 + 0x290);
    uStack_134 = *(undefined1 *)((int)pvVar2 + 0x292);
    if (uStack_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xecf);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x19)) {
            puVar12 = &uStack_154;
            iVar3 = 0x11;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
              goto LAB_004a1878;
            }
            puVar12 = &uStack_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a1878:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_14);
    }
    uVar11 = 0;
    uStack_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (uStack_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_04 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xee9);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x19)) {
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(puStack_10,&uStack_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_18);
    }
    puVar9 = puStack_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uStack_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                       puStack_10,puStack_c);
    iVar3 = extraout_ECX_07;
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
      iVar3 = extraout_ECX_08;
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
      iVar3 = extraout_ECX_09;
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 10) {
    uVar11 = 0;
    uStack_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_64 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_60 = *(undefined2 *)((int)pvVar2 + 0x295);
    uStack_5e = *(undefined2 *)((int)pvVar2 + 0x297);
    uStack_5c = *(undefined2 *)((int)pvVar2 + 0x299);
    if (uStack_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_10 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf02);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            puVar12 = &uStack_64;
            iVar3 = 0xd;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
              goto LAB_004a1a74;
            }
            puVar12 = &uStack_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a1a74:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_14);
    }
    uVar11 = 0;
    uStack_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (uStack_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_11 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf1c);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(puStack_10,&uStack_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_18);
    }
    puVar9 = puStack_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uStack_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                       puStack_10,puStack_c);
    iVar3 = extraout_ECX_12;
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
      iVar3 = extraout_ECX_13;
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
      iVar3 = extraout_ECX_14;
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 4) {
    thunk_FUN_004a3cd0(1,*(int *)((int)pvVar2 + 0x29f),*(int *)((int)pvVar2 + 0x2d));
    iVar3 = extraout_ECX_15;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 5) {
    uVar11 = 0;
    if (uStack_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        iVar3 = extraout_ECX_16;
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_16 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf35);
          }
          iVar3 = thunk_FUN_00490d90((int)pvVar5);
          if (iVar3 == 0) {
            uStack_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
            iVar3 = extraout_ECX_17;
          }
          else {
            if (puStack_c == (uint *)0x0) {
              puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(puStack_c,&uStack_8);
            iVar3 = extraout_ECX_18;
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_14);
    }
    uVar11 = 0;
    uStack_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (uStack_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&uStack_8);
        iVar3 = extraout_ECX_19;
        if ((short)uStack_8 != -1) {
          uVar10 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_19 >> 8),
                                               *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1);
          if (uVar10 == 0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf47);
          }
          iVar7 = thunk_FUN_00490d90(uVar10);
          iVar3 = extraout_ECX_20;
          if ((iVar7 == 1) &&
             (uStack_e8 = thunk_FUN_00449a90(CONCAT31((int3)((uint)extraout_ECX_20 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),
                                             (short)uStack_8), iVar3 = extraout_ECX_21,
             uStack_e8 != 0xffffffff)) break;
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < uStack_18);
    }
    if (uStack_e8 != 0xffffffff) {
      FUN_006acc70(*(int *)((int)&DAT_007f5816 + *(char *)((int)pvVar2 + 0x24) * 0xa62),uStack_e8,
                   apuStack_130);
      FUN_006afe40((int *)&puStack_10,apuStack_130[0]);
      thunk_FUN_00445a40(CONCAT31((int3)((uint)extraout_ECX_22 >> 8),
                                  *(undefined1 *)((int)pvVar2 + 0x24)),puStack_10,puStack_c);
      iVar3 = extraout_ECX_23;
    }
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
      iVar3 = extraout_ECX_24;
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
      iVar3 = extraout_ECX_25;
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xb) {
    uVar11 = 0;
    uStack_d8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_18 = 0;
    puVar9 = puStack_c;
    uStack_1c = uStack_d8;
    if (0 < (int)uStack_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        iVar3 = extraout_ECX_26;
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_05 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf5d);
          }
          iVar7 = (**(code **)(*piVar6 + 0xf8))();
          iVar3 = extraout_ECX_27;
          if (iVar7 != 0) {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 == 0) {
              iVar3 = (**(code **)(*piVar6 + 0x2c))();
              if ((((iVar3 != 7) && (iVar3 != 0x13)) && (iVar3 != 0x1b)) ||
                 (iVar3 = thunk_FUN_00492370((int)piVar6), iVar3 != 0)) {
                thunk_FUN_0045ef00(piVar6,3,&uStack_1c);
                iVar3 = extraout_ECX_28;
                goto LAB_004a1ea4;
              }
              uStack_d4 = *(undefined2 *)((int)pvVar2 + 0x2a3);
              uStack_d2 = *(undefined2 *)((int)pvVar2 + 0x2a5);
              uStack_d0 = *(undefined2 *)((int)pvVar2 + 0x2a7);
              uStack_ce = *(undefined4 *)((int)pvVar2 + 0x2a9);
              thunk_FUN_0045ef00(piVar6,0xf,&uStack_d8);
              puVar8 = puStack_10;
              if (puStack_10 == (uint *)0x0) {
                puVar8 = FUN_006ae290((uint *)0x0,1,2,1);
                puStack_10 = puVar8;
              }
            }
            else {
              puVar8 = puVar9;
              if (puVar9 == (uint *)0x0) {
                puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                puVar8 = puVar9;
                puStack_c = puVar9;
              }
            }
            FUN_006ae1c0(puVar8,&uStack_8);
            iVar3 = extraout_ECX_29;
          }
        }
LAB_004a1ea4:
        uStack_18 = uStack_18 + 1;
        uVar11 = uStack_18 & 0xffff;
      } while ((int)uVar11 < (int)uStack_14);
    }
    if (puStack_10 == (uint *)0x0) {
LAB_004a1ede:
      if (puStack_c != (uint *)0x0) {
        uVar10 = 0;
        uVar11 = puStack_c[3];
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            FUN_006acc70((int)puStack_c,uVar4,&uStack_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_06 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (puStack_10 == (uint *)0x0) goto LAB_004a1ede;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         puStack_10,puVar9);
    }
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xc) {
    auStack_e4[0] = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uVar11 = 0;
    uStack_18 = 0;
    uStack_1c = auStack_e4[0];
    if (0 < (int)uStack_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_30 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf8e);
          }
          iVar3 = (**(code **)(*piVar6 + 0xf8))();
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*piVar6 + 0x2c))();
            if ((((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) &&
               (iVar3 = thunk_FUN_00492370((int)piVar6), iVar3 != 0)) {
              thunk_FUN_0045ef00(piVar6,0x10,auStack_e4);
              if (((*(short *)((int)pvVar2 + 0x2ad) != -1) ||
                  (*(short *)((int)pvVar2 + 0x2af) != -1)) ||
                 (*(short *)((int)pvVar2 + 0x2b1) != -1)) {
                puVar9 = puStack_10;
                if (puStack_10 == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  puStack_10 = puVar9;
                }
LAB_004a2089:
                FUN_006ae1c0(puVar9,&uStack_8);
              }
            }
            else {
              iVar3 = thunk_FUN_00490d90((int)piVar6);
              if (iVar3 == 0) {
                thunk_FUN_0045ef00(piVar6,3,&uStack_1c);
              }
              else if (((*(short *)((int)pvVar2 + 0x2ad) != -1) ||
                       (*(short *)((int)pvVar2 + 0x2af) != -1)) ||
                      (*(short *)((int)pvVar2 + 0x2b1) != -1)) {
                puVar9 = puStack_c;
                if (puStack_c == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  puStack_c = puVar9;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        uStack_18 = uStack_18 + 1;
        uVar11 = uStack_18 & 0xffff;
      } while ((int)uVar11 < (int)uStack_14);
    }
    if (puStack_10 == (uint *)0x0) {
LAB_004a20d0:
      if (puStack_c != (uint *)0x0) {
        uVar11 = puStack_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)puStack_c,uVar4,&uStack_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puStack_c == (uint *)0x0) {
      if (puStack_10 == (uint *)0x0) goto LAB_004a20d0;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         puStack_10,puStack_c);
    }
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xd) {
    uStack_52 = *(undefined2 *)((int)pvVar2 + 0x2b5);
    uVar11 = 0;
    uStack_58 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_50 = *(undefined2 *)((int)pvVar2 + 0x2b7);
    uStack_54 = *(undefined2 *)((int)pvVar2 + 0x2b3);
    uStack_1c = uStack_58;
    if (0 < (int)uStack_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_31 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xfc2);
          }
          if (*(int *)((int)pvVar2 + 0x2b9) == -1) {
            if ((*(int *)((int)pvVar5 + 0x7b6) == 0) || (*(int *)((int)pvVar5 + 0x7be) < 1)) {
LAB_004a221d:
              puVar12 = &uStack_1c;
              iVar3 = 3;
            }
            else {
              puVar12 = &uStack_58;
              iVar3 = 7;
            }
          }
          else {
            if ((*(int *)((int)pvVar5 + 0x7b6) != *(int *)((int)pvVar2 + 0x2b9)) ||
               (*(int *)((int)pvVar5 + 0x7be) < 1)) goto LAB_004a221d;
            puVar12 = &uStack_58;
            iVar3 = 7;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xe) {
    uStack_78 = *(undefined2 *)((int)pvVar2 + 0x2bd);
    uVar11 = 0;
    uStack_7c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_74 = *(undefined2 *)((int)pvVar2 + 0x2c1);
    uStack_76 = *(undefined2 *)((int)pvVar2 + 0x2bf);
    uStack_1c = uStack_7c;
    if (0 < (int)uStack_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_32 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xfea);
          }
          if ((*(int *)((int)pvVar5 + 0x6f7) == 4) && (0 < *(int *)((int)pvVar5 + 0x7a2))) {
            puVar12 = &uStack_7c;
            iVar3 = 10;
          }
          else {
            puVar12 = &uStack_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xf) {
    uStack_83 = *(undefined2 *)((int)pvVar2 + 0x2c4);
    uVar11 = 0;
    uStack_88 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_81 = *(undefined4 *)((int)pvVar2 + 0x2c6);
    uStack_84 = *(undefined1 *)((int)pvVar2 + 0x2c3);
    uStack_1c = uStack_88;
    if (0 < (int)uStack_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_33 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1003);
          }
          iVar3 = *(int *)((int)pvVar5 + 0x6f7);
          if (((iVar3 == 6) || (iVar3 == 0x12)) || (iVar3 == 0x22)) {
            puVar12 = &uStack_88;
            iVar3 = 9;
          }
          else {
            puVar12 = &uStack_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x11) {
    uStack_c4 = *(undefined4 *)((int)pvVar2 + 0x2ce);
    uVar11 = 0;
    uStack_c8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_c0 = *(undefined2 *)((int)pvVar2 + 0x2d2);
    uStack_be = *(undefined2 *)((int)pvVar2 + 0x2d4);
    uStack_bc = *(undefined2 *)((int)pvVar2 + 0x2d6);
    if (0 < (int)uStack_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_34 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x101e);
          }
          thunk_FUN_0045ef00(pvVar5,0x16,&uStack_c8);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x10) {
    uStack_f8 = *(undefined4 *)((int)pvVar2 + 0x2d8);
    uVar11 = 0;
    uStack_fc = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_f4 = *(undefined2 *)((int)pvVar2 + 0x2dc);
    uStack_f0 = *(undefined2 *)((int)pvVar2 + 0x2e0);
    uStack_ea = *(undefined2 *)((int)pvVar2 + 0x2e6);
    uStack_f2 = *(undefined2 *)((int)pvVar2 + 0x2de);
    uStack_ee = *(undefined2 *)((int)pvVar2 + 0x2e2);
    uStack_ec = *(undefined2 *)((int)pvVar2 + 0x2e4);
    if (0 < (int)uStack_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_07 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1032);
          }
          thunk_FUN_0045ef00(pvVar5,0x15,&uStack_fc);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)uStack_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x12) {
    uStack_6c = *(undefined2 *)((int)pvVar2 + 0x2e8);
    uStack_70 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_6a = *(undefined2 *)((int)pvVar2 + 0x2ea);
    uStack_68 = *(undefined2 *)((int)pvVar2 + 0x2ec);
    uVar11 = 0;
    uStack_18 = 0;
    puVar9 = puStack_c;
    if (0 < (int)uStack_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_08 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1042);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 7) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x13)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1b)) {
            thunk_FUN_0045ef00(piVar6,0x17,&uStack_70);
            puVar8 = puStack_10;
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = puStack_10;
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 == 0) {
              thunk_FUN_0045ef00(piVar6,3,&uStack_1c);
              goto LAB_004a26bb;
            }
            puVar8 = puVar9;
            if (puVar9 == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = puVar9;
              puStack_c = puVar9;
            }
          }
          FUN_006ae1c0(puVar8,&uStack_8);
        }
LAB_004a26bb:
        uStack_18 = uStack_18 + 1;
        uVar11 = uStack_18 & 0xffff;
      } while ((int)uVar11 < (int)uStack_14);
    }
    if (puStack_10 == (uint *)0x0) {
LAB_004a26f5:
      if (puStack_c != (uint *)0x0) {
        uVar11 = puStack_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)puStack_c,uVar4,&uStack_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                uStack_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (puStack_10 == (uint *)0x0) goto LAB_004a26f5;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         puStack_10,puVar9);
    }
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x13) {
    uStack_b2 = *(undefined2 *)((int)pvVar2 + 0x2f0);
    uVar10 = 0;
    uStack_b8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_b0 = *(undefined2 *)((int)pvVar2 + 0x2f2);
    uVar11 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),uStack_b0);
    uStack_b4 = *(undefined2 *)((int)pvVar2 + 0x2ee);
    uStack_ae = *(undefined4 *)((int)pvVar2 + 0x2f4);
    uStack_1c = uStack_b8;
    if (0 < (int)uStack_14) {
      uVar11 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_09 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,
                                             1);
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1071);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1d)) {
            if (puStack_10 == (uint *)0x0) {
              puStack_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(puStack_10,&uStack_8);
            puVar12 = &uStack_b8;
            iVar3 = 0x12;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (puStack_c == (uint *)0x0) {
                puStack_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(puStack_c,&uStack_8);
              goto LAB_004a2897;
            }
            puVar12 = &uStack_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a2897:
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while ((int)uVar11 < (int)uStack_14);
    }
    puVar9 = puStack_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),puStack_10,
                       puStack_c);
    if (puStack_10 != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_10);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x14) {
    puStack_28 = thunk_FUN_00415590(pvVar2,*(int *)((int)pvVar2 + 0x2d),
                                    (int)*(short *)((int)pvVar2 + 0x2fe),
                                    (int)*(short *)((int)pvVar2 + 0x300),
                                    (int)*(short *)((int)pvVar2 + 0x302),
                                    (int)*(short *)((int)pvVar2 + 0x2f8),
                                    (int)*(short *)((int)pvVar2 + 0x2fa),
                                    (int)*(short *)((int)pvVar2 + 0x2fc));
    if (puStack_28 == (uint *)0x0) {
      return;
    }
    puVar9 = thunk_FUN_00415590(pvVar2,*(int *)((int)pvVar2 + 0x2d),
                                (int)*(short *)((int)pvVar2 + 0x2f8),
                                (int)*(short *)((int)pvVar2 + 0x2fa),
                                (int)*(short *)((int)pvVar2 + 0x2fc),
                                (int)*(short *)((int)pvVar2 + 0x2fe),
                                (int)*(short *)((int)pvVar2 + 0x300),
                                (int)*(short *)((int)pvVar2 + 0x302));
    if (puVar9 == (uint *)0x0) {
      FUN_006ae110((byte *)puStack_28);
      return;
    }
    uStack_18 = 0;
    uStack_98 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (0 < (int)uStack_14) {
      uVar11 = 0;
      do {
        FUN_006acc70((int)puStack_28,uVar11,(undefined4 *)&uStack_38);
        FUN_006acc70((int)puVar9,uVar11,(undefined4 *)&uStack_30);
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_10 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8
                                              ,1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x109b);
          }
          uStack_94 = uStack_38;
          uStack_92 = uStack_36;
          uStack_8e = uStack_30;
          uStack_90 = uStack_34;
          uStack_8c = uStack_2e;
          uStack_8a = uStack_2c;
          thunk_FUN_0045ef00(pvVar5,8,&uStack_98);
        }
        uStack_18 = uStack_18 + 1;
        uVar11 = uStack_18 & 0xffff;
      } while ((int)uVar11 < (int)uStack_14);
    }
    FUN_006ae110((byte *)puStack_28);
    FUN_006ae110((byte *)puVar9);
  }
  if (*(int *)((int)pvVar2 + 0x1e6) != 0x15) {
    DAT_00858df8 = (undefined4 ***)ppuStack_19c;
    return;
  }
  uVar11 = 0;
  uStack_a8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uStack_1c = uStack_a8;
  if (0 < (int)uStack_14) {
    uVar10 = 0;
    do {
      FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&uStack_8);
      if ((short)uStack_8 != -1) {
        piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_11 >> 8),
                                                    *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1)
        ;
        if (piVar6 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x10b0);
        }
        iVar3 = (**(code **)(*piVar6 + 0xf8))();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)piVar6);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*piVar6 + 0x2c))();
            if ((iVar3 == 7) || (iVar3 == 0x13)) {
              iVar3 = thunk_FUN_00492370((int)piVar6);
              if (iVar3 == 0) {
                uStack_a2 = *(undefined2 *)((int)pvVar2 + 0x306);
                uStack_a4 = *(undefined2 *)((int)pvVar2 + 0x304);
                uStack_a0 = *(undefined2 *)((int)pvVar2 + 0x308);
                uStack_9e = *(undefined4 *)((int)pvVar2 + 0x30a);
                thunk_FUN_0045ef00(piVar6,0xf,&uStack_a8);
                puVar9 = puStack_10;
                if (puStack_10 == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  puStack_10 = puVar9;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              thunk_FUN_0045ef00(piVar6,3,&uStack_1c);
            }
          }
          else {
            puVar9 = puStack_c;
            if (puStack_c == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              puStack_c = puVar9;
            }
LAB_004a2bcf:
            FUN_006ae1c0(puVar9,&uStack_8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar11 & 0xffff;
    } while ((int)uVar10 < (int)uStack_14);
  }
  if (puStack_10 != (uint *)0x0) {
    if (puStack_c != (uint *)0x0) {
      thunk_FUN_00445a40(CONCAT31((int3)((uint)puStack_c >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         puStack_10,puStack_c);
      goto LAB_004a2c5d;
    }
    if (puStack_10 != (uint *)0x0) goto LAB_004a2c5d;
  }
  if (puStack_c != (uint *)0x0) {
    uVar10 = 0;
    uVar11 = puStack_c[3];
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        FUN_006acc70((int)puStack_c,uVar4,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_12 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),uStack_8,1
                                           );
        thunk_FUN_0045ef00(pvVar5,3,&uStack_1c);
        uVar10 = uVar10 + 1;
        uVar4 = uVar10 & 0xffff;
      } while ((int)uVar4 < (int)uVar11);
    }
  }
LAB_004a2c5d:
  if (puStack_10 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_10);
  }
  if (puStack_c != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_c);
  }
  DAT_00858df8 = (undefined4 ***)ppuStack_19c;
  return;
}

