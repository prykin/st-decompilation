
void __thiscall FUN_00444e70(void *this,undefined4 *param_1)

{
  AnonShape_00444E70_E59ECBC3 *pAVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  AnonShape_00444E70_E59ECBC3 *pAVar10;
  undefined4 *puVar11;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_00444E70_8EFB8E54 *local_14;
  AnonShape_00444E70_523E22DE *local_10;
  undefined4 local_c;
  AnonShape_00444E70_E59ECBC3 *local_8;
  
  iVar5 = 0;
  pAVar10 = (AnonShape_00444E70_E59ECBC3 *)(param_1 + 2);
  local_c = 0;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  do {
    iVar6 = *(int *)((int)&pAVar10[-1].field_0A73 + 1);
    local_8 = pAVar10;
    if (0 < iVar6) {
      Library::DKW::TBL::FUN_006ae140
                (*(uint **)((int)&g_playerRuntime[0].groups + iVar5),iVar6 - 1,&local_c);
    }
    if (0 < *(int *)pAVar10) {
      Library::DKW::TBL::FUN_006ae140
                (*(uint **)((int)&g_playerRuntime[0].objects + iVar5),*(int *)pAVar10 - 1,&local_c);
    }
    local_10 = (AnonShape_00444E70_523E22DE *)&pAVar10->field_0x4;
    iVar6 = 0;
    do {
      if (*(int *)local_10 == -1) {
        *(undefined4 *)(iVar6 + 0x7f4e2f + iVar5) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)local_10 + (int)param_1));
        *(undefined4 *)(iVar6 + 0x7f4e2f + iVar5) = uVar2;
      }
      pAVar1 = local_8;
      iVar6 = iVar6 + 4;
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10->field_0006 + 2);
    } while (iVar6 < 0x10);
    *(undefined4 *)((int)&g_playerRuntime[0].field16_0x1f + iVar5) =
         *(undefined4 *)&pAVar10->field_0x24;
    *(undefined4 *)((int)&g_playerRuntime[0].field17_0x23 + iVar5) =
         *(undefined4 *)&pAVar10->field_0x28;
    *(undefined4 *)((int)&g_playerRuntime[0].field18_0x27 + iVar5) =
         *(undefined4 *)&pAVar10->field_0x2c;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x5;
    puVar9 = (undefined4 *)&pAVar10->field_0x30;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field19_0x2b + iVar5);
    for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)((int)&g_playerRuntime[0].tempSlots[0][0].playerId + iVar5);
    local_10 = (AnonShape_00444E70_523E22DE *)&local_8->field_0x16c;
    do {
      puVar9[-1] = *(undefined4 *)&local_10[-1].field_0x70;
      *puVar9 = *(undefined4 *)local_10;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)&local_10->field_0x4;
      *(undefined2 *)((int)puVar9 + 10) = local_10->field_000E;
      if (local_10->field_0006 == -1) {
        *(undefined4 *)((int)puVar9 + 6) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_10->field_0006 + (int)param_1));
        *(undefined4 *)((int)puVar9 + 6) = uVar2;
      }
      puVar9[0x13] = *(undefined4 *)&local_10->field_0x60;
      puVar9[0x14] = *(undefined4 *)&local_10->field_0x64;
      *(undefined2 *)(puVar9 + 0x15) = *(undefined2 *)&local_10->field_0x68;
      *(undefined2 *)((int)puVar9 + 0x5a) = local_10->field_0072;
      if (local_10->field_006A == -1) {
        *(undefined4 *)((int)puVar9 + 0x56) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_10->field_006A + (int)param_1));
        *(undefined4 *)((int)puVar9 + 0x56) = uVar2;
      }
      local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x14;
      puVar9 = puVar9 + 4;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != (AnonShape_00444E70_8EFB8E54 *)0x0);
    local_14 = (AnonShape_00444E70_8EFB8E54 *)&pAVar1->field_0x238;
    *(undefined4 *)((int)(g_playerRuntime[0].tempSlots + 2) + iVar5) =
         *(undefined4 *)&pAVar1->field_0x230;
    puVar9 = (undefined4 *)((int)(g_playerRuntime[0].tempSlots + 2) + iVar5 + 8);
    local_10 = (AnonShape_00444E70_523E22DE *)0xa;
    do {
      puVar9[-1] = *(undefined4 *)&local_14[-1].field_0xc;
      *puVar9 = *(undefined4 *)local_14;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)&local_14->field_0x4;
      *(undefined2 *)((int)puVar9 + 10) = local_14->field_000E;
      if (local_14->field_0006 == -1) {
        *(undefined4 *)((int)puVar9 + 6) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_14->field_0006 + (int)param_1));
        *(undefined4 *)((int)puVar9 + 6) = uVar2;
      }
      local_14 = (AnonShape_00444E70_8EFB8E54 *)&local_14[1].field_0x4;
      puVar9 = puVar9 + 4;
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10[-1].field_0072 + 1);
    } while (local_10 != (AnonShape_00444E70_523E22DE *)0x0);
    *(undefined4 *)((int)&g_playerRuntime[0].field463_0x2a7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x2fc;
    *(undefined4 *)((int)&g_playerRuntime[0].field464_0x2ab + iVar5) =
         *(undefined4 *)&pAVar1->field_0x300;
    *(undefined4 *)((int)&g_playerRuntime[0].field465_0x2af + iVar5) =
         *(undefined4 *)&pAVar1->field_0x304;
    *(undefined4 *)((int)&g_playerRuntime[0].field466_0x2b3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x308;
    *(undefined4 *)((int)&g_playerRuntime[0].field467_0x2b7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x30c;
    *(undefined4 *)((int)&g_playerRuntime[0].field468_0x2bb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x310;
    *(undefined4 *)((int)&g_playerRuntime[0].field469_0x2bf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x314;
    *(undefined4 *)((int)&g_playerRuntime[0].field470_0x2c3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x318;
    *(undefined4 *)((int)&g_playerRuntime[0].field471_0x2c7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x31c;
    *(undefined4 *)((int)&g_playerRuntime[0].field472_0x2cb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x320;
    *(undefined4 *)((int)&g_playerRuntime[0].field473_0x2cf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x324;
    *(undefined4 *)((int)&g_playerRuntime[0].field474_0x2d3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x328;
    *(undefined4 *)((int)&g_playerRuntime[0].field475_0x2d7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x32c;
    *(undefined4 *)((int)&g_playerRuntime[0].field476_0x2db + iVar5) =
         *(undefined4 *)&pAVar1->field_0x330;
    *(undefined4 *)((int)&g_playerRuntime[0].field477_0x2df + iVar5) =
         *(undefined4 *)&pAVar1->field_0x334;
    *(undefined4 *)((int)&g_playerRuntime[0].field478_0x2e3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x338;
    puVar9 = (undefined4 *)&pAVar1->field_0x33c;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field480_0x2eb + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0x350;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field494_0x2ff + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0x364;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field508_0x313 + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0x378;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field522_0x327 + iVar5);
    for (iVar6 = 0x9b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0x5e4;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field1136_0x593 + iVar5);
    for (iVar6 = 0x6a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0x78c;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field1554_0x73b + iVar5);
    for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
    *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar9 + 2);
    *(undefined4 *)((int)&g_playerRuntime[0].field1705_0x7d6 + iVar5) = local_8->field_0827;
    puVar9 = (undefined4 *)&local_8->field_0x82b;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field1706_0x7da + iVar5);
    for (iVar6 = 0x66; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2108_0x972 + iVar5) = local_8->field_09C3;
    *(undefined4 *)((int)&g_playerRuntime[0].field2109_0x976 + iVar5) = local_8->field_09C7;
    puVar9 = (undefined4 *)&local_8->field_0x9cb;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field2110_0x97a + iVar5);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2132_0x996 + iVar5) = local_8->field_09E3;
    *(undefined4 *)((int)&g_playerRuntime[0].field2133_0x99a + iVar5) = local_8->field_09E7;
    *(undefined4 *)((int)&g_playerRuntime[0].field2134_0x99e + iVar5) = local_8->field_09EB;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x6;
    puVar9 = (undefined4 *)&local_8->field_0x9ef;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field2135_0x9a2 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar3 = (uint *)(&g_playerRuntime[0].field_0x7ee + iVar5);
    piVar7 = (int *)&local_8->field_0xa77;
    local_10 = (AnonShape_00444E70_523E22DE *)0x0;
    do {
      FUN_006b0060(puVar3,(uint *)(*piVar7 + (int)param_1));
      piVar7 = piVar7 + 2;
      puVar3 = puVar3 + 0x11;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != (AnonShape_00444E70_8EFB8E54 *)0x0);
    puVar9 = (undefined4 *)&local_8->field_0xa17;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field2180_0xa0e + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0xa2b;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field2185_0xa22 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined4 *)&local_8->field_0xa4b;
    puVar11 = (undefined4 *)((int)&g_playerRuntime[0].field2211_0xa42 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2175_0x9fa + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2176_0x9fe + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2177_0xa02 + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2178_0xa06 + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2179_0xa0a + iVar5) = local_8->field_0A73;
    if (local_8->field_0A6B == -1) {
      *(undefined4 *)((int)&g_playerRuntime[0].pgPairs + iVar5) = 0;
    }
    else {
      uVar8 = local_8->field_0A6F / 0x18;
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar8,0xc,1);
      *(uint **)((int)&g_playerRuntime[0].pgPairs + iVar5) = puVar3;
      local_10 = (AnonShape_00444E70_523E22DE *)0x0;
      if (uVar8 != 0) {
        piVar7 = (int *)((int)param_1 + local_8->field_0A6B + 0x10);
        do {
          local_20 = 0;
          if (piVar7[-4] != -1) {
            local_20 = FUN_006b0060((uint *)0x0,(uint *)(piVar7[-4] + (int)param_1));
          }
          local_1c = 0;
          if (piVar7[-2] != -1) {
            local_1c = FUN_006b0060((uint *)0x0,(uint *)(piVar7[-2] + (int)param_1));
          }
          local_18 = 0;
          if (*piVar7 != -1) {
            local_18 = FUN_006b0060((uint *)0x0,(uint *)(*piVar7 + (int)param_1));
          }
          Library::DKW::TBL::FUN_006ae140
                    (*(uint **)((int)&g_playerRuntime[0].pgPairs + iVar5),(uint)local_10,&local_20);
          piVar7 = piVar7 + 6;
          local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x1;
        } while ((int)local_10 < (int)uVar8);
      }
    }
    iVar5 = iVar5 + 0xa62;
    pAVar10 = (AnonShape_00444E70_E59ECBC3 *)&local_8[1].field_0x33;
  } while (iVar5 < 0x5310);
  puVar9 = param_1 + 0x1557;
  puVar11 = &DAT_007fa138;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_8 = pAVar10;
  if (0 < (int)param_1[0x155d]) {
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa154->flags,param_1[0x155d] - 1,&local_c);
  }
  if (0 < (int)param_1[0x155e]) {
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa158->flags,param_1[0x155e] - 1,&local_c);
  }
  if (0 < (int)param_1[0x155f]) {
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa15c->flags,param_1[0x155f] - 1,&local_c);
  }
  if (0 < (int)param_1[0x1560]) {
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa160->flags,param_1[0x1560] - 1,&local_c);
  }
  if (0 < (int)param_1[0x1561]) {
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa164->flags,param_1[0x1561] - 1,&local_c);
  }
  DAT_007fa168 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(param_1[0x1563]);
  uVar8 = param_1[0x1563];
  puVar9 = (undefined4 *)(param_1[0x1562] + (int)param_1);
  puVar11 = DAT_007fa168;
  for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  return;
}

