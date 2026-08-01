#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 00444E70 @ 00430C1E */

void __thiscall FUN_00444e70(void *this,ushort *param_1)

{
  AnonShape_00444E70_E59ECBC3 *pAVar1;
  undefined4 uVar2;
  DArrayTy *pDVar3;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ushort *puVar9;
  byte *puVar10;
  AnonShape_00444E70_E59ECBC3 *pAVar11;
  uint *puVar12;
  byte *puVar13;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_00444E70_8EFB8E54 *local_14;
  AnonShape_00444E70_523E22DE *local_10;
  undefined4 local_c;
  AnonShape_00444E70_E59ECBC3 *local_8;

  iVar5 = 0;
  pAVar11 = (AnonShape_00444E70_E59ECBC3 *)(param_1 + 4);
  local_c = 0;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)param_1;
  do {
    iVar6 = *(int *)((int)&pAVar11[-1].field_0A73 + 1);
    local_8 = pAVar11;
    if (0 < iVar6) {
      Library::DKW::TBL::DArrayPut
                (*(DArrayTy **)((int)&g_playerRuntime[0].field5_0x5 + iVar5),iVar6 - 1,&local_c);
    }
    if (0 < *(int *)pAVar11) {
      Library::DKW::TBL::DArrayPut
                (*(DArrayTy **)((int)&g_playerRuntime[0].field6_0x9 + iVar5),*(int *)pAVar11 - 1,
                 &local_c);
    }
    local_10 = (AnonShape_00444E70_523E22DE *)&pAVar11->field_0x4;
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
    *(undefined4 *)((int)&g_playerRuntime[0].field19_0x1f + iVar5) =
         *(undefined4 *)&pAVar11->field_0x24;
    *(undefined4 *)((int)&g_playerRuntime[0].field20_0x23 + iVar5) =
         *(undefined4 *)&pAVar11->field_0x28;
    *(undefined4 *)((int)&g_playerRuntime[0].field21_0x27 + iVar5) =
         *(undefined4 *)&pAVar11->field_0x2c;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x5;
    puVar10 = (byte *)&pAVar11->field_0x30;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x2b + iVar5);
    for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)((int)&g_playerRuntime[0].field333_0x167 + iVar5);
    local_10 = (AnonShape_00444E70_523E22DE *)&local_8->field_0x16c;
    do {
      puVar10[-1] = *(undefined4 *)&local_10[-1].field_0x70;
      *puVar10 = *(undefined4 *)local_10;
      *(undefined2 *)(puVar10 + 1) = *(undefined2 *)&local_10->field_0x4;
      *(undefined2 *)((int)puVar10 + 10) = local_10->field_000E;
      if (local_10->field_0006 == -1) {
        *(undefined4 *)((int)puVar10 + 6) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_10->field_0006 + (int)param_1));
        *(undefined4 *)((int)puVar10 + 6) = uVar2;
      }
      puVar10[0x13] = *(undefined4 *)&local_10->field_0x60;
      puVar10[0x14] = *(undefined4 *)&local_10->field_0x64;
      *(undefined2 *)(puVar10 + 0x15) = *(undefined2 *)&local_10->field_0x68;
      *(undefined2 *)((int)puVar10 + 0x5a) = local_10->field_0072;
      if (local_10->field_006A == -1) {
        *(undefined4 *)((int)puVar10 + 0x56) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_10->field_006A + (int)param_1));
        *(undefined4 *)((int)puVar10 + 0x56) = uVar2;
      }
      local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x14;
      puVar10 = (byte *)(puVar10 + 4);
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != (AnonShape_00444E70_8EFB8E54 *)0x0);
    local_14 = (AnonShape_00444E70_8EFB8E54 *)&pAVar1->field_0x238;
    *(undefined4 *)((int)&g_playerRuntime[0].field448_0x203 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x230;
    puVar10 = (byte *)((int)&g_playerRuntime[0].field450_0x20b + iVar5);
    local_10 = (AnonShape_00444E70_523E22DE *)0xa;
    do {
      puVar10[-1] = *(undefined4 *)&local_14[-1].field_0xc;
      *puVar10 = *(undefined4 *)local_14;
      *(undefined2 *)(puVar10 + 1) = *(undefined2 *)&local_14->field_0x4;
      *(undefined2 *)((int)puVar10 + 10) = local_14->field_000E;
      if (local_14->field_0006 == -1) {
        *(undefined4 *)((int)puVar10 + 6) = 0;
      }
      else {
        uVar2 = FUN_006b0060((uint *)0x0,(uint *)(local_14->field_0006 + (int)param_1));
        *(undefined4 *)((int)puVar10 + 6) = uVar2;
      }
      local_14 = (AnonShape_00444E70_8EFB8E54 *)&local_14[1].field_0x4;
      puVar10 = (byte *)(puVar10 + 4);
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10[-1].field_0072 + 1);
    } while (local_10 != (AnonShape_00444E70_523E22DE *)0x0);
    *(undefined4 *)((int)&g_playerRuntime[0].field587_0x2a7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x2fc;
    *(undefined4 *)((int)&g_playerRuntime[0].field588_0x2ab + iVar5) =
         *(undefined4 *)&pAVar1->field_0x300;
    *(undefined4 *)((int)&g_playerRuntime[0].field589_0x2af + iVar5) =
         *(undefined4 *)&pAVar1->field_0x304;
    *(undefined4 *)((int)&g_playerRuntime[0].field590_0x2b3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x308;
    *(undefined4 *)((int)&g_playerRuntime[0].field591_0x2b7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x30c;
    *(undefined4 *)((int)&g_playerRuntime[0].field592_0x2bb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x310;
    *(undefined4 *)((int)&g_playerRuntime[0].field593_0x2bf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x314;
    *(undefined4 *)((int)&g_playerRuntime[0].field594_0x2c3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x318;
    *(undefined4 *)((int)&g_playerRuntime[0].field595_0x2c7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x31c;
    *(undefined4 *)((int)&g_playerRuntime[0].field596_0x2cb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x320;
    *(undefined4 *)((int)&g_playerRuntime[0].field597_0x2cf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x324;
    *(undefined4 *)((int)&g_playerRuntime[0].field598_0x2d3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x328;
    *(undefined4 *)((int)&g_playerRuntime[0].field599_0x2d7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x32c;
    *(undefined4 *)((int)&g_playerRuntime[0].field600_0x2db + iVar5) =
         *(undefined4 *)&pAVar1->field_0x330;
    *(undefined4 *)((int)&g_playerRuntime[0].field601_0x2df + iVar5) =
         *(undefined4 *)&pAVar1->field_0x334;
    *(undefined4 *)((int)&g_playerRuntime[0].field602_0x2e3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x338;
    puVar10 = (byte *)&pAVar1->field_0x33c;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x2eb + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x350;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x2ff + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x364;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x313 + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x378;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x327 + iVar5);
    for (iVar6 = 0x9b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x5e4;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x593 + iVar5);
    for (iVar6 = 0x6a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x78c;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x73b + iVar5);
    for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar10 + 2);
    *(undefined4 *)((int)&g_playerRuntime[0].field1863_0x7d6 + iVar5) = local_8->field_0827;
    puVar10 = (byte *)&local_8->field_0x82b;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x7da + iVar5);
    for (iVar6 = 0x66; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2272_0x972 + iVar5) = local_8->field_09C3;
    *(undefined4 *)((int)&g_playerRuntime[0].field2273_0x976 + iVar5) = local_8->field_09C7;
    puVar10 = (byte *)&local_8->field_0x9cb;
    puVar13 = (byte *)(&g_playerRuntime[0].field_0x97a + iVar5);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2302_0x996 + iVar5) = local_8->field_09E3;
    *(undefined4 *)((int)&g_playerRuntime[0].field2303_0x99a + iVar5) = local_8->field_09E7;
    *(undefined4 *)((int)&g_playerRuntime[0].field2304_0x99e + iVar5) = local_8->field_09EB;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x6;
    puVar10 = (byte *)&local_8->field_0x9ef;
    puVar13 = (byte *)((int)&g_playerRuntime[0].field2305_0x9a2 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar12 = (uint *)(&g_playerRuntime[0].field_0x7ee + iVar5);
    piVar7 = (int *)&local_8->field_0xa77;
    local_10 = (AnonShape_00444E70_523E22DE *)0x0;
    do {
      FUN_006b0060(puVar12,(uint *)(*piVar7 + (int)param_1));
      piVar7 = piVar7 + 2;
      puVar12 = puVar12 + 0x11;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != (AnonShape_00444E70_8EFB8E54 *)0x0);
    puVar10 = (byte *)&local_8->field_0xa17;
    puVar13 = (byte *)((int)&g_playerRuntime[0].field2383_0xa0e + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0xa2b;
    puVar13 = (byte *)((int)&g_playerRuntime[0].field2388_0xa22 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar10 = (byte *)&local_8->field_0xa4b;
    puVar13 = (byte *)((int)&g_playerRuntime[0].field2414_0xa42 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_playerRuntime[0].field2378_0x9fa + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2379_0x9fe + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2380_0xa02 + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2381_0xa06 + iVar5) = 0;
    *(undefined4 *)((int)&g_playerRuntime[0].field2382_0xa0a + iVar5) = local_8->field_0A73;
    if (local_8->field_0A6B == -1) {
      *(undefined4 *)((int)&g_playerRuntime[0].field2377_0x9f6 + iVar5) = 0;
    }
    else {
      uVar8 = local_8->field_0A6F / 0x18;
      pDVar3 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,uVar8,0xc,1);
      *(DArrayTy **)((int)&g_playerRuntime[0].field2377_0x9f6 + iVar5) = pDVar3;
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
          Library::DKW::TBL::DArrayPut
                    (*(DArrayTy **)((int)&g_playerRuntime[0].field2377_0x9f6 + iVar5),(uint)local_10
                     ,&local_20);
          piVar7 = piVar7 + 6;
          local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x1;
        } while ((int)local_10 < (int)uVar8);
      }
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar5 = iVar5 + 0xa62;
    pAVar11 = (AnonShape_00444E70_E59ECBC3 *)&local_8[1].field_0x33;
  } while (iVar5 < 0x5310);
  puVar9 = param_1 + 0x2aae;
  puVar10 = (byte *)(&DAT_007fa138);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *(undefined4 *)puVar9;
    puVar9 = puVar9 + 2;
    puVar10 = (byte *)(puVar10 + 1);
  }
  local_8 = pAVar11;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2aba)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::TBL::DArrayPut(g_array_007FA154,*(int *)(param_1 + 0x2aba) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2abc)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::TBL::DArrayPut(g_array_007FA158,*(int *)(param_1 + 0x2abc) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2abe)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::TBL::DArrayPut(g_array_007FA15C,*(int *)(param_1 + 0x2abe) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2ac0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::TBL::DArrayPut(g_array_007FA160,*(int *)(param_1 + 0x2ac0) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2ac2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::TBL::DArrayPut(g_array_007FA164,*(int *)(param_1 + 0x2ac2) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DAT_007fa168 = Library::DKW::LIB::MemAlloc(*(uint *)(param_1 + 0x2ac6));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar8 = *(uint *)(param_1 + 0x2ac6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar10 = (byte *)(*(int *)(param_1 + 0x2ac4) + (int)param_1);
  puVar13 = (byte *)(DAT_007fa168);
  memmove(puVar13, puVar10, uVar8); /* compiler REP MOVS byte copy */
  return;
}

