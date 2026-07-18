
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00588bc0(void *this,int param_1)

{
  code *pcVar1;
  int *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  byte *pbVar8;
  void *unaff_EDI;
  int *piVar9;
  byte *pbVar10;
  undefined4 local_8c;
  undefined4 local_88 [16];
  int *local_48;
  int *local_44;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  byte *local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_24 = (void *)0x0;
  if ((*(int *)((int)this + 0x231) == 3) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  local_44 = this;
  iVar2 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar4 = FUN_006ad4d0(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x389,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7cb9b8,0x38a);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  thunk_FUN_0041e530(param_1);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar5) {
    if (uVar5 == 0x112) {
      thunk_FUN_004ad5e0((int)this_00 + 0x1d5);
    }
    else if (uVar5 == 0x113) {
      (*(code *)**(undefined4 **)((int)this_00 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    DAT_00858df8 = (undefined4 *)local_8c;
    return 0;
  }
  if (uVar5 == 0x10f) {
    local_20 = (byte *)thunk_FUN_004ad790(&local_10);
    local_1c = (byte *)thunk_FUN_004210e0((int *)&local_18);
    local_14 = (byte *)FUN_006aac70(local_18 + 0x87 + local_10);
    if (local_20 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    if (local_1c == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    if (local_14 == (byte *)0x0) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    piVar7 = this_00 + 0x9f;
    pbVar8 = local_14;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(int *)pbVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      pbVar8 = pbVar8 + 4;
    }
    *(short *)pbVar8 = (short)*piVar7;
    local_14[0xc] = 2;
    local_14[0xd] = 0;
    local_14[0xe] = 0;
    local_14[0xf] = 0;
    *(undefined4 *)(local_14 + 0x2a) = *(undefined4 *)((int)this_00 + 0x231);
    *(undefined4 *)(local_14 + 0x2e) = *(undefined4 *)((int)this_00 + 0x235);
    *(undefined4 *)(local_14 + 0x32) = *(undefined4 *)((int)this_00 + 0x239);
    *(undefined4 *)(local_14 + 0x36) = *(undefined4 *)((int)this_00 + 0x23d);
    *(undefined2 *)(local_14 + 0x3a) = *(undefined2 *)((int)this_00 + 0x241);
    *(undefined2 *)(local_14 + 0x3c) = *(undefined2 *)((int)this_00 + 0x243);
    *(undefined2 *)(local_14 + 0x3e) = *(undefined2 *)((int)this_00 + 0x245);
    *(undefined4 *)(local_14 + 0x62) = *(undefined4 *)((int)this_00 + 0x263);
    *(undefined4 *)(local_14 + 0x66) = *(undefined4 *)((int)this_00 + 0x267);
    *(undefined4 *)(local_14 + 0x6a) = *(undefined4 *)((int)this_00 + 0x26b);
    *(undefined2 *)(local_14 + 0x40) = *(undefined2 *)((int)this_00 + 0x247);
    *(undefined2 *)(local_14 + 0x42) = *(undefined2 *)((int)this_00 + 0x249);
    *(undefined2 *)(local_14 + 0x44) = *(undefined2 *)((int)this_00 + 0x24b);
    *(undefined2 *)(local_14 + 0x46) = *(undefined2 *)((int)this_00 + 0x24d);
    *(undefined2 *)(local_14 + 0x48) = *(undefined2 *)((int)this_00 + 0x24f);
    *(undefined2 *)(local_14 + 0x4a) = *(undefined2 *)((int)this_00 + 0x251);
    *(undefined4 *)(local_14 + 0x4c) = *(undefined4 *)((int)this_00 + 0x253);
    *(undefined4 *)(local_14 + 0x50) = *(undefined4 *)((int)this_00 + 599);
    *(undefined4 *)(local_14 + 0x54) = *(undefined4 *)((int)this_00 + 0x25b);
    *(undefined4 *)(local_14 + 0x58) = *(undefined4 *)((int)this_00 + 0x25f);
    *(undefined4 *)(local_14 + 0x5c) = *(undefined4 *)((int)this_00 + 0x26f);
    *(undefined2 *)(local_14 + 0x60) = *(undefined2 *)((int)this_00 + 0x273);
    local_14[0x74] = 0;
    local_14[0x75] = 0;
    local_14[0x76] = 0;
    local_14[0x77] = 0;
    *(undefined2 *)(local_14 + 0x6e) = *(undefined2 *)((int)this_00 + 0x41);
    *(undefined2 *)(local_14 + 0x70) = *(undefined2 *)((int)this_00 + 0x43);
    *(undefined2 *)(local_14 + 0x72) = *(undefined2 *)((int)this_00 + 0x45);
    local_14[0x78] = *(byte *)((int)this_00 + 0x275);
    local_14[0x79] = *(byte *)((int)this_00 + 0x276);
    local_14[0x7a] = *(byte *)((int)this_00 + 0x277);
    *(int *)(local_14 + 0x7b) = this_00[0x9e];
    *(uint *)(local_14 + 0x7f) = local_10;
    pbVar8 = local_20;
    pbVar10 = local_14 + 0x83;
    for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    *(uint *)(local_14 + local_10 + 0x83) = local_18;
    pbVar8 = local_1c;
    pbVar10 = local_14 + local_10 + 0x87;
    for (uVar5 = local_18 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar5 = local_18 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    thunk_FUN_0054d430(DAT_00802a38,this_00[6],local_14,local_18 + 0x87 + local_10);
    FUN_006ab060(&local_20);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_14);
    DAT_00858df8 = (undefined4 *)local_8c;
    return 0;
  }
  if (uVar5 == 0) {
    thunk_FUN_00586af0(this_00);
    DAT_00858df8 = (undefined4 *)local_8c;
    return 0;
  }
  if (uVar5 == 2) {
    DAT_0081170c = FUN_006acf0d(0,0,0,0x3ed,0x3ed,1000);
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)((int)this_00 + 0x231) = 3;
    uVar5 = *(uint *)(iVar2 + 0xc);
    if (uVar5 < 2) {
      *(undefined4 *)((int)this_00 + 599) = 0;
      *(undefined4 *)((int)this_00 + 0x253) = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)this_00 + 0x26f) = 0xff;
      piVar7 = *(int **)(param_1 + 0x14);
      piVar9 = this_00 + 0x9f;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      *(short *)piVar9 = (short)*piVar7;
      uVar5 = this_00[7] * 0x41c64e6d + 0x3039;
      this_00[7] = uVar5;
      *(uint *)((int)this_00 + 0x25b) = (uVar5 >> 0x10) % 0x19 - 0xc;
      *(undefined4 *)((int)this_00 + 0x25f) = 2;
      *(undefined4 *)((int)this_00 + 0x26b) = 0;
      *(undefined4 *)((int)this_00 + 0x267) = 0;
      *(undefined4 *)((int)this_00 + 0x263) = 0;
      if ((this_00[0xa4] < (int)(short)((short)_DAT_007fb240 * 0xc9 + 100)) && (-1 < this_00[0xa4]))
      {
        if ((this_00[0xa5] < (int)(short)(DAT_007fb242 * 0xc9 + 100)) &&
           (((-1 < this_00[0xa5] &&
             (iVar2 = this_00[0xa6], iVar2 < (short)(_DAT_007fb244 * 200 + 100))) && (-1 < iVar2))))
        {
          thunk_FUN_00416240(this_00,(short)this_00[0xa4],(short)this_00[0xa5],(short)iVar2);
          iVar2 = this_00[0xa4];
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
          }
          iVar2 = this_00[0xa5];
          *(short *)((int)this_00 + 0x47) = sVar6;
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
          }
          iVar2 = this_00[0xa6];
          *(short *)((int)this_00 + 0x49) = sVar6;
          sVar6 = (short)(iVar2 >> 0x1f);
          if (iVar2 < 0) {
            sVar6 = (((short)(iVar2 / 200) + sVar6) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar6 = ((short)(iVar2 / 200) + sVar6) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f);
          }
          *(short *)((int)this_00 + 0x4b) = sVar6;
          iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,(byte *)s_mmine_007cb934,0x1d);
          if (iVar2 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7cb9b8,0x2c3);
          }
          thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
          if ((this_00[0xa7] == 0) ||
             (iVar2 = FUN_006e62d0(DAT_00802a38,this_00[0xa7],(int *)&local_24), iVar2 != 0)) {
            *(undefined4 *)((int)this_00 + 0x231) = 1;
            *(undefined4 *)((int)this_00 + 0x235) = 0;
            *(undefined4 *)((int)this_00 + 0x239) = 0;
            *(undefined4 *)((int)this_00 + 0x23d) = 0;
          }
          else {
            *(undefined4 *)((int)this_00 + 0x231) = 0;
            *(undefined2 *)((int)this_00 + 0x273) = *(undefined2 *)((int)local_24 + 0x32);
            *(undefined4 *)((int)this_00 + 0x26f) = *(undefined4 *)((int)local_24 + 0x24);
            thunk_FUN_00416270(local_24,&local_6,&local_8,&local_a);
            local_a = local_a - *(short *)((int)this_00 + 0x45);
            local_8 = local_8 - *(short *)((int)this_00 + 0x43);
            local_6 = local_6 - *(short *)((int)this_00 + 0x41);
            iVar2 = FUN_006acf0d(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            *(undefined4 *)((int)this_00 + 0x235) = 0;
            *(undefined4 *)((int)this_00 + 0x239) = 0;
            *(undefined4 *)((int)this_00 + 0x23d) = 0;
            if (0 < iVar2) {
              *(int *)((int)this_00 + 0x235) = (local_6 * 0xc0000) / iVar2;
              *(int *)((int)this_00 + 0x239) = (local_8 * 0xc0000) / iVar2;
              *(int *)((int)this_00 + 0x23d) = (local_a * 0xc0000) / iVar2;
            }
          }
          thunk_FUN_00589870(this_00,this_00[0xa4],this_00[0xa5],0x45b);
          *(undefined2 *)((int)this_00 + 0x24f) = *(undefined2 *)((int)this_00 + 0x43);
          *(undefined2 *)((int)this_00 + 0x24d) = *(undefined2 *)((int)this_00 + 0x41);
          *(undefined2 *)((int)this_00 + 0x251) = *(undefined2 *)((int)this_00 + 0x45);
          DAT_00858df8 = (undefined4 *)local_8c;
          return 0;
        }
      }
      iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_mbomb_cpp_007cb9b8,0x2ae,0,0,&DAT_007a4ccc);
      if (iVar2 == 0) {
        thunk_FUN_005862e0(this_00);
        DAT_00858df8 = (undefined4 *)local_8c;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (uVar5 != 2) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    local_48 = *(int **)(param_1 + 0x14);
    piVar7 = local_48;
    piVar9 = this_00 + 0x9f;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    *(short *)piVar9 = (short)*piVar7;
    local_10 = *(uint *)((int)local_48 + 0x7f);
    thunk_FUN_00422210((undefined4 *)(local_10 + 0x87 + (int)local_48));
    piVar7 = local_48;
    *(undefined4 *)((int)this_00 + 0x231) = *(undefined4 *)((int)local_48 + 0x2a);
    *(undefined4 *)((int)this_00 + 0x235) = *(undefined4 *)((int)local_48 + 0x2e);
    *(undefined4 *)((int)this_00 + 0x239) = *(undefined4 *)((int)local_48 + 0x32);
    *(undefined4 *)((int)this_00 + 0x23d) = *(undefined4 *)((int)local_48 + 0x36);
    *(undefined2 *)((int)this_00 + 0x241) = *(undefined2 *)((int)local_48 + 0x3a);
    *(short *)((int)this_00 + 0x243) = (short)local_48[0xf];
    *(undefined2 *)((int)this_00 + 0x245) = *(undefined2 *)((int)local_48 + 0x3e);
    *(undefined4 *)((int)this_00 + 0x263) = *(undefined4 *)((int)local_48 + 0x62);
    *(undefined4 *)((int)this_00 + 0x267) = *(undefined4 *)((int)local_48 + 0x66);
    *(undefined4 *)((int)this_00 + 0x26b) = *(undefined4 *)((int)local_48 + 0x6a);
    *(short *)((int)this_00 + 0x247) = (short)local_48[0x10];
    *(undefined2 *)((int)this_00 + 0x249) = *(undefined2 *)((int)local_48 + 0x42);
    *(short *)((int)this_00 + 0x24b) = (short)local_48[0x11];
    *(undefined2 *)((int)this_00 + 0x24d) = *(undefined2 *)((int)local_48 + 0x46);
    *(short *)((int)this_00 + 0x24f) = (short)local_48[0x12];
    *(undefined2 *)((int)this_00 + 0x251) = *(undefined2 *)((int)local_48 + 0x4a);
    *(int *)((int)this_00 + 0x253) = local_48[0x13];
    *(int *)((int)this_00 + 599) = local_48[0x14];
    *(int *)((int)this_00 + 0x25b) = local_48[0x15];
    *(int *)((int)this_00 + 0x25f) = local_48[0x16];
    *(int *)((int)this_00 + 0x26f) = local_48[0x17];
    *(short *)((int)this_00 + 0x273) = (short)local_48[0x18];
    *(undefined2 *)((int)this_00 + 0x41) = *(undefined2 *)((int)local_48 + 0x6e);
    *(short *)((int)this_00 + 0x43) = (short)local_48[0x1c];
    *(undefined2 *)((int)this_00 + 0x45) = *(undefined2 *)((int)local_48 + 0x72);
    *(char *)((int)this_00 + 0x275) = (char)local_48[0x1e];
    *(undefined1 *)((int)this_00 + 0x276) = *(undefined1 *)((int)local_48 + 0x79);
    *(undefined1 *)((int)this_00 + 0x277) = *(undefined1 *)((int)local_48 + 0x7a);
    this_00[0x9e] = *(int *)((int)local_48 + 0x7b);
    local_40[0] = FUN_006aac70(0x44);
    if (local_40[0] == 0) {
      DAT_00858df8 = (undefined4 *)local_8c;
      return 0;
    }
    iVar2 = 0;
    do {
      *(int **)(iVar2 + local_40[0]) = DAT_00806774;
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x44);
    *(undefined4 *)(local_40[0] + 0x24) = DAT_00806764;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = DAT_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    thunk_FUN_004adba0(local_40,(undefined4 *)((int)piVar7 + 0x83));
    FUN_006ab060(local_40);
    DAT_00858df8 = (undefined4 *)local_8c;
    return 0;
  }
  if (uVar5 != 3) {
    DAT_00858df8 = (undefined4 *)local_8c;
    return 0;
  }
  thunk_FUN_004ad310((int)this_00 + 0x1d5);
  DAT_00858df8 = (undefined4 *)local_8c;
  return 0;
}

