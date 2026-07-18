
void thunk_FUN_004a3430(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *this;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  undefined4 uStack_b0;
  undefined4 auStack_ac [16];
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  uint *puStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined4 uStack_32;
  uint *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  uint uStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  undefined2 auStack_14 [2];
  undefined2 auStack_10 [2];
  undefined2 auStack_c [2];
  uint uStack_8;
  
  uVar9 = 0;
  puStack_40 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  puStack_1c = (uint *)0x0;
  puStack_24 = (uint *)0x0;
  uStack_b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_b0;
  iVar2 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_b0;
    if (iVar2 == -0x5001fff7) {
      if (puStack_2c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_2c);
      }
      if (puStack_28 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_28);
      }
      if (puStack_1c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_1c);
      }
      if (puStack_40 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_40);
      }
      if (puStack_24 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_24);
        return;
      }
    }
    else {
      iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x116f,0,iVar2,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7abe3c,0x1170);
    }
    return;
  }
  if ((param_4 == 0) || (iStack_68 = *(int *)(param_4 + 0xc), iStack_68 == 0)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x10f5);
  }
  iVar2 = iStack_68;
  puStack_1c = FUN_006ae290((uint *)0x0,0,2,1);
  if (0 < iVar2) {
    do {
      FUN_006acc70(param_4,uVar9,&uStack_8);
      if ((short)uStack_8 != -1) {
        this = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                  *(undefined1 *)(iStack_6c + 0x24)),uStack_8,1);
        if (this == (int *)0x0) {
          iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10fc,0,0,&DAT_007a4ccc);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x10fd);
        }
        iVar2 = (**(code **)(*this + 0x2c))();
        puVar6 = puStack_1c;
        if (((iVar2 != 8) &&
            (iVar2 = (**(code **)(*this + 0x2c))(), puVar6 = puStack_1c, iVar2 != 0x14)) &&
           (iVar2 = (**(code **)(*this + 0x2c))(), puVar6 = puStack_1c, iVar2 != 0x1a)) {
          iVar2 = thunk_FUN_00490d90((int)this);
          if (iVar2 == 0) {
            uStack_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(this,3,&uStack_18);
            goto LAB_004a35b6;
          }
          puVar6 = puStack_24;
          if (puStack_24 == (uint *)0x0) {
            puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
            puStack_24 = puVar6;
          }
        }
        FUN_006ae1c0(puVar6,&uStack_8);
      }
LAB_004a35b6:
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iStack_68);
  }
  uStack_20 = puStack_1c[3];
  if (uStack_20 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x110f);
  }
  if ((param_2 != 0) && (iVar2 = *(int *)(param_2 + 0xc), iVar2 != 0)) {
    puStack_2c = FUN_006ae290((uint *)0x0,0,2,1);
    uVar9 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(param_2,uVar9,&uStack_8);
        if (((short)uStack_8 != -1) &&
           (uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                *(undefined1 *)(iStack_6c + 0x24)),uStack_8,1),
           uVar3 != 0)) {
          FUN_006ae1c0(puStack_2c,&uStack_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar2);
    }
  }
  uVar9 = uStack_20;
  if ((puStack_2c == (uint *)0x0) || (puStack_2c[3] == 0)) {
    uVar3 = 0;
    if (0 < (int)uStack_20) {
      do {
        uVar4 = FUN_006acc70((int)puStack_1c,uVar3,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),uStack_8,1);
        if (param_1 == 1) {
          uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uStack_4c = 0xffffffff;
          uStack_56 = 0xffffffff;
          thunk_FUN_0045ef00(pvVar5,0xc,&uStack_60);
        }
        else {
          thunk_FUN_0048d130(pvVar5,1,-1,-1,-1,-1,0xffffffff);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar9);
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1124);
  }
  if ((param_3 != 0) && (iVar2 = *(int *)(param_3 + 0xc), iVar2 != 0)) {
    puStack_28 = FUN_006ae290((uint *)0x0,0,2,1);
    uVar9 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(param_3,uVar9,&uStack_8);
        if (((short)uStack_8 != -1) &&
           (uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                *(undefined1 *)(iStack_6c + 0x24)),uStack_8,1),
           uVar3 != 0)) {
          FUN_006ae1c0(puStack_28,&uStack_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar2);
    }
  }
  uVar9 = uStack_20;
  if ((puStack_28 == (uint *)0x0) || (puStack_28[3] == 0)) {
    uVar3 = 0;
    if (0 < (int)uStack_20) {
      do {
        uVar4 = FUN_006acc70((int)puStack_1c,uVar3,&uStack_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),uStack_8,1);
        if (param_1 == 1) {
          uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uStack_4c = 0xffffffff;
          uStack_56 = 0xffffffff;
          thunk_FUN_0045ef00(pvVar5,0xc,&uStack_60);
        }
        else {
          thunk_FUN_0048d130(pvVar5,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar9);
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x113a);
  }
  puVar6 = thunk_FUN_00442e50(CONCAT31((int3)((uint)puStack_28 >> 8),
                                       *(undefined1 *)(iStack_6c + 0x24)),
                              *(int *)(iStack_6c + 0x25e),(int)puStack_2c,(int)puStack_28,
                              (int)puStack_1c);
  puStack_40 = puVar6;
  if (puVar6 == (uint *)0x0) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x113f,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x5001fff8,DAT_007ed77c,0x7abe3c,0x1140);
  }
  uStack_64 = puVar6[3];
  if (uStack_64 != uStack_20) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1144,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x5001fff9,DAT_007ed77c,0x7abe3c,0x1145);
  }
  uStack_20 = 0;
  if (0 < (int)uStack_64) {
    do {
      uVar9 = uStack_20;
      FUN_006acc70((int)puVar6,uStack_20,(undefined4 *)&uStack_3c);
      if (param_1 == 1) {
        uStack_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)DAT_00802a38 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_3a,uStack_3c),1);
        thunk_FUN_004162b0(pvVar5,&uStack_5c,&uStack_5a,&uStack_58);
        uStack_56 = *(undefined4 *)((int)pvVar5 + 0x18);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar5,&uStack_52,&uStack_50,&uStack_4e);
        uStack_4c = *(undefined4 *)((int)pvVar5 + 0x18);
        uStack_44 = uStack_32;
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(CONCAT22(uStack_34,uStack_36) >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_36,uStack_38),1);
        thunk_FUN_0045ef00(pvVar5,0xc,&uStack_60);
        uStack_20 = uVar9;
      }
      else {
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_36,uStack_38),1);
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)pvVar5 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_3a,uStack_3c),1);
        thunk_FUN_004162b0(pvVar7,auStack_c,auStack_14,auStack_10);
        thunk_FUN_0048d130(pvVar5,1,auStack_c[0],auStack_14[0],auStack_10[0],
                           *(int *)((int)pvVar7 + 0x18),CONCAT22(uStack_34,uStack_36));
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                     *(undefined1 *)(iStack_6c + 0x24)),
                                            CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar7,auStack_c,auStack_14,auStack_10);
        thunk_FUN_0048d130(pvVar5,0,auStack_c[0],auStack_14[0],auStack_10[0],
                           *(int *)((int)pvVar7 + 0x18),uStack_32);
      }
      uStack_20 = uStack_20 + 1;
      puVar6 = puStack_40;
    } while ((int)uStack_20 < (int)uStack_64);
  }
  thunk_FUN_00445a40(CONCAT31((int3)(uStack_64 >> 8),*(undefined1 *)(iStack_6c + 0x24)),puStack_1c,
                     puStack_24);
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1165);
  DAT_00858df8 = (undefined4 *)uStack_b0;
  return;
}

