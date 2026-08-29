#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/prepare.cpp

// 006A2ED0 FUN_006a2ed0
#line 4 "decomp/ST.exe/functions/006A2ED0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\prepare.cpp
   Diagnostic line evidence: 207 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated return.
   Evidence: 006A2ED0 returns used as parameter 3 of cMf32::RecPut @ 006A0893 */

byte * __cdecl st::fn_006A2ED0(RecoveredRecord_006A2ED0_9EFE711B *param_1)

{
  int *piVar1;
  AnonShape_006DBCA0_EF06575F *pAVar2;
  ushort *puVar3;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar4;
  byte *puVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  RecoveredRecord_006A2ED0_9EFE711B *pRVar10;
  int iVar11;
  byte *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000008;
  int local_18;
  HoloTy *local_14;
  RecoveredRecord_006A2ED0_9EFE711B *local_8;

  local_8 = nullptr;
  /* ST_CALLSITE[006A2EFB]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F;/uint */
  pAVar2 = st::pointer_boundary_cast<AnonShape_006DBCA0_EF06575F *>(st::fn_006B04D0(0x4f2));
  if (pAVar2 == nullptr) {
    local_14 = nullptr;
  }
  else {
    local_14 = reinterpret_cast<HoloTy *>(st::fn_006DBCA0(pAVar2));
    if ((AnonShape_006DBCA0_EF06575F *)local_14 != nullptr)
    goto LAB_006a2f2f;
  }
  st::fn_006A5E40
            (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Maps\\prepare.cpp"),0xcf);
LAB_006a2f2f:
  st::fn_006DC050
            (reinterpret_cast<ST3DSMAPContext *>(local_14),nullptr,0,0,0x8c,0x8c,
             (double)((float)-(int)*(short *)param_1 * _DAT_0079d84c),
             (double)((float)(int)*(short *)param_1 * _DAT_0079d84c),
             (double)((float)-(int)*(short *)&param_1->field_0x2 * _DAT_0079d84c),
             (double)((float)(int)*(short *)&param_1->field_0x2 * _DAT_0079d84c),10.0,
             9.965999793052674,0);
  *(undefined4 *)((int)&local_14[5].field_0027 + 2) = 0xe0;
  *(undefined4 *)((int)&local_14[5].field_0023 + 2) = 2;
  *(undefined4 *)((int)&local_14[0x15].field_0007 + 2) = 0xe6e4e2e0;
  *(undefined2 *)((int)&local_14[0x15].field_000B + 2) = 0xeae8;
  iVar6 = 0;
  if (0 < param_1->field_0455) {
    pRVar10 = param_1 + 1;
    do {
      puVar5 = reinterpret_cast<byte *>((*(undefined4 **)pRVar10));
      if ((puVar5 != nullptr) && (*(short *)(puVar5 + 2) != 0)) {
        *puVar5 = *(undefined4 *)((int)&local_14[6].field_000B + 3);
        *(undefined4 **)((int)&local_14[6].field_000B + 3) = reinterpret_cast<undefined4 *>(puVar5);
        piVar1 = (int *)((int)&local_14[6].field_0007 + 3);
        *piVar1 = *piVar1 + 1;
      }
      iVar6 = iVar6 + 1;
      pRVar10 = reinterpret_cast<RecoveredRecord_006A2ED0_9EFE711B *>(reinterpret_cast<byte *>(pRVar10) + 0x4);
    } while (iVar6 < param_1->field_0455);
  }
  st::fn_006DD610
            (reinterpret_cast<ST3DSMAPContext *>(local_14),8,(double)((float)(int)*(short *)param_1 * _DAT_007904f4),
             (double)((float)(int)*(short *)&param_1->field_0x2 * _DAT_007904f4));
  st::fn_006DDBE0(reinterpret_cast<ST3DSMAPContext *>(local_14));
  st::fn_006DDD50(reinterpret_cast<ST3DSMAPContext *>(local_14));

  local_8 = static_cast<RecoveredRecord_006A2ED0_9EFE711B *>(st::fn_006AAC10(0x4b79));
  iVar11 = 0;
  iVar6 = 0;
  do {
    puVar5 = (byte *)
             (STField<int>(local_14,0x28) * iVar11 +
             STField<int>(local_14,0xC));
    puVar14 = (undefined4 *)((int)&local_8->field_0x0 + iVar6);
    for (iVar8 = 0x22; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar5;
      puVar5 = reinterpret_cast<byte *>((puVar5 + 1));
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar5;
    iVar6 = iVar6 + 0x8b;
    iVar11 = iVar11 + 1;
    STField<undefined1>(puVar14,2) = STField<undefined1>(puVar5,2);
  } while (iVar6 < 0x4b79);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar3 = st::fn_006F1CE0(in_stack_00000008,1,PTR_s_PALETTE_0079d848,nullptr,1);
  /* ST_CALLSITE[006A30BA]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
  pRVar4 = st::pointer_boundary_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(st::fn_006B50C0(0x8b,0x8b,8,0x100,reinterpret_cast<undefined4 *>((puVar3 + 0x14)),1));
  uVar13 = *(uint *)&pRVar4[1].field_0x4;
  if (uVar13 == 0) {
    uVar13 = ((uint)pRVar4->field_000E * *(int *)&pRVar4->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)&pRVar4->field_0x8;
  }

  puVar5 = STPointerBoundaryCast<byte *>(st::fn_006B4FA0(pRVar4));
  memset(puVar5, 0, uVar13); /* compiler bulk-zero initialization */
  auto param_1_after_write = local_8; /* compiler stack-slot lifetime split */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  in_stack_00000008 = (cMf32 *)0x45;

  iVar7 = st::fn_006B4FA0(pRVar4);
  local_18 = 0x46;
  iVar8 = iVar7 + ((uint)pRVar4->field_000E * *(int *)&pRVar4->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                  (*(int *)&pRVar4->field_0x8 + -1);
  iVar6 = 0x45;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar11 = (int)in_stack_00000008;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)iVar11;
    iVar15 = iVar6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar15 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = ((int)in_stack_00000008 - iVar15) + 1;
      puVar12 = (undefined1 *)(iVar8 + iVar15);
      do {
        iVar6 = iVar6 + -1;
        *puVar12 = static_cast<byte>(st::machine_word_boundary_cast<uint>((puVar12 + 1)[(int)param_1_after_write + (-1 - iVar8)]));
        puVar12 = puVar12 + 1;
      } while (iVar6 != 0);
    }
    param_1_after_write = reinterpret_cast<RecoveredRecord_006A2ED0_9EFE711B *>(reinterpret_cast<byte *>(param_1_after_write) + 0x8B);
    iVar8 = iVar8 - ((uint)pRVar4->field_000E * *(int *)&pRVar4->field_0x4 + 0x1f >> 3 & 0x1ffffffc);
    local_18 = local_18 + -1;
    iVar6 = iVar15 + -1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar11 = (int)in_stack_00000008 + 1;
  } while (local_18 != 0);
  local_18 = 0x45;
  do {
    iVar15 = iVar15 + 1;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_00000008 = (cMf32 *)((int)in_stack_00000008 + -1);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (iVar15 <= (int)in_stack_00000008) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = ((int)in_stack_00000008 - iVar15) + 1;
      puVar12 = (undefined1 *)(iVar8 + iVar15);
      do {
        iVar6 = iVar6 + -1;
        *puVar12 = puVar12[(int)param_1_after_write - iVar8];
        puVar12 = puVar12 + 1;
      } while (iVar6 != 0);
    }
    iVar8 = iVar8 - ((uint)pRVar4->field_000E * *(int *)&pRVar4->field_0x4 + 0x1f >> 3 & 0x1ffffffc);
    param_1_after_write = reinterpret_cast<RecoveredRecord_006A2ED0_9EFE711B *>(reinterpret_cast<byte *>(param_1_after_write) + 0x8B);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_14 != nullptr) {
    st::fn_006DBCF0(reinterpret_cast<ST3DSMAPContext *>(local_14));
    st::fn_0072E2B0(local_14);
  }
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  return (byte *)pRVar4;
}
