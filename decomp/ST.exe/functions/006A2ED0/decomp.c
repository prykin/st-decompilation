#include "../../pseudocode_runtime.h"


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
  AnonShape_006DBCA0_EF06575F *pAVar2;
  ushort *puVar3;
  byte *pbVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000008;
  int local_18;
  HoloTy *local_14;
  short *local_8;

  local_8 = (short *)0x0;
  pAVar2 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
  if (pAVar2 == (AnonShape_006DBCA0_EF06575F *)0x0) {
    local_14 = (HoloTy *)0x0;
  }
  else {
    local_14 = (HoloTy *)FUN_006dbca0(pAVar2);
    if (local_14 != (HoloTy *)0x0) goto LAB_006a2f2f;
  }
  RaiseInternalException
            (-2,g_overwriteContext_007ED77C,"E:\\__titans\\Maps\\prepare.cpp",0xcf);
LAB_006a2f2f:
  ST3DSMAPContext::sub_006DC050
            ((ST3DSMAPContext *)local_14,0,0,0,0x8c,0x8c,
             (double)((float)-(int)*param_1 * _DAT_0079d84c),
             (double)((float)(int)*param_1 * _DAT_0079d84c),
             (double)((float)-(int)param_1[1] * _DAT_0079d84c),
             (double)((float)(int)param_1[1] * _DAT_0079d84c),0x4024000000000000,0x4023ee97865e3540,
             0);
  *(undefined4 *)((int)&local_14[5].field_0027 + 2) = 0xe0;
  *(undefined4 *)((int)&local_14[5].field_0023 + 2) = 2;
  *(undefined4 *)((int)&local_14[0x15].field_0007 + 2) = 0xe6e4e2e0;
  *(undefined2 *)((int)&local_14[0x15].field_000B + 2) = 0xeae8;
  iVar6 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piVar9 = (int *)((int)param_1 + 0x459);
    do {
      puVar5 = (byte *)*piVar9;
      if ((puVar5 != (undefined4 *)0x0) && (*(short *)(puVar5 + 2) != 0)) {
        *puVar5 = *(undefined4 *)((int)&local_14[6].field_000B + 3);
        *(undefined4 **)((int)&local_14[6].field_000B + 3) = puVar5;
        piVar1 = (int *)((int)&local_14[6].field_0007 + 3);
        *piVar1 = *piVar1 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar6 < *(int *)((int)param_1 + 0x455));
  }
  ST3DSMAPContext::sub_006DD610
            ((ST3DSMAPContext *)local_14,8,SUB84((double)((float)(int)*param_1 * _DAT_007904f4),0),
             (int)((ulonglong)(double)((float)(int)*param_1 * _DAT_007904f4) >> 0x20),
             SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
             (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
  ST3DSMAPContext::sub_006DDBE0((ST3DSMAPContext *)local_14);
  ST3DSMAPContext::sub_006DDD50((ST3DSMAPContext *)local_14);
  local_8 = (short *)Library::DKW::LIB::FUN_006aac10(0x4b79);
  iVar10 = 0;
  iVar6 = 0;
  do {
    puVar5 = (byte *)
             (*(int *)((int)&local_14->field_0027 + 1) * iVar10 +
             *(int *)((int)&local_14->field_000B + 1));
    puVar13 = (undefined4 *)((int)local_8 + iVar6);
    for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = *puVar5;
      puVar5 = (byte *)(puVar5 + 1);
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar5;
    iVar6 = iVar6 + 0x8b;
    iVar10 = iVar10 + 1;
    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar5 + 2);
  } while (iVar6 < 0x4b79);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar3 = cMf32::RecGet(in_stack_00000008,1,PTR_s_PALETTE_0079d848,(int *)0x0,1);
  pbVar4 = (byte *)FUN_006b50c0(0x8b,0x8b,8,0x100,(undefined4 *)(puVar3 + 0x14),1);
  uVar12 = *(uint *)(pbVar4 + 0x14);
  if (uVar12 == 0) {
    uVar12 = ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(pbVar4 + 8);
  }
  puVar5 = (byte *)FUN_006b4fa0((int *)pbVar4);
  memset(puVar5, 0, uVar12); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  in_stack_00000008 = (cMf32 *)0x45;
  iVar7 = FUN_006b4fa0((int *)pbVar4);
  local_18 = 0x46;
  iVar7 = iVar7 + ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc)
                  * (*(int *)(pbVar4 + 8) + -1);
  iVar6 = 0x45;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar10 = (int)in_stack_00000008;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)iVar10;
    iVar14 = iVar6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar14 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = ((int)in_stack_00000008 - iVar14) + 1;
      puVar11 = (undefined1 *)(iVar7 + iVar14);
      do {
        iVar6 = iVar6 + -1;
        *puVar11 = (puVar11 + 1)[(int)param_1 + (-1 - iVar7)];
        puVar11 = puVar11 + 1;
      } while (iVar6 != 0);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short *)((int)param_1 + 0x8b);
    iVar7 = iVar7 - ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc
                    );
    local_18 = local_18 + -1;
    iVar6 = iVar14 + -1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar10 = (int)in_stack_00000008 + 1;
  } while (local_18 != 0);
  local_18 = 0x45;
  do {
    iVar14 = iVar14 + 1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)((int)in_stack_00000008 + -1);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar14 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = ((int)in_stack_00000008 - iVar14) + 1;
      puVar11 = (undefined1 *)(iVar7 + iVar14);
      do {
        iVar6 = iVar6 + -1;
        *puVar11 = puVar11[(int)param_1 - iVar7];
        puVar11 = puVar11 + 1;
      } while (iVar6 != 0);
    }
    iVar7 = iVar7 - ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc
                    );
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short *)((int)param_1 + 0x8b);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_14 != (HoloTy *)0x0) {
    ST3DSMAPContext::sub_006DBCF0((ST3DSMAPContext *)local_14);
    Library::MSVCRT::FUN_0072e2b0(local_14);
  }
  if (local_8 != (short *)0x0) {
    FreeAndNull(&local_8);
  }
  return pbVar4;
}

