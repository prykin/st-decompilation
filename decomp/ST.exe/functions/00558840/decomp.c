
undefined4 FUN_00558840(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *(undefined4 *)((int)local_14 + 0x108) = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
    uVar6 = *(uint *)(param_1 + 0x10);
    if (uVar6 < 0x109) {
      if (uVar6 == 0x108) {
        if (*(int *)((int)local_14 + 0x114) != 0) {
          uVar3 = thunk_FUN_004ab050();
          uVar6 = *(int *)((int)local_14 + 0x30) * *(int *)((int)local_14 + 0x34);
          *(undefined4 *)((int)local_14 + 0x10c) = uVar3;
          puVar8 = *(undefined4 **)((int)local_14 + 0x50);
          for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          uVar7 = *(int *)((int)local_14 + 0x30) * *(int *)((int)local_14 + 0x34);
          puVar8 = *(undefined4 **)((int)local_14 + 0x4c);
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar2 = *(int *)((int)local_14 + 0x110);
          uVar6 = 0;
          if (0 < *(int *)(iVar2 + 0xc)) {
            bVar9 = *(int *)(iVar2 + 0xc) != 0;
            do {
              if (bVar9) {
                pcVar4 = (char *)(*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
              }
              else {
                pcVar4 = (char *)0x0;
              }
              if (*pcVar4 == '\0') {
                thunk_FUN_00558dc0(local_14,(int)*(short *)(pcVar4 + 2),(int)*(short *)(pcVar4 + 4),
                                   (undefined *)(int)pcVar4[6],(uint)(byte)pcVar4[1],
                                   (undefined *)(uint)(byte)pcVar4[7],*(int *)(pcVar4 + 8),0x4000);
              }
              iVar2 = *(int *)((int)local_14 + 0x110);
              uVar6 = uVar6 + 1;
              bVar9 = uVar6 < *(uint *)(iVar2 + 0xc);
            } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
          }
        }
      }
      else if (uVar6 == 0) {
        if (*(int *)((int)local_14 + 0x114) != 0) {
          thunk_FUN_0055ab50(local_14);
        }
      }
      else if (uVar6 == 2) {
        local_8 = (ushort *)0x0;
        if (DAT_00806754 != 0) {
          local_8 = FUN_006f2d90(DAT_00806754,PTR_s_VISIBILITY_0079aec4,0,0);
        }
        if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
          thunk_FUN_005578d0();
        }
        else {
          thunk_FUN_005585f0((int)local_8);
        }
        thunk_FUN_00557c90();
        if ((DAT_00806754 != 0) && (local_8 != (ushort *)0x0)) {
          FUN_006f20e0((uint *)&local_8);
        }
      }
      else if (uVar6 == 3) {
        thunk_FUN_00558140((int)local_14);
        if (*(int *)((int)local_14 + 0x114) != 0) {
          FUN_00717870(DAT_00807598);
        }
        thunk_FUN_00553270();
        DAT_00802a88 = 0;
      }
    }
    else if (uVar6 == 0x10f) {
      local_c = 0;
      local_10 = (byte *)thunk_FUN_005582a0(&local_c);
      thunk_FUN_0054d550(DAT_00802a38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != (byte *)0x0) {
        FUN_006ab060(&local_10);
      }
    }
    else if (uVar6 == 0x111) {
      *(undefined4 *)((int)local_14 + 0x104) = 0;
    }
    FUN_006e5fd0();
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0x186,0,iVar2,
                       (byte *)s_VisibleClassTy__GetMessage_error_007c9380);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar2,0,0x7c92cc,0x187);
    return 0xffff;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

