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

byte * __cdecl st::fn_006A2ED0(short *param_1)

{
  int *piVar1;
  AnonShape_006DBCA0_EF06575F *pAVar2;
  ushort *puVar3;
  byte *pbVar4;
  byte *puVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  int *piVar10;
  int iVar11;
  byte *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000008;
  int local_18;
  HoloTy *local_14;
  short *local_8;

  local_8 = nullptr;
  pAVar2 = (AnonShape_006DBCA0_EF06575F *)st::fn_006B04D0(0x4f2);
  if (pAVar2 == nullptr) {
    local_14 = nullptr;
  }
  else {
    local_14 = (HoloTy *)st::fn_006DBCA0(pAVar2);
    if ((AnonShape_006DBCA0_EF06575F *)local_14 != nullptr)
    goto LAB_006a2f2f;
  }
  st::fn_006A5E40
            (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Maps\\prepare.cpp"),0xcf);
LAB_006a2f2f:
  st::fn_006DC050
            ((ST3DSMAPContext *)local_14,nullptr,0,0,0x8c,0x8c,
             (double)((float)-(int)*param_1 * _DAT_0079d84c),
             (double)((float)(int)*param_1 * _DAT_0079d84c),
             (double)((float)-(int)param_1[1] * _DAT_0079d84c),
             (double)((float)(int)param_1[1] * _DAT_0079d84c),10.0,9.965999793052674,0);
  *(undefined4 *)((int)&local_14[5].field_0027 + 2) = 0xe0;
  *(undefined4 *)((int)&local_14[5].field_0023 + 2) = 2;
  *(undefined4 *)((int)&local_14[0x15].field_0007 + 2) = 0xe6e4e2e0;
  *(undefined2 *)((int)&local_14[0x15].field_000B + 2) = 0xeae8;
  iVar6 = 0;
  if (0 < STField<int>(param_1,0x455)) {
    piVar10 = (int *)((int)param_1 + 0x459);
    do {
      puVar5 = (byte *)*piVar10;
      if ((puVar5 != nullptr) && (*(short *)(puVar5 + 2) != 0)) {
        *puVar5 = *(undefined4 *)((int)&local_14[6].field_000B + 3);
        *(undefined4 **)((int)&local_14[6].field_000B + 3) = st::pointer_boundary_cast<undefined4 *>(puVar5);
        piVar1 = (int *)((int)&local_14[6].field_0007 + 3);
        *piVar1 = *piVar1 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar6 < STField<int>(param_1,0x455));
  }
  st::fn_006DD610
            ((ST3DSMAPContext *)local_14,8,(double)((float)(int)*param_1 * _DAT_007904f4),
             (double)((float)(int)param_1[1] * _DAT_007904f4));
  st::fn_006DDBE0((ST3DSMAPContext *)local_14);
  st::fn_006DDD50((ST3DSMAPContext *)local_14);
  local_8 = static_cast<short *>(st::fn_006AAC10(0x4b79));
  iVar11 = 0;
  iVar6 = 0;
  do {
    puVar5 = (byte *)
             (*(int *)((int)&local_14->field_0027 + 1) * iVar11 +
             *(int *)((int)&local_14->field_000B + 1));
    puVar14 = (undefined4 *)((int)local_8 + iVar6);
    for (iVar8 = 0x22; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar5;
      puVar5 = (byte *)(puVar5 + 1);
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar5;
    iVar6 = iVar6 + 0x8b;
    iVar11 = iVar11 + 1;
    STField<undefined1>(puVar14,2) = STField<undefined1>(puVar5,2);
  } while (iVar6 < 0x4b79);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  puVar3 = st::fn_006F1CE0(in_stack_00000008,1,PTR_s_PALETTE_0079d848,nullptr,1);
  pbVar4 = (byte *)st::fn_006B50C0(0x8b,0x8b,8,0x100,(undefined4 *)(puVar3 + 0x14),1);
  uVar13 = *(uint *)(pbVar4 + 0x14);
  if (uVar13 == 0) {
    uVar13 = ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(pbVar4 + 8);
  }
  puVar5 = (byte *)st::fn_006B4FA0((int *)pbVar4);
  memset(puVar5, 0, uVar13); /* compiler bulk-zero initialization */
  auto param_1_after_write = local_8; /* compiler stack-slot lifetime split */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  in_stack_00000008 = (cMf32 *)0x45;
  iVar7 = st::fn_006B4FA0((int *)pbVar4);
  local_18 = 0x46;
  iVar8 = iVar7 + ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc)
                  * (*(int *)(pbVar4 + 8) + -1);
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
        *puVar12 = (puVar12 + 1)[(int)param_1_after_write + (-1 - iVar8)];
        puVar12 = puVar12 + 1;
      } while (iVar6 != 0);
    }
    param_1_after_write = (short *)((int)param_1_after_write + 0x8b);
    iVar8 = iVar8 - ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc
                    );
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
    iVar8 = iVar8 - ((uint)*(ushort *)(pbVar4 + 0xe) * *(int *)(pbVar4 + 4) + 0x1f >> 3 & 0x1ffffffc
                    );
    param_1_after_write = (short *)((int)param_1_after_write + 0x8b);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_14 != nullptr) {
    st::fn_006DBCF0((ST3DSMAPContext *)local_14);
    st::fn_0072E2B0(local_14);
  }
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  return pbVar4;
}

