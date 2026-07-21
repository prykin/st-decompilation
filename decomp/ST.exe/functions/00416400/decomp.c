
int __fastcall FUN_00416400(STJellyGunC *param_1)

{
  short *psVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  int local_2c;
  int local_28;
  short local_24 [2];
  short local_20 [2];
  short local_1c [2];
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  int local_c;
  undefined1 local_6;
  bool local_5;

  if (param_1->field_0xe3 != '\x01') {
    return (int)(char)param_1->field_0xe3;
  }
  if (*(int *)&param_1->field_0xe4 == 1) {
    *(undefined4 *)&param_1->field_0xe4 = 0;
  }
  if (param_1->field_007E == 1) {
    param_1->field_007E = 0;
    *(undefined4 *)&param_1->field_0xe4 = 1;
  }
  if (*(int *)&param_1->field_0xf4 == 1) {
    *(undefined4 *)&param_1->field_0xf4 = 0;
  }
  iVar4 = STJellyGunC::sub_00415ED0(param_1,&local_28,&local_2c);
  if (iVar4 == -1) {
    param_1->field_0xe3 = 0xff;
    return -1;
  }
  if (iVar4 == 0) {
    *(undefined4 *)&param_1->field_0xf4 = 1;
    if (*(int *)&param_1->field_0xd3 == *(int *)&param_1->field_0x9b + -1) {
      *(undefined4 *)&param_1->field_0xe4 = 0;
      param_1->field_0xe3 = 0;
      return 0;
    }
    thunk_FUN_00416270(param_1,local_24,(int *)local_20,(int *)local_1c);
    iVar4 = *(int *)&param_1->field_0xd3 + 1;
    local_6 = 0;
    *(int *)&param_1->field_0xd3 = iVar4;
    local_5 = false;
    psVar1 = (short *)(*(int *)&param_1->field_0x97 + iVar4 * 8);
    sVar6 = *psVar1 * 0xc9 + 100;
    sVar8 = psVar1[1] * 0xc9 + 100;
    uVar5 = (int)sVar6 - (int)local_24[0];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT22((short)((uint)iVar4 >> 0x10),
                       *(short *)(*(int *)&param_1->field_0x97 + 4 + iVar4 * 8) * 200) + 100;
    uVar7 = (int)uVar5 >> 0x1f;
    local_14 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (int)sVar8 - (int)local_20[0];
    uVar7 = (int)uVar5 >> 0x1f;
    iVar4 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (int)(short)local_c - (int)local_1c[0];
    uVar7 = (int)uVar5 >> 0x1f;
    local_18 = (uVar5 ^ uVar7) - uVar7;
    if (local_18 == 0) {
      bVar2 = param_1->field_0x61;
    }
    else {
      bVar3 = 2 < local_18 / local_14;
      local_5 = local_14 == 0 || bVar3;
      if ((local_14 == 0 || bVar3) && (iVar4 == 0 || 2 < local_18 / iVar4)) {
        bVar2 = param_1->field_0x62;
      }
      else {
        bVar2 = param_1->field_0x61;
      }
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_10 = CONCAT31((int3)((uint)iVar4 >> 8),bVar2);
    iVar4 = STJellyGunC::sub_00415B30
                      (param_1,local_24[0],local_20[0],local_1c[0],sVar6,sVar8,(short)local_c,bVar2)
    ;
    if (iVar4 != 0) {
      param_1->field_0xe3 = 0xff;
      return -1;
    }
    param_1->field_0xe3 = 3;
    *(undefined4 *)&param_1->field_0xe4 = 0;
    return 3;
  }
  if (local_28 == 1) {
    param_1->field_0xe3 = 2;
    *(undefined4 *)&param_1->field_0xe4 = 0;
    return (int)(char)param_1->field_0xe3;
  }
  if ((param_1->field_005A == '\0') && (param_1->field_004D == '\x01')) {
    sVar6 = param_1->field_003A;
    if (sVar6 < 0) {
      iVar4 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                     (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar4 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                          (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
    }
    if ((short)param_1->field_0054 == iVar4) {
      sVar6 = param_1->field_003C;
      if (sVar6 < 0) {
        iVar4 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                       (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                            (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
      }
      if ((short)param_1->field_0056 == iVar4) {
        sVar6 = param_1->field_003E;
        if (sVar6 < 0) {
          iVar4 = (short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f));
        }
        if ((short)param_1->field_0058 == iVar4) goto LAB_004166c7;
      }
    }
    param_1->field_005A = 1;
  }
LAB_004166c7:
  param_1->field_0xe3 = 1;
  return (int)(char)param_1->field_0xe3;
}

