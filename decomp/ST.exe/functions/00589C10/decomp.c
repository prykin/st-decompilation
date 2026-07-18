
undefined4 FUN_00589c10(int param_1)

{
  void *this;
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 local_88;
  undefined4 local_84 [16];
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar4 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_88;
    iVar6 = FUN_006ad4d0(s_E____titans_Igor_to_oct_cpp_007cba18,0x1cf,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar4,0,0x7cba18,0x1d0);
    return 0xffff;
  }
  thunk_FUN_0041e530(param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (0x112 < uVar7) {
    if (0x128 < uVar7) {
      if (uVar7 != 0x440f) {
        DAT_00858df8 = (undefined4 *)local_88;
        return 0;
      }
      this = (void *)((int)local_28 + 0x1d5);
      if (DAT_0080732c == 0) {
        thunk_FUN_004ad070(this,0xe);
        thunk_FUN_004ad070(this,8);
        DAT_00858df8 = (undefined4 *)local_88;
        return 0;
      }
      thunk_FUN_004ad0e0(this,0xe);
      thunk_FUN_004ad0e0(this,8);
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    if (uVar7 == 0x128) {
      if (*(int *)((int)local_28 + 0x249) == 2) {
        DAT_00858df8 = (undefined4 *)local_88;
        return 0;
      }
      uVar7 = thunk_FUN_004ad650((int)local_28 + 0x1d5);
      FUN_006eab60(*(void **)((int)local_28 + 0x211),uVar7);
      thunk_FUN_005899e0(local_28);
      *(undefined4 *)((int)local_28 + 0x249) = 2;
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    if (uVar7 != 0x113) {
      if (uVar7 != 0x127) {
        DAT_00858df8 = (undefined4 *)local_88;
        return 0;
      }
      iVar4 = thunk_FUN_0058d160(0,0,DAT_007fb240 + -1,DAT_007fb242 + -1,(int)local_28,
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10)
                                              * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10)
                                              * 0xc9 + 100),(undefined2 *)&local_1c,
                                 (undefined2 *)&local_24,(short *)&local_20);
      if (iVar4 == 0) {
        DAT_00858df8 = (undefined4 *)local_88;
        return 0;
      }
      thunk_FUN_0058af70(local_28,(short)local_1c,(short)local_24,(short)local_20);
      sVar3 = (**(code **)(*local_28 + 0x10))
                        (*(undefined2 *)((int)local_28 + 0x41),*(undefined2 *)((int)local_28 + 0x43)
                         ,*(undefined2 *)((int)local_28 + 0x45),local_1c,local_24,local_20);
      *(short *)(local_28 + 0x1b) = sVar3 / 0x2d - (short)((int)sVar3 / -0x4c000000);
      iVar4 = *(int *)((int)local_28 + 0x251) * 0x1850;
      *(int *)((int)local_28 + 0x251) = (int)(iVar4 + (iVar4 >> 0x1f & 0xfffU)) >> 0xc;
      iVar4 = *(int *)((int)local_28 + 0x255) * 0x1850;
      *(int *)((int)local_28 + 0x255) = (int)(iVar4 + (iVar4 >> 0x1f & 0xfffU)) >> 0xc;
      iVar4 = *(int *)((int)local_28 + 0x259) * 0x1850;
      *(int *)((int)local_28 + 0x259) = (int)(iVar4 + (iVar4 >> 0x1f & 0xfffU)) >> 0xc;
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    (*(code *)**(undefined4 **)((int)local_28 + 0x1d5))();
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  if (uVar7 == 0x112) {
    thunk_FUN_004ad5e0((int)local_28 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  if (3 < uVar7) {
    if (uVar7 != 0x10f) {
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    local_14 = (byte *)thunk_FUN_004ad790(&local_8);
    local_18 = (byte *)thunk_FUN_004210e0((int *)&local_10);
    local_c = (byte *)FUN_006aac70(local_10 + 0x96 + local_8);
    if (local_14 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    if (local_18 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    if (local_c == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    puVar8 = (undefined4 *)((int)local_28 + 0x285);
    pbVar9 = local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pbVar9 = pbVar9 + 4;
    }
    local_c[0xc] = 2;
    local_c[0xd] = 0;
    local_c[0xe] = 0;
    local_c[0xf] = 0;
    *(undefined4 *)(local_c + 0x28) = *(undefined4 *)((int)local_28 + 0x245);
    *(undefined4 *)(local_c + 0x2c) = *(undefined4 *)((int)local_28 + 0x249);
    *(undefined2 *)(local_c + 0x78) = *(undefined2 *)((int)local_28 + 0x41);
    *(undefined2 *)(local_c + 0x7a) = *(undefined2 *)((int)local_28 + 0x43);
    *(undefined2 *)(local_c + 0x7c) = *(undefined2 *)((int)local_28 + 0x45);
    *(undefined4 *)(local_c + 0x40) = *(undefined4 *)((int)local_28 + 0x231);
    *(undefined4 *)(local_c + 0x44) = *(undefined4 *)((int)local_28 + 0x241);
    *(undefined4 *)(local_c + 0x48) = *(undefined4 *)((int)local_28 + 0x251);
    *(undefined4 *)(local_c + 0x4c) = *(undefined4 *)((int)local_28 + 0x255);
    *(undefined4 *)(local_c + 0x50) = *(undefined4 *)((int)local_28 + 0x259);
    *(undefined4 *)(local_c + 0x54) = *(undefined4 *)((int)local_28 + 0x25d);
    *(undefined4 *)(local_c + 0x58) = *(undefined4 *)((int)local_28 + 0x261);
    *(undefined4 *)(local_c + 0x5c) = *(undefined4 *)((int)local_28 + 0x265);
    *(undefined4 *)(local_c + 0x60) = *(undefined4 *)((int)local_28 + 0x269);
    *(undefined4 *)(local_c + 100) = *(undefined4 *)((int)local_28 + 0x26d);
    *(undefined4 *)(local_c + 0x68) = *(undefined4 *)((int)local_28 + 0x271);
    *(undefined4 *)(local_c + 0x6c) = *(undefined4 *)((int)local_28 + 0x275);
    *(undefined4 *)(local_c + 0x70) = *(undefined4 *)((int)local_28 + 0x279);
    *(undefined4 *)(local_c + 0x74) = *(undefined4 *)((int)local_28 + 0x27d);
    *(undefined4 *)(local_c + 0x38) = *(undefined4 *)((int)local_28 + 0x239);
    *(undefined4 *)(local_c + 0x3c) = *(undefined4 *)((int)local_28 + 0x23d);
    *(undefined4 *)(local_c + 0x34) = *(undefined4 *)((int)local_28 + 0x235);
    *(undefined4 *)(local_c + 0x86) = *(undefined4 *)((int)local_28 + 0x281);
    *(undefined2 *)(local_c + 0x7e) = *(undefined2 *)((int)local_28 + 0x4e);
    *(short *)(local_c + 0x80) = (short)local_28[0x14];
    *(undefined2 *)(local_c + 0x82) = *(undefined2 *)((int)local_28 + 0x52);
    *(short *)(local_c + 0x84) = (short)local_28[0x1b];
    *(undefined4 *)(local_c + 0x30) = *(undefined4 *)((int)local_28 + 0x24d);
    local_c[0x8a] = 0;
    local_c[0x8b] = 0;
    local_c[0x8c] = 0;
    local_c[0x8d] = 0;
    *(uint *)(local_c + 0x8e) = local_8;
    pbVar9 = local_14;
    pbVar11 = local_c + 0x92;
    for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    }
    *(uint *)(local_c + local_8 + 0x92) = local_10;
    pbVar9 = local_18;
    pbVar11 = local_c + local_8 + 0x96;
    for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
    }
    thunk_FUN_0054d430(DAT_00802a38,local_28[6],local_c,local_10 + 0x96 + local_8);
    FUN_006ab060(&local_14);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_c);
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  if (uVar7 == 3) {
    thunk_FUN_0058d080(local_28[6]);
    thunk_FUN_004ad310((int)local_28 + 0x1d5);
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  if (uVar7 == 0) {
    if (*(int *)((int)local_28 + 0x249) == 2) {
      DAT_00858df8 = (undefined4 *)local_88;
      return 0;
    }
    thunk_FUN_0058a9e0(local_28);
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  if (uVar7 != 2) {
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
  *(undefined4 *)((int)local_28 + 0x249) = 3;
  local_1c = *(undefined4 **)(param_1 + 0x14);
  if ((uint)local_1c[3] < 2) {
    iVar4 = *(int *)((int)DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)local_28 + 0x24d) = 0;
    *(undefined4 *)((int)local_28 + 0x231) = 0;
    *(int *)((int)local_28 + 0x245) = iVar4 + -3;
    *(undefined4 *)((int)local_28 + 0x235) = 0;
    *(undefined4 *)((int)local_28 + 0x271) = 0;
    *(undefined4 *)((int)local_28 + 0x26d) = 0;
    *(undefined4 *)((int)local_28 + 0x269) = 0;
    *(undefined4 *)((int)local_28 + 0x281) = 0;
    *(undefined4 *)((int)local_28 + 0x241) = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x14);
    puVar10 = (undefined4 *)((int)local_28 + 0x285);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    thunk_FUN_0058a8d0((int)local_28);
    if (((((*(int *)((int)local_28 + 0x299) < 0) ||
          ((int)DAT_007fb240 <= *(int *)((int)local_28 + 0x299))) ||
         (*(int *)((int)local_28 + 0x29d) < 0)) ||
        (((int)DAT_007fb242 <= *(int *)((int)local_28 + 0x29d) ||
         (iVar4 = *(int *)((int)local_28 + 0x2a1), iVar4 < 0)))) ||
       ((DAT_007fb244 <= iVar4 ||
        (bVar2 = thunk_FUN_004961b0(*(short *)((int)local_28 + 0x299),
                                    *(short *)((int)local_28 + 0x29d),(short)iVar4),
        CONCAT31(extraout_var,bVar2) == 0)))) goto LAB_0058a0d0;
    switch(*(undefined4 *)((int)local_28 + 0x2a5)) {
    case 0xf8:
      iVar4 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_octopus2_007cb9f0,0x1d);
      if (iVar4 != 0) {
        uVar5 = 0xe9;
LAB_0058a005:
        FUN_006a5e40(-1,DAT_007ed77c,0x7cba18,uVar5);
      }
      break;
    case 0xf9:
      iVar4 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_octopus1_007cb9dc,0x1d);
      if (iVar4 != 0) {
        uVar5 = 0xe4;
        goto LAB_0058a005;
      }
      break;
    case 0xfa:
      iVar4 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_medusa2_007cb9fc,0x1d);
      if (iVar4 != 0) {
        uVar5 = 0xf3;
        goto LAB_0058a005;
      }
      break;
    case 0xfb:
      iVar4 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_medusa1_007cb9e8,0x1d);
      if (iVar4 != 0) {
        uVar5 = 0xee;
        goto LAB_0058a005;
      }
    }
    thunk_FUN_004ac610((void *)((int)local_28 + 0x1d5),'\x0e');
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
    *(short *)((int)local_28 + 0x41) = *(short *)((int)local_28 + 0x299) * 0xc9 + 100;
    *(short *)((int)local_28 + 0x43) = *(short *)((int)local_28 + 0x29d) * 0xc9 + 100;
    *(short *)((int)local_28 + 0x45) = *(short *)((int)local_28 + 0x2a1) * 200 + 100;
    *(short *)(local_28 + 0x1b) = *(short *)((int)local_28 + 0x2a9);
    *(undefined4 *)((int)local_28 + 0x251) = 1;
    *(undefined4 *)((int)local_28 + 0x255) = 1;
    *(undefined4 *)((int)local_28 + 0x259) = 1;
    uVar5 = thunk_FUN_0058b190(local_28,(short *)((int)local_28 + 0x4e),(short *)(local_28 + 0x14),
                               (short *)((int)local_28 + 0x52),(short *)(local_28 + 0x1b));
    *(undefined4 *)((int)local_28 + 0x249) = uVar5;
    *(undefined4 *)((int)local_28 + 0x231) = 0;
  }
  else if (local_1c[3] == 2) {
    puVar8 = local_1c;
    puVar10 = (undefined4 *)((int)local_28 + 0x285);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_8 = *(uint *)((int)local_1c + 0x8e);
    thunk_FUN_00422210((undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar8 = local_1c;
    *(undefined4 *)((int)local_28 + 0x249) = local_1c[0xb];
    *(undefined4 *)((int)local_28 + 0x245) = local_1c[10];
    *(undefined2 *)((int)local_28 + 0x41) = *(undefined2 *)(local_1c + 0x1e);
    *(undefined2 *)((int)local_28 + 0x43) = *(undefined2 *)((int)local_1c + 0x7a);
    *(undefined2 *)((int)local_28 + 0x45) = *(undefined2 *)(local_1c + 0x1f);
    *(undefined4 *)((int)local_28 + 0x281) = *(undefined4 *)((int)local_1c + 0x86);
    *(undefined4 *)((int)local_28 + 0x231) = local_1c[0x10];
    *(undefined4 *)((int)local_28 + 0x241) = local_1c[0x11];
    *(undefined4 *)((int)local_28 + 0x251) = local_1c[0x12];
    *(undefined4 *)((int)local_28 + 0x255) = local_1c[0x13];
    *(undefined4 *)((int)local_28 + 0x259) = local_1c[0x14];
    *(undefined4 *)((int)local_28 + 0x25d) = local_1c[0x15];
    *(undefined4 *)((int)local_28 + 0x261) = local_1c[0x16];
    *(undefined4 *)((int)local_28 + 0x265) = local_1c[0x17];
    *(undefined4 *)((int)local_28 + 0x269) = local_1c[0x18];
    *(undefined4 *)((int)local_28 + 0x26d) = local_1c[0x19];
    *(undefined4 *)((int)local_28 + 0x271) = local_1c[0x1a];
    *(undefined4 *)((int)local_28 + 0x275) = local_1c[0x1b];
    *(undefined4 *)((int)local_28 + 0x279) = local_1c[0x1c];
    *(undefined4 *)((int)local_28 + 0x27d) = local_1c[0x1d];
    *(undefined4 *)((int)local_28 + 0x239) = local_1c[0xe];
    *(undefined4 *)((int)local_28 + 0x23d) = local_1c[0xf];
    *(undefined4 *)((int)local_28 + 0x235) = local_1c[0xd];
    *(undefined2 *)((int)local_28 + 0x4e) = *(undefined2 *)((int)local_1c + 0x7e);
    *(undefined2 *)(local_28 + 0x14) = *(undefined2 *)(local_1c + 0x20);
    *(undefined2 *)((int)local_28 + 0x52) = *(undefined2 *)((int)local_1c + 0x82);
    *(undefined2 *)(local_28 + 0x1b) = *(undefined2 *)(local_1c + 0x21);
    *(undefined4 *)((int)local_28 + 0x24d) = local_1c[0xc];
    local_44[0] = FUN_006aac70(0x44);
    if (local_44[0] != 0) {
      iVar4 = 0;
      do {
        if (iVar4 == 8) {
          *(undefined4 *)(local_44[0] + 0x20) = DAT_00806774;
        }
        else {
          *(int **)(local_44[0] + iVar4 * 4) = DAT_0080676c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x11);
      local_44[1] = 0;
      local_44[2] = 0;
      local_44[3] = DAT_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      thunk_FUN_004adba0(local_44,(undefined4 *)((int)puVar8 + 0x92));
      FUN_006ab060(local_44);
    }
  }
  if ((*(int *)((int)local_28 + 0x249) == 3) ||
     (iVar4 = thunk_FUN_0058cfe0((int)local_28), iVar4 != 0)) {
    DAT_00858df8 = (undefined4 *)local_88;
    return 0;
  }
LAB_0058a0d0:
  thunk_FUN_005899e0(local_28);
  *(undefined4 *)((int)local_28 + 0x249) = 2;
  DAT_00858df8 = (undefined4 *)local_88;
  return 0;
}

