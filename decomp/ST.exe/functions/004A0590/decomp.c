
undefined4 __thiscall FUN_004a0590(void *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 local_80;
  undefined4 local_7c [16];
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  uint *local_1c;
  void *local_18;
  undefined4 local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  local_14 = 2;
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_18 = this;
  iVar5 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pvVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      psVar1 = (short *)((int)local_18 + 0x300);
      puVar11 = (undefined4 *)((int)local_18 + 0x89);
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)((int)local_18 + 0x65) = 0;
      psVar2 = (short *)((int)local_18 + 0x302);
      *(undefined2 *)((int)local_18 + 0x2fa) = *(undefined2 *)((int)local_18 + 0x1c1);
      *(undefined2 *)((int)local_18 + 0x2fc) = *(undefined2 *)((int)local_18 + 0x1c3);
      *(undefined2 *)((int)local_18 + 0x2f8) = *(undefined2 *)((int)local_18 + 0x1bf);
      thunk_FUN_0049a500(local_18,(undefined2 *)((int)local_18 + 0x2fe),psVar1,psVar2);
      local_10 = thunk_FUN_00415590(pvVar4,*(int *)((int)pvVar4 + 0x29),
                                    (int)*(short *)((int)pvVar4 + 0x2fe),(int)*psVar1,(int)*psVar2,
                                    (int)*(short *)((int)pvVar4 + 0x2f8),
                                    (int)*(short *)((int)pvVar4 + 0x2fa),
                                    (int)*(short *)((int)pvVar4 + 0x2fc));
      if (local_10 == (uint *)0x0) {
        return 0;
      }
      puVar6 = thunk_FUN_00415590(pvVar4,*(int *)((int)pvVar4 + 0x29),
                                  (int)*(short *)((int)pvVar4 + 0x2f8),
                                  (int)*(short *)((int)pvVar4 + 0x2fa),
                                  (int)*(short *)((int)pvVar4 + 0x2fc),
                                  (int)*(short *)((int)pvVar4 + 0x2fe),(int)*psVar1,(int)*psVar2);
      local_1c = puVar6;
      if (puVar6 == (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        return 0;
      }
      uVar12 = 0;
      local_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((int)local_10,uVar12,(undefined4 *)&local_24);
          FUN_006acc70((int)puVar6,uVar12,(undefined4 *)&local_2c);
          FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar12,&local_c);
          if ((short)local_c != -1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                         *(undefined1 *)((int)pvVar4 + 0x24)),
                                                local_c,1);
            if (pvVar7 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            thunk_FUN_0045ef00(pvVar7,8,&local_3c);
            puVar6 = local_1c;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_8);
      }
      FUN_006ae110((byte *)local_10);
      FUN_006ae110((byte *)puVar6);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar12 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar12,&local_c);
          if ((short)local_c != -1) {
            pvVar7 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),
                                                         *(undefined1 *)((int)pvVar4 + 0x24)),
                                                local_c,1);
            if (pvVar7 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd3d);
            }
            iVar5 = thunk_FUN_0045ff10((int)pvVar7);
            if (iVar5 == 8) break;
            uVar8 = thunk_FUN_0045f400(pvVar7,8);
            if (uVar8 == 1) break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_8);
      }
      if (uVar12 == local_8) {
        local_14 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_80;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_80;
    if (iVar5 != -0x5001fff7) {
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar5,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      FUN_006a5e40(iVar5,0,0x7abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return local_14;
}

