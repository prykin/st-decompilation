
undefined4 FUN_0041e530(int param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *this;
  void *unaff_EDI;
  bool bVar8;
  undefined4 local_54;
  undefined4 local_50 [16];
  int *local_10;
  byte local_c;
  undefined3 uStack_b;
  byte local_5;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xa91,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7a4e0c,0xa92);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  thunk_FUN_0041af40(param_1);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0x113 < uVar2) {
    if (0x4403 < uVar2) {
      if (uVar2 == 0x4404) {
        thunk_FUN_0041f970((int)local_10);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (uVar2 != 0x440f) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (DAT_0080732c != 0) {
        if (*(int *)((int)local_10 + 0x21d) != 1) {
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        this = (void *)((int)local_10 + 0x1d5);
        thunk_FUN_004ac410(0xf);
        thunk_FUN_004ac410(0);
        thunk_FUN_004abce0(this,0,0,0x13,'\0');
        thunk_FUN_004abce0(this,0xf,0x14,0x27,'\0');
        thunk_FUN_004acd60(this,'\0',*(uint *)(DAT_00802a38 + 0xe4) & 1);
        thunk_FUN_004acd60(this,'\x0f',*(uint *)(DAT_00802a38 + 0xe4) & 1);
        thunk_FUN_004ac1a0(0,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004ac1a0(0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (*(int *)((int)local_10 + 0x21d) != 1) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      thunk_FUN_004ac410(0xf);
      thunk_FUN_004ac410(0);
      thunk_FUN_004abce0((void *)((int)local_10 + 0x1d5),0,0,0,'\0');
      thunk_FUN_004abce0((void *)((int)local_10 + 0x1d5),0xf,0x14,0x14,'\0');
      thunk_FUN_004ac1a0(0,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ac1a0(0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar2 == 0x4403) {
      thunk_FUN_0041f630(local_10);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar2 == 0x11f) {
      if ((local_10[8] != 0x14) && (local_10[8] != 1000)) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      thunk_FUN_004ad4a0((void *)((int)local_10 + 0x1d5),DAT_00806774,(byte *)s_simmsk_007a4f4c);
      thunk_FUN_004ad4f0((int)local_10 + 0x1d5);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar2 != 0x120) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if ((local_10[8] != 0x14) && (local_10[8] != 1000)) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    thunk_FUN_004ad510((int)local_10 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar2 == 0x113) {
    if ((local_10[8] != 0x14) && (local_10[8] != 1000)) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    (*(code *)**(undefined4 **)((int)local_10 + 0x1d5))();
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (0x109 < uVar2) {
    if (uVar2 == 0x110) {
      if (DAT_008033f0 == (void *)0x0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      thunk_FUN_00566bd0(DAT_008033f0,(int)local_10);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar2 != 0x112) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if ((local_10[8] != 0x14) && (local_10[8] != 1000)) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    thunk_FUN_004ad5e0((int)local_10 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar2 == 0x109) {
    if (*(int *)((int)local_10 + 0x21d) == 1) {
      thunk_FUN_00420340(local_10);
    }
    thunk_FUN_00420ae0(local_10);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      *(undefined4 *)((int)local_10 + 0x219) = 10;
      *(undefined4 *)((int)local_10 + 0x215) = 10;
      *(undefined4 *)((int)local_10 + 0x21d) = 0;
      *(undefined4 *)((int)local_10 + 0x221) = 0xffffffff;
      *(undefined4 *)((int)local_10 + 0x225) = 0;
      *(undefined4 *)((int)local_10 + 0x229) = 0;
      *(undefined4 *)((int)local_10 + 0x101) = 0xffffffff;
      *(undefined4 *)((int)local_10 + 0x105) = 0xffffffff;
      *(undefined4 *)((int)local_10 + 0x109) = 0xffffffff;
      *(undefined4 *)((int)local_10 + 0x22d) = 0;
      if (local_10[0xb] != 0) {
        if (local_10[0xb] == 1) {
          iVar4 = thunk_FUN_004ad1f0(DAT_008073cc,0x78,0x56,(uint)local_10,0xf0,0xbe,0x11);
          if (iVar4 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7a4e0c,0x9d2);
          }
          FUN_006e9210(*(void **)((int)local_10 + 0x211),*(uint *)((int)local_10 + 0x1ed));
          DAT_00858df8 = (undefined4 *)local_54;
          return 0;
        }
        FUN_006a5e40(-1,DAT_007ed77c,0x7a4e0c,0x9d4);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      iVar4 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,(uint)local_10,0xb4,0x8c,0x11);
      if (iVar4 == 0) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      FUN_006a5e40(-1,DAT_007ed77c,0x7a4e0c,0x9d1);
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (uVar2 != 3) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    thunk_FUN_0041f970((int)local_10);
    FUN_006ab060((undefined4 *)((int)local_10 + 0x11d));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x121));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x125));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x129));
    iVar4 = local_10[8];
    if (iVar4 != 0x14) {
      if (iVar4 == 0x1ae) {
        FUN_006ab060((undefined4 *)((int)local_10 + 0x1ad));
        FUN_006ab060((undefined4 *)((int)local_10 + 0x1b1));
        FUN_006ab060((undefined4 *)((int)local_10 + 0x1c5));
        FUN_006ab060((undefined4 *)((int)local_10 + 0x1c9));
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (iVar4 != 1000) {
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
      if (*(byte **)((int)local_10 + 0x135) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x135));
      }
      if (*(byte **)((int)local_10 + 0x139) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x139));
      }
      *(undefined4 *)((int)local_10 + 0x135) = 0;
      *(undefined4 *)((int)local_10 + 0x139) = 0;
      if (*(byte **)((int)local_10 + 0x12d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x12d));
      }
      if (*(byte **)((int)local_10 + 0x131) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x131));
      }
      *(undefined4 *)((int)local_10 + 0x12d) = 0;
      *(undefined4 *)((int)local_10 + 0x131) = 0;
      if (*(byte **)((int)local_10 + 0x14d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x14d));
      }
      if (*(byte **)((int)local_10 + 0x151) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x151));
      }
      if (*(byte **)((int)local_10 + 0x155) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x155));
      }
      if (*(byte **)((int)local_10 + 0x159) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x159));
      }
      *(undefined4 *)((int)local_10 + 0x14d) = 0;
      *(undefined4 *)((int)local_10 + 0x151) = 0;
      *(undefined4 *)((int)local_10 + 0x155) = 0;
      *(undefined4 *)((int)local_10 + 0x159) = 0;
      if (*(byte **)((int)local_10 + 0x13d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x13d));
      }
      if (*(byte **)((int)local_10 + 0x141) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x141));
      }
      if (*(byte **)((int)local_10 + 0x145) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x145));
      }
      if (*(byte **)((int)local_10 + 0x149) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x149));
      }
      *(undefined4 *)((int)local_10 + 0x13d) = 0;
      *(undefined4 *)((int)local_10 + 0x141) = 0;
      *(undefined4 *)((int)local_10 + 0x145) = 0;
      *(undefined4 *)((int)local_10 + 0x149) = 0;
      FUN_006ab060((undefined4 *)((int)local_10 + 0x185));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x189));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x18d));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x191));
      if (*(byte **)((int)local_10 + 0x1a1) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x1a1));
        *(undefined4 *)((int)local_10 + 0x1a1) = 0;
      }
      if (*(byte **)((int)local_10 + 0x19d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)local_10 + 0x19d));
        *(undefined4 *)((int)local_10 + 0x19d) = 0;
      }
      FUN_006ab060((undefined4 *)((int)local_10 + 0x1a5));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x1a9));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x1b5));
      FUN_006ab060((undefined4 *)((int)local_10 + 0x1b9));
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    if (*(byte **)((int)local_10 + 0x171) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x171));
    }
    if (*(byte **)((int)local_10 + 0x175) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x175));
    }
    if (*(byte **)((int)local_10 + 0x179) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x179));
    }
    if (*(byte **)((int)local_10 + 0x17d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x17d));
    }
    if (*(byte **)((int)local_10 + 0x181) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x181));
    }
    *(undefined4 *)((int)local_10 + 0x171) = 0;
    *(undefined4 *)((int)local_10 + 0x175) = 0;
    *(undefined4 *)((int)local_10 + 0x179) = 0;
    *(undefined4 *)((int)local_10 + 0x17d) = 0;
    *(undefined4 *)((int)local_10 + 0x181) = 0;
    if (*(byte **)((int)local_10 + 0x15d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x15d));
    }
    if (*(byte **)((int)local_10 + 0x161) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x161));
    }
    if (*(byte **)((int)local_10 + 0x165) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x165));
    }
    if (*(byte **)((int)local_10 + 0x169) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x169));
    }
    if (*(byte **)((int)local_10 + 0x16d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_10 + 0x16d));
    }
    *(undefined4 *)((int)local_10 + 0x15d) = 0;
    *(undefined4 *)((int)local_10 + 0x161) = 0;
    *(undefined4 *)((int)local_10 + 0x165) = 0;
    *(undefined4 *)((int)local_10 + 0x169) = 0;
    *(undefined4 *)((int)local_10 + 0x16d) = 0;
    FUN_006ab060((undefined4 *)((int)local_10 + 0x195));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x199));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x1ad));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x1b1));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x1bd));
    FUN_006ab060((undefined4 *)((int)local_10 + 0x1c1));
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  iVar4 = local_10[8];
  if ((((iVar4 == 0x14) || (iVar4 == 1000)) || (iVar4 == 0x3e9)) ||
     ((iVar4 == 0x172 || (iVar4 == 0x1a4)))) {
    if (*(int *)((int)local_10 + 0x21d) == 1) {
      *(undefined4 *)((int)local_10 + 0x221) = 2;
    }
    thunk_FUN_0041f3b0(local_10);
  }
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0xc != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (7 < (uint)local_10[9]) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[local_10[9] * 0x51])) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if (7 < DAT_0080874d) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51])) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  local_5 = *(byte *)(local_10 + 9);
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == local_5) {
LAB_0041ebc0:
      iVar4 = 0;
    }
    else {
      uVar7 = (uint)DAT_0080874d;
      uVar2 = (uint)local_5;
      cVar1 = *(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2);
      if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7) != '\x01'))
        goto LAB_0041ebc0;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)local_5 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
  }
  if (bVar8) goto LAB_0041eccc;
  _local_c = CONCAT31(uStack_b,local_5);
  if (DAT_00808a8f == '\0') {
    if (local_5 == DAT_0080874d) {
LAB_0041ec79:
      iVar4 = 0;
    }
    else {
      uVar2 = (uint)local_5;
      uVar7 = (uint)DAT_0080874d;
      cVar1 = *(char *)((int)&DAT_00808a4f + uVar2 * 8 + uVar7);
      if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar2) != '\x01'))
        goto LAB_0041ec79;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
  }
  else {
    bVar8 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)local_5 * 0x51];
  }
  if (!bVar8) {
    if (*(int *)((int)local_10 + 0x22d) != 0) {
      DAT_00858df8 = (undefined4 *)local_54;
      return 0;
    }
    *(undefined4 *)((int)local_10 + 0x22d) = 1;
    FUN_006e97c0(*(void **)((int)local_10 + 0x211),*(uint *)((int)local_10 + 0x1ed),DAT_008032c0);
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
LAB_0041eccc:
  _local_c = CONCAT31(uStack_b,local_5);
  if (*(int *)((int)local_10 + 0x22d) == 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  *(undefined4 *)((int)local_10 + 0x22d) = 0;
  FUN_006e97c0(*(void **)((int)local_10 + 0x211),*(uint *)((int)local_10 + 0x1ed),0);
  DAT_00858df8 = (undefined4 *)local_54;
  return 0;
}

