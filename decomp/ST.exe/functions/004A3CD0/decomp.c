
void FUN_004a3cd0(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  undefined2 extraout_var;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  undefined4 local_88;
  undefined4 local_84 [16];
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  short sStack_36;
  undefined2 uStack_34;
  uint local_30;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  undefined2 local_1c [2];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  undefined4 local_10;
  uint *local_c;
  uint local_8;
  
  uVar9 = 0;
  local_20 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar2 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_3 == 0) || (local_24 = *(uint *)(param_3 + 0xc), local_24 == 0)) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1189);
    }
    uVar10 = local_24;
    local_20 = FUN_006ae290((uint *)0x0,0,2,1);
    local_c = FUN_006ae290((uint *)0x0,0,2,1);
    if (0 < (int)uVar10) {
      do {
        FUN_006acc70(param_3,uVar9,&local_8);
        if ((short)local_8 != -1) {
          piVar3 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                      *(undefined1 *)(local_2c + 0x24)),local_8,1);
          if (piVar3 == (int *)0x0) {
            iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1191,0,0,&DAT_007a4ccc);
            if (iVar2 != 0) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x1192);
          }
          iVar2 = (**(code **)(*piVar3 + 0x2c))();
          puVar6 = local_c;
          if (((iVar2 != 9) &&
              (iVar2 = (**(code **)(*piVar3 + 0x2c))(), puVar6 = local_c, iVar2 != 0x15)) &&
             (iVar2 = thunk_FUN_00486b40((int)piVar3), puVar6 = local_c, iVar2 != 0)) {
            puVar6 = local_20;
          }
          FUN_006ae1c0(puVar6,&local_8);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_24);
    }
    puVar6 = local_20;
    if (local_20[3] == 0) {
      uVar9 = local_c[3];
      local_24 = uVar9;
      if ((uVar9 != 0) && (uVar10 = 0, 0 < (int)uVar9)) {
        do {
          uVar4 = FUN_006acc70((int)local_c,uVar10,&local_8);
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar4 >> 8),
                                                       *(undefined1 *)(local_2c + 0x24)),local_8,1);
          thunk_FUN_0045ef00(pvVar5,3,&local_10);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
      }
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x11a3);
      puVar6 = extraout_EDX_00;
    }
    if ((param_2 == 0) || (*(int *)(param_2 + 0xc) == 0)) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x11a6);
      puVar6 = extraout_EDX_01;
    }
    puVar6 = thunk_FUN_00440aa0(CONCAT31((int3)((uint)puVar6 >> 8),*(undefined1 *)(local_2c + 0x24))
                                ,param_2,(int)local_20);
    local_28 = puVar6;
    if (puVar6 == (uint *)0x0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x11a9);
    }
    uVar9 = 0;
    local_44 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_30 = puVar6[3];
    local_10 = local_44;
    if (0 < (int)local_30) {
      do {
        FUN_006acc70((int)puVar6,uVar9,(undefined4 *)&local_38);
        uVar10 = CONCAT22(uStack_34,sStack_36);
        if (sStack_36 == -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                       *(undefined1 *)(local_2c + 0x24)),
                                              CONCAT22(0xffff,local_38),1);
          thunk_FUN_0045ef00(pvVar5,3,&local_10);
        }
        else if (param_1 == 1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar10 >> 8),
                                                       *(undefined1 *)(local_2c + 0x24)),uVar10,1);
          thunk_FUN_004162b0(pvVar5,local_1c,local_18,local_14);
          local_40 = local_1c[0];
          local_3e = local_18[0];
          local_3c = local_14[0];
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(CONCAT22(extraout_var,local_18[0]) >>
                                                             8),*(undefined1 *)(local_2c + 0x24)),
                                              CONCAT22(sStack_36,local_38),1);
          thunk_FUN_0045ef00(pvVar5,4,&local_44);
        }
        else {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_02 >> 8),
                                                       *(undefined1 *)(local_2c + 0x24)),uVar10,1);
          uVar7 = thunk_FUN_004162b0(pvVar5,local_1c,local_18,local_14);
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar7 >> 8),
                                                       *(undefined1 *)(local_2c + 0x24)),
                                              CONCAT22(sStack_36,local_38),1);
          thunk_FUN_00490a00(pvVar5,local_1c[0],local_18[0],local_14[0]);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_30);
    }
    uVar9 = local_c[3];
    local_24 = uVar9;
    if ((uVar9 != 0) && (uVar10 = 0, puVar6 = local_28, 0 < (int)uVar9)) {
      do {
        FUN_006acc70((int)local_c,uVar10,&local_8);
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_03 >> 8),
                                                     *(undefined1 *)(local_2c + 0x24)),local_8,1);
        thunk_FUN_0045ef00(pvVar5,3,&local_10);
        uVar10 = uVar10 + 1;
        puVar6 = local_28;
      } while ((int)uVar10 < (int)uVar9);
    }
    if (local_20 != (uint *)0x0) {
      FUN_006ae110((byte *)local_20);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
    if (puVar6 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar6);
    }
    DAT_00858df8 = (undefined4 *)local_88;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_88;
  if (iVar2 == -0x5001fff7) {
    if (local_20 != (uint *)0x0) {
      FUN_006ae110((byte *)local_20);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
    if (local_28 != (uint *)0x0) {
      FUN_006ae110((byte *)local_28);
      return;
    }
  }
  else {
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x11d8,0,iVar2,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7abe3c,0x11d9);
  }
  return;
}

