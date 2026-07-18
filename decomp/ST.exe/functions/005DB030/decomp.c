
undefined4 __cdecl FUN_005db030(byte *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  bool bVar5;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  cMf32 *this;
  byte *pbVar8;
  byte *pbVar9;
  int local_1e18;
  int local_1e14;
  int local_1e10;
  byte local_47c [260];
  byte local_378 [260];
  byte local_274 [260];
  byte local_170 [260];
  undefined4 local_6c;
  undefined4 local_68 [9];
  undefined4 uStackY_44;
  undefined1 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  
  FUN_0072da40();
  uVar13 = 0;
  if (param_3 != '\0') {
    return 0;
  }
  FUN_0072e730(param_1,local_378,local_274,local_47c,(byte *)0x8f000405);
  pbVar8 = local_378;
  pbVar9 = local_170;
  __makepath((char *)pbVar9,(char *)pbVar8,(char *)local_274,(char *)local_47c,(char *)0x0);
  local_6c = DAT_00858df8;
  uStackY_44 = 0x5db0d9;
  DAT_00858df8 = &local_6c;
  iVar2 = __setjmp3(local_68,0,pbVar9,pbVar8);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_6c;
    return 0;
  }
  uVar10 = 0;
  puVar3 = FUN_006f0ec0(0x345,local_170,0,0,0);
  piVar12 = (int *)&stack0xffffffe4;
  iVar2 = 0;
  uVar11 = 0x5db113;
  puVar4 = FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079c1d8,piVar12,0);
  this = extraout_ECX;
  if (puVar4 == (ushort *)0x0) goto LAB_005db1e1;
  if ((char)*piVar12 == '\x05') {
    iVar2 = 0;
    uVar11 = 0x5db13b;
    puVar4 = FUN_006f1ce0(0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&stack0xffffffe0,0);
    this = extraout_ECX_00;
    if (puVar4 == (ushort *)0x0) goto LAB_005db1e1;
  }
  bVar5 = false;
  if ((local_1e18 != 0) && (local_1e10 == *(int *)((int)piVar12 + 1))) {
    switch((char)*piVar12) {
    case '\x02':
      if (local_1e14 != iVar2) goto joined_r0x005db18e;
LAB_005db1ab:
      bVar5 = true;
      break;
    case '\x03':
joined_r0x005db18e:
      if (local_1e14 == -0x70fffdfb) goto LAB_005db1ab;
      break;
    case '\x04':
      if (local_1e14 == -0x70fff7fb) goto LAB_005db1ab;
      break;
    case '\x05':
      if (*(int *)((int)piVar12 + 5) == CONCAT31((int3)uVar11,uVar10)) goto LAB_005db1ab;
    }
  }
  this = (cMf32 *)0x0;
  if (bVar5) {
    uVar6 = 0xffffffff;
    uVar13 = 0xffffff90;
    pbVar8 = local_170;
    do {
      pbVar9 = pbVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar9 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar9;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar9 + -uVar6;
    pbVar9 = &DAT_0080ed16;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; this = (cMf32 *)0x0, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
  }
LAB_005db1e1:
  cMf32::delete(this,puVar3);
  DAT_00858df8 = (undefined4 *)local_6c;
  return uVar13;
}

