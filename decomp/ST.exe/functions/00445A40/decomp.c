
void FUN_00445a40(uint param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *this;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  bool bVar10;
  undefined4 local_88;
  undefined4 local_84 [16];
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  int local_38;
  uint local_30;
  undefined4 local_2c;
  uint *local_28;
  int *local_24;
  uint local_20;
  short local_1a;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_38 = 0;
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar3 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_88;
    if (local_28 != (uint *)0x0) {
      FUN_006ae110((byte *)local_28);
    }
    if (local_18 != (uint *)0x0) {
      FUN_006ae110((byte *)local_18);
    }
    if (local_14 != (uint *)0x0) {
      FUN_006ae110((byte *)local_14);
    }
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x28a2,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x28a3);
    }
    return;
  }
  if ((((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) ||
      (uVar8 = param_2[3], local_10 = uVar8, uVar8 == 0)) || (local_c = param_3[3], local_c == 0)) {
    uVar8 = local_10;
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2837);
  }
  FUN_006afe40((int *)&local_18,param_2);
  FUN_006afe40((int *)&local_14,param_3);
  uVar9 = 0;
  if (0 < (int)uVar8) {
    do {
      FUN_006acc70((int)local_18,uVar9,&local_8);
      piVar4 = (int *)thunk_FUN_0042b620(param_1,local_8,1);
      if ((piVar4 == (int *)0x0) || (iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0)) {
        FUN_006b0c70((int)local_18,uVar9);
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 - 1;
        local_10 = uVar8;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar8);
  }
  if (uVar8 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2842);
  }
  uVar8 = 0;
  if (0 < (int)local_c) {
    do {
      FUN_006acc70((int)local_14,uVar8,&local_8);
      piVar4 = (int *)thunk_FUN_0042b620(param_1,local_8,1);
      if (((piVar4 == (int *)0x0) || (iVar3 = thunk_FUN_00490d90((int)piVar4), iVar3 == 0)) ||
         ((iVar3 = (**(code **)(*piVar4 + 0xf8))(), iVar3 == 0 || ((short)piVar4[0xc] == -1)))) {
        FUN_006b0c70((int)local_14,uVar8);
        local_c = local_c - 1;
        uVar8 = uVar8 - 1;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_c);
  }
  if (local_c == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x284d);
  }
  uVar8 = 0;
  puVar5 = local_28;
  if (0 < (int)local_10) {
    do {
      FUN_006acc70((int)local_18,uVar8,&local_8);
      uVar9 = 0;
      if (0 < (int)local_c) {
        do {
          FUN_006acc70((int)local_14,uVar9,(undefined4 *)&local_1a);
          if ((short)local_8 == local_1a) {
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
              local_28 = puVar5;
            }
            FUN_006ae1c0(puVar5,&local_8);
            FUN_006b0c70((int)local_18,uVar8);
            local_10 = local_10 - 1;
            uVar8 = uVar8 - 1;
            FUN_006b0c70((int)local_14,uVar9);
            local_c = local_c - 1;
            uVar9 = uVar9 - 1;
            if ((local_10 == 0) || (local_c == 0)) {
              local_38 = 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_c);
      }
    } while ((local_38 != 1) && (uVar8 = uVar8 + 1, (int)uVar8 < (int)local_10));
  }
  cVar7 = (char)param_1;
  if (puVar5 == (uint *)0x0) goto LAB_00445e36;
  if ((local_10 == 0) && (local_c == 0)) {
    local_30 = puVar5[3];
    local_20 = 0;
    if (0 < (int)local_30) {
      local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
      do {
        FUN_006acc70((int)puVar5,local_20,&local_8);
        this = (void *)thunk_FUN_0042b620(param_1,local_8,1);
        local_2c = *(undefined4 *)(DAT_00802a38 + 0xe4);
        thunk_FUN_0045ef00(this,0x21,&local_2c);
        if ((*local_24 != 0) && (iVar3 = thunk_FUN_004461b0(param_1,(short)local_8,1), iVar3 == -1))
        {
          thunk_FUN_004461b0(param_1,(short)local_8,0);
        }
        local_20 = local_20 + 1;
      } while ((int)local_20 < (int)local_30);
    }
    if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) != 0) {
      thunk_FUN_00446aa0(cVar7);
      thunk_FUN_00446f80(param_1);
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x2872);
  }
  if (local_10 == 0) {
    bVar10 = local_c == 0;
    if (!bVar10) {
      FUN_006afe40((int *)&local_18,puVar5);
      goto LAB_00445db2;
    }
  }
  else {
LAB_00445db2:
    bVar10 = local_c == 0;
  }
  if (bVar10) {
    if (local_10 != 0) {
      FUN_006afe40((int *)&local_14,puVar5);
      goto LAB_00445dca;
    }
  }
  else {
LAB_00445dca:
    if ((local_10 != 0) && (local_c != 0)) {
      local_30 = puVar5[3];
      local_20 = 0;
      if (0 < (int)local_30) {
        do {
          FUN_006acc70((int)puVar5,local_20,&local_8);
          FUN_006ae1c0(local_14,&local_8);
          local_20 = local_20 + 1;
        } while ((int)local_20 < (int)local_30);
      }
    }
  }
  local_10 = local_18[3];
  local_c = local_14[3];
  FUN_006ae110((byte *)puVar5);
  local_28 = (uint *)0x0;
LAB_00445e36:
  uVar8 = 0;
  if (0 < (int)local_c) {
    local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*local_24 == 0) break;
      FUN_006acc70((int)local_14,uVar8,&local_8);
      iVar3 = thunk_FUN_004461b0(param_1,(short)local_8,1);
      if (iVar3 == -1) {
        thunk_FUN_004461b0(param_1,(short)local_8,0);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_c);
  }
  uVar8 = 0;
  if (0 < (int)local_10) {
    local_24 = (int *)((int)&DAT_007f5816 + cVar7 * 0xa62);
    do {
      if (*local_24 == 0) break;
      FUN_006acc70((int)local_18,uVar8,&local_8);
      thunk_FUN_004461b0(param_1,(short)local_8,1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_10);
  }
  local_44 = FUN_006ae290((uint *)0x0,local_10,2,1);
  FUN_006afe40((int *)&local_44,local_18);
  local_40 = FUN_006ae290((uint *)0x0,local_c,2,1);
  FUN_006afe40((int *)&local_40,local_14);
  local_3c = FUN_006ae290((uint *)0x0,1,4,1);
  puVar1 = (undefined4 *)((int)&DAT_007f5816 + cVar7 * 0xa62);
  if (*(int *)((int)&DAT_007f5816 + cVar7 * 0xa62) == 0) {
    puVar5 = FUN_006ae290((uint *)0x0,1,0xc,1);
    *puVar1 = puVar5;
  }
  FUN_006ae1c0((uint *)*puVar1,&local_44);
  thunk_FUN_00446aa0(cVar7);
  thunk_FUN_00446f80(param_1);
  if (local_18 != (uint *)0x0) {
    FUN_006ae110((byte *)local_18);
  }
  if (local_14 != (uint *)0x0) {
    FUN_006ae110((byte *)local_14);
  }
  DAT_00858df8 = (undefined4 *)local_88;
  return;
}

