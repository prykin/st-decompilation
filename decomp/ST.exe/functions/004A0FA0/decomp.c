
void __fastcall FUN_004a0fa0(void *param_1)

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
  undefined4 **local_19c;
  undefined4 local_198 [16];
  void *local_158;
  undefined4 local_154;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined2 local_136;
  undefined1 local_134;
  undefined2 local_133;
  uint *local_130 [3];
  short local_124;
  short local_122;
  short local_120;
  undefined4 local_114;
  short local_110;
  undefined4 local_102;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  uint local_e8;
  undefined4 local_e4 [3];
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined4 local_81;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  uint *local_28;
  undefined2 local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  local_14 = *(uint *)(*(int *)((int)param_1 + 0x2d) + 0xc);
  local_e8 = 0xffffffff;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_19c = DAT_00858df8;
  DAT_00858df8 = &local_19c;
  local_158 = param_1;
  iVar3 = __setjmp3(local_198,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_158;
  uVar10 = local_14;
  uVar11 = local_14;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 ***)local_19c;
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
    FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
    uVar4 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                        *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1);
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
  local_14 = uVar11;
  if (iVar3 == 1) {
    thunk_FUN_00497cd0(*(int *)((int)pvVar2 + 0x2d),*(int *)((int)pvVar2 + 0x3d),
                       *(int *)((int)pvVar2 + 0x41),*(int *)((int)pvVar2 + 0x45));
    uVar10 = 0;
    local_18 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = iVar3;
    if (uVar11 != 0) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1)
        ;
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe03);
        }
        thunk_FUN_0045ef00(pvVar5,1,&local_44);
        local_18 = local_18 + 1;
        uVar10 = local_18 & 0xffff;
        iVar3 = extraout_ECX_00;
      } while (uVar10 < uVar11);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 3) {
    local_18 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        uVar10 = FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar10 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1)
        ;
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe46);
        }
        thunk_FUN_0045ef00(pvVar5,3,&local_1c);
        local_18 = local_18 + 1;
        uVar10 = local_18 & 0xffff;
        iVar3 = extraout_ECX_01;
      } while (uVar10 < uVar11);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 2) {
    thunk_FUN_00499de0(*(uint **)((int)pvVar2 + 0x2d));
    iVar3 = extraout_ECX_02;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 6) {
    local_4c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    thunk_FUN_004a7490((int)pvVar2);
    local_28 = FUN_006ae290((uint *)0x0,0,2,1);
    if (*(int *)(*(int *)((int)pvVar2 + 0x22e) + 0xc) == 0) {
      uVar10 = 0;
      local_18 = 0;
      if (uVar11 != 0) {
        uVar11 = 0;
        do {
          FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          FUN_006ae140(*(uint **)((int)pvVar2 + 0x22e),uVar10,&local_114);
          local_48 = uVar10;
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EAX >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe77,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe78);
          }
          FUN_006ae1c0(local_28,&local_8);
          thunk_FUN_0045ef00(pvVar5,6,&local_4c);
          uVar10 = uVar10 + 1;
          local_18 = local_18 + 1;
          uVar11 = local_18 & 0xffff;
        } while (uVar11 < local_14);
      }
    }
    else {
      local_18 = 0;
      if (uVar11 != 0) {
        do {
          uVar11 = *(uint *)(*(int *)((int)pvVar2 + 0x22e) + 0xc);
          uVar10 = uVar11;
          uVar4 = local_18;
          while (uVar11 = uVar11 - 1, local_18 = uVar4, -1 < (int)uVar11) {
            FUN_006acc70(*(int *)((int)pvVar2 + 0x22e),uVar11,&local_114);
            uVar4 = local_18;
            if (local_110 == -1) {
              uVar10 = uVar11;
            }
          }
          FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar4 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;
          FUN_006ae140(*(uint **)((int)pvVar2 + 0x22e),uVar10,&local_114);
          local_48 = uVar10;
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe64,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe65);
          }
          FUN_006ae1c0(local_28,&local_8);
          thunk_FUN_0045ef00(pvVar5,6,&local_4c);
          local_18 = uVar4 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }
    FUN_006acc70(*(int *)((int)pvVar2 + 0x22a),*(uint *)((int)pvVar2 + 0x232),
                 (undefined4 *)&local_124);
    puVar9 = local_28;
    if (local_28[3] != 0) {
      thunk_FUN_00497cd0((int)local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    FUN_006ae110((byte *)puVar9);
    iVar3 = extraout_ECX_03;
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 7) {
    uVar11 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = iVar3;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1)
        ;
        if (pvVar5 == (void *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe8c);
        }
        thunk_FUN_004162b0(pvVar5,&local_20,&local_1e,&local_22);
        thunk_FUN_00481520(pvVar5,(int)local_20,(int)local_1e,*(undefined4 *)((int)pvVar2 + 0x222));
        thunk_FUN_0045ef00(pvVar5,1,&local_44);
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
        iVar3 = extraout_ECX_04;
      } while (uVar10 < local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 8) {
    local_18 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (local_14 != 0) {
      do {
        uVar11 = local_18 & 0xffff;
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xe9a);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 != 8) && (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 != 0x14)) &&
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 != 0x1a)) {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 == 0) {
              thunk_FUN_0045ef00(piVar6,3,&local_1c);
            }
            else {
              if (local_c == (uint *)0x0) {
                local_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(local_c,&local_8);
            }
            FUN_006b0c70(*(int *)((int)pvVar2 + 0x2d),uVar11);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xeb0);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    thunk_FUN_00445a40(CONCAT31((int3)(local_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                       local_c);
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
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
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_154 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_150 = *(undefined2 *)((int)pvVar2 + 0x276);
    local_14e = *(undefined2 *)((int)pvVar2 + 0x278);
    local_14a = *(undefined4 *)((int)pvVar2 + 0x27c);
    local_14c = *(undefined2 *)((int)pvVar2 + 0x27a);
    local_146 = *(undefined4 *)((int)pvVar2 + 0x280);
    local_133 = *(undefined2 *)((int)pvVar2 + 0x293);
    local_142 = *(undefined4 *)((int)pvVar2 + 0x284);
    local_13e = *(undefined4 *)((int)pvVar2 + 0x288);
    local_13a = *(undefined4 *)((int)pvVar2 + 0x28c);
    local_136 = *(undefined2 *)((int)pvVar2 + 0x290);
    local_134 = *(undefined1 *)((int)pvVar2 + 0x292);
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xecf);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x19)) {
            puVar12 = &local_154;
            iVar3 = 0x11;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a1878;
            }
            puVar12 = &local_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a1878:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_04 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xee9);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x19)) {
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    thunk_FUN_00445a40(CONCAT31((int3)(local_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                       local_c);
    iVar3 = extraout_ECX_07;
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      iVar3 = extraout_ECX_08;
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
      iVar3 = extraout_ECX_09;
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 10) {
    uVar11 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_64 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_60 = *(undefined2 *)((int)pvVar2 + 0x295);
    local_5e = *(undefined2 *)((int)pvVar2 + 0x297);
    local_5c = *(undefined2 *)((int)pvVar2 + 0x299);
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_10 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf02);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            puVar12 = &local_64;
            iVar3 = 0xd;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a1a74;
            }
            puVar12 = &local_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a1a74:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_11 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf1c);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    thunk_FUN_00445a40(CONCAT31((int3)(local_18 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                       local_c);
    iVar3 = extraout_ECX_12;
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
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
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        iVar3 = extraout_ECX_16;
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_16 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf35);
          }
          iVar3 = thunk_FUN_00490d90((int)pvVar5);
          if (iVar3 == 0) {
            local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(pvVar5,3,&local_1c);
            iVar3 = extraout_ECX_17;
          }
          else {
            if (local_c == (uint *)0x0) {
              local_c = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(local_c,&local_8);
            iVar3 = extraout_ECX_18;
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(*(int *)((int)pvVar2 + 0x29) + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar10,&local_8);
        iVar3 = extraout_ECX_19;
        if ((short)local_8 != -1) {
          uVar10 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_19 >> 8),
                                               *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1);
          if (uVar10 == 0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf47);
          }
          iVar7 = thunk_FUN_00490d90(uVar10);
          iVar3 = extraout_ECX_20;
          if ((iVar7 == 1) &&
             (local_e8 = thunk_FUN_00449a90(CONCAT31((int3)((uint)extraout_ECX_20 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),
                                            (short)local_8), iVar3 = extraout_ECX_21,
             local_e8 != 0xffffffff)) break;
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    if (local_e8 != 0xffffffff) {
      FUN_006acc70(*(int *)((int)&DAT_007f5816 + *(char *)((int)pvVar2 + 0x24) * 0xa62),local_e8,
                   local_130);
      FUN_006afe40((int *)&local_10,local_130[0]);
      thunk_FUN_00445a40(CONCAT31((int3)((uint)extraout_ECX_22 >> 8),
                                  *(undefined1 *)((int)pvVar2 + 0x24)),local_10,local_c);
      iVar3 = extraout_ECX_23;
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      iVar3 = extraout_ECX_24;
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
      iVar3 = extraout_ECX_25;
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xb) {
    uVar11 = 0;
    local_d8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_18 = 0;
    puVar9 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        iVar3 = extraout_ECX_26;
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_05 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
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
                thunk_FUN_0045ef00(piVar6,3,&local_1c);
                iVar3 = extraout_ECX_28;
                goto LAB_004a1ea4;
              }
              local_d4 = *(undefined2 *)((int)pvVar2 + 0x2a3);
              local_d2 = *(undefined2 *)((int)pvVar2 + 0x2a5);
              local_d0 = *(undefined2 *)((int)pvVar2 + 0x2a7);
              local_ce = *(undefined4 *)((int)pvVar2 + 0x2a9);
              thunk_FUN_0045ef00(piVar6,0xf,&local_d8);
              puVar8 = local_10;
              if (local_10 == (uint *)0x0) {
                puVar8 = FUN_006ae290((uint *)0x0,1,2,1);
                local_10 = puVar8;
              }
            }
            else {
              puVar8 = puVar9;
              if (puVar9 == (uint *)0x0) {
                puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                puVar8 = puVar9;
                local_c = puVar9;
              }
            }
            FUN_006ae1c0(puVar8,&local_8);
            iVar3 = extraout_ECX_29;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a1ede:
      if (local_c != (uint *)0x0) {
        uVar10 = 0;
        uVar11 = local_c[3];
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            FUN_006acc70((int)local_c,uVar4,&local_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_06 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                local_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a1ede;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         local_10,puVar9);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xc) {
    local_e4[0] = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uVar11 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_30 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xf8e);
          }
          iVar3 = (**(code **)(*piVar6 + 0xf8))();
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*piVar6 + 0x2c))();
            if ((((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) &&
               (iVar3 = thunk_FUN_00492370((int)piVar6), iVar3 != 0)) {
              thunk_FUN_0045ef00(piVar6,0x10,local_e4);
              if (((*(short *)((int)pvVar2 + 0x2ad) != -1) ||
                  (*(short *)((int)pvVar2 + 0x2af) != -1)) ||
                 (*(short *)((int)pvVar2 + 0x2b1) != -1)) {
                puVar9 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar9;
                }
LAB_004a2089:
                FUN_006ae1c0(puVar9,&local_8);
              }
            }
            else {
              iVar3 = thunk_FUN_00490d90((int)piVar6);
              if (iVar3 == 0) {
                thunk_FUN_0045ef00(piVar6,3,&local_1c);
              }
              else if (((*(short *)((int)pvVar2 + 0x2ad) != -1) ||
                       (*(short *)((int)pvVar2 + 0x2af) != -1)) ||
                      (*(short *)((int)pvVar2 + 0x2b1) != -1)) {
                puVar9 = local_c;
                if (local_c == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  local_c = puVar9;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a20d0:
      if (local_c != (uint *)0x0) {
        uVar11 = local_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)local_c,uVar4,&local_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                local_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (local_c == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a20d0;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                         local_c);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xd) {
    local_52 = *(undefined2 *)((int)pvVar2 + 0x2b5);
    uVar11 = 0;
    local_58 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_50 = *(undefined2 *)((int)pvVar2 + 0x2b7);
    local_54 = *(undefined2 *)((int)pvVar2 + 0x2b3);
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_31 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xfc2);
          }
          if (*(int *)((int)pvVar2 + 0x2b9) == -1) {
            if ((*(int *)((int)pvVar5 + 0x7b6) == 0) || (*(int *)((int)pvVar5 + 0x7be) < 1)) {
LAB_004a221d:
              puVar12 = &local_1c;
              iVar3 = 3;
            }
            else {
              puVar12 = &local_58;
              iVar3 = 7;
            }
          }
          else {
            if ((*(int *)((int)pvVar5 + 0x7b6) != *(int *)((int)pvVar2 + 0x2b9)) ||
               (*(int *)((int)pvVar5 + 0x7be) < 1)) goto LAB_004a221d;
            puVar12 = &local_58;
            iVar3 = 7;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xe) {
    local_78 = *(undefined2 *)((int)pvVar2 + 0x2bd);
    uVar11 = 0;
    local_7c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_74 = *(undefined2 *)((int)pvVar2 + 0x2c1);
    local_76 = *(undefined2 *)((int)pvVar2 + 0x2bf);
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_32 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xfea);
          }
          if ((*(int *)((int)pvVar5 + 0x6f7) == 4) && (0 < *(int *)((int)pvVar5 + 0x7a2))) {
            puVar12 = &local_7c;
            iVar3 = 10;
          }
          else {
            puVar12 = &local_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0xf) {
    local_83 = *(undefined2 *)((int)pvVar2 + 0x2c4);
    uVar11 = 0;
    local_88 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_81 = *(undefined4 *)((int)pvVar2 + 0x2c6);
    local_84 = *(undefined1 *)((int)pvVar2 + 0x2c3);
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_33 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1003);
          }
          iVar3 = *(int *)((int)pvVar5 + 0x6f7);
          if (((iVar3 == 6) || (iVar3 == 0x12)) || (iVar3 == 0x22)) {
            puVar12 = &local_88;
            iVar3 = 9;
          }
          else {
            puVar12 = &local_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(pvVar5,iVar3,puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x11) {
    local_c4 = *(undefined4 *)((int)pvVar2 + 0x2ce);
    uVar11 = 0;
    local_c8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_c0 = *(undefined2 *)((int)pvVar2 + 0x2d2);
    local_be = *(undefined2 *)((int)pvVar2 + 0x2d4);
    local_bc = *(undefined2 *)((int)pvVar2 + 0x2d6);
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_34 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x101e);
          }
          thunk_FUN_0045ef00(pvVar5,0x16,&local_c8);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x10) {
    local_f8 = *(undefined4 *)((int)pvVar2 + 0x2d8);
    uVar11 = 0;
    local_fc = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_f4 = *(undefined2 *)((int)pvVar2 + 0x2dc);
    local_f0 = *(undefined2 *)((int)pvVar2 + 0x2e0);
    local_ea = *(undefined2 *)((int)pvVar2 + 0x2e6);
    local_f2 = *(undefined2 *)((int)pvVar2 + 0x2de);
    local_ee = *(undefined2 *)((int)pvVar2 + 0x2e2);
    local_ec = *(undefined2 *)((int)pvVar2 + 0x2e4);
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_07 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1032);
          }
          thunk_FUN_0045ef00(pvVar5,0x15,&local_fc);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x12) {
    local_6c = *(undefined2 *)((int)pvVar2 + 0x2e8);
    local_70 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_6a = *(undefined2 *)((int)pvVar2 + 0x2ea);
    local_68 = *(undefined2 *)((int)pvVar2 + 0x2ec);
    uVar11 = 0;
    local_18 = 0;
    puVar9 = local_c;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_08 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1042);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 7) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x13)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1b)) {
            thunk_FUN_0045ef00(piVar6,0x17,&local_70);
            puVar8 = local_10;
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = local_10;
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 == 0) {
              thunk_FUN_0045ef00(piVar6,3,&local_1c);
              goto LAB_004a26bb;
            }
            puVar8 = puVar9;
            if (puVar9 == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = puVar9;
              local_c = puVar9;
            }
          }
          FUN_006ae1c0(puVar8,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a26f5:
      if (local_c != (uint *)0x0) {
        uVar11 = local_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)local_c,uVar4,&local_8);
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                         *(undefined1 *)((int)pvVar2 + 0x24)),
                                                local_8,1);
            thunk_FUN_0045ef00(pvVar5,3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a26f5;
    }
    else {
      thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                         puVar9);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x13) {
    local_b2 = *(undefined2 *)((int)pvVar2 + 0x2f0);
    uVar10 = 0;
    local_b8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_b0 = *(undefined2 *)((int)pvVar2 + 0x2f2);
    uVar11 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),local_b0);
    local_b4 = *(undefined2 *)((int)pvVar2 + 0x2ee);
    local_ae = *(undefined4 *)((int)pvVar2 + 0x2f4);
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_09 >> 8),
                                                      *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1
                                            );
          if (piVar6 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1071);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1d)) {
            if (local_10 == (uint *)0x0) {
              local_10 = FUN_006ae290((uint *)0x0,1,2,1);
            }
            FUN_006ae1c0(local_10,&local_8);
            puVar12 = &local_b8;
            iVar3 = 0x12;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)piVar6);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a2897;
            }
            puVar12 = &local_1c;
            iVar3 = 3;
          }
          thunk_FUN_0045ef00(piVar6,iVar3,puVar12);
        }
LAB_004a2897:
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    puVar9 = local_c;
    thunk_FUN_00445a40(CONCAT31((int3)(uVar11 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),local_10,
                       local_c);
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
  }
  if (*(int *)((int)pvVar2 + 0x1e6) == 0x14) {
    local_28 = thunk_FUN_00415590(pvVar2,*(int *)((int)pvVar2 + 0x2d),
                                  (int)*(short *)((int)pvVar2 + 0x2fe),
                                  (int)*(short *)((int)pvVar2 + 0x300),
                                  (int)*(short *)((int)pvVar2 + 0x302),
                                  (int)*(short *)((int)pvVar2 + 0x2f8),
                                  (int)*(short *)((int)pvVar2 + 0x2fa),
                                  (int)*(short *)((int)pvVar2 + 0x2fc));
    if (local_28 == (uint *)0x0) {
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
      FUN_006ae110((byte *)local_28);
      return;
    }
    local_18 = 0;
    local_98 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        FUN_006acc70((int)local_28,uVar11,(undefined4 *)&local_38);
        FUN_006acc70((int)puVar9,uVar11,(undefined4 *)&local_30);
        FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar11,&local_8);
        if ((short)local_8 != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_10 >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_8,
                                              1);
          if (pvVar5 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x109b);
          }
          local_94 = local_38;
          local_92 = local_36;
          local_8e = local_30;
          local_90 = local_34;
          local_8c = local_2e;
          local_8a = local_2c;
          thunk_FUN_0045ef00(pvVar5,8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    FUN_006ae110((byte *)local_28);
    FUN_006ae110((byte *)puVar9);
  }
  if (*(int *)((int)pvVar2 + 0x1e6) != 0x15) {
    DAT_00858df8 = (undefined4 ***)local_19c;
    return;
  }
  uVar11 = 0;
  local_a8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar10 = 0;
    do {
      FUN_006acc70(*(int *)((int)pvVar2 + 0x2d),uVar10,&local_8);
      if ((short)local_8 != -1) {
        piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_11 >> 8),
                                                    *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1);
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
                local_a2 = *(undefined2 *)((int)pvVar2 + 0x306);
                local_a4 = *(undefined2 *)((int)pvVar2 + 0x304);
                local_a0 = *(undefined2 *)((int)pvVar2 + 0x308);
                local_9e = *(undefined4 *)((int)pvVar2 + 0x30a);
                thunk_FUN_0045ef00(piVar6,0xf,&local_a8);
                puVar9 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar9;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              thunk_FUN_0045ef00(piVar6,3,&local_1c);
            }
          }
          else {
            puVar9 = local_c;
            if (local_c == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              local_c = puVar9;
            }
LAB_004a2bcf:
            FUN_006ae1c0(puVar9,&local_8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar11 & 0xffff;
    } while ((int)uVar10 < (int)local_14);
  }
  if (local_10 != (uint *)0x0) {
    if (local_c != (uint *)0x0) {
      thunk_FUN_00445a40(CONCAT31((int3)((uint)local_c >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         local_10,local_c);
      goto LAB_004a2c5d;
    }
    if (local_10 != (uint *)0x0) goto LAB_004a2c5d;
  }
  if (local_c != (uint *)0x0) {
    uVar10 = 0;
    uVar11 = local_c[3];
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        FUN_006acc70((int)local_c,uVar4,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_12 >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),local_8,1)
        ;
        thunk_FUN_0045ef00(pvVar5,3,&local_1c);
        uVar10 = uVar10 + 1;
        uVar4 = uVar10 & 0xffff;
      } while ((int)uVar4 < (int)uVar11);
    }
  }
LAB_004a2c5d:
  if (local_10 != (uint *)0x0) {
    FUN_006ae110((byte *)local_10);
  }
  if (local_c != (uint *)0x0) {
    FUN_006ae110((byte *)local_c);
  }
  DAT_00858df8 = (undefined4 ***)local_19c;
  return;
}

