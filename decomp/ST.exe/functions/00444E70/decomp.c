#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 00444E70 @ 00430C1E */

void __thiscall FUN_00444e70(void *this,ushort *param_1)

{
  AnonShape_00444E70_E59ECBC3 *pAVar1;
  DArrayTy *pDVar2;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  byte *puVar9;
  AnonShape_00444E70_E59ECBC3 *pAVar10;
  char *pcVar11;
  uint *puVar12;
  byte *puVar13;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  AnonShape_00444E70_8EFB8E54 *local_14;
  AnonShape_00444E70_523E22DE *local_10;
  undefined4 local_c;
  AnonShape_00444E70_E59ECBC3 *local_8;

  iVar4 = 0;
  pAVar10 = (AnonShape_00444E70_E59ECBC3 *)(param_1 + 4);
  local_c = 0;
  STField<undefined4>(this,0x1c) = *(undefined4 *)param_1;
  do {
    iVar5 = *(int *)((int)&pAVar10[-1].field_0A73 + 1);
    local_8 = pAVar10;
    if (0 < iVar5) {
      Library::DKW::TBL::DArrayPut
                (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field2_0x5 + iVar4),iVar5 - 1,
                 &local_c);
    }
    if (0 < *(int *)pAVar10) {
      Library::DKW::TBL::DArrayPut
                (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + iVar4),
                 *(int *)pAVar10 - 1,&local_c);
    }
    local_10 = (AnonShape_00444E70_523E22DE *)&pAVar10->field_0x4;
    iVar5 = 0;
    do {
      if (*(int *)local_10 == -1) {
        *(undefined4 *)(iVar5 + 0x7f4e2f + iVar4) = 0;
      }
      else {
        pDVar2 = FUN_006b0060(nullptr,(uint *)(*(int *)local_10 + (int)param_1));
        *(DArrayTy **)(iVar5 + 0x7f4e2f + iVar4) = pDVar2;
      }
      pAVar1 = local_8;
      iVar5 = iVar5 + 4;
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10->field_0006 + 2);
    } while (iVar5 < 0x10);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field15_0x1f + iVar4) =
         *(undefined4 *)&pAVar10->field_0x24;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field16_0x23 + iVar4) =
         *(undefined4 *)&pAVar10->field_0x28;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field17_0x27 + iVar4) =
         *(undefined4 *)&pAVar10->field_0x2c;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x5;
    puVar9 = (byte *)&pAVar10->field_0x30;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field18_0x2b + iVar4);
    for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    pcVar11 = &g_packedRecords_A62x8[0].field97_0x167 + iVar4;
    local_10 = (AnonShape_00444E70_523E22DE *)&local_8->field_0x16c;
    do {
      *(undefined4 *)(pcVar11 + -4) = *(undefined4 *)&local_10[-1].field_0x70;
      *(undefined4 *)pcVar11 = *(undefined4 *)local_10;
      *(undefined2 *)(pcVar11 + 4) = *(undefined2 *)&local_10->field_0x4;
      *(undefined2 *)(pcVar11 + 10) = local_10->field_000E;
      if (local_10->field_0006 == -1) {
        *(undefined4 *)(pcVar11 + 6) = 0;
      }
      else {
        pDVar2 = FUN_006b0060(nullptr,(uint *)(local_10->field_0006 + (int)param_1));
        *(DArrayTy **)(pcVar11 + 6) = pDVar2;
      }
      *(undefined4 *)(pcVar11 + 0x4c) = *(undefined4 *)&local_10->field_0x60;
      *(undefined4 *)(pcVar11 + 0x50) = *(undefined4 *)&local_10->field_0x64;
      *(undefined2 *)(pcVar11 + 0x54) = *(undefined2 *)&local_10->field_0x68;
      *(undefined2 *)(pcVar11 + 0x5a) = local_10->field_0072;
      if (local_10->field_006A == -1) {
        *(undefined4 *)(pcVar11 + 0x56) = 0;
      }
      else {
        pDVar2 = FUN_006b0060(nullptr,(uint *)(local_10->field_006A + (int)param_1));
        *(DArrayTy **)(pcVar11 + 0x56) = pDVar2;
      }
      local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x14;
      pcVar11 = pcVar11 + 0x10;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != nullptr);
    local_14 = (AnonShape_00444E70_8EFB8E54 *)&pAVar1->field_0x238;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field200_0x203 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x230;
    puVar9 = (byte *)((int)&g_packedRecords_A62x8[0].field202_0x20b + iVar4);
    local_10 = (AnonShape_00444E70_523E22DE *)0xa;
    do {
      puVar9[-1] = *(undefined4 *)&local_14[-1].field_0xc;
      *puVar9 = *(undefined4 *)local_14;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)&local_14->field_0x4;
      STField<undefined2>(puVar9,10) = local_14->field_000E;
      if (local_14->field_0006 == -1) {
        STField<undefined4>(puVar9,6) = 0;
      }
      else {
        pDVar2 = FUN_006b0060(nullptr,(uint *)(local_14->field_0006 + (int)param_1));
        STField<DArrayTy *>(puVar9,6) = pDVar2;
      }
      local_14 = (AnonShape_00444E70_8EFB8E54 *)&local_14[1].field_0x4;
      puVar9 = (byte *)(puVar9 + 4);
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10[-1].field_0072 + 1);
    } while (local_10 != nullptr);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field339_0x2a7 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x2fc;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field340_0x2ab + iVar4) =
         *(undefined4 *)&pAVar1->field_0x300;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field341_0x2af + iVar4) =
         *(undefined4 *)&pAVar1->field_0x304;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field342_0x2b3 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x308;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field343_0x2b7 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x30c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field344_0x2bb + iVar4) =
         *(undefined4 *)&pAVar1->field_0x310;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field345_0x2bf + iVar4) =
         *(undefined4 *)&pAVar1->field_0x314;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field346_0x2c3 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x318;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field347_0x2c7 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x31c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field348_0x2cb + iVar4) =
         *(undefined4 *)&pAVar1->field_0x320;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field349_0x2cf + iVar4) =
         *(undefined4 *)&pAVar1->field_0x324;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field350_0x2d3 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x328;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field351_0x2d7 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x32c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field352_0x2db + iVar4) =
         *(undefined4 *)&pAVar1->field_0x330;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field353_0x2df + iVar4) =
         *(undefined4 *)&pAVar1->field_0x334;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field354_0x2e3 + iVar4) =
         *(undefined4 *)&pAVar1->field_0x338;
    puVar9 = (byte *)&pAVar1->field_0x33c;
    puVar13 = (byte *)(&g_packedRecords_A62x8[0].field_0x2eb + iVar4);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0x350;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field376_0x2ff + iVar4);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0x364;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field393_0x313 + iVar4);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0x378;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field410_0x327 + iVar4);
    for (iVar5 = 0x9b; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0x5e4;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1024_0x593 + iVar4);
    for (iVar5 = 0x6a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0x78c;
    puVar13 = (byte *)(&g_packedRecords_A62x8[0].field1445_0x73b + iVar4);
    for (iVar5 = 0x26; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar9;
    STField<undefined1>(puVar13,2) = STField<undefined1>(puVar9,2);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1600_0x7d6 + iVar4) = local_8->field_0827;
    puVar9 = (byte *)&local_8->field_0x82b;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1601_0x7da + iVar4);
    for (iVar5 = 0x66; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1940_0x972 + iVar4) = local_8->field_09C3;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1941_0x976 + iVar4) = local_8->field_09C7;
    puVar9 = (byte *)&local_8->field_0x9cb;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1942_0x97a + iVar4);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1949_0x996 + iVar4) = local_8->field_09E3;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1950_0x99a + iVar4) = local_8->field_09E7;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1951_0x99e + iVar4) = local_8->field_09EB;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x6;
    puVar9 = (byte *)&local_8->field_0x9ef;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1952_0x9a2 + iVar4);
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar12 = (uint *)(&g_packedRecords_A62x8[0].field_0x7ee + iVar4);
    piVar6 = (int *)&local_8->field_0xa77;
    local_10 = nullptr;
    do {
      FUN_006b0060(puVar12,(uint *)(*piVar6 + (int)param_1));
      piVar6 = piVar6 + 2;
      puVar12 = puVar12 + 0x11;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != nullptr);
    puVar9 = (byte *)&local_8->field_0xa17;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1982_0xa0e + iVar4);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0xa2b;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field1987_0xa22 + iVar4);
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    puVar9 = (byte *)&local_8->field_0xa4b;
    puVar13 = (byte *)((int)&g_packedRecords_A62x8[0].field2013_0xa42 + iVar4);
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar9;
      puVar9 = (byte *)(puVar9 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1977_0x9fa + iVar4) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1978_0x9fe + iVar4) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar4) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + iVar4) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1981_0xa0a + iVar4) = local_8->field_0A73;
    if (local_8->field_0A6B == -1) {
      *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar4) = 0;
    }
    else {
      uVar7 = local_8->field_0A6F / 0x18;
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,uVar7,0xc,1);
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar4) = pDVar2;
      local_10 = nullptr;
      if (uVar7 != 0) {
        piVar6 = (int *)((int)param_1 + local_8->field_0A6B + 0x10);
        do {
          local_20 = nullptr;
          if (piVar6[-4] != -1) {
            local_20 = FUN_006b0060(nullptr,(uint *)(piVar6[-4] + (int)param_1));
          }
          local_1c = nullptr;
          if (piVar6[-2] != -1) {
            local_1c = FUN_006b0060(nullptr,(uint *)(piVar6[-2] + (int)param_1));
          }
          local_18 = nullptr;
          if (*piVar6 != -1) {
            local_18 = FUN_006b0060(nullptr,(uint *)(*piVar6 + (int)param_1));
          }
          Library::DKW::TBL::DArrayPut
                    (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar4),
                     (uint)local_10,&local_20);
          piVar6 = piVar6 + 6;
          local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x1;
        } while ((int)local_10 < (int)uVar7);
      }
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar4 = iVar4 + 0xa62;
    pAVar10 = (AnonShape_00444E70_E59ECBC3 *)&local_8[1].field_0x33;
  } while (iVar4 < 0x5310);
  puVar8 = param_1 + 0x2aae;
  puVar9 = (byte *)(&DAT_007fa138);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 2;
    puVar9 = (byte *)(puVar9 + 1);
  }
  local_8 = pAVar10;
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
  uVar7 = *(uint *)(param_1 + 0x2ac6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar9 = (byte *)(*(int *)(param_1 + 0x2ac4) + (int)param_1);
  puVar13 = (byte *)(DAT_007fa168);
  memmove(puVar13, puVar9, uVar7); /* compiler REP MOVS byte copy */
  return;
}

