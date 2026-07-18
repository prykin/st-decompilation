
undefined4 FUN_00621b50(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  undefined4 local_60;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  int *local_8;
  
  iVar7 = thunk_FUN_0041e530(param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar7 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar10 = FUN_006ad4d0(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x174,0,iVar7,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar7,0,0x7d06b0,0x176);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0x110 < uVar9) {
    if (0x128 < uVar9) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 == 0x128) {
      thunk_FUN_004ad430((int)local_8 + 0x1d5);
      thunk_FUN_00622670(local_8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 != 0x112) {
      if (uVar9 != 0x113) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      if (*(int *)((int)local_8 + 0x2ba) < 0) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      if (*(int *)((int)local_8 + 0x2ae) != 1) {
        DAT_00858df8 = (undefined4 *)local_60;
        return 0;
      }
      (*(code *)**(undefined4 **)((int)local_8 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (*(int *)((int)local_8 + 0x2ba) < 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (*(int *)((int)local_8 + 0x2ae) != 1) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_004ad5e0((int)local_8 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 0x110) {
    thunk_FUN_00627390((int)local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (3 < uVar9) {
    if (uVar9 == 0x108) {
      uVar8 = thunk_FUN_004ab050();
      thunk_FUN_00626b50(local_8,uVar8);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    if (uVar9 != 0x10f) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    local_10 = (byte *)thunk_FUN_00622990(local_8,&local_c);
    thunk_FUN_0054d430(DAT_00802a38,local_8[6],local_10,local_c);
    FUN_006ab060(&local_10);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 3) {
    thunk_FUN_00622880(local_8);
    if (*(int *)((int)local_8 + 0x363) == 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_006366d0(*(int *)((int)local_8 + 0x363));
    FUN_0072e2b0(*(undefined4 **)((int)local_8 + 0x363));
    *(undefined4 *)((int)local_8 + 0x363) = 0;
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 == 0) {
    if ((*(char *)((int)local_8 + 0x2ad) == '\x03') &&
       (0x1194 < (uint)(*(int *)((int)DAT_00802a38 + 0xe4) - *(int *)((int)local_8 + 0x35f)))) {
      thunk_FUN_00627390((int)local_8);
    }
    iVar7 = thunk_FUN_006239a0(local_8);
    if (iVar7 == 0) {
      if ((*(int *)((int)local_8 + 0x2ae) == 2) && (*(char *)((int)local_8 + 0x353) == '\0')) {
        uVar9 = thunk_FUN_006226c0(local_8,(int)*(short *)((int)local_8 + 0x47),
                                   (int)*(short *)((int)local_8 + 0x49));
        *(char *)((int)local_8 + 0x353) = (char)uVar9;
        if ((char)uVar9 != '\0') {
          thunk_FUN_00623170(0);
          thunk_FUN_004ad460((void *)((int)local_8 + 0x1d5),1);
        }
      }
    }
    else {
      if (((((char)local_8[0xc5] == '\0') && (iVar7 = *(int *)((int)local_8 + 0x2ae), iVar7 != 2))
          && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        uVar8 = thunk_FUN_00627400(local_8,iVar7);
        *(undefined4 *)((int)local_8 + 0x2ae) = uVar8;
      }
      iVar7 = *(int *)((int)local_8 + 0x2ae);
      if (((iVar7 != 2) && (iVar7 != 3)) && ((iVar7 != 4 && (iVar7 != 5)))) {
        if (*(char *)((int)local_8 + 0x353) == '\0') {
          uVar9 = thunk_FUN_006226c0(local_8,(int)*(short *)((int)local_8 + 0x47),
                                     (int)*(short *)((int)local_8 + 0x49));
          *(char *)((int)local_8 + 0x353) = (char)uVar9;
          if (((char)uVar9 != '\0') && (*(int *)((int)local_8 + 0x2ba) < 0)) {
            thunk_FUN_00623170(0);
            thunk_FUN_004ad460((void *)((int)local_8 + 0x1d5),1);
          }
        }
        else if ((*(byte *)((int)DAT_00802a38 + 0xe4) & 3) == 0) {
          uVar9 = thunk_FUN_006226c0(local_8,(int)*(short *)((int)local_8 + 0x47),
                                     (int)*(short *)((int)local_8 + 0x49));
          *(char *)((int)local_8 + 0x353) = (char)uVar9;
          if (((char)uVar9 == '\0') && (*(char *)((int)local_8 + 0x2e9) != '\0')) {
            thunk_FUN_004ad430((int)local_8 + 0x1d5);
            *(undefined1 *)((int)local_8 + 0x2e9) = 0;
          }
        }
        *(undefined2 *)((int)local_8 + 0x45) = *(undefined2 *)((int)local_8 + 0x2ca);
        *(undefined2 *)((int)local_8 + 0x41) = *(undefined2 *)((int)local_8 + 0x2c2);
        *(undefined2 *)((int)local_8 + 0x43) = *(undefined2 *)((int)local_8 + 0x2c6);
        if (*(char *)((int)local_8 + 0x353) != '\0') {
          thunk_FUN_00623600(local_8);
        }
        cVar1 = *(char *)((int)local_8 + 0x2ad);
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) &&
           ((((*(uint *)((int)DAT_00802a38 + 0xe4) % 5 == 0 &&
              (0x19 < *(uint *)((int)DAT_00802a38 + 0xe4) - *(int *)((int)local_8 + 0x346))) &&
             ((*(int *)((int)local_8 + 0x2ae) == 0 || (*(int *)((int)local_8 + 0x2ae) == 1)))) &&
            (iVar7 = thunk_FUN_00625730(local_8), iVar7 != 0)))) {
          *(undefined4 *)((int)local_8 + 0x2ae) = 2;
          *(int *)((int)local_8 + 0x30f) =
               *(int *)(&DAT_007d02a4 + (uint)*(byte *)((int)local_8 + 0x2ad) * 4) +
               *(int *)((int)DAT_00802a38 + 0xe4);
        }
      }
    }
    if (((*(int *)((int)local_8 + 0x355) == 0) && (*(int *)((int)local_8 + 0x2ae) != 2)) &&
       ((*(int *)((int)local_8 + 0x2ae) != 4 &&
        (((short)(*(short *)((int)local_8 + 0x47) * 0xc9 + 100) == *(short *)((int)local_8 + 0x41)
         && ((short)(*(short *)((int)local_8 + 0x49) * 0xc9 + 100) ==
             *(short *)((int)local_8 + 0x43))))))) {
      *(undefined4 *)((int)local_8 + 0x355) = 1;
    }
    if ((*(int **)((int)local_8 + 0x363) != (int *)0x0) &&
       (iVar7 = thunk_FUN_006372e0(*(int **)((int)local_8 + 0x363)), iVar7 != 0)) {
      thunk_FUN_006366d0(*(int *)((int)local_8 + 0x363));
      FUN_0072e2b0(*(undefined4 **)((int)local_8 + 0x363));
      *(undefined4 *)((int)local_8 + 0x363) = 0;
    }
    if (*(char *)((int)local_8 + 0x359) == '\0') {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_00627170(local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar9 != 2) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(undefined4 *)((int)local_8 + 0x219) = 0x23a;
  *(undefined4 *)((int)local_8 + 0x215) = 0x32;
  if (*(int *)(iVar7 + 0xc) == 2) {
    thunk_FUN_00622ab0(local_8,*(undefined4 **)(param_1 + 0x14));
    if (*(char *)((int)local_8 + 0x313) != '\0') {
      sVar2 = *(short *)((int)local_8 + 0x47);
      local_1c = 1;
      local_14 = (uint)*(byte *)((int)local_8 + 0x8e);
      sVar3 = *(short *)((int)local_8 + 0x4b);
      sVar4 = *(short *)((int)local_8 + 0x49);
      local_18 = (int)sVar4;
      if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         (((DAT_007fb242 <= sVar4 || (sVar3 < 0)) || (DAT_007fb244 <= sVar3)))) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(DAT_007fb248 +
                        (local_14 +
                        ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                        (int)sVar2) * 2) * 4);
      }
      if ((iVar7 == 0) &&
         (iVar7 = thunk_FUN_00495ec0(sVar2,sVar4,sVar3,local_14,(int)local_8), iVar7 == 0)) {
        *(char *)(local_8 + 0xc5) = (char)local_8[0xc5] + '\x01';
        iVar7 = local_1c;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) {
        thunk_FUN_00622670(local_8);
      }
    }
    puVar11 = (undefined4 *)((int)local_8 + 0x231);
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined1 *)puVar11 = 0;
    if (*(char *)((int)local_8 + 0x353) != '\0') {
      uVar8 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
      *(undefined4 *)((int)local_8 + 0x2ba) = uVar8;
    }
    *(undefined4 *)((int)local_8 + 0x363) = 0;
    iVar7 = thunk_FUN_00449fd0(*(ushort *)((int)local_8 + 0x32),local_8);
    if (iVar7 == 0) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_00622670(local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  puVar11 = *(undefined4 **)(param_1 + 0x14);
  puVar12 = (undefined4 *)((int)local_8 + 0x25e);
  for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
  *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar11 + 2);
  if (*(int *)(iVar7 + 0xc) == 0) {
    *(int *)((int)local_8 + 0x276) = (int)(short)(*(short *)((int)local_8 + 0x276) * 0xc9 + 100);
    *(int *)((int)local_8 + 0x27a) = (int)(short)(*(short *)((int)local_8 + 0x27a) * 0xc9 + 100);
    *(int *)((int)local_8 + 0x27e) = (int)(short)(*(short *)((int)local_8 + 0x27e) * 200 + 100);
    *(undefined4 *)((int)local_8 + 0x282) = *(undefined4 *)((int)local_8 + 0x276);
    *(undefined4 *)((int)local_8 + 0x286) = *(undefined4 *)((int)local_8 + 0x27a);
    *(undefined4 *)((int)local_8 + 0x28a) = *(undefined4 *)((int)local_8 + 0x27e);
  }
  iVar7 = thunk_FUN_00622ba0(local_8);
  if (iVar7 == 0) {
    thunk_FUN_00622670(local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  bVar6 = false;
  if (*(int *)((int)local_8 + 0x2f6) == 0) {
    *(undefined2 *)(local_8 + 0xd) = *(undefined2 *)((int)local_8 + 0x41);
    *(undefined2 *)((int)local_8 + 0x36) = *(undefined2 *)((int)local_8 + 0x43);
    *(undefined2 *)(local_8 + 0xe) = *(undefined2 *)((int)local_8 + 0x45);
    iVar7 = thunk_FUN_00624570(local_8,1,*(int *)((int)local_8 + 0x2c2),
                               *(int *)((int)local_8 + 0x2c6),*(int *)((int)local_8 + 0x2ca));
    if (iVar7 == 0) goto LAB_00621d24;
    *(undefined4 *)((int)local_8 + 0x2ee) = 1;
  }
  else {
    iVar7 = thunk_FUN_00624570(local_8,2,(int)*(short *)((int)local_8 + 0x3a),
                               (int)(short)local_8[0xf],(int)*(short *)((int)local_8 + 0x3e));
    if (iVar7 == 0) goto LAB_00621d24;
    *(undefined4 *)((int)local_8 + 0x2ee) = 2;
  }
  *(undefined4 *)((int)local_8 + 0x2ae) = 1;
  bVar6 = true;
LAB_00621d24:
  if (bVar6) {
    *(undefined4 *)((int)local_8 + 0x2ae) = 1;
    *(undefined1 *)((int)local_8 + 0x353) = 1;
    thunk_FUN_00623170(0);
    iVar7 = thunk_FUN_00449fd0(0xffff,local_8);
    if (iVar7 != 0) {
      thunk_FUN_00622670(local_8);
    }
    thunk_FUN_00627700((int)local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_00622670(local_8);
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
}

