
undefined4 FUN_00618c00(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_58;
  undefined4 local_54 [16];
  void *local_14;
  byte *local_10;
  uint local_c;
  void *local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_jump_mine_cp_007d0100,0xad,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7d0100,0xaf);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < 0x110) {
    if (uVar3 == 0x10f) {
      local_10 = (byte *)thunk_FUN_00619350(local_8,&local_c);
      thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_8 + 0x18),local_10,local_c);
      FUN_006ab060(&local_10);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
    if (uVar3 == 0) {
      iVar2 = thunk_FUN_00619c70(local_8);
      if (iVar2 != 0) {
        if (*(char *)((int)local_8 + 0x150) == '\0') {
          uVar3 = thunk_FUN_006191a0(local_8,(int)*(short *)((int)local_8 + 0xc9),
                                     (int)*(short *)((int)local_8 + 0xcb));
          *(char *)((int)local_8 + 0x150) = (char)uVar3;
          if ((char)uVar3 != '\0') {
            thunk_FUN_006195e0(1);
          }
          if (*(char *)((int)local_8 + 0x150) == '\0') {
            DAT_00858df8 = (undefined4 *)local_58;
            return 0;
          }
        }
        thunk_FUN_00619a20((int)local_8);
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
    else if (uVar3 == 2) {
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      if (puVar6[3] == 2) {
        thunk_FUN_006193a0(local_8,puVar6);
        puVar6 = (undefined4 *)((int)local_8 + 0x20);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined1 *)puVar6 = 0;
        *(undefined4 *)((int)local_8 + 0x1c) = *(undefined4 *)((int)local_8 + 0x14c);
        if ((*(char *)((int)local_8 + 0x150) != '\0') && (*(int *)((int)local_8 + 0x93) != 5)) {
          thunk_FUN_006195e0(1);
        }
        if ((*(int *)((int)local_8 + 0x93) == 5) || (*(int *)((int)local_8 + 0x93) == 0)) {
          thunk_FUN_006192e0(local_8);
          *(undefined4 *)((int)local_8 + 0x93) = 6;
          DAT_00858df8 = (undefined4 *)local_58;
          return 0;
        }
      }
      else {
        puVar7 = (undefined4 *)((int)local_8 + 0x4d);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
        *(undefined4 *)((int)local_8 + 0x1c) = DAT_00808754;
        iVar2 = thunk_FUN_006193e0((int)local_8);
        if (iVar2 == 0) {
LAB_00618ce0:
          thunk_FUN_006192e0(local_8);
          DAT_00858df8 = (undefined4 *)local_58;
          return 0;
        }
        iVar2 = thunk_FUN_0061bdb0(local_8,0,*(int *)((int)local_8 + 0xe7),
                                   *(int *)((int)local_8 + 0xeb),*(uint *)((int)local_8 + 0xef));
        if (iVar2 == 0) {
          iVar2 = thunk_FUN_0061bdb0(local_8,1,*(int *)((int)local_8 + 0xe7),
                                     *(int *)((int)local_8 + 0xeb),*(uint *)((int)local_8 + 0xef));
          if (iVar2 == 0) goto LAB_00618ce0;
          *(undefined4 *)((int)local_8 + 0x93) = 1;
        }
        else {
          *(undefined4 *)((int)local_8 + 0x93) = 4;
        }
        uVar3 = thunk_FUN_006191a0(local_8,(int)*(short *)((int)local_8 + 0xc9),
                                   (int)*(short *)((int)local_8 + 0xcb));
        *(char *)((int)local_8 + 0x150) = (char)uVar3;
        if (*(void **)((int)local_8 + 0x7d) != (void *)0x0) {
          thunk_FUN_00617a20(*(void **)((int)local_8 + 0x7d),*(int *)((int)local_8 + 0x8b),
                             *(undefined4 *)((int)local_8 + 0x18),local_8);
        }
        if (*(char *)((int)local_8 + 0x150) != '\0') {
          thunk_FUN_006195e0(1);
          DAT_00858df8 = (undefined4 *)local_58;
          return 0;
        }
      }
    }
    else if (uVar3 == 3) {
      if (*(void **)((int)local_8 + 0x7d) != (void *)0x0) {
        if (*(char *)((int)local_8 + 0x14b) != '\0') {
          thunk_FUN_00618900(*(void **)((int)local_8 + 0x7d),*(int *)((int)local_8 + 0x145),0);
        }
        *(undefined1 *)((int)local_8 + 0x14b) = 0;
        thunk_FUN_00617aa0(*(void **)((int)local_8 + 0x7d),*(int *)((int)local_8 + 0x18));
      }
      thunk_FUN_00619320((int)local_8);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
  }
  else if (uVar3 == 0x111) {
    if (((*(int *)((int)local_8 + 0x7d) != 0) &&
        (iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)((int)local_8 + 0x79),(int *)&local_14),
        iVar2 != -4)) && (*(void **)((int)local_8 + 0x7d) = local_14, local_14 != (void *)0x0)) {
      thunk_FUN_00617a20(local_14,*(int *)((int)local_8 + 0x8b),*(undefined4 *)((int)local_8 + 0x18)
                         ,local_8);
    }
  }
  else if (uVar3 == 0x112) {
    if ((-1 < (int)*(uint *)((int)local_8 + 0x97)) && (*(int *)((int)local_8 + 0x93) != 5)) {
      FUN_006e9520(DAT_00807598,*(uint *)((int)local_8 + 0x97),0,0,(uint)local_8);
      DAT_00858df8 = (undefined4 *)local_58;
      return 0;
    }
  }
  else if (((uVar3 == 0x113) && (-1 < (int)*(uint *)((int)local_8 + 0x97))) &&
          (*(int *)((int)local_8 + 0x93) != 5)) {
    FUN_006e9520(DAT_00807598,*(uint *)((int)local_8 + 0x97),0,0x401109,(int)local_8 + 0x4d);
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

