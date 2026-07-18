
undefined4 __thiscall FUN_0049cd30(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  void *pvVar4;
  uint *puVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  undefined4 unaff_ESI;
  undefined4 *puVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  undefined4 local_8c;
  undefined4 local_88 [16];
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3e;
  undefined4 local_3a;
  char local_36 [14];
  undefined1 local_28;
  undefined2 local_27;
  void *local_24;
  undefined4 local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_14 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  local_10 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  local_24 = this;
  iVar7 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  pvVar4 = local_24;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar10 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x944,0,iVar7,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar7,0,0x7abe3c,0x945);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar14 = (undefined4 *)((int)local_24 + 0x89);
    for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined4 *)((int)local_24 + 0x65) = 0;
    puVar14 = (undefined4 *)((int)local_24 + 0x137);
    puVar15 = (undefined4 *)((int)local_24 + 0x276);
    for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = *(undefined2 *)puVar14;
    *(undefined1 *)((int)puVar15 + 2) = *(undefined1 *)((int)puVar14 + 2);
    local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_44 = *(undefined2 *)((int)local_24 + 0x137);
    local_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_42 = *(undefined2 *)((int)local_24 + 0x139);
    local_3e = *(undefined4 *)((int)local_24 + 0x13d);
    local_27 = *(undefined2 *)((int)local_24 + 0x154);
    local_40 = *(undefined2 *)((int)local_24 + 0x13b);
    local_3a = *(undefined4 *)((int)local_24 + 0x141);
    _strncpy(local_36,(char *)((int)local_24 + 0x145),0xe);
    uVar12 = 0;
    local_28 = 0;
    local_c = 0;
    puVar9 = local_1c;
    if (local_14 != 0) {
      do {
        FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar12,&local_8);
        if ((short)local_8 != -1) {
          piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                      *(undefined1 *)((int)pvVar4 + 0x24)),local_8,1
                                            );
          if (piVar8 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x90f);
          }
          iVar7 = (**(code **)(*piVar8 + 0x2c))();
          if (((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x18)) ||
             (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x19)) {
            if (puVar9 == (uint *)0x0) {
              puVar9 = FUN_006ae290((uint *)0x0,1,2,1);
              local_1c = puVar9;
            }
            FUN_006ae1c0(puVar9,&local_8);
            puVar14 = &local_48;
            iVar7 = 0x11;
          }
          else {
            iVar7 = thunk_FUN_00490d90((int)piVar8);
            if (iVar7 != 0) {
              if (local_10 == (uint *)0x0) {
                local_10 = FUN_006ae290((uint *)0x0,1,2,1);
              }
              FUN_006ae1c0(local_10,&local_8);
              goto LAB_0049cf10;
            }
            puVar14 = &local_20;
            iVar7 = 3;
          }
          thunk_FUN_0045ef00(piVar8,iVar7,puVar14);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar12 = local_c & 0xffff;
      } while (uVar12 < local_14);
    }
    puVar5 = local_10;
    thunk_FUN_00445a40(CONCAT31((int3)(uVar12 >> 8),*(undefined1 *)((int)pvVar4 + 0x24)),puVar9,
                       local_10);
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    if (puVar5 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar5);
    }
  }
  uVar12 = 0;
  local_c = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x32 == 0) {
    sVar6 = *(short *)((int)pvVar4 + 0x276);
    sVar1 = *(short *)((int)pvVar4 + 0x27a);
    sVar2 = *(short *)((int)pvVar4 + 0x278);
    if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
        ((sVar2 < 0 || ((DAT_007fb242 <= sVar2 || (sVar1 < 0)))))) || (DAT_007fb244 <= sVar1)) {
      sVar6 = -1;
    }
    else {
      sVar6 = *(short *)(DAT_007fb280 +
                        ((int)sVar2 * (int)DAT_007fb278 + (int)sVar1 * (int)DAT_007fb27e +
                        (int)sVar6) * 2);
    }
    if (sVar6 != 0) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar13 = 0;
      do {
        FUN_006acc70(*(int *)((int)pvVar4 + 0x29),uVar13,&local_8);
        if ((short)local_8 != -1) {
          piVar8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                      *(undefined1 *)((int)pvVar4 + 0x24)),local_8,1
                                            );
          if (piVar8 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0x938);
          }
          iVar7 = (**(code **)(*piVar8 + 0x2c))();
          if (((((iVar7 == 0xc) || (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x18)) ||
               (iVar7 = (**(code **)(*piVar8 + 0x2c))(), iVar7 == 0x19)) &&
              (iVar7 = thunk_FUN_0045ff10((int)piVar8), iVar7 == 0x11)) ||
             (uVar13 = thunk_FUN_0045f400(piVar8,0x11), uVar13 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while (uVar13 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_8c;
  return local_c;
}

