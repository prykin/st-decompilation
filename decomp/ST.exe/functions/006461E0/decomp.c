
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006461e0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 local_54;
  undefined4 local_50 [16];
  byte *local_10;
  uint local_c;
  void *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_nick_to_volc_cpp_007d26e4,0x121,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7d26e4,0x123);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_006479e0((int)local_8);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar1 == 0) {
      switch(*(undefined4 *)((int)local_8 + 0xa9)) {
      case 1:
        if (*(uint *)((int)local_8 + 0xa4) < *(uint *)((int)DAT_00802a38 + 0xe4)) {
          *(uint *)((int)local_8 + 0x9c) = *(uint *)((int)DAT_00802a38 + 0xe4);
          thunk_FUN_00647370((int)local_8);
          iVar3 = thunk_FUN_00646e00(*(int *)((int)local_8 + 0x65),*(int *)((int)local_8 + 0x69),
                                     *(int *)((int)local_8 + 0x6d));
          if (iVar3 != 0) {
            *(undefined1 *)((int)local_8 + 0xa8) = 1;
          }
          *(undefined4 *)((int)local_8 + 0x71) = 0x29;
          *(undefined4 *)((int)local_8 + 0x75) = 0x2e;
          *(undefined4 *)((int)local_8 + 0x8a) = 10;
          *(undefined4 *)((int)local_8 + 0x8e) = 0xf;
          if (*(char *)((int)local_8 + 0xa8) != '\0') {
            thunk_FUN_006474e0(0);
          }
          *(undefined4 *)((int)local_8 + 0xa9) = 4;
          thunk_FUN_00647a60(local_8,0x4b5);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        break;
      case 2:
        if ((((*(uint *)((int)local_8 + 0x58) & 1) != 0) &&
            (*(uint *)((int)DAT_00802a38 + 0xe4) % 3 == 0)) &&
           (iVar3 = *(int *)((int)local_8 + 0x71) + 1, *(int *)((int)local_8 + 0x71) = iVar3,
           *(int *)((int)local_8 + 0x75) <= iVar3)) {
          *(undefined4 *)((int)local_8 + 0x71) = 0;
          *(undefined4 *)((int)local_8 + 0x75) = 10;
          *(undefined4 *)((int)local_8 + 0xa9) = 1;
          uVar1 = *(int *)((int)local_8 + 0xb1) * 0x41c64e6d + 0x3039;
          *(uint *)((int)local_8 + 0xb1) = uVar1;
          *(uint *)((int)local_8 + 0xa4) =
               (uVar1 >> 0x10) % 0x2711 + 20000 + *(int *)((int)DAT_00802a38 + 0xe4);
          if (*(char *)((int)local_8 + 0x5c) == '\0') {
            if (*(int *)((int)local_8 + 0x61) != 0) {
              FUN_006e9000(DAT_00807598,
                           *(undefined4 *)(*(int *)(*(int *)((int)local_8 + 0x61) + 0x21) + 0xa0),
                           0x5a,0x2f,
                           (float)*(int *)((int)local_8 + 0x65) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)local_8 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)local_8 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              *(undefined1 *)((int)local_8 + 0x5c) = 1;
              thunk_FUN_006479e0((int)local_8);
              DAT_00858df8 = (undefined4 *)local_54;
              return 0;
            }
            puVar4 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_vol_007d26b0,0xffffffff,0,1,0,
                                  (undefined4 *)0x0);
            *(ushort **)((int)local_8 + 0x61) = puVar4;
            if (puVar4 != (ushort *)0x0) {
              FUN_006e9000(DAT_00807598,*(undefined4 *)(*(int *)((int)puVar4 + 0x21) + 0xa0),0x5a,
                           0x2f,(float)*(int *)((int)local_8 + 0x65) * _DAT_007904f8 * _DAT_007904f0
                           ,(float)*(int *)((int)local_8 + 0x69) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)local_8 + 0x6d) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc,0);
              *(undefined1 *)((int)local_8 + 0x5c) = 1;
              *(undefined4 *)((int)local_8 + 0x61) = 0;
            }
          }
          thunk_FUN_006479e0((int)local_8);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        if (((*(uint *)((int)local_8 + 0x58) & 2) != 0) &&
           (*(uint *)((int)DAT_00802a38 + 0xe4) % 3 == 0)) {
          iVar3 = *(int *)((int)local_8 + 0x7e) + 1;
          *(int *)((int)local_8 + 0x7e) = iVar3;
          if (*(int *)((int)local_8 + 0x82) <= iVar3) {
            *(undefined4 *)((int)local_8 + 0x7e) = 0;
            FUN_006eab60(DAT_00807598,*(uint *)((int)local_8 + 0x7a));
          }
          iVar3 = *(int *)((int)local_8 + 0x8a) + 1;
          *(int *)((int)local_8 + 0x8a) = iVar3;
          if (*(int *)((int)local_8 + 0x8e) <= iVar3) {
            *(undefined4 *)((int)local_8 + 0x8a) = 0;
            FUN_006eab60(DAT_00807598,*(uint *)((int)local_8 + 0x86));
          }
        }
        if ((((*(byte *)((int)DAT_00802a38 + 0xe4) & 1) == 0) && (2 < *(int *)((int)local_8 + 0x71))
            ) && ((*(int *)((int)local_8 + 0x71) < (*(int *)((int)local_8 + 0x75) << 1) / 3 &&
                  (uVar1 = *(int *)((int)local_8 + 0xb1) * 0x41c64e6d + 0x3039,
                  *(uint *)((int)local_8 + 0xb1) = uVar1, (uVar1 & 0x70000) == 0x10000)))) {
          thunk_FUN_006473e0(local_8,0);
        }
        if (*(char *)((int)local_8 + 0xa8) == '\0') {
          iVar3 = thunk_FUN_00646e00(*(int *)((int)local_8 + 0x65),*(int *)((int)local_8 + 0x69),
                                     *(int *)((int)local_8 + 0x6d));
          if (iVar3 != 0) {
            *(undefined1 *)((int)local_8 + 0xa8) = 1;
            thunk_FUN_006474e0(2);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
        }
        else if (*(int *)((int)local_8 + 0xa9) == 2) {
          thunk_FUN_00647960((int)local_8);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        break;
      case 3:
        if (((*(byte *)((int)local_8 + 0x58) & 1) != 0) &&
           (*(uint *)((int)DAT_00802a38 + 0xe4) % 3 == 0)) {
          iVar3 = *(int *)((int)local_8 + 0x71) + 1;
          *(int *)((int)local_8 + 0x71) = iVar3;
          if ((*(int *)((int)local_8 + 0x75) <= iVar3) &&
             (*(undefined4 *)((int)local_8 + 0x71) = 0,
             *(uint *)((int)local_8 + 0xa4) < *(uint *)((int)DAT_00802a38 + 0xe4))) {
            *(undefined4 *)((int)local_8 + 0xa9) = 2;
            thunk_FUN_00647a60(local_8,0x4b6);
            if (*(char *)((int)local_8 + 0xa8) != '\0') {
              thunk_FUN_006474e0(1);
            }
            *(undefined4 *)((int)local_8 + 0x71) = 10;
            *(undefined4 *)((int)local_8 + 0x75) = 0x29;
            *(uint *)((int)local_8 + 0x58) = *(uint *)((int)local_8 + 0x58) | 3;
            *(undefined4 *)((int)local_8 + 0x7e) = 0;
            *(undefined4 *)((int)local_8 + 0x82) = 0x1f;
          }
          iVar3 = *(int *)((int)local_8 + 0x8a) + 1;
          *(int *)((int)local_8 + 0x8a) = iVar3;
          if (*(int *)((int)local_8 + 0x8e) <= iVar3) {
            *(undefined4 *)((int)local_8 + 0x8a) = 0;
          }
        }
        uVar1 = *(int *)((int)local_8 + 0xb1) * 0x41c64e6d + 0x3039;
        *(uint *)((int)local_8 + 0xb1) = uVar1;
        if ((uVar1 & 0xf0000) == 0x10000) {
          thunk_FUN_006473e0(local_8,1);
        }
        if (*(char *)((int)local_8 + 0xa8) != '\0') {
          thunk_FUN_00647960((int)local_8);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        iVar3 = thunk_FUN_00646e00(*(int *)((int)local_8 + 0x65),*(int *)((int)local_8 + 0x69),
                                   *(int *)((int)local_8 + 0x6d));
        if (iVar3 != 0) {
          *(undefined1 *)((int)local_8 + 0xa8) = 1;
          thunk_FUN_006474e0(0);
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        break;
      case 4:
        if (*(uint *)((int)DAT_00802a38 + 0xe4) % 5 == 0) {
          iVar3 = *(int *)((int)local_8 + 0x71) + 1;
          *(int *)((int)local_8 + 0x71) = iVar3;
          if (*(int *)((int)local_8 + 0x75) <= iVar3) {
            uVar1 = *(int *)((int)local_8 + 0xb1) * 0x41c64e6d + 0x3039;
            *(uint *)((int)local_8 + 0xb1) = uVar1;
            iVar3 = *(int *)((int)DAT_00802a38 + 0xe4);
            *(undefined4 *)((int)local_8 + 0xa9) = 3;
            *(uint *)((int)local_8 + 0x58) = *(uint *)((int)local_8 + 0x58) | 1;
            *(undefined4 *)((int)local_8 + 0x71) = 0;
            *(undefined4 *)((int)local_8 + 0x75) = 10;
            *(undefined4 *)((int)local_8 + 0x8a) = 0;
            *(undefined4 *)((int)local_8 + 0x8e) = 10;
            *(uint *)((int)local_8 + 0xa4) = (uVar1 >> 0x10) % 0x1f5 + 500 + iVar3;
          }
          iVar3 = *(int *)((int)local_8 + 0x8a) + 1;
          *(int *)((int)local_8 + 0x8a) = iVar3;
          if (*(int *)((int)local_8 + 0x8e) <= iVar3) {
            *(undefined4 *)((int)local_8 + 0x8a) = 0;
          }
          if (*(char *)((int)local_8 + 0xa8) != '\0') {
            thunk_FUN_00647960((int)local_8);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
          iVar3 = thunk_FUN_00646e00(*(int *)((int)local_8 + 0x65),*(int *)((int)local_8 + 0x69),
                                     *(int *)((int)local_8 + 0x6d));
          if (iVar3 != 0) {
            *(undefined1 *)((int)local_8 + 0xa8) = 1;
            thunk_FUN_006474e0(0);
            DAT_00858df8 = (undefined4 *)local_54;
            return 0;
          }
        }
        break;
      case 5:
        thunk_FUN_00646d00(local_8);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      case 6:
        *(undefined4 *)((int)local_8 + 0xa9) = 1;
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar7 = *(undefined4 **)(param_1 + 0x14);
      if (puVar7[3] == 2) {
        thunk_FUN_00646db0(local_8,puVar7);
        *(undefined4 *)((int)local_8 + 0xb1) = *(undefined4 *)((int)local_8 + 0xad);
        *(undefined1 *)((int)local_8 + 0xa8) = 0;
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      puVar8 = (undefined4 *)((int)local_8 + 0x1c);
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)((int)local_8 + 0xb1) = DAT_00808754;
      iVar3 = thunk_FUN_006472b0((int)local_8);
      if (iVar3 != 0) {
        uVar1 = *(int *)((int)local_8 + 0xb1) * 0x41c64e6d + 0x3039;
        *(uint *)((int)local_8 + 0xb1) = uVar1;
        *(undefined4 *)((int)local_8 + 0xa9) = 6;
        *(uint *)((int)local_8 + 0xa4) = (uVar1 >> 0x10) % 0x2711 + 20000;
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      thunk_FUN_00646d00(local_8);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
  }
  else if (uVar1 == 0x10f) {
    local_10 = (byte *)thunk_FUN_00646d40(local_8,&local_c);
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)local_8 + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return 0;
}

