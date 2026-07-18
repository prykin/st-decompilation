
uint * __cdecl thunk_FUN_005540e0(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  undefined1 uStack_65c;
  char acStack_65b [515];
  undefined1 uStack_458;
  char acStack_457 [515];
  undefined1 uStack_254;
  char acStack_253 [515];
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint uStack_c;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar7 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0x3a,0,iVar3,&DAT_007a4ccc);
    if (iVar7 == 0) {
      if (puStack_8 != (uint *)0x0) {
        FUN_006f20e0(puStack_8);
        if ((uint *)puStack_8[2] != (uint *)0x0) {
          FUN_00710560((uint *)puStack_8[2]);
          puStack_8[2] = 0;
        }
        FUN_006ab060(&puStack_8);
      }
      FUN_006a5e40(iVar3,0,0x7c8f0c,0x41);
      return (uint *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar8 = (uint *)(*pcVar2)();
    return puVar8;
  }
  puStack_8 = FUN_006aac10(param_1);
  if (DAT_0080874e == '\x01') {
    uStack_c = 0;
    uVar5 = 0xffffffff;
    pcVar11 = s_LOADINGW_007c8ee8;
    do {
      pcVar10 = pcVar11;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    uStack_65c = 1;
    pcVar11 = pcVar10 + -uVar5;
    pcVar10 = acStack_65b;
    for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_006f12b0(FUN_006f2d10,&uStack_65c);
    puVar6 = FUN_006f2790();
    uVar5 = uStack_c;
    while (puVar6 != (undefined4 *)0x0) {
      uStack_c = uVar5 + 1;
      puVar6 = FUN_006f2790();
      uVar5 = uStack_c;
    }
    uStack_c = uVar5;
    if (uVar5 == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7c8f0c,0x24);
    }
    iVar3 = 1;
    bVar12 = 0;
    uVar9 = FUN_0072e6c0();
    pCVar4 = FUN_006f2c00(s_LOADINGW_007c8ee8,1,uVar9 % uVar5 + 1);
  }
  else {
    if (DAT_0080874e == '\x02') {
      uStack_c = 0;
      uVar5 = 0xffffffff;
      pcVar11 = s_LOADINGB_007c8ef4;
      do {
        pcVar10 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      uStack_254 = 1;
      pcVar11 = pcVar10 + -uVar5;
      pcVar10 = acStack_253;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_006f12b0(FUN_006f2d10,&uStack_254);
      puVar6 = FUN_006f2790();
      while (puVar6 != (undefined4 *)0x0) {
        uStack_c = uStack_c + 1;
        puVar6 = FUN_006f2790();
      }
      iVar3 = 1;
      bVar12 = 0;
      uVar5 = FUN_0072e6c0();
      uVar5 = uVar5 % uStack_c;
      pcVar11 = s_LOADINGB_007c8ef4;
    }
    else {
      if (DAT_0080874e != '\x03') {
        FUN_006a5e40(-1,DAT_007ed77c,0x7c8f0c,0x2f);
        goto LAB_00554324;
      }
      uStack_c = 0;
      uVar5 = 0xffffffff;
      pcVar11 = s_LOADINGS_007c8f00;
      do {
        pcVar10 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      uStack_458 = 1;
      pcVar11 = pcVar10 + -uVar5;
      pcVar10 = acStack_457;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_006f12b0(FUN_006f2d10,&uStack_458);
      puVar6 = FUN_006f2790();
      while (puVar6 != (undefined4 *)0x0) {
        uStack_c = uStack_c + 1;
        puVar6 = FUN_006f2790();
      }
      iVar3 = 1;
      bVar12 = 0;
      uVar5 = FUN_0072e6c0();
      uVar5 = uVar5 % uStack_c;
      pcVar11 = s_LOADINGS_007c8f00;
    }
    pCVar4 = FUN_006f2c00(pcVar11,1,uVar5 + 1);
  }
  uVar5 = FUN_0070a9f0(DAT_00806780,pCVar4,bVar12,iVar3);
  *puStack_8 = uVar5;
LAB_00554324:
  uVar5 = thunk_FUN_00553e20(*puStack_8,(undefined *)0x0,DAT_00807dd9);
  puStack_8[2] = uVar5;
  puVar6 = FUN_00710ba0(*puStack_8,0,0,0,0,0,1);
  puStack_8[1] = (uint)puVar6;
  if (param_2 != 0) {
    uVar5 = thunk_FUN_00555600(param_2);
    puStack_8[0x13] = uVar5;
  }
  puStack_8[0x12] = param_3;
  DAT_00858df8 = (undefined4 *)uStack_50;
  return puStack_8;
}

