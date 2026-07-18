
undefined4 __thiscall FUN_004a0990(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  void *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  uint *local_10;
  uint local_c;
  int *local_8;
  
  local_14 = *(int **)(*(int *)((int)this + 0x29) + 0xc);
  local_10 = (uint *)0x0;
  local_24 = (uint *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_1c = 2;
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  local_30 = this;
  iVar3 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_30;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_84;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }
    iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda5,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0xda6);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  puVar10 = (undefined4 *)((int)local_30 + 0x89);
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)((int)local_30 + 0x65) = 0;
  iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_30 + 0x1c5),(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)((int)pvVar2 + 0x304),(undefined2 *)((int)pvVar2 + 0x306)
                     ,(undefined2 *)((int)pvVar2 + 0x308));
  local_20 = 0;
  *(int *)((int)pvVar2 + 0x30a) = local_8[6];
  local_40 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
  piVar9 = local_8;
  puVar5 = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {
      FUN_006acc70(*(int *)((int)pvVar2 + 0x29),local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                     *(undefined1 *)((int)pvVar2 + 0x24)),local_c,1)
        ;
        if (local_8 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd64);
        }
        iVar3 = (**(code **)(*local_8 + 0xf8))();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)local_8);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*local_8 + 0x2c))();
            if ((iVar3 == 7) || (iVar3 == 0x13)) {
              iVar3 = thunk_FUN_00492370((int)local_8);
              if (iVar3 == 0) {
                local_3a = *(undefined2 *)((int)pvVar2 + 0x306);
                local_3c = *(undefined2 *)((int)pvVar2 + 0x304);
                local_38 = *(undefined2 *)((int)pvVar2 + 0x308);
                local_36 = *(undefined4 *)((int)pvVar2 + 0x30a);
                thunk_FUN_0045ef00(local_8,0xe,&local_40);
                puVar4 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              thunk_FUN_0045ef00(local_8,3,&local_18);
            }
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar4 = puVar5;
              local_24 = puVar5;
            }
LAB_004a0b93:
            FUN_006ae1c0(puVar4,&local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      piVar9 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  puVar4 = local_10;
  if (local_10 == (uint *)0x0) {
LAB_004a0bcc:
    if (puVar5 != (uint *)0x0) {
      local_14 = (int *)puVar5[3];
      uVar11 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((int)puVar5,uVar11,&local_c);
          local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_c,
                                              1);
          thunk_FUN_0045ef00(local_8,3,&local_18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_14);
      }
      local_1c = 0;
    }
    puVar4 = local_10;
    if (local_10 != (uint *)0x0) goto LAB_004a0c2f;
    if (puVar5 == (uint *)0x0) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (puVar4 != (uint *)0x0) goto LAB_004a0c2f;
  }
  else {
    if (puVar5 != (uint *)0x0) {
      thunk_FUN_00445a40(CONCAT31((int3)((uint)piVar9 >> 8),*(undefined1 *)((int)pvVar2 + 0x24)),
                         local_10,puVar5);
      goto LAB_004a0c2b;
    }
    if (local_10 == (uint *)0x0) goto LAB_004a0bcc;
LAB_004a0c2f:
    FUN_006ae110((byte *)puVar4);
  }
  if (puVar5 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar5);
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xd8f);
LAB_004a0c5b:
  piVar9 = local_14;
  if (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x14 == 4) {
    uVar11 = 0;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(*(int *)((int)pvVar2 + 0x29),uVar11,&local_c);
        if ((short)local_c != -1) {
          local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),
                                                       *(undefined1 *)((int)pvVar2 + 0x24)),local_c,
                                              1);
          if (local_8 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd97);
          }
          iVar3 = (**(code **)(*local_8 + 0xf8))();
          if ((iVar3 != 0) &&
             (((iVar3 = (**(code **)(*local_8 + 0x2c))(), iVar3 == 7 || (iVar3 == 0x13)) ||
              (iVar3 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_0045ff10((int)local_8);
            if ((iVar3 == 0xe) || (uVar6 = thunk_FUN_0045f400(local_8,0xe), uVar6 == 1)) {
              local_2c = 1;
              break;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)piVar9);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_1c = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_84;
  return local_1c;
}

