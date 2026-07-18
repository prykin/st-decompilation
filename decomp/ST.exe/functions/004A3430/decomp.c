
void FUN_004a3430(int param_1,int param_2,int param_3,int param_4)

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
  undefined4 local_b0;
  undefined4 local_ac [16];
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_44;
  uint *local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined2 uStack_34;
  undefined4 local_32;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  undefined2 local_c [2];
  uint local_8;
  
  uVar9 = 0;
  local_40 = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_24 = (uint *)0x0;
  local_b0 = DAT_00858df8;
  DAT_00858df8 = &local_b0;
  iVar2 = __setjmp3(local_ac,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_b0;
    if (iVar2 == -0x5001fff7) {
      if (local_2c != (uint *)0x0) {
        FUN_006ae110((byte *)local_2c);
      }
      if (local_28 != (uint *)0x0) {
        FUN_006ae110((byte *)local_28);
      }
      if (local_1c != (uint *)0x0) {
        FUN_006ae110((byte *)local_1c);
      }
      if (local_40 != (uint *)0x0) {
        FUN_006ae110((byte *)local_40);
      }
      if (local_24 != (uint *)0x0) {
        FUN_006ae110((byte *)local_24);
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
  if ((param_4 == 0) || (local_68 = *(int *)(param_4 + 0xc), local_68 == 0)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x10f5);
  }
  iVar2 = local_68;
  local_1c = FUN_006ae290((uint *)0x0,0,2,1);
  if (0 < iVar2) {
    do {
      FUN_006acc70(param_4,uVar9,&local_8);
      if ((short)local_8 != -1) {
        this = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                  *(undefined1 *)(local_6c + 0x24)),local_8,1);
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
        puVar6 = local_1c;
        if (((iVar2 != 8) &&
            (iVar2 = (**(code **)(*this + 0x2c))(), puVar6 = local_1c, iVar2 != 0x14)) &&
           (iVar2 = (**(code **)(*this + 0x2c))(), puVar6 = local_1c, iVar2 != 0x1a)) {
          iVar2 = thunk_FUN_00490d90((int)this);
          if (iVar2 == 0) {
            local_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(this,3,&local_18);
            goto LAB_004a35b6;
          }
          puVar6 = local_24;
          if (local_24 == (uint *)0x0) {
            puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
            local_24 = puVar6;
          }
        }
        FUN_006ae1c0(puVar6,&local_8);
      }
LAB_004a35b6:
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < local_68);
  }
  local_20 = local_1c[3];
  if (local_20 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x110f);
  }
  if ((param_2 != 0) && (iVar2 = *(int *)(param_2 + 0xc), iVar2 != 0)) {
    local_2c = FUN_006ae290((uint *)0x0,0,2,1);
    uVar9 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(param_2,uVar9,&local_8);
        if (((short)local_8 != -1) &&
           (uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                *(undefined1 *)(local_6c + 0x24)),local_8,1),
           uVar3 != 0)) {
          FUN_006ae1c0(local_2c,&local_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar2);
    }
  }
  uVar9 = local_20;
  if ((local_2c == (uint *)0x0) || (local_2c[3] == 0)) {
    uVar3 = 0;
    if (0 < (int)local_20) {
      do {
        uVar4 = FUN_006acc70((int)local_1c,uVar3,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),local_8,1);
        if (param_1 == 1) {
          local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          thunk_FUN_0045ef00(pvVar5,0xc,&local_60);
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
    local_28 = FUN_006ae290((uint *)0x0,0,2,1);
    uVar9 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70(param_3,uVar9,&local_8);
        if (((short)local_8 != -1) &&
           (uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                *(undefined1 *)(local_6c + 0x24)),local_8,1),
           uVar3 != 0)) {
          FUN_006ae1c0(local_28,&local_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar2);
    }
  }
  uVar9 = local_20;
  if ((local_28 == (uint *)0x0) || (local_28[3] == 0)) {
    uVar3 = 0;
    if (0 < (int)local_20) {
      do {
        uVar4 = FUN_006acc70((int)local_1c,uVar3,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),local_8,1);
        if (param_1 == 1) {
          local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          thunk_FUN_0045ef00(pvVar5,0xc,&local_60);
        }
        else {
          thunk_FUN_0048d130(pvVar5,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar9);
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x113a);
  }
  puVar6 = thunk_FUN_00442e50(CONCAT31((int3)((uint)local_28 >> 8),*(undefined1 *)(local_6c + 0x24))
                              ,*(int *)(local_6c + 0x25e),(int)local_2c,(int)local_28,(int)local_1c)
  ;
  local_40 = puVar6;
  if (puVar6 == (uint *)0x0) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x113f,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x5001fff8,DAT_007ed77c,0x7abe3c,0x1140);
  }
  local_64 = puVar6[3];
  if (local_64 != local_20) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1144,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(-0x5001fff9,DAT_007ed77c,0x7abe3c,0x1145);
  }
  local_20 = 0;
  if (0 < (int)local_64) {
    do {
      uVar9 = local_20;
      FUN_006acc70((int)puVar6,local_20,(undefined4 *)&local_3c);
      if (param_1 == 1) {
        local_60 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)DAT_00802a38 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(uStack_3a,local_3c),1);
        thunk_FUN_004162b0(pvVar5,&local_5c,&local_5a,&local_58);
        local_56 = *(undefined4 *)((int)pvVar5 + 0x18);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar5,&local_52,&local_50,&local_4e);
        local_4c = *(undefined4 *)((int)pvVar5 + 0x18);
        local_44 = local_32;
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(CONCAT22(uStack_34,local_36) >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(local_36,uStack_38),1);
        thunk_FUN_0045ef00(pvVar5,0xc,&local_60);
        local_20 = uVar9;
      }
      else {
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(local_36,uStack_38),1);
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)pvVar5 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(uStack_3a,local_3c),1);
        thunk_FUN_004162b0(pvVar7,local_c,local_14,local_10);
        thunk_FUN_0048d130(pvVar5,1,local_c[0],local_14[0],local_10[0],*(int *)((int)pvVar7 + 0x18),
                           CONCAT22(uStack_34,local_36));
        pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                                     *(undefined1 *)(local_6c + 0x24)),
                                            CONCAT22(uStack_38,uStack_3a),1);
        thunk_FUN_004162b0(pvVar7,local_c,local_14,local_10);
        thunk_FUN_0048d130(pvVar5,0,local_c[0],local_14[0],local_10[0],*(int *)((int)pvVar7 + 0x18),
                           local_32);
      }
      local_20 = local_20 + 1;
      puVar6 = local_40;
    } while ((int)local_20 < (int)local_64);
  }
  thunk_FUN_00445a40(CONCAT31((int3)(local_64 >> 8),*(undefined1 *)(local_6c + 0x24)),local_1c,
                     local_24);
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1165);
  DAT_00858df8 = (undefined4 *)local_b0;
  return;
}

