
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\prepare.cpp
   Diagnostic line evidence: 207 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 006A2ED0 returns used as parameter 3 of cMf32::RecPut @ 006A0893 */

byte * __cdecl FUN_006a2ed0(short *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  AnonShape_006DBCA0_EF06575F *pAVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000008;
  int local_18;
  HoloTy *local_14;
  short *local_8;

  local_8 = (short *)0x0;
  pAVar6 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
  if (pAVar6 == (AnonShape_006DBCA0_EF06575F *)0x0) {
    local_14 = (HoloTy *)0x0;
  }
  else {
    local_14 = (HoloTy *)FUN_006dbca0(pAVar6);
    if (local_14 != (HoloTy *)0x0) goto LAB_006a2f2f;
  }
  RaiseInternalException
            (-2,g_overwriteContext_007ED77C,"E:\\__titans\\Maps\\prepare.cpp",0xcf);
LAB_006a2f2f:
  dVar2 = (double)((float)(int)param_1[1] * _DAT_0079d84c);
  dVar3 = (double)((float)-(int)param_1[1] * _DAT_0079d84c);
  dVar4 = (double)((float)(int)*param_1 * _DAT_0079d84c);
  dVar5 = (double)((float)-(int)*param_1 * _DAT_0079d84c);
  FUN_006dc050((AnonShape_GLOBAL_00807598_0C6808FB *)local_14,0,0,0,0x8c,0x8c,SUB84(dVar5,0),
               (int)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
               SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
               (int)((ulonglong)dVar2 >> 0x20),0x4024000000000000,0x4023ee97865e3540,0);
  *(undefined4 *)((int)&local_14[5].field_0027 + 2) = 0xe0;
  *(undefined4 *)((int)&local_14[5].field_0023 + 2) = 2;
  *(undefined4 *)((int)&local_14[0x15].field_0007 + 2) = 0xe6e4e2e0;
  *(undefined2 *)((int)&local_14[0x15].field_000B + 2) = 0xeae8;
  iVar10 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piVar13 = (int *)((int)param_1 + 0x459);
    do {
      puVar9 = (undefined4 *)*piVar13;
      if ((puVar9 != (undefined4 *)0x0) && (*(short *)(puVar9 + 2) != 0)) {
        *puVar9 = *(undefined4 *)((int)&local_14[6].field_000B + 3);
        *(undefined4 **)((int)&local_14[6].field_000B + 3) = puVar9;
        piVar1 = (int *)((int)&local_14[6].field_0007 + 3);
        *piVar1 = *piVar1 + 1;
      }
      iVar10 = iVar10 + 1;
      piVar13 = piVar13 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar10 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(local_14,8,SUB84((double)((float)(int)*param_1 * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)*param_1 * _DAT_007904f4) >> 0x20),
               SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
  FUN_006ddbe0((AnonShape_GLOBAL_00807598_0C6808FB *)local_14);
  FUN_006ddd50((AnonShape_006DDD50_309FA381 *)local_14);
  local_8 = (short *)Library::DKW::LIB::FUN_006aac10(0x4b79);
  iVar14 = 0;
  iVar10 = 0;
  do {
    puVar9 = (undefined4 *)
             (*(int *)((int)&local_14->field_0027 + 1) * iVar14 +
             *(int *)((int)&local_14->field_000B + 1));
    puVar17 = (undefined4 *)((int)local_8 + iVar10);
    for (iVar11 = 0x22; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar17 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar17 = puVar17 + 1;
    }
    *(undefined2 *)puVar17 = *(undefined2 *)puVar9;
    iVar10 = iVar10 + 0x8b;
    iVar14 = iVar14 + 1;
    *(undefined1 *)((int)puVar17 + 2) = *(undefined1 *)((int)puVar9 + 2);
  } while (iVar10 < 0x4b79);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar7 = cMf32::RecGet(in_stack_00000008,1,PTR_s_PALETTE_0079d848,(int *)0x0,1);
  pbVar8 = (byte *)FUN_006b50c0(0x8b,0x8b,8,0x100,(undefined4 *)(puVar7 + 0x14),1);
  uVar16 = *(uint *)(pbVar8 + 0x14);
  if (uVar16 == 0) {
    uVar16 = ((uint)*(ushort *)(pbVar8 + 0xe) * *(int *)(pbVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(pbVar8 + 8);
  }
  puVar9 = (undefined4 *)FUN_006b4fa0((int)pbVar8);
  for (uVar12 = uVar16 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_1 = local_8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  in_stack_00000008 = (cMf32 *)0x45;
  iVar11 = FUN_006b4fa0((int)pbVar8);
  local_18 = 0x46;
  iVar11 = iVar11 + ((uint)*(ushort *)(pbVar8 + 0xe) * *(int *)(pbVar8 + 4) + 0x1f >> 3 & 0x1ffffffc
                    ) * (*(int *)(pbVar8 + 8) + -1);
  iVar10 = 0x45;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar14 = (int)in_stack_00000008;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)iVar14;
    iVar18 = iVar10;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar18 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar10 = ((int)in_stack_00000008 - iVar18) + 1;
      puVar15 = (undefined1 *)(iVar11 + iVar18);
      do {
        iVar10 = iVar10 + -1;
        *puVar15 = (puVar15 + 1)[(int)param_1 + (-1 - iVar11)];
        puVar15 = puVar15 + 1;
      } while (iVar10 != 0);
    }
    param_1 = (short *)((int)param_1 + 0x8b);
    iVar11 = iVar11 - ((uint)*(ushort *)(pbVar8 + 0xe) * *(int *)(pbVar8 + 4) + 0x1f >> 3 &
                      0x1ffffffc);
    local_18 = local_18 + -1;
    iVar10 = iVar18 + -1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar14 = (int)in_stack_00000008 + 1;
  } while (local_18 != 0);
  local_18 = 0x45;
  do {
    iVar18 = iVar18 + 1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)((int)in_stack_00000008 + -1);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar18 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar10 = ((int)in_stack_00000008 - iVar18) + 1;
      puVar15 = (undefined1 *)(iVar11 + iVar18);
      do {
        iVar10 = iVar10 + -1;
        *puVar15 = puVar15[(int)param_1 - iVar11];
        puVar15 = puVar15 + 1;
      } while (iVar10 != 0);
    }
    iVar11 = iVar11 - ((uint)*(ushort *)(pbVar8 + 0xe) * *(int *)(pbVar8 + 4) + 0x1f >> 3 &
                      0x1ffffffc);
    param_1 = (short *)((int)param_1 + 0x8b);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_14 != (HoloTy *)0x0) {
    FUN_006dbcf0((int *)local_14);
    Library::MSVCRT::FUN_0072e2b0(local_14);
  }
  if (local_8 != (short *)0x0) {
    FreeAndNull(&local_8);
  }
  return pbVar8;
}

