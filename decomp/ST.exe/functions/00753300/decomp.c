
undefined4 *
FUN_00753300(byte *param_1,undefined4 *param_2,undefined2 param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  void *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte local_454 [256];
  byte local_354 [256];
  byte local_254 [256];
  byte local_154 [260];
  undefined4 local_50;
  undefined4 local_4c [16];
  byte local_c [4];
  undefined4 *local_8;
  
  local_8 = FUN_006aac10(8);
  if (local_8 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_0072e730(param_1,local_c,local_354,local_454,local_254);
  iVar3 = __strcmpi((char *)local_254,&DAT_007c7078);
  if ((iVar3 == 0) || (iVar3 = __strcmpi((char *)local_254,&DAT_007c7080), iVar3 == 0)) {
    __makepath((char *)local_154,(char *)local_c,(char *)local_354,(char *)local_454,&DAT_007c7078);
  }
  else {
    uVar6 = 0xffffffff;
    pbVar8 = param_1;
    do {
      pbVar11 = pbVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar11 + -uVar6;
    pbVar11 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_007c7078;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pbVar8 = local_154;
    do {
      pbVar11 = pbVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar6);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    if ((undefined4 *)*local_8 != (undefined4 *)0x0) {
      FUN_007532a0((undefined4 *)*local_8);
    }
    FUN_006ab060(&local_8);
    FUN_006a5e40(iVar3,0,0x7f2c08,0x48);
    return (undefined4 *)0x0;
  }
  if (param_4 == 1) {
    puVar5 = (undefined4 *)FUN_00753ae0((LPCSTR)local_154,param_2);
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        uVar4 = FUN_00753b00((LPCSTR)local_154,param_2,param_3);
        *local_8 = uVar4;
      }
      goto LAB_0075346c;
    }
    puVar5 = FUN_007537c0((LPCSTR)local_154,param_2,param_3);
  }
  *local_8 = puVar5;
LAB_0075346c:
  iVar3 = __strcmpi((char *)local_254,&DAT_007c7078);
  if ((iVar3 == 0) || (iVar3 = __strcmpi((char *)local_254,&DAT_007c7080), iVar3 == 0)) {
    __makepath((char *)local_154,(char *)local_c,(char *)local_354,(char *)local_454,&DAT_007c7080);
  }
  else {
    uVar6 = 0xffffffff;
    do {
      pbVar8 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar8 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar8;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar8 + -uVar6;
    pbVar11 = local_154;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_007c7080;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pbVar8 = local_154;
    do {
      pbVar11 = pbVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar6);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
  }
  if (param_4 == 1) {
    if ((param_6 & 0x100000) == 0) {
      puVar5 = FUN_00753170((undefined4 *)0x0,(LPCSTR)local_154);
    }
    else {
      puVar5 = FUN_006d4380((undefined4 *)0x0,(LPCSTR)local_154,param_6);
    }
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 3) {
        DAT_00858df8 = (undefined4 *)local_50;
        return local_8;
      }
      puVar5 = FUN_007531e0((undefined4 *)0x0,(LPCSTR)local_154,0x100000);
      local_8[1] = puVar5;
      DAT_00858df8 = (undefined4 *)local_50;
      return local_8;
    }
    puVar5 = FUN_007530f0((undefined4 *)0x0,(LPCSTR)local_154,0x100000,0x100000);
  }
  local_8[1] = puVar5;
  DAT_00858df8 = (undefined4 *)local_50;
  return local_8;
}

