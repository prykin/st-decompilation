#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0044.cpp

// 004406C0 LookupRecordByte
#line 1 "decomp/ST.exe/functions/004406C0/decomp.c"

/* [STUtilityFunctionApplier] indexed_record_byte_lookup: maps a guarded byte-sized index to the
   first byte of a fixed-stride record; return width is owned by the CFG-complete ABI consistency
   pass
   Evidence: body pattern verified */

byte st::fn_004406C0(char recordIndex)

{
  if (recordIndex == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[recordIndex].field0_0x0;
}

// 00440700 FUN_00440700
#line 4 "decomp/ST.exe/functions/00440700/decomp.c"
void st::fn_00440700(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = (param_1 != 0) + 0x112;
  /* ST_CALLSITE[0044072B]: CALL dword ptr [EDX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

// 00440750 FUN_00440750
#line 4 "decomp/ST.exe/functions/00440750/decomp.c"
void st::fn_00440750(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = 0x120 - (uint)(param_1 != 0);
  /* ST_CALLSITE[00440778]: CALL dword ptr [EDX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

// 004407A0 FUN_004407a0
#line 4 "decomp/ST.exe/functions/004407A0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=004407A3 MOVSX EAX,byte ptr [EBP + 0x8] */

void st::fn_004407A0(char param_1,undefined4 param_2,undefined4 param_3)

{
  int _param_1 = static_cast<int>(param_1);

  DArrayTy *array;
  dword dVar1;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;

  array = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  if (((array != nullptr) && (dVar1 = array->count, dVar1 != 0)) &&
     (index = 0, 0 < (int)dVar1)) {
    do {
      STGroupBoatC * _param_1 = nullptr;
      st::fn_006ACC70(array,index,&_param_1);
      if (_param_1 != nullptr) {
        /* ST_CALLSITE[004407EC]: CALL 0x0040348b; direct=0040348B STGroupBoatC::ReMakePVecAndTgtListExt */
        st::fn_0040348B(_param_1,(char)param_2,(short)param_3);
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

// 00440820 FUN_00440820
#line 4 "decomp/ST.exe/functions/00440820/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042F2B0 -> 00440820 @ 0042FF76; STAllPlayersC::UnRegisterObject parameter param_1 */

void st::fn_00440820(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = 0;
  do {
    st::fn_00402243((char)iVar1,param_1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

// 00444E70 FUN_00444e70
#line 4 "decomp/ST.exe/functions/00444E70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 00444E70 @ 00430C1E */

void __thiscall st::fn_00444E70(void *this,ushort *param_1)

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
      st::fn_006AE140
                (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field2_0x5 + iVar4),iVar5 - 1,
                 &local_c);
    }
    if (0 < *(int *)pAVar10) {
      st::fn_006AE140
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
        pDVar2 = st::fn_006B0060(nullptr,(uint *)(*(int *)local_10 + (int)param_1));
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
        pDVar2 = st::fn_006B0060(nullptr,(uint *)(local_10->field_0006 + (int)param_1));
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
        pDVar2 = st::fn_006B0060(nullptr,(uint *)(local_10->field_006A + (int)param_1));
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
        pDVar2 = st::fn_006B0060(nullptr,(uint *)(local_14->field_0006 + (int)param_1));
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
      st::fn_006B0060(puVar12,(uint *)(*piVar6 + (int)param_1));
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
      uVar7 = st::machine_word_boundary_cast<uint>(local_8->field_0A6F / 0x18);
      pDVar2 = st::fn_006AE290(nullptr,uVar7,0xc,1);
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar4) = pDVar2;
      local_10 = nullptr;
      if (uVar7 != 0) {
        piVar6 = (int *)((int)param_1 + local_8->field_0A6B + 0x10);
        do {
          local_20 = nullptr;
          if (piVar6[-4] != -1) {
            local_20 = st::fn_006B0060(nullptr,(uint *)(piVar6[-4] + (int)param_1));
          }
          local_1c = nullptr;
          if (piVar6[-2] != -1) {
            local_1c = st::fn_006B0060(nullptr,(uint *)(piVar6[-2] + (int)param_1));
          }
          local_18 = nullptr;
          if (*piVar6 != -1) {
            local_18 = st::fn_006B0060(nullptr,(uint *)(*piVar6 + (int)param_1));
          }
          st::fn_006AE140
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
    st::fn_006AE140(g_array_007FA154,*(int *)(param_1 + 0x2aba) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2abc)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006AE140(g_array_007FA158,*(int *)(param_1 + 0x2abc) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2abe)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006AE140(g_array_007FA15C,*(int *)(param_1 + 0x2abe) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2ac0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006AE140(g_array_007FA160,*(int *)(param_1 + 0x2ac0) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x2ac2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006AE140(g_array_007FA164,*(int *)(param_1 + 0x2ac2) - 1,&local_c);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DAT_007fa168 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70(*(uint *)(param_1 + 0x2ac6)));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar7 = *(uint *)(param_1 + 0x2ac6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar9 = (byte *)(*(int *)(param_1 + 0x2ac4) + (int)param_1);
  puVar13 = (byte *)(DAT_007fa168);
  memmove(puVar13, puVar9, uVar7); /* compiler REP MOVS byte copy */
  return;
}

// 00446A70 FUN_00446a70
#line 1 "decomp/ST.exe/functions/00446A70/decomp.c"

void st::fn_00446A70(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_CALLSITE[00446A79]: CALL 0x00402095; direct=00402095 STAllPlayersC::DeletePGPairs */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00402095(in_ECX,(char)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

// 00449A90 FUN_00449a90
#line 4 "decomp/ST.exe/functions/00449A90/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00449A96 MOVSX EAX,byte ptr [EBP + 0x8] */

uint st::fn_00449A90(char param_1,short param_2)

{
  alignas(4) byte st_stack_frame[48];

  dword dVar1;
  uint index;
  uint index_00;
  DArrayTy *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  undefined1 local_18 [4];
  DArrayTy *local_14;
  dword local_c;
  DArrayTy *local_8;

  array = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  if (((array != nullptr) && (local_c = array->count, local_c != 0)) &&
     (index = 0, local_8 = array, 0 < (int)local_c)) {
    do {
      st::fn_006ACC70(array,index,local_18);
      if (((local_14 != nullptr) && (dVar1 = local_14->count, dVar1 != 0)) &&
         (index_00 = 0, array = local_8, 0 < (int)dVar1)) {
        do {
          st::fn_006ACC70(local_14,index_00,(st_stack_frame + 42));
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          if (in_stack_00000006 == param_2) {
            return index;
          }
          index_00 = index_00 + 1;
          array = local_8;
        } while ((int)index_00 < (int)dVar1);
      }
      index = index + 1;
    } while ((int)index < (int)local_c);
  }
  return 0xffffffff;
}

// 0044CC90 FUN_0044cc90
#line 4 "decomp/ST.exe/functions/0044CC90/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044CC90 -> 006ACC70 @ 0044CCAE */

void st::fn_0044CC90(uint param_1,DArrayTy *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent->count;
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70(groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
          /* ST_CALLSITE[0044CCC6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          (pSVar3 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)uVar2,(ushort)param_1,CASE_1),
          pSVar3 != nullptr)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07E6 = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 0044CD20 FUN_0044cd20
#line 4 "decomp/ST.exe/functions/0044CD20/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044CD20 -> 006ACC70 @ 0044CD3E */

void st::fn_0044CD20(uint param_1,DArrayTy *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent->count;
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70(groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
          /* ST_CALLSITE[0044CD56]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          (pSVar3 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)uVar2,(ushort)param_1,CASE_1),
          pSVar3 != nullptr)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07EA = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 0044CDB0 FUN_0044cdb0
#line 1 "decomp/ST.exe/functions/0044CDB0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CDB0 @ 004374A4 | 0044CDB0 -> 006ACC70 @ 0044CDDA */

void st::fn_0044CDB0(uint param_1,DArrayTy *groupContent,int param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar1 = groupContent->count;
  if (((-1 < param_3) && (param_3 < 4)) && (uVar4 = 0, uVar1 != 0)) {
    index = 0;
    do {
      st::fn_006ACC70(groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
          /* ST_CALLSITE[0044CDF2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          (pSVar3 = st::fn_004028BA
                              (g_allPlayers_007FA174,(char)uVar2,(ushort)param_1,CASE_1),
          pSVar3 != nullptr)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07EE = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 0044CE40 FUN_0044ce40
#line 4 "decomp/ST.exe/functions/0044CE40/decomp.c"
uint __fastcall st::fn_0044CE40(STAllPlayersC *param_1)

{
  DArrayTy *array;
  dword dVar1;
  byte bVar2;
  STGameObjC *this;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  uint index;
  undefined1 local_c [4];
  STAllPlayersC *local_8;

  uVar4 = 0;
  index = 0;
  array = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  dVar1 = array->count;
  local_8 = st::pointer_boundary_cast<STAllPlayersC *>(param_1);
  if (0 < (int)dVar1) {
    do {
      st::fn_006ACC70(array,index,local_c);
      if ((STPiece<0,2>(local_c) != 0xffff) &&
         /* ST_CALLSITE[0044CEA0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         (this = st::fn_004028BA(local_8,DAT_0080874d,STPiece<0,2>(local_c),CASE_1),
         this != nullptr)) {
        /* ST_CALLSITE[0044CEB1]: CALL dword ptr [EDX + 0x2c] */
        uVar3 = this->vfunc_2C();
        switch(uVar3) {
        case 1:
        case 2:
        case 3:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x26:
        case 0x27:
          uVar4 = uVar4 | 0x2000;
          break;
        case 4:
          uVar4 = uVar4 | 0x40;
          break;
        case 5:
          uVar4 = uVar4 | 2;
          break;
        case 6:
        case 0x12:
          uVar4 = uVar4 | 1;
          break;
        case 7:
        case 0x13:
          uVar4 = uVar4 | 0x400;
          break;
        case 8:
        case 0x14:
          uVar4 = uVar4 | 0x200;
          break;
        case 9:
          uVar4 = uVar4 | 0x80;
          break;
        case 0xb:
          uVar4 = uVar4 | 4;
          break;
        case 0xc:
        case 0x18:
          uVar4 = uVar4 | 0x800;
          break;
        case 0x11:
          uVar4 = uVar4 | 8;
          break;
        case 0x15:
          uVar4 = uVar4 | 0x100;
          break;
        case 0x16:
          uVar4 = uVar4 | 0x28;
          break;
        case 0x17:
          uVar4 = uVar4 | 0x10;
          break;
        case 0x19:
          uVar4 = uVar4 | 0x40000;
          break;
        case 0x1a:
          uVar4 = uVar4 | 0x20000;
          break;
        case 0x1b:
          uVar4 = uVar4 | 0x200000;
          break;
        case 0x1c:
          uVar4 = uVar4 | 0x80000;
          break;
        case 0x1d:
          uVar4 = uVar4 | 0x100000;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x28:
          uVar4 = uVar4 | 0x2000000;
          break;
        case 0x21:
          uVar4 = uVar4 | 0x400000;
          break;
        case 0x22:
          uVar4 = uVar4 | 0x10000;
          break;
        case 0x23:
          uVar4 = uVar4 | 0x800000;
          break;
        case 0x24:
          uVar4 = uVar4 | 0x1000000;
          break;
        case 0x25:
          uVar4 = uVar4 | 0x1000;
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
    if (uVar4 != 0) {
      sVar5 = (short)(uVar4 >> 0x10);
      if (sVar5 == 0) {
        /* ST_CALLSITE[0044CFE1]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        if (((short)uVar4 != 0) && (bVar2 = st::fn_004049B7(DAT_0080874d), bVar2 == 3)) {
          return 0x2000000;
        }
      }
      else if ((short)uVar4 != 0) {
        /* ST_CALLSITE[0044CFB4]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = st::fn_004049B7(DAT_0080874d);
        return (-(uint)(bVar2 != 3) & 0xfe002000) + 0x2000000;
      }
      /* ST_CALLSITE[0044D007]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      if ((sVar5 != 0) && (bVar2 = st::fn_004049B7(DAT_0080874d), bVar2 != 3)) {
        return 0x2000;
      }
      /* ST_CALLSITE[0044D024]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = st::fn_004049B7(DAT_0080874d);
      if (bVar2 == 3) {
        if (uVar4 < 0x100001) {
          if (uVar4 != 0x100000) {
            if (uVar4 < 0x40001) {
              if (((uVar4 != 0x40000) && (uVar4 != 0x10000)) && (uVar4 != 0x20000)) {
                return 0x2000000;
              }
            }
            else if (uVar4 != 0x80000) {
              return 0x2000000;
            }
          }
        }
        else if (uVar4 < 0x800001) {
          if (((uVar4 != 0x800000) && (uVar4 != 0x200000)) && (uVar4 != 0x400000)) {
            return 0x2000000;
          }
        }
        else if (uVar4 != 0x1000000) {
          return 0x2000000;
        }
      }
      else if (uVar4 < 0x81) {
        if (uVar4 != 0x80) {
          if (0x3f < uVar4 - 1) {
            return 0x2000;
          }
                    /* WARNING: Could not recover jumptable at 0x0044d04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          uVar4 = (*(code *)(&switchD_0044d04b::switchdataD_0044d1d0)
                            [*(byte *)((int)&PTR_caseD_3_0044d1d4 + uVar4 + 3)])();
          return uVar4;
        }
      }
      else if (uVar4 < 0x401) {
        if (((uVar4 != 0x400) && (uVar4 != 0x100)) && (uVar4 != 0x200)) {
          return 0x2000;
        }
      }
      else if ((uVar4 != 0x800) && (uVar4 != 0x1000)) {
        return 0x2000;
      }
      return uVar4;
    }
  }
  return 0;
}

// 0044D320 FUN_0044d320
#line 4 "decomp/ST.exe/functions/0044D320/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0044D320_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_28=40
   [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/byte *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=1, sites=0043BEB0 @ 0043C2BE MOV BL,byte ptr [EAX + 0x1] | 0043BEB0 @ 0043C2C7 MOV
   BL,byte ptr [EAX + -0x2] */

byte * st::fn_0044D320(Global_sub_0044D320_param_1Enum param_1)

{
  short sVar1;
  Global_sub_0044D320_param_1Enum GVar2;
  byte *pbVar3;
  STGameObjC *this;
  int local_EAX_1172;
  int local_EAX_1269;
  int local_EAX_1351;
  int iVar5;
  int local_EAX_1434;
  int local_EAX_1608;
  int local_EAX_1709;
  int local_EAX_1797;
  int local_EAX_1904;
  int local_EAX_2097;
  uint uVar6;
  int local_EAX_2244;
  int local_EAX_2370;
  undefined4 uVar7;
  int local_EAX_2562;
  int iVar4;
  undefined4 local_18;
  DArrayTy *local_14;
  dword local_10;
  STAllPlayersC *local_c;
  int local_8;

  GVar2 = param_1;
  local_8 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  local_10 = local_14->count;
  pbVar3 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0xc));
  if (param_1 < 0x1001) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x1000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 0;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0xb;
    }
    else if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 9;
      }
      else {
        switch(param_1) {
        case CASE_1:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 7;
          break;
        case CASE_2:
        case CASE_4:
        case CASE_8:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 0;
          pbVar3[0xb] = 8;
          break;
        default:
          goto switchD_0044d3a8_caseD_3;
        case CASE_10:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 10;
          break;
        case CASE_28:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 0xb;
        }
      }
    }
    else if (param_1 < 0x201) {
      if (param_1 == 0x200) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      else {
        if ((param_1 != 0x80) && (param_1 != 0x100)) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
      }
    }
    else if (param_1 == 0x400) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xd;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x13;
    }
    else {
      if (param_1 != 0x800) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xe;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x10;
    }
    goto LAB_0044d710;
  }
  if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x10;
      goto LAB_0044d6f8;
    }
    if (param_1 < 0x20001) {
      if (param_1 == 0x20000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      else if (param_1 == 0x2000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 6;
      }
      else {
        if (param_1 != 0x10000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 7;
      }
    }
    else {
      if (param_1 == 0x40000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0xe;
        goto LAB_0044d6d7;
      }
      if (param_1 != 0x80000) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 0x48;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0x49;
    }
  }
  else {
    if (param_1 < 0x800001) {
      if (param_1 == 0x800000) {
LAB_0044d6cc:
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
LAB_0044d6d7:
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
        goto LAB_0044d710;
      }
      if (param_1 != 0x200000) {
        if (param_1 != 0x400000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 8;
        goto LAB_0044d710;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x13;
    }
    else {
      if (param_1 != 0x1000000) {
        if (param_1 != 0x2000000) {
          return pbVar3;
        }
        goto LAB_0044d6cc;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0;
    }
LAB_0044d6f8:
    pbVar3[4] = 1;
    pbVar3[5] = 1;
    pbVar3[6] = 0;
    pbVar3[7] = 0x48;
    pbVar3[8] = 1;
    pbVar3[9] = 0x2f;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0x18;
  }
LAB_0044d710:
  auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
  if (0 < (int)local_10) {
    do {
      st::fn_006ACC70(local_14,param_1_after_write,&local_18);
      if (((ushort)local_18 != 0xffff) &&
         /* ST_CALLSITE[0044D74B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         (this = st::fn_004028BA(local_c,DAT_0080874d,(ushort)local_18,CASE_1),
         this != nullptr)) {
        if (GVar2 < 0x1001) {
          if (GVar2 == 0x1000) {
switchD_0044d78f_caseD_28:
            /* ST_CALLSITE[0044DA6F]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if ((iVar5 == 0x16) || (iVar5 == 0x25)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((local_EAX_1904 = st::fn_004043E0(this), 0 < local_EAX_1904 &&
                  ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              if ((pbVar3[0xb] == 0xb) && (this->field_0732 == 1)) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0xc;
              }
            }
          }
          else if (GVar2 < 0x41) {
            if (GVar2 == 0x40) {
              /* ST_CALLSITE[0044D89E]: CALL dword ptr [EDX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if (iVar5 == 4) {
                local_8 = 1;
                if (((pbVar3[6] == 0) &&
                    (local_EAX_1434 = st::fn_004043E0(this), 0 < local_EAX_1434)) &&
                   ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b != 0)) {
                  pbVar3[6] = 1;
                  pbVar3[7] = 4;
                }
                if ((pbVar3[10] == 0) && (0 < this->field_07BE)) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 9;
                }
              }
            }
            else {
              switch(GVar2) {
              case CASE_1:
                /* ST_CALLSITE[0044D79A]: CALL dword ptr [EAX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if ((iVar5 == 6) || (iVar5 == 0x12)) {
                  local_8 = 1;
                  local_EAX_1172 = st::fn_004043E0(this);
                  if (0 < local_EAX_1172) {
                    sVar1 = (short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b;
joined_r0x0044d9f5:
                    if (sVar1 != 0) {
                      pbVar3[6] = 1;
                      pbVar3[7] = 4;
                      return pbVar3;
                    }
                  }
                }
                break;
              case CASE_2:
              case CASE_4:
              case CASE_8:
                /* ST_CALLSITE[0044D7EB]: CALL dword ptr [EDX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if (((iVar5 == 5) || (iVar5 == 0xb)) || (iVar5 == 0x11)) {
                  local_8 = 1;
                  if (((pbVar3[6] == 0) &&
                      (local_EAX_1269 = st::fn_004043E0(this), 0 < local_EAX_1269)) &&
                     ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b != 0))
                  {
                    pbVar3[6] = 1;
                    pbVar3[7] = 4;
                  }
LAB_0044dc25:
                  if ((pbVar3[10] == 0) && (0 < this->field_07BE)) {
                    pbVar3[10] = 1;
                    pbVar3[0xb] = 8;
                  }
                }
                break;
              case CASE_10:
                /* ST_CALLSITE[0044D852]: CALL dword ptr [EDX + 0x2c] */
                iVar5 = this->vfunc_2C();
                if (iVar5 == 0x17) {
                  local_8 = 1;
                  local_EAX_1351 = st::fn_004043E0(this);
                  if (0 < local_EAX_1351) {
                    sVar1 = (short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b;
                    goto joined_r0x0044d9f5;
                  }
                }
                break;
              case CASE_28:
                goto switchD_0044d78f_caseD_28;
              }
            }
          }
          else if (GVar2 < 0x201) {
            if (GVar2 == 0x200) {
              /* ST_CALLSITE[0044D94E]: CALL dword ptr [EAX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if ((iVar5 == 8) || (iVar5 == 0x14)) {
                local_8 = 1;
                local_EAX_1608 = st::fn_004043E0(this);
                if (0 < local_EAX_1608) {
                  sVar1 = (short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b;
                  goto joined_r0x0044d9f5;
                }
              }
            }
            else if ((GVar2 == 0x80) || (GVar2 == 0x100)) {
              /* ST_CALLSITE[0044D930]: CALL dword ptr [EDX + 0x2c] */
              iVar5 = this->vfunc_2C();
              if (iVar5 == 9) {
                return pbVar3;
              }
              if (iVar5 == 0x15) {
                return pbVar3;
              }
            }
          }
          else if (GVar2 == 0x400) {
            /* ST_CALLSITE[0044DA04]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if ((iVar5 == 7) || (iVar5 == 0x13)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((local_EAX_1797 = st::fn_004043E0(this), 0 < local_EAX_1797 &&
                  ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              iVar5 = st::fn_00402608(this);
              if (iVar5 != 0) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0x14;
              }
            }
          }
          else if ((GVar2 == 0x800) &&
                  /* ST_CALLSITE[0044D9B3]: CALL dword ptr [EDX + 0x2c] */
                  ((iVar5 = this->vfunc_2C(), iVar5 == 0xc || (iVar5 == 0x18)))) {
LAB_0044d9c4:
            local_8 = 1;
            local_EAX_1709 = st::fn_004043E0(this);
            if (0 < local_EAX_1709) {
              sVar1 = (short)g_packedRecords_A62x8[*(char *)&this->field_0024].field94_0x15b;
              goto joined_r0x0044d9f5;
            }
          }
        }
        else if (GVar2 < 0x100001) {
          if (GVar2 == 0x100000) {
            /* ST_CALLSITE[0044DB3C]: CALL dword ptr [EDX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if (iVar5 == 0x1d) {
              local_8 = 1;
              /* ST_CALLSITE[0044DB51]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2097 = st::fn_00403594((TLOBaseTy *)this);
              if (((0 < local_EAX_2097) &&
                  (uVar6 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
LAB_0044dcbe:
              iVar5 = st::fn_0040186B((uint)DAT_0080874d,0x5f);
              if (0 < iVar5) {
                iVar5 = this->field_071E;
joined_r0x0044ddc7:
                if (9 < iVar5) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 0x18;
                }
              }
            }
          }
          else {
            if (GVar2 < 0x20001) {
              if (GVar2 != 0x20000) {
                if (GVar2 == 0x2000) goto LAB_0044d9c4;
                if (GVar2 != 0x10000) goto cf_continue_loop_0044DDCF;
              }
            }
            else if ((GVar2 != 0x40000) && (GVar2 != 0x80000)) goto cf_continue_loop_0044DDCF;
LAB_0044dce3:
            /* ST_CALLSITE[0044DCE7]: CALL dword ptr [EDX + 0x2c] */
            uVar7 = this->vfunc_2C();
            switch(uVar7) {
            case 0x19:
            case 0x1a:
            case 0x1c:
            case 0x22:
            case 0x23:
switchD_0044dcfe_caseD_19:
              local_8 = 1;
              /* ST_CALLSITE[0044DD22]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2562 = st::fn_00403594((TLOBaseTy *)this);
              if (((0 < local_EAX_2562) &&
                  (uVar6 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
                return pbVar3;
              }
            }
          }
        }
        else if (GVar2 < 0x800001) {
          if (GVar2 == 0x800000) goto LAB_0044dce3;
          if (GVar2 == 0x200000) {
            /* ST_CALLSITE[0044DC4D]: CALL dword ptr [EAX + 0x2c] */
            iVar5 = this->vfunc_2C();
            if (iVar5 == 0x1b) {
              local_8 = 1;
              /* ST_CALLSITE[0044DC62]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
              local_EAX_2370 = st::fn_00403594((TLOBaseTy *)this);
              if (((0 < local_EAX_2370) &&
                  (uVar6 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar6)) &&
                 ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field95_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
              iVar5 = st::fn_00402608(this);
              if (iVar5 != 0) {
                pbVar3[2] = 1;
                pbVar3[3] = 0x14;
              }
              goto LAB_0044dcbe;
            }
          }
          /* ST_CALLSITE[0044DBCF]: CALL dword ptr [EAX + 0x2c] */
          else if ((GVar2 == 0x400000) && (iVar5 = this->vfunc_2C(), iVar5 == 0x21))
          {
            local_8 = 1;
            /* ST_CALLSITE[0044DBE4]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            local_EAX_2244 = st::fn_00403594((TLOBaseTy *)this);
            if ((0 < local_EAX_2244) &&
               ((uVar6 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar6 &&
                ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field95_0x15f != 0)))) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            goto LAB_0044dc25;
          }
        }
        else if (GVar2 == 0x1000000) {
          /* ST_CALLSITE[0044DD6F]: CALL dword ptr [EDX + 0x2c] */
          iVar5 = this->vfunc_2C();
          if (iVar5 == 0x24) {
            local_8 = 1;
            /* ST_CALLSITE[0044DD80]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
            iVar4 = st::fn_00403594((TLOBaseTy *)this);
            if (((0 < iVar4) && (uVar6 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar6)) &&
               ((short)g_packedRecords_A62x8[*(char *)&this->field_0024].field95_0x15f != 0)) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            iVar5 = this->field_071E;
            goto joined_r0x0044ddc7;
          }
        }
        else if (GVar2 == 0x2000000) goto switchD_0044dcfe_caseD_19;
      }
cf_continue_loop_0044DDCF:
      param_1_after_write = param_1_after_write + CASE_1;
    } while ((int)param_1_after_write < (int)local_10);
    if (local_8 != 0) {
      return pbVar3;
    }
  }
  pbVar3[10] = 1;
  pbVar3[0xb] = 0;
  pbVar3[8] = 1;
  pbVar3[9] = 0;
  pbVar3[6] = 1;
  pbVar3[7] = 0;
  pbVar3[4] = 1;
  pbVar3[5] = 0;
  pbVar3[2] = 1;
  pbVar3[3] = 0;
  pbVar3[0] = 1;
  pbVar3[1] = 0;
switchD_0044d3a8_caseD_3:
  return pbVar3;
}

// 0044E1B0 FUN_0044e1b0
#line 1 "decomp/ST.exe/functions/0044E1B0/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=004B31C0 @ 004B31DA
   -> TEST TEST EAX,EAX | 004BEA70 @ 004C108D -> TEST TEST EAX,EAX | 004D6930 @ 004D6AB2 -> TEST
   TEST EAX,EAX */

int st::fn_0044E1B0(int param_1)

{
  return (uint)((ushort)g_packedRecords_A62x8[param_1].field4_0xd < DAT_00808a97);
}

// 0044E1F0 FUN_0044e1f0
#line 4 "decomp/ST.exe/functions/0044E1F0/decomp.c"
undefined2 st::fn_0044E1F0(int param_1)

{
  return g_packedRecords_A62x8[param_1].field4_0xd;
}

// 0044E220 FUN_0044e220
#line 4 "decomp/ST.exe/functions/0044E220/decomp.c"
void st::fn_0044E220(void)

{
  void *pvVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_stack_00000014;

  pvVar1 = st::fn_006AAC70(10);
  iVar2 = 0;
  do {
    *(char *)(iVar2 + (int)pvVar1) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  *in_stack_00000014 = 10;
  return;
}

// 0044E260 FUN_0044e260
#line 4 "decomp/ST.exe/functions/0044E260/decomp.c"
void st::fn_0044E260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  STGameObjCVTable *pSVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  int iVar11;
  uint uVar12;
  STGameObjC *pSVar13;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  DArrayTy *local_18;
  STGameObjC *local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar4 = param_4;
  local_14 = (STGameObjC *)st::fn_00405CF9((char)param_1,(ushort)param_2);
  if (local_14 != nullptr) {
    /* ST_CALLSITE[0044E287]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
    pDVar5 = (DArrayTy *)st::fn_00402DB5((STGroupC *)local_14);
    auto param_2_after_write = pDVar5->count; /* compiler stack-slot lifetime split */
    if (param_2_after_write != 0) {
      local_18 = st::fn_006AE290(nullptr,param_2_after_write,4,1);
      uVar12 = 0;
      if (0 < (int)param_2_after_write) {
        do {
          st::fn_006ACC70(pDVar5,uVar12,local_2c);
          /* ST_CALLSITE[0044E2CD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_14 = st::fn_004028BA(in_ECX,(char)param_1,STPiece<0,2>(local_2c),CASE_1);
          if ((local_14 == nullptr) ||
             /* ST_CALLSITE[0044E2DD]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar6 = local_14->vfunc_F8(), iVar6 == 0)) {
            st::fn_006B0C70(pDVar5,uVar12);
            param_2_after_write = param_2_after_write - 1;
            uVar12 = uVar12 - 1;
          }
          else {
            st::fn_006AE140(local_18,uVar12,&local_14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_2_after_write);
      }
      st::fn_006AE110(pDVar5);
      if (param_2_after_write != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = st::pointer_boundary_cast<STGameObjC *>(local_18->data);
        auto param_1_after_write = 10000; /* compiler stack-slot lifetime split */
        local_10 = 0;
        uVar12 = param_2_after_write;
        pSVar13 = local_14;
        if (0 < (int)param_2_after_write) {
          do {
            pSVar1 = pSVar13->vtable;
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_58 + 3);
            iVar9 = *(int *)((int)&pSVar1[1].vfunc_2C + 1);
            iVar7 = iVar6 - iVar9;
            if (iVar7 < local_8) {
              local_8 = iVar7;
            }
            iVar6 = iVar9 + iVar6;
            if (local_c < iVar6) {
              local_c = iVar6;
            }
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_5C + 1);
            uVar8 = iVar6 - iVar9;
            if ((int)uVar8 < (int)param_1_after_write) {
              param_1_after_write = uVar8;
            }
            iVar6 = iVar6 + iVar9;
            if (local_10 < iVar6) {
              local_10 = iVar6;
            }
            uVar12 = uVar12 - 1;
            pSVar13 = (STGameObjC *)&pSVar13->field_0x4;
          } while (uVar12 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar6 = g_worldGrid.sizeX + -1;
        if (iVar6 < local_c) {
          local_c = iVar6;
        }
        if ((int)param_1_after_write < 0) {
          param_1_after_write = 0;
        }
        if (g_worldGrid.sizeY + -1 < local_10) {
          local_10 = g_worldGrid.sizeY + -1;
        }
        local_28 = 5;
        iVar7 = ((int)g_worldGrid.sizeX * param_1_after_write - (int)g_worldGrid.planeStride) + local_8;
        iVar6 = local_c;
        iVar9 = local_8;
        do {
          iVar7 = iVar7 + g_worldGrid.planeStride;
          iVar11 = iVar7 - g_worldGrid.sizeX;
          if ((int)param_1_after_write <= local_10) {
            local_24 = (local_10 - param_1_after_write) + 1;
            do {
              iVar11 = iVar11 + g_worldGrid.sizeX;
              if (iVar9 <= iVar6) {
                local_20 = (iVar6 - iVar9) + 1;
                iVar6 = iVar11 * 8 + -8;
                do {
                  piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                  if (((piVar2 != nullptr) &&
                      (((iVar9 = piVar2[8], iVar9 == 0x14 || (iVar9 == 1000)) || (iVar9 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          /* ST_CALLSITE[0044E488]: CALL dword ptr [EDX + 0xf8] */
                          (iVar9 = (**(code **)(*piVar2 + 0xf8))(), iVar9 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2_after_write)))) {
                    auto param_4_after_write = (int *)local_14; /* compiler stack-slot lifetime split */
                    do {
                      iVar9 = *param_4_after_write;
                      iVar10 = (int)STField<short>(piVar2,0x5b) - (int)*(short *)(iVar9 + 0x5b);
                      iVar3 = *(int *)(iVar9 + 0x101);
                      if (iVar10 < 1) {
                        if (iVar10 < -iVar3) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar9 = piVar4[piVar2[9]];
joined_r0x0044e51a:
                        if (iVar9 == 0) {
                          pDVar5 = st::fn_006AE290(nullptr,1,2,1);
                          piVar4[piVar2[9]] = (int)pDVar5;
                        }
                        st::fn_006AE1C0
                                  ((DArrayTy *)piVar4[piVar2[9]],(void *)((int)piVar2 + 0x32));
                        break;
                      }
                      if (iVar10 <= iVar3) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar9 = (int)STField<short>(piVar2,0x5d) - (int)*(short *)(iVar9 + 0x5d);
                      if (iVar9 < 1) {
                        if (iVar9 < -iVar3) goto LAB_0044e4ef;
                        iVar9 = piVar4[piVar2[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar9 <= iVar3) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_4_after_write = param_4_after_write + 1;
                    } while (local_1c < (int)param_2_after_write);
                  }
                  local_20 = local_20 + -1;
                  iVar6 = iVar6 + 8;
                } while (local_20 != 0);
                local_20 = 0;
                iVar6 = local_c;
                iVar9 = local_8;
              }
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      st::fn_006AE110(local_18);
    }
  }
  return;
}

// 0044E660 FUN_0044e660
#line 4 "decomp/ST.exe/functions/0044E660/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA804>00404BB5

   [STObjectFactoryApplier] Central object factory for 0x1100 (ST_OBJECT_TYPE_1100).
   Evidence: registry[28] at 007CA800 stores type 0x1100 and executable pointer 00404BB5; allocation
   size 32 has no unique current class-layout match */

void * __cdecl st::fn_0044E660(void)

{
  STAllPlayersC *pSVar1;

  pSVar1 = (STAllPlayersC *)st::fn_006B04D0(0x20);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_0040294B(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0044EDE0 FUN_0044ede0
#line 4 "decomp/ST.exe/functions/0044EDE0/decomp.c"
void __thiscall st::fn_0044EDE0(void *this,int param_1)

{
  if (param_1 < 0) {
    STField<undefined4>(this,0x71a) = 0;
    return;
  }
  if (100 < param_1) {
    STField<undefined4>(this,0x71a) = 100;
    return;
  }
  STField<int>(this,0x71a) = param_1;
  return;
}

