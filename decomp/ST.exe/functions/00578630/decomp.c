
undefined4 __thiscall FUN_00578630(void *this,int param_1)

{
  void *pvVar1;
  code *pcVar2;
  int *this_00;
  bool bVar3;
  short sVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  byte *pbVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 local_80;
  undefined4 local_7c [16];
  int local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  int *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x239) == 3) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_1c = this;
  iVar5 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar7 = FUN_006ad4d0(s_E____titans_Igor_to_crab_cpp_007cad4c,0x1b7,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar5,0,0x7cad4c,0x1b8);
    return 0xffff;
  }
  thunk_FUN_0041e530(param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar8) {
    if (uVar8 != 0x128) {
      if (uVar8 != 0x440f) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      pvVar1 = (void *)((int)this_00 + 0x1d5);
      if (DAT_0080732c != 0) {
        thunk_FUN_004ad0e0(pvVar1,0xe);
        thunk_FUN_004ad0e0(pvVar1,0xd);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      thunk_FUN_004ad070(pvVar1,0xe);
      thunk_FUN_004ad070(pvVar1,0xd);
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    uVar8 = thunk_FUN_004ad650((int)this_00 + 0x1d5);
    FUN_006eab60(*(void **)((int)this_00 + 0x211),uVar8);
    goto LAB_00578ea2;
  }
  if (uVar8 == 0x10f) {
    local_14 = (byte *)thunk_FUN_004ad790(&local_8);
    local_18 = (byte *)thunk_FUN_004210e0((int *)&local_10);
    local_c = (byte *)FUN_006aac70(local_10 + 0x68 + local_8);
    if (local_14 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    puVar9 = (undefined4 *)((int)this_00 + 0x259);
    pbVar10 = local_c;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pbVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pbVar10 = pbVar10 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    *(undefined4 *)(local_c + 0x28) = *(undefined4 *)((int)this_00 + 0x235);
    *(undefined4 *)(local_c + 0x2c) = *(undefined4 *)((int)this_00 + 0x239);
    *(undefined2 *)(local_c + 0x50) = *(undefined2 *)((int)this_00 + 0x41);
    *(undefined2 *)(local_c + 0x52) = *(undefined2 *)((int)this_00 + 0x43);
    *(undefined2 *)(local_c + 0x54) = *(undefined2 *)((int)this_00 + 0x45);
    *(undefined4 *)(local_c + 0x34) = *(undefined4 *)((int)this_00 + 0x231);
    *(undefined4 *)(local_c + 0x48) = *(undefined4 *)((int)this_00 + 0x245);
    *(undefined4 *)(local_c + 0x4c) = *(undefined4 *)((int)this_00 + 0x24d);
    *(undefined4 *)(local_c + 0x38) = *(undefined4 *)((int)this_00 + 0x241);
    *(undefined4 *)(local_c + 0x3c) = *(undefined4 *)((int)this_00 + 0x249);
    *(undefined4 *)(local_c + 0x40) = *(undefined4 *)((int)this_00 + 0x251);
    *(undefined4 *)(local_c + 0x44) = *(undefined4 *)((int)this_00 + 0x255);
    *(undefined2 *)(local_c + 0x56) = *(undefined2 *)((int)this_00 + 0x4e);
    *(short *)(local_c + 0x58) = (short)this_00[0x14];
    *(short *)(local_c + 0x5a) = (short)this_00[0x1b];
    *(undefined4 *)(local_c + 0x30) = *(undefined4 *)((int)this_00 + 0x23d);
    local_c[0x5c] = 0;
    local_c[0x5d] = 0;
    local_c[0x5e] = 0;
    local_c[0x5f] = 0;
    *(uint *)(local_c + 0x60) = local_8;
    pbVar10 = local_14;
    pbVar12 = local_c + 100;
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
    *(uint *)(local_c + local_8 + 100) = local_10;
    pbVar10 = local_18;
    pbVar12 = local_c + local_8 + 0x68;
    for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
    thunk_FUN_0054d430(DAT_00802a38,this_00[6],local_c,local_10 + 0x68 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  if (uVar8 == 0) {
    if (*(int *)((int)this_00 + 0x239) == 2) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    thunk_FUN_00579350(this_00);
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  if (uVar8 != 2) {
    if (uVar8 != 3) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    thunk_FUN_0058d080(this_00[6]);
    thunk_FUN_004ad310((int)this_00 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  local_20 = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_20[3] < 2) {
    *(undefined4 *)((int)this_00 + 0x239) = 3;
    iVar5 = *(int *)((int)DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)this_00 + 0x23d) = 0;
    *(undefined4 *)((int)this_00 + 0x231) = 0;
    *(int *)((int)this_00 + 0x235) = iVar5 + -3;
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    puVar11 = (undefined4 *)((int)this_00 + 0x259);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    thunk_FUN_00579170((int)this_00);
    if (((((*(int *)((int)this_00 + 0x26d) < 0) ||
          ((int)DAT_007fb240 <= *(int *)((int)this_00 + 0x26d))) ||
         (*(int *)((int)this_00 + 0x271) < 0)) ||
        (((int)DAT_007fb242 <= *(int *)((int)this_00 + 0x271) ||
         (iVar5 = *(int *)((int)this_00 + 0x275), iVar5 < 0)))) ||
       ((DAT_007fb244 <= iVar5 ||
        (bVar3 = thunk_FUN_004961b0(*(short *)((int)this_00 + 0x26d),
                                    *(short *)((int)this_00 + 0x271),(short)iVar5),
        CONCAT31(extraout_var,bVar3) == 0)))) {
      thunk_FUN_005783f0(this_00);
      *(undefined4 *)((int)this_00 + 0x239) = 2;
    }
    else {
      switch(*(undefined4 *)((int)this_00 + 0x279)) {
      case 0xf2:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_crab1l_007cacb0,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xd2);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_crab1l_m_007cacb8,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xd5;
LAB_00578b5d:
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,uVar6);
        }
        break;
      case 0xf3:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_crab2l_007cacc4,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xda);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_crab2l_m_007caccc,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xdd;
          goto LAB_00578b5d;
        }
        break;
      case 0xf4:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_crab1b_007cacd8,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xe2);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_crab1b_m_007cace0,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xe5;
          goto LAB_00578b5d;
        }
        break;
      case 0xf5:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_crab2b_007cacec,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xea);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_crab2b_m_007cacf4,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xed;
          goto LAB_00578b5d;
        }
        break;
      case 0xf6:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_langus2_007cad14,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xfa);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_langus2m_007cad1c,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xfd;
          goto LAB_00578b5d;
        }
        break;
      case 0xf7:
        iVar5 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_langus1_007cad00,0x1d);
        if (iVar5 != 0) {
          FUN_006a5e40(-1,DAT_007ed77c,0x7cad4c,0xf2);
        }
        iVar5 = thunk_FUN_004ab880(0xd,DAT_0080676c,(byte *)s_langus1m_007cad08,0x1d);
        if (iVar5 != 0) {
          uVar6 = 0xf5;
          goto LAB_00578b5d;
        }
      }
      pvVar1 = (void *)((int)this_00 + 0x1d5);
      thunk_FUN_004acf50(pvVar1,'\r');
      thunk_FUN_004ac610(pvVar1,'\x0e');
      thunk_FUN_004ac610(pvVar1,'\r');
      thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
      thunk_FUN_004ac1a0(0xd,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
      sVar4 = *(short *)((int)this_00 + 0x275) * 200;
      *(short *)((int)this_00 + 0x41) = *(short *)((int)this_00 + 0x26d) * 0xc9 + 100;
      *(short *)((int)this_00 + 0x43) = *(short *)((int)this_00 + 0x271) * 0xc9 + 100;
      *(short *)((int)this_00 + 0x45) = sVar4 + 100;
      if ((*(int *)((int)this_00 + 0x279) < 0xf6) || (0xf7 < *(int *)((int)this_00 + 0x279))) {
        sVar4 = sVar4 + 0x28;
      }
      else {
        sVar4 = sVar4 + 0x82;
      }
      *(short *)((int)this_00 + 0x45) = sVar4;
      *(short *)(this_00 + 0x1b) =
           (short)(*(int *)((int)this_00 + 0x27d) / 0x2d) -
           (short)(*(int *)((int)this_00 + 0x27d) / -0x4c000000);
      uVar6 = thunk_FUN_005797b0(this_00,(undefined2 *)((int)this_00 + 0x4e),
                                 (undefined2 *)(this_00 + 0x14),(undefined2 *)(this_00 + 0x1b));
      *(undefined4 *)((int)this_00 + 0x239) = uVar6;
    }
  }
  else if (local_20[3] == 2) {
    puVar9 = local_20;
    puVar11 = (undefined4 *)((int)this_00 + 0x259);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_8 = local_20[0x18];
    thunk_FUN_00422210((undefined4 *)(local_8 + 0x68 + (int)local_20));
    puVar9 = local_20;
    *(undefined4 *)((int)this_00 + 0x239) = local_20[0xb];
    *(undefined4 *)((int)this_00 + 0x235) = local_20[10];
    *(undefined2 *)((int)this_00 + 0x41) = *(undefined2 *)(local_20 + 0x14);
    *(undefined2 *)((int)this_00 + 0x43) = *(undefined2 *)((int)local_20 + 0x52);
    *(undefined2 *)((int)this_00 + 0x45) = *(undefined2 *)(local_20 + 0x15);
    *(undefined4 *)((int)this_00 + 0x231) = local_20[0xd];
    *(undefined4 *)((int)this_00 + 0x245) = local_20[0x12];
    *(undefined4 *)((int)this_00 + 0x24d) = local_20[0x13];
    *(undefined4 *)((int)this_00 + 0x241) = local_20[0xe];
    *(undefined4 *)((int)this_00 + 0x249) = local_20[0xf];
    *(undefined4 *)((int)this_00 + 0x251) = local_20[0x10];
    *(undefined4 *)((int)this_00 + 0x255) = local_20[0x11];
    *(undefined2 *)((int)this_00 + 0x4e) = *(undefined2 *)((int)local_20 + 0x56);
    *(undefined2 *)(this_00 + 0x14) = *(undefined2 *)(local_20 + 0x16);
    *(undefined2 *)(this_00 + 0x1b) = *(undefined2 *)((int)local_20 + 0x5a);
    *(undefined4 *)((int)this_00 + 0x23d) = local_20[0xc];
    local_3c[0] = FUN_006aac70(0x44);
    if (local_3c[0] != 0) {
      iVar5 = 0;
      do {
        *(int **)(iVar5 + local_3c[0]) = DAT_0080676c;
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x44);
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[3] = DAT_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      thunk_FUN_004adba0(local_3c,puVar9 + 0x19);
      FUN_006ab060(local_3c);
    }
  }
  if (*(int *)((int)this_00 + 0x239) == 3) {
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  iVar5 = thunk_FUN_0058cfe0((int)this_00);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
LAB_00578ea2:
  thunk_FUN_005783f0(this_00);
  *(undefined4 *)((int)this_00 + 0x239) = 2;
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

