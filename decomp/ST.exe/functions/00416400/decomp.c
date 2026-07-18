
int __fastcall FUN_00416400(void *param_1)

{
  short *psVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  undefined4 local_2c;
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
  
  if (*(char *)((int)param_1 + 0xe3) != '\x01') {
    return (int)*(char *)((int)param_1 + 0xe3);
  }
  if (*(int *)((int)param_1 + 0xe4) == 1) {
    *(undefined4 *)((int)param_1 + 0xe4) = 0;
  }
  if (*(int *)((int)param_1 + 0x7e) == 1) {
    *(undefined4 *)((int)param_1 + 0x7e) = 0;
    *(undefined4 *)((int)param_1 + 0xe4) = 1;
  }
  if (*(int *)((int)param_1 + 0xf4) == 1) {
    *(undefined4 *)((int)param_1 + 0xf4) = 0;
  }
  iVar4 = thunk_FUN_00415ed0(param_1,&local_28,&local_2c);
  if (iVar4 == -1) {
    *(undefined1 *)((int)param_1 + 0xe3) = 0xff;
    return -1;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((int)param_1 + 0xf4) = 1;
    if (*(int *)((int)param_1 + 0xd3) == *(int *)((int)param_1 + 0x9b) + -1) {
      *(undefined4 *)((int)param_1 + 0xe4) = 0;
      *(undefined1 *)((int)param_1 + 0xe3) = 0;
      return 0;
    }
    thunk_FUN_00416270(param_1,local_24,local_20,local_1c);
    iVar4 = *(int *)((int)param_1 + 0xd3) + 1;
    local_6 = 0;
    *(int *)((int)param_1 + 0xd3) = iVar4;
    local_5 = false;
    psVar1 = (short *)(*(int *)((int)param_1 + 0x97) + iVar4 * 8);
    sVar6 = *psVar1 * 0xc9 + 100;
    sVar8 = psVar1[1] * 0xc9 + 100;
    uVar5 = (int)sVar6 - (int)local_24[0];
    local_c = CONCAT22((short)((uint)iVar4 >> 0x10),
                       *(short *)(*(int *)((int)param_1 + 0x97) + 4 + iVar4 * 8) * 200) + 100;
    uVar7 = (int)uVar5 >> 0x1f;
    local_14 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (int)sVar8 - (int)local_20[0];
    uVar7 = (int)uVar5 >> 0x1f;
    iVar4 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (int)(short)local_c - (int)local_1c[0];
    uVar7 = (int)uVar5 >> 0x1f;
    local_18 = (uVar5 ^ uVar7) - uVar7;
    if (local_18 == 0) {
      bVar2 = *(byte *)((int)param_1 + 0x61);
    }
    else {
      bVar3 = 2 < local_18 / local_14;
      local_5 = local_14 == 0 || bVar3;
      if ((local_14 == 0 || bVar3) && (iVar4 == 0 || 2 < local_18 / iVar4)) {
        bVar2 = *(byte *)((int)param_1 + 0x62);
      }
      else {
        bVar2 = *(byte *)((int)param_1 + 0x61);
      }
    }
    _local_10 = CONCAT31((int3)((uint)iVar4 >> 8),bVar2);
    iVar4 = thunk_FUN_00415b30(param_1,local_24[0],local_20[0],local_1c[0],sVar6,sVar8,
                               (short)local_c,bVar2);
    if (iVar4 != 0) {
      *(undefined1 *)((int)param_1 + 0xe3) = 0xff;
      return -1;
    }
    *(undefined1 *)((int)param_1 + 0xe3) = 3;
    *(undefined4 *)((int)param_1 + 0xe4) = 0;
    return 3;
  }
  if (local_28 == 1) {
    *(undefined1 *)((int)param_1 + 0xe3) = 2;
    *(undefined4 *)((int)param_1 + 0xe4) = 0;
    return (int)*(char *)((int)param_1 + 0xe3);
  }
  if ((*(char *)((int)param_1 + 0x5a) == '\0') && (*(char *)((int)param_1 + 0x4d) == '\x01')) {
    sVar6 = *(short *)((int)param_1 + 0x3a);
    if (sVar6 < 0) {
      iVar4 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                     (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar4 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                          (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
    }
    if (*(short *)((int)param_1 + 0x54) == iVar4) {
      sVar6 = *(short *)((int)param_1 + 0x3c);
      if (sVar6 < 0) {
        iVar4 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                       (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                            (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
      }
      if (*(short *)((int)param_1 + 0x56) == iVar4) {
        sVar6 = *(short *)((int)param_1 + 0x3e);
        if (sVar6 < 0) {
          iVar4 = (short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f));
        }
        if (*(short *)((int)param_1 + 0x58) == iVar4) goto LAB_004166c7;
      }
    }
    *(undefined1 *)((int)param_1 + 0x5a) = 1;
  }
LAB_004166c7:
  *(undefined1 *)((int)param_1 + 0xe3) = 1;
  return (int)*(char *)((int)param_1 + 0xe3);
}

