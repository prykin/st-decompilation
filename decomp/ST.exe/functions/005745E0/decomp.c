#include "../../pseudocode_runtime.h"


void __cdecl FUN_005745e0(AnonShape_005745E0_AF52CC75 *param_1,undefined4 *param_2)

{
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **ppRVar1;
  ushort uVar2;
  AnonNested_AnonShape_005745E0_AF52CC75_044D_E2486BFB *pAVar3;
  ST3DSMAPContext *pSVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 local_28;
  void *local_24;
  int local_20;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (((*(short *)(param_2 + 2) != 0) &&
      (uVar2 = STField<ushort>(param_2,0x4e), (uVar2 & 0x4000) == 0)) &&
     (((uVar2 & 0x2000) == 0 || ((uVar2 & 0x1000) == 0)))) {
    param_1->field_044D->field_0004 = 0;
    do {
      pAVar3 = param_1->field_044D;
      uVar8 = pAVar3->field_0004;
      if ((uint)pAVar3->field_000C <= uVar8) goto cf_break_loop_00574651;
      piVar6 = (int *)(*(int *)&pAVar3->field_0x8 * uVar8 + pAVar3[1].field_000C);
      pAVar3->field_0004 = uVar8 + 1;
      if (piVar6 == nullptr) goto cf_break_loop_00574651;
    } while (param_2[10] != *piVar6);
    if (piVar6 == nullptr) {
cf_break_loop_00574651:
      local_14 = (int)STField<short>(param_2,6);
      local_18 = (void *)(int)*(short *)(param_2 + 1);
      local_10 = (int)*(short *)(param_2 + 2);
      *(undefined2 *)(param_2 + 1) = 0;
      STField<undefined2>(param_2,6) = 0;
      *(undefined2 *)(param_2 + 2) = 0;
      pSVar4 = g_sT3DSMAPContext_0080760C;
      ppRVar1 = &g_sT3DSMAPContext_0080760C->field_0140;
      *param_2 = g_sT3DSMAPContext_0080760C->field_0140;
      *ppRVar1 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)param_2;
      pSVar4->field_013C = pSVar4->field_013C + 1;
      ST3DSMAPContext::sub_006DDBE0(g_sT3DSMAPContext_0080760C);
      g_sT3DSMAPContext_0080760C->field_0124 = 3;
      ST3DSMAPContext::sub_006DDD50(g_sT3DSMAPContext_0080760C);
      g_sT3DSMAPContext_0080760C->field_0124 = 4;
      ST3DSMAPContext::sub_006DDD50(g_sT3DSMAPContext_0080760C);
      pSVar4 = g_sT3DSMAPContext_0080760C;
      g_sT3DSMAPContext_0080760C->field_0140 = nullptr;
      pSVar4->field_013C = 0;
      *(undefined2 *)(param_2 + 1) = STPiece<0,2>(local_18);
      STField<undefined2>(param_2,6) = (undefined2)local_14;
      *(undefined2 *)(param_2 + 2) = (undefined2)local_10;
      local_24 = Library::DKW::LIB::MemAllocClear
                           ((uint)param_1->field_0004 * (uint)param_1->field_0004);
      local_28 = param_2[10];
      local_10 = 0;
      local_c = 0;
      while( true ) {
        do {
          local_14 = 0;
          uVar8 = (uint)param_1->field_0004;
          local_8 = 0;
          if (uVar8 != 0) {
            do {
              iVar7 = uVar8 * local_10 + local_8;
              local_20 = uVar8 * local_c;
              uVar10 = 0;
              if (uVar8 != 0) {
                pcVar11 = (char *)(g_sT3DSMAPContext_0080760C->field_0028 * iVar7 +
                                   g_sT3DSMAPContext_0080760C->field_000C + local_20);
                do {
                  if (*pcVar11 != '\0') {
                    if (*pcVar11 == -1) {
                      local_14 = local_14 + 1;
                      uVar9 = uVar10 & 0x80000003;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                      }
                      bVar5 = (&DAT_007ca6a4)[uVar9];
                    }
                    else {
                      uVar9 = uVar10 & 0x80000003;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                      }
                      bVar5 = *(byte *)(uVar9 + 0x7ca6a8);
                    }
                    pbVar12 = (byte *)((int)local_24 +
                                      (STSignedDiv4(uVar10)) +
                                      (STSignedDiv4(local_20)) +
                                      (int)(uVar8 * iVar7) / 2);
                    *pbVar12 = *pbVar12 | bVar5;
                  }
                  uVar10 = uVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                } while ((int)uVar10 < (int)(uint)param_1->field_0004);
              }
              local_8 = local_8 + 1;
              uVar8 = (uint)param_1->field_0004;
            } while (local_8 < (int)uVar8);
          }
          local_c = local_c + 1;
        } while (local_c < 2);
        local_10 = local_10 + 1;
        if (1 < local_10) break;
        local_c = 0;
      }
      local_18 = local_24;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)param_1->field_044D,&local_28);
      param_2[6] = local_18;
      return;
    }
    param_2[6] = piVar6[1];
  }
  return;
}

