#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0044.cpp

// 004406C0 LookupRecordByte
#line 1 "decomp/ST.exe/functions/004406C0/decomp.c"

/* [STUtilityFunctionApplier] indexed_record_byte_lookup: maps a guarded byte-sized index to the
   first byte of a fixed-stride record; the explicit 0xff guard clears AL and returns zero
   Evidence: body pattern verified
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=364, ignored=1, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00436F20 @ 00437CEC -> read as AL on every CFG path | 0043BEB0 @
   0043BFD8 -> read as AL on every CFG path | 0043BEB0 @ 0043C187 -> read as AL on every CFG path |
   00442300 @ 00442404 -> read as AL on every CFG path | 0044CE40 @ 0044CFB4 -> read as AL on every
   CFG path | 0044CE40 @ 0044CFE1 -> read as AL on every CFG path | 0044CE40 @ 0044D007 -> read as
   AL on every CFG path | 0044CE40 @ 0044D024 -> read as AL on every CFG path | 0044EE30 @ 00459D62
   -> read as AL on every CFG path | 0044EE30 @ 00459E45 -> read as AL on every CFG path | 0045F6C0
   @ 0045F6D7 -> read as AL on every CFG path | 00476CE0 @ 004775B7 -> read as AL on every CFG path
   | 00486B60 @ 00486CD5 -> read as AL on every CFG path | 00486E20 @ 00486EB7 -> read as AL on
   every CFG path | 00486E20 @ 00486ECA -> read as AL on every CFG path | 00486E20 @ 00486EEA ->
   read as AL on every CFG path | 00488890 @ 004888B6 -> read as AL on every CFG path | 00488890 @
   00488909 -> read as AL on every CFG path | 00488890 @ 004889DB -> read as AL on every CFG path |
   00488890 @ 00488A19 -> read as AL on every CFG path | 00488890 @ 00488A3E -> read as AL on every
   CFG path | 00488890 @ 00488A60 -> read as AL on every CFG path | 00488890 @ 00488A73 -> read as
   AL on every CFG path | 00488890 @ 00488A97 -> read as AL on every CFG path */

byte st::fn_004406C0(char recordIndex)

{
  if (recordIndex == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[recordIndex].field0_0x0;
}

// 00440700 FUN_00440700
#line 1 "decomp/ST.exe/functions/00440700/decomp.c"
void st::fn_00440700(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = (param_1 != 0) + 0x112;
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

// 00440750 FUN_00440750
#line 1 "decomp/ST.exe/functions/00440750/decomp.c"
void st::fn_00440750(int param_1)

{
  undefined1 local_24 [12];
  undefined4 local_18;
  int local_14;

  local_18 = 0xf;
  local_14 = 0x120 - (uint)(param_1 != 0);
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

// 004407A0 FUN_004407a0
#line 1 "decomp/ST.exe/functions/004407A0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=004407A3 MOVSX EAX,byte ptr [EBP + 0x8] */

void st::fn_004407A0(char param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *array;
  dword dVar1;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;

  array = (DArrayTy *)g_packedRecords_A62x8[param_1].field2_0x5;
  if (((array != nullptr) && (dVar1 = array->count, dVar1 != 0)) &&
     (index = 0, 0 < (int)dVar1)) {
    do {
      st::fn_006ACC70(array,index,&param_1);
      if (_param_1 != nullptr) {
        st::fn_0040348B(_param_1,(char)param_2,(short)param_3);
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
  }
  return;
}

// 00440820 FUN_00440820
#line 1 "decomp/ST.exe/functions/00440820/decomp.c"
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
#line 1 "decomp/ST.exe/functions/00444E70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 00444E70 @ 00430C1E */

void __thiscall st::fn_00444E70(void *this,ushort *param_1)

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
  char *pcVar12;
  uint *puVar13;
  byte *puVar14;
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
  STField<undefined4>(this,0x1c) = *(undefined4 *)param_1;
  do {
    iVar6 = *(int *)((int)&pAVar11[-1].field_0A73 + 1);
    local_8 = pAVar11;
    if (0 < iVar6) {
      st::fn_006AE140
                (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field2_0x5 + iVar5),iVar6 - 1,
                 &local_c);
    }
    if (0 < *(int *)pAVar11) {
      st::fn_006AE140
                (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + iVar5),
                 *(int *)pAVar11 - 1,&local_c);
    }
    local_10 = (AnonShape_00444E70_523E22DE *)&pAVar11->field_0x4;
    iVar6 = 0;
    do {
      if (*(int *)local_10 == -1) {
        *(undefined4 *)(iVar6 + 0x7f4e2f + iVar5) = 0;
      }
      else {
        uVar2 = st::fn_006B0060(nullptr,(uint *)(*(int *)local_10 + (int)param_1));
        *(undefined4 *)(iVar6 + 0x7f4e2f + iVar5) = uVar2;
      }
      pAVar1 = local_8;
      iVar6 = iVar6 + 4;
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10->field_0006 + 2);
    } while (iVar6 < 0x10);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field15_0x1f + iVar5) =
         *(undefined4 *)&pAVar11->field_0x24;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field16_0x23 + iVar5) =
         *(undefined4 *)&pAVar11->field_0x28;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field17_0x27 + iVar5) =
         *(undefined4 *)&pAVar11->field_0x2c;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x5;
    puVar10 = (byte *)&pAVar11->field_0x30;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field18_0x2b + iVar5);
    for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    pcVar12 = &g_packedRecords_A62x8[0].field97_0x167 + iVar5;
    local_10 = (AnonShape_00444E70_523E22DE *)&local_8->field_0x16c;
    do {
      *(undefined4 *)(pcVar12 + -4) = *(undefined4 *)&local_10[-1].field_0x70;
      *(undefined4 *)pcVar12 = *(undefined4 *)local_10;
      *(undefined2 *)(pcVar12 + 4) = *(undefined2 *)&local_10->field_0x4;
      *(undefined2 *)(pcVar12 + 10) = local_10->field_000E;
      if (local_10->field_0006 == -1) {
        *(undefined4 *)(pcVar12 + 6) = 0;
      }
      else {
        uVar2 = st::fn_006B0060(nullptr,(uint *)(local_10->field_0006 + (int)param_1));
        *(undefined4 *)(pcVar12 + 6) = uVar2;
      }
      *(undefined4 *)(pcVar12 + 0x4c) = *(undefined4 *)&local_10->field_0x60;
      *(undefined4 *)(pcVar12 + 0x50) = *(undefined4 *)&local_10->field_0x64;
      *(undefined2 *)(pcVar12 + 0x54) = *(undefined2 *)&local_10->field_0x68;
      *(undefined2 *)(pcVar12 + 0x5a) = local_10->field_0072;
      if (local_10->field_006A == -1) {
        *(undefined4 *)(pcVar12 + 0x56) = 0;
      }
      else {
        uVar2 = st::fn_006B0060(nullptr,(uint *)(local_10->field_006A + (int)param_1));
        *(undefined4 *)(pcVar12 + 0x56) = uVar2;
      }
      local_10 = (AnonShape_00444E70_523E22DE *)&local_10->field_0x14;
      pcVar12 = pcVar12 + 0x10;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != nullptr);
    local_14 = (AnonShape_00444E70_8EFB8E54 *)&pAVar1->field_0x238;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field200_0x203 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x230;
    puVar10 = (byte *)((int)&g_packedRecords_A62x8[0].field202_0x20b + iVar5);
    local_10 = (AnonShape_00444E70_523E22DE *)0xa;
    do {
      puVar10[-1] = *(undefined4 *)&local_14[-1].field_0xc;
      *puVar10 = *(undefined4 *)local_14;
      *(undefined2 *)(puVar10 + 1) = *(undefined2 *)&local_14->field_0x4;
      STField<undefined2>(puVar10,10) = local_14->field_000E;
      if (local_14->field_0006 == -1) {
        STField<undefined4>(puVar10,6) = 0;
      }
      else {
        uVar2 = st::fn_006B0060(nullptr,(uint *)(local_14->field_0006 + (int)param_1));
        STField<undefined4>(puVar10,6) = uVar2;
      }
      local_14 = (AnonShape_00444E70_8EFB8E54 *)&local_14[1].field_0x4;
      puVar10 = (byte *)(puVar10 + 4);
      local_10 = (AnonShape_00444E70_523E22DE *)((int)&local_10[-1].field_0072 + 1);
    } while (local_10 != nullptr);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field339_0x2a7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x2fc;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field340_0x2ab + iVar5) =
         *(undefined4 *)&pAVar1->field_0x300;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field341_0x2af + iVar5) =
         *(undefined4 *)&pAVar1->field_0x304;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field342_0x2b3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x308;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field343_0x2b7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x30c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field344_0x2bb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x310;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field345_0x2bf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x314;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field346_0x2c3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x318;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field347_0x2c7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x31c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field348_0x2cb + iVar5) =
         *(undefined4 *)&pAVar1->field_0x320;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field349_0x2cf + iVar5) =
         *(undefined4 *)&pAVar1->field_0x324;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field350_0x2d3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x328;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field351_0x2d7 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x32c;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field352_0x2db + iVar5) =
         *(undefined4 *)&pAVar1->field_0x330;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field353_0x2df + iVar5) =
         *(undefined4 *)&pAVar1->field_0x334;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field354_0x2e3 + iVar5) =
         *(undefined4 *)&pAVar1->field_0x338;
    puVar10 = (byte *)&pAVar1->field_0x33c;
    puVar14 = (byte *)(&g_packedRecords_A62x8[0].field_0x2eb + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x350;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field376_0x2ff + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x364;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field393_0x313 + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x378;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field410_0x327 + iVar5);
    for (iVar6 = 0x9b; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x5e4;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1024_0x593 + iVar5);
    for (iVar6 = 0x6a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0x78c;
    puVar14 = (byte *)(&g_packedRecords_A62x8[0].field1445_0x73b + iVar5);
    for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar10;
    STField<undefined1>(puVar14,2) = STField<undefined1>(puVar10,2);
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1600_0x7d6 + iVar5) = local_8->field_0827;
    puVar10 = (byte *)&local_8->field_0x82b;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1601_0x7da + iVar5);
    for (iVar6 = 0x66; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1940_0x972 + iVar5) = local_8->field_09C3;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1941_0x976 + iVar5) = local_8->field_09C7;
    puVar10 = (byte *)&local_8->field_0x9cb;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1942_0x97a + iVar5);
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1949_0x996 + iVar5) = local_8->field_09E3;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1950_0x99a + iVar5) = local_8->field_09E7;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1951_0x99e + iVar5) = local_8->field_09EB;
    local_14 = (AnonShape_00444E70_8EFB8E54 *)0x6;
    puVar10 = (byte *)&local_8->field_0x9ef;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1952_0x9a2 + iVar5);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar13 = (uint *)(&g_packedRecords_A62x8[0].field_0x7ee + iVar5);
    piVar7 = (int *)&local_8->field_0xa77;
    local_10 = nullptr;
    do {
      st::fn_006B0060(puVar13,(uint *)(*piVar7 + (int)param_1));
      piVar7 = piVar7 + 2;
      puVar13 = puVar13 + 0x11;
      local_14 = (AnonShape_00444E70_8EFB8E54 *)((int)&local_14[-1].field_000E + 1);
    } while (local_14 != nullptr);
    puVar10 = (byte *)&local_8->field_0xa17;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1982_0xa0e + iVar5);
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0xa2b;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field1987_0xa22 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    puVar10 = (byte *)&local_8->field_0xa4b;
    puVar14 = (byte *)((int)&g_packedRecords_A62x8[0].field2013_0xa42 + iVar5);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      puVar14 = (byte *)(puVar14 + 1);
    }
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1977_0x9fa + iVar5) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1978_0x9fe + iVar5) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1979_0xa02 + iVar5) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1980_0xa06 + iVar5) = 0;
    *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1981_0xa0a + iVar5) = local_8->field_0A73;
    if (local_8->field_0A6B == -1) {
      *(undefined4 *)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar5) = 0;
    }
    else {
      uVar8 = local_8->field_0A6F / 0x18;
      pDVar3 = st::fn_006AE290(nullptr,uVar8,0xc,1);
      *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar5) = pDVar3;
      local_10 = nullptr;
      if (uVar8 != 0) {
        piVar7 = (int *)((int)param_1 + local_8->field_0A6B + 0x10);
        do {
          local_20 = 0;
          if (piVar7[-4] != -1) {
            local_20 = st::fn_006B0060(nullptr,(uint *)(piVar7[-4] + (int)param_1));
          }
          local_1c = 0;
          if (piVar7[-2] != -1) {
            local_1c = st::fn_006B0060(nullptr,(uint *)(piVar7[-2] + (int)param_1));
          }
          local_18 = 0;
          if (*piVar7 != -1) {
            local_18 = st::fn_006B0060(nullptr,(uint *)(*piVar7 + (int)param_1));
          }
          st::fn_006AE140
                    (*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1976_0x9f6 + iVar5),
                     (uint)local_10,&local_20);
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
  DAT_007fa168 = st::fn_006AAC70(*(uint *)(param_1 + 0x2ac6));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar8 = *(uint *)(param_1 + 0x2ac6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar10 = (byte *)(*(int *)(param_1 + 0x2ac4) + (int)param_1);
  puVar14 = (byte *)(DAT_007fa168);
  memmove(puVar14, puVar10, uVar8); /* compiler REP MOVS byte copy */
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
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00402095(in_ECX,(char)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

// 00449A90 FUN_00449a90
#line 1 "decomp/ST.exe/functions/00449A90/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00449A96 MOVSX EAX,byte ptr [EBP + 0x8] */

uint st::fn_00449A90(char param_1,short param_2)

{
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
          st::fn_006ACC70(local_14,index_00,&stack0x00000006);
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
#line 1 "decomp/ST.exe/functions/0044CC90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CC90 @ 004372CC | 00436F20 -> 0044CC90 @ 004373FC */

void st::fn_0044CC90(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70((DArrayTy *)groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
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
#line 1 "decomp/ST.exe/functions/0044CD20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CD20 @ 004372DA | 00436F20 -> 0044CD20 @ 004373EE

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_0044CD20(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70((DArrayTy *)groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
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
#line 1 "decomp/ST.exe/functions/0044CE40/decomp.c"
uint __fastcall st::fn_0044CE40(STAllPlayersC *param_1)

{
  DArrayTy *array;
  dword dVar1;
  byte bVar2;
  STGameObjC *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  uint index;
  undefined1 local_c [4];
  STAllPlayersC *local_8;

  uVar5 = 0;
  index = 0;
  array = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  dVar1 = array->count;
  local_8 = param_1;
  if (0 < (int)dVar1) {
    do {
      st::fn_006ACC70(array,index,local_c);
      if ((STPiece<0,2>(local_c) != 0xffff) &&
         (pSVar3 = st::fn_004028BA(local_8,DAT_0080874d,STPiece<0,2>(local_c),CASE_1),
         pSVar3 != nullptr)) {
        uVar4 = (*pSVar3->vtable->vfunc_2C)();
        switch(uVar4) {
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
          uVar5 = uVar5 | 0x2000;
          break;
        case 4:
          uVar5 = uVar5 | 0x40;
          break;
        case 5:
          uVar5 = uVar5 | 2;
          break;
        case 6:
        case 0x12:
          uVar5 = uVar5 | 1;
          break;
        case 7:
        case 0x13:
          uVar5 = uVar5 | 0x400;
          break;
        case 8:
        case 0x14:
          uVar5 = uVar5 | 0x200;
          break;
        case 9:
          uVar5 = uVar5 | 0x80;
          break;
        case 0xb:
          uVar5 = uVar5 | 4;
          break;
        case 0xc:
        case 0x18:
          uVar5 = uVar5 | 0x800;
          break;
        case 0x11:
          uVar5 = uVar5 | 8;
          break;
        case 0x15:
          uVar5 = uVar5 | 0x100;
          break;
        case 0x16:
          uVar5 = uVar5 | 0x28;
          break;
        case 0x17:
          uVar5 = uVar5 | 0x10;
          break;
        case 0x19:
          uVar5 = uVar5 | 0x40000;
          break;
        case 0x1a:
          uVar5 = uVar5 | 0x20000;
          break;
        case 0x1b:
          uVar5 = uVar5 | 0x200000;
          break;
        case 0x1c:
          uVar5 = uVar5 | 0x80000;
          break;
        case 0x1d:
          uVar5 = uVar5 | 0x100000;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x28:
          uVar5 = uVar5 | 0x2000000;
          break;
        case 0x21:
          uVar5 = uVar5 | 0x400000;
          break;
        case 0x22:
          uVar5 = uVar5 | 0x10000;
          break;
        case 0x23:
          uVar5 = uVar5 | 0x800000;
          break;
        case 0x24:
          uVar5 = uVar5 | 0x1000000;
          break;
        case 0x25:
          uVar5 = uVar5 | 0x1000;
        }
      }
      index = index + 1;
    } while ((int)index < (int)dVar1);
    if (uVar5 != 0) {
      sVar6 = (short)(uVar5 >> 0x10);
      if (sVar6 == 0) {
        if (((short)uVar5 != 0) && (bVar2 = st::fn_004049B7(DAT_0080874d), bVar2 == 3)) {
          return 0x2000000;
        }
      }
      else if ((short)uVar5 != 0) {
        bVar2 = st::fn_004049B7(DAT_0080874d);
        return (-(uint)(bVar2 != 3) & 0xfe002000) + 0x2000000;
      }
      if ((sVar6 != 0) && (bVar2 = st::fn_004049B7(DAT_0080874d), bVar2 != 3)) {
        return 0x2000;
      }
      bVar2 = st::fn_004049B7(DAT_0080874d);
      if (bVar2 == 3) {
        if (uVar5 < 0x100001) {
          if (uVar5 != 0x100000) {
            if (uVar5 < 0x40001) {
              if (((uVar5 != 0x40000) && (uVar5 != 0x10000)) && (uVar5 != 0x20000)) {
                return 0x2000000;
              }
            }
            else if (uVar5 != 0x80000) {
              return 0x2000000;
            }
          }
        }
        else if (uVar5 < 0x800001) {
          if (((uVar5 != 0x800000) && (uVar5 != 0x200000)) && (uVar5 != 0x400000)) {
            return 0x2000000;
          }
        }
        else if (uVar5 != 0x1000000) {
          return 0x2000000;
        }
      }
      else if (uVar5 < 0x81) {
        if (uVar5 != 0x80) {
          if (0x3f < uVar5 - 1) {
            return 0x2000;
          }
                    /* WARNING: Could not recover jumptable at 0x0044d04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar5 = (*(code *)(&switchD_0044d04b::switchdataD_0044d1d0)
                            [*(byte *)((int)&PTR_caseD_3_0044d1d4 + uVar5 + 3)])();
          return uVar5;
        }
      }
      else if (uVar5 < 0x401) {
        if (((uVar5 != 0x400) && (uVar5 != 0x100)) && (uVar5 != 0x200)) {
          return 0x2000;
        }
      }
      else if ((uVar5 != 0x800) && (uVar5 != 0x1000)) {
        return 0x2000;
      }
      return uVar5;
    }
  }
  return 0;
}

// 0044D320 FUN_0044d320
#line 1 "decomp/ST.exe/functions/0044D320/decomp.c"
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
  STGameObjC *objPtr;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_18;
  DArrayTy *local_14;
  dword local_10;
  STAllPlayersC *local_c;
  int local_8;

  GVar2 = param_1;
  local_8 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field102_0x16d;
  local_10 = local_14->count;
  pbVar3 = st::fn_006AAC70(0xc);
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x100000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x10;
      goto LAB_0044d6f8;
    }
    if (param_1 < 0x20001) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0044d710:
  param_1 = 0;
  if (0 < (int)local_10) {
    do {
      st::fn_006ACC70(local_14,param_1,&local_18);
      if (((ushort)local_18 != 0xffff) &&
         (objPtr = st::fn_004028BA(local_c,DAT_0080874d,(ushort)local_18,CASE_1),
         objPtr != nullptr)) {
        if (GVar2 < 0x1001) {
          if (GVar2 == 0x1000) {
switchD_0044d78f_caseD_28:
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if ((iVar4 == 0x16) || (iVar4 == 0x25)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((iVar4 = st::fn_004043E0(objPtr), 0 < iVar4 &&
                  ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b != 0))))
              {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              if ((pbVar3[0xb] == 0xb) && (objPtr->field_0732 == 1)) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0xc;
              }
            }
          }
          else if (GVar2 < 0x41) {
            if (GVar2 == 0x40) {
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if (iVar4 == 4) {
                local_8 = 1;
                if (((pbVar3[6] == 0) && (iVar4 = st::fn_004043E0(objPtr), 0 < iVar4)) &&
                   ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b != 0))
                {
                  pbVar3[6] = 1;
                  pbVar3[7] = 4;
                }
                if ((pbVar3[10] == 0) && (0 < objPtr->field_07BE)) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 9;
                }
              }
            }
            else {
              switch(GVar2) {
              case CASE_1:
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if ((iVar4 == 6) || (iVar4 == 0x12)) {
                  local_8 = 1;
                  iVar4 = st::fn_004043E0(objPtr);
                  if (0 < iVar4) {
                    sVar1 = (short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b
                    ;
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
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if (((iVar4 == 5) || (iVar4 == 0xb)) || (iVar4 == 0x11)) {
                  local_8 = 1;
                  if (((pbVar3[6] == 0) && (iVar4 = st::fn_004043E0(objPtr), 0 < iVar4)) &&
                     ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b != 0)
                     ) {
                    pbVar3[6] = 1;
                    pbVar3[7] = 4;
                  }
LAB_0044dc25:
                  if ((pbVar3[10] == 0) && (0 < objPtr->field_07BE)) {
                    pbVar3[10] = 1;
                    pbVar3[0xb] = 8;
                  }
                }
                break;
              case CASE_10:
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if (iVar4 == 0x17) {
                  local_8 = 1;
                  iVar4 = st::fn_004043E0(objPtr);
                  if (0 < iVar4) {
                    sVar1 = (short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b
                    ;
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
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if ((iVar4 == 8) || (iVar4 == 0x14)) {
                local_8 = 1;
                iVar4 = st::fn_004043E0(objPtr);
                if (0 < iVar4) {
                  sVar1 = (short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b;
                  goto joined_r0x0044d9f5;
                }
              }
            }
            else if ((GVar2 == 0x80) || (GVar2 == 0x100)) {
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if (iVar4 == 9) {
                return pbVar3;
              }
              if (iVar4 == 0x15) {
                return pbVar3;
              }
            }
          }
          else if (GVar2 == 0x400) {
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if ((iVar4 == 7) || (iVar4 == 0x13)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((iVar4 = st::fn_004043E0(objPtr), 0 < iVar4 &&
                  ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b != 0))))
              {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              iVar4 = st::fn_00402608(objPtr);
              if (iVar4 != 0) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0x14;
              }
            }
          }
          else if ((GVar2 == 0x800) &&
                  ((iVar4 = (*objPtr->vtable->vfunc_2C)(), iVar4 == 0xc || (iVar4 == 0x18)))) {
LAB_0044d9c4:
            local_8 = 1;
            iVar4 = st::fn_004043E0(objPtr);
            if (0 < iVar4) {
              sVar1 = (short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field94_0x15b;
              goto joined_r0x0044d9f5;
            }
          }
        }
        else if (GVar2 < 0x100001) {
          if (GVar2 == 0x100000) {
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if (iVar4 == 0x1d) {
              local_8 = 1;
              iVar4 = st::fn_00403594((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar5))
                 && ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field95_0x15f != 0))
              {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
LAB_0044dcbe:
              iVar4 = st::fn_0040186B((uint)DAT_0080874d,0x5f);
              if (0 < iVar4) {
                iVar4 = objPtr->field_071E;
joined_r0x0044ddc7:
                if (9 < iVar4) {
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
            uVar6 = (*objPtr->vtable->vfunc_2C)();
            switch(uVar6) {
            case 0x19:
            case 0x1a:
            case 0x1c:
            case 0x22:
            case 0x23:
switchD_0044dcfe_caseD_19:
              local_8 = 1;
              iVar4 = st::fn_00403594((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar5))
                 && ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field95_0x15f != 0))
              {
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
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if (iVar4 == 0x1b) {
              local_8 = 1;
              iVar4 = st::fn_00403594((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar5))
                 && ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field95_0x15f != 0))
              {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
              iVar4 = st::fn_00402608(objPtr);
              if (iVar4 != 0) {
                pbVar3[2] = 1;
                pbVar3[3] = 0x14;
              }
              goto LAB_0044dcbe;
            }
          }
          else if ((GVar2 == 0x400000) && (iVar4 = (*objPtr->vtable->vfunc_2C)(), iVar4 == 0x21)) {
            local_8 = 1;
            iVar4 = st::fn_00403594((TLOBaseTy *)objPtr);
            if ((0 < iVar4) &&
               ((uVar5 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar5 &&
                ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field95_0x15f != 0)))) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            goto LAB_0044dc25;
          }
        }
        else if (GVar2 == 0x1000000) {
          iVar4 = (*objPtr->vtable->vfunc_2C)();
          if (iVar4 == 0x24) {
            local_8 = 1;
            iVar4 = st::fn_00403594((TLOBaseTy *)objPtr);
            if (((0 < iVar4) && (uVar5 = st::fn_004036A7((uint)DAT_0080874d), 0 < (int)uVar5)) &&
               ((short)g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field95_0x15f != 0)) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            iVar4 = objPtr->field_071E;
            goto joined_r0x0044ddc7;
          }
        }
        else if (GVar2 == 0x2000000) goto switchD_0044dcfe_caseD_19;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_0044DDCF:
      param_1 = param_1 + CASE_1;
    } while ((int)param_1 < (int)local_10);
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
#line 1 "decomp/ST.exe/functions/0044E1F0/decomp.c"
undefined2 st::fn_0044E1F0(int param_1)

{
  return g_packedRecords_A62x8[param_1].field4_0xd;
}

// 0044E220 FUN_0044e220
#line 1 "decomp/ST.exe/functions/0044E220/decomp.c"
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
#line 1 "decomp/ST.exe/functions/0044E260/decomp.c"
void st::fn_0044E260(uint param_1,uint param_2,uint param_3,int *param_4)

{
  STGameObjCDispatchVTable *pSVar1;
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
    pDVar5 = (DArrayTy *)st::fn_00402DB5((STGroupC *)local_14);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = pDVar5->count;
    if (param_2 != 0) {
      local_18 = st::fn_006AE290(nullptr,param_2,4,1);
      uVar12 = 0;
      if (0 < (int)param_2) {
        do {
          st::fn_006ACC70(pDVar5,uVar12,local_2c);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          local_14 = st::fn_004028BA(in_ECX,(char)param_1,STPiece<0,2>(local_2c),CASE_1);
          if ((local_14 == nullptr) ||
             (iVar6 = local_14->vfunc_F8(), iVar6 == 0)) {
            st::fn_006B0C70(pDVar5,uVar12);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 - 1;
            uVar12 = uVar12 - 1;
          }
          else {
            st::fn_006AE140(local_18,uVar12,&local_14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_2);
      }
      st::fn_006AE110(pDVar5);
      if (param_2 != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = local_18->data;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 10000;
        local_10 = 0;
        uVar12 = param_2;
        pSVar13 = local_14;
        if (0 < (int)param_2) {
          do {
            pSVar1 = pSVar13->vtable;
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_58 + 3);
            iVar9 = *(int *)((int)&pSVar1->vfunc_100 + 1);
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
            if ((int)uVar8 < (int)param_1) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = uVar8;
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
        if ((int)param_1 < 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = 0;
        }
        if (g_worldGrid.sizeY + -1 < local_10) {
          local_10 = g_worldGrid.sizeY + -1;
        }
        local_28 = 5;
        iVar7 = ((int)g_worldGrid.sizeX * param_1 - (int)g_worldGrid.planeStride) + local_8;
        iVar6 = local_c;
        iVar9 = local_8;
        do {
          iVar7 = iVar7 + g_worldGrid.planeStride;
          iVar11 = iVar7 - g_worldGrid.sizeX;
          if ((int)param_1 <= local_10) {
            local_24 = (local_10 - param_1) + 1;
            do {
              iVar11 = iVar11 + g_worldGrid.sizeX;
              if (iVar9 <= iVar6) {
                local_20 = (iVar6 - iVar9) + 1;
                iVar6 = iVar11 * 8 + -8;
                do {
                  piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  if (((piVar2 != nullptr) &&
                      (((iVar9 = piVar2[8], iVar9 == 0x14 || (iVar9 == 1000)) || (iVar9 == 0x3e9))))
                     && ((((param_3 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          (iVar9 = (**(code **)(*piVar2 + 0xf8))(), iVar9 != 0)) &&
                         (local_1c = 0, 0 < (int)param_2)))) {
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_4 = (int *)local_14;
                    do {
                      iVar9 = *param_4;
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
                      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                      param_4 = param_4 + 1;
                    } while (local_1c < (int)param_2);
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
#line 1 "decomp/ST.exe/functions/0044E660/decomp.c"
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
#line 1 "decomp/ST.exe/functions/0044EDE0/decomp.c"
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

