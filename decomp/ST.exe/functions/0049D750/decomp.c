
undefined4 FUN_0049d750(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  void *this;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    if (iVar2 == -0x5001fff7) {
      if (*(byte **)(local_14 + 0x160) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_14 + 0x160));
        *(undefined4 *)(local_14 + 0x160) = 0;
      }
      if (*(byte **)(local_14 + 0x29f) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(local_14 + 0x29f));
        *(undefined4 *)(local_14 + 0x29f) = 0;
      }
      return 0;
    }
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x9ea,0,iVar2,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar2,0,0x7abe3c,0x9eb);
      return local_10;
    }
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar9 = (undefined4 *)(local_14 + 0x89);
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(local_14 + 0x65) = 0;
    if (*(byte **)(local_14 + 0x29f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_14 + 0x29f));
    }
    *(int *)(local_14 + 0x29b) = *(int *)(local_14 + 0x15c);
    *(undefined4 *)(local_14 + 0x29f) = *(undefined4 *)(local_14 + 0x160);
    *(undefined4 *)(local_14 + 0x29f) = 0;
    if (*(int *)(local_14 + 0x29b) == 0) {
      if ((*(int *)(local_14 + 0x160) == 0) ||
         (uVar8 = *(int *)(*(int *)(local_14 + 0x160) + 0xc), local_c = uVar8, uVar8 == 0)) {
        uVar8 = local_c;
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x9b7);
      }
      puVar3 = FUN_006ae290((uint *)0x0,0,2,1);
      uVar10 = 0;
      *(uint **)(local_14 + 0x29f) = puVar3;
      if (0 < (int)uVar8) {
        do {
          FUN_006acc70(*(int *)(local_14 + 0x160),uVar10,&local_8);
          if ((((short)local_8 != -1) &&
              (piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                           *(undefined1 *)(local_14 + 0x24)),local_8
                                                  ,1), piVar4 != (int *)0x0)) &&
             (iVar2 = (**(code **)(*piVar4 + 0x2c))(), iVar2 == 0x33)) {
            FUN_006ae1c0(*(uint **)(local_14 + 0x29f),&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
      FUN_006ae110(*(byte **)(local_14 + 0x160));
      *(undefined4 *)(local_14 + 0x160) = 0;
      if (*(int *)(*(int *)(local_14 + 0x29f) + 0xc) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x9c8);
      }
    }
    if (*(int *)(local_14 + 0x29b) == 1) {
      puVar3 = thunk_FUN_0043e780(*(char *)(local_14 + 0x24),0x33,0,-1);
      *(uint **)(local_14 + 0x29f) = puVar3;
      if (puVar3[3] == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x9cd);
      }
    }
    thunk_FUN_004a3cd0(1,*(int *)(local_14 + 0x29f),*(int *)(local_14 + 0x29));
  }
  uVar8 = 0;
  local_10 = 2;
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 0) {
    if ((*(int *)(local_14 + 0x29f) == 0) || (*(short *)(local_14 + 0x27) == 0)) {
      local_10 = 0;
    }
    else {
      uVar10 = *(uint *)(*(int *)(local_14 + 0x29) + 0xc);
      local_c = uVar10;
      if (0 < (int)uVar10) {
        do {
          FUN_006acc70(*(int *)(local_14 + 0x29),uVar8,&local_8);
          if ((short)local_8 != -1) {
            this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                       *(undefined1 *)(local_14 + 0x24)),local_8,1);
            iVar2 = thunk_FUN_0045ff10((int)this);
            uVar10 = local_c;
            if ((iVar2 == 4) || (uVar5 = thunk_FUN_0045f400(this,4), uVar10 = local_c, uVar5 == 1))
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar10);
      }
      if (uVar8 == uVar10) {
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return local_10;
}

