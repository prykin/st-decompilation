#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061E110 @ 0061D22D */

undefined4 __fastcall FUN_0061e110(STLightC *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  sVar1 = param_1->field_0030;
  local_c = 0;
  local_8 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0032;
  iVar5 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0034;
  local_10 = STBiasedDiv16(sVar1, 200); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0036;
  iVar6 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_0038;
  iVar7 = STBiasedDiv16(sVar1, 0xc9); /* exact signed 16-bit grid-index division */
  sVar1 = param_1->field_003A;
  local_18 = STBiasedDiv16(sVar1, 200); /* exact signed 16-bit grid-index division */
  local_14 = iVar6;
  if (((((((g_sT3DSMAPContext_00807598->field_0048 <= local_8 + 1) &&
          (local_8 + -1 <= g_sT3DSMAPContext_00807598->field_0058)) &&
         (g_sT3DSMAPContext_00807598->field_0044 <= iVar5 + 1)) &&
        ((iVar5 + -1 <= g_sT3DSMAPContext_00807598->field_0054 &&
         (iVar4 = FUN_006ddbd0(), iVar4 != 0)))) ||
       (((g_sT3DSMAPContext_00807598->field_0048 <= iVar6 + 1 &&
         ((iVar6 + -1 <= g_sT3DSMAPContext_00807598->field_0058 &&
          (g_sT3DSMAPContext_00807598->field_0044 <= iVar7 + 1)))) &&
        ((iVar7 + -1 <= g_sT3DSMAPContext_00807598->field_0054 &&
         (iVar6 = FUN_006ddbd0(), iVar6 != 0)))))) &&
      (((((pVVar2 = g_visibleClass_00802A88, local_c = 1,
          g_visibleClass_00802A88 != nullptr && (DAT_0080874d != -1)) &&
         (g_visibleClass_00802A88->field_00F8 != 0)) &&
        /* ST_CALLSITE[0061E324]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (((VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_8,iVar5,
                      &local_8,&local_1c), pVVar3 = g_visibleClass_00802A88, -1 < local_10 &&
          (local_10 < 5)) &&
         ((-1 < local_8 &&
          ((local_8 < (int)pVVar2->field_0030 &&
           (iVar5 = g_centeredOffsets5[local_10] + local_1c, -1 < iVar5)))))))) &&
       (iVar5 < pVVar2->field_0034)))) &&
     (((((((pVVar2->field_004C != nullptr &&
           (pVVar2->field_004C[local_8 + iVar5 * pVVar2->field_0030] == 0)) && (DAT_0080874d != -1))
         && ((g_visibleClass_00802A88->field_00F8 != 0 &&
             /* ST_CALLSITE[0061E3BA]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
             (VisibleClassTy::sub_00558C00
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_14,iVar7,
                         &local_1c,&local_14), -1 < local_18)))) &&
        ((local_18 < 5 && ((-1 < local_1c && (local_1c < (int)pVVar3->field_0030)))))) &&
       (local_14 = g_centeredOffsets5[local_18] + local_14, -1 < local_14)) &&
      (((local_14 < pVVar3->field_0034 && (pVVar3->field_004C != nullptr)) &&
       (pVVar3->field_004C[local_1c + local_14 * pVVar3->field_0030] == 0)))))) {
    local_c = 0;
  }
  return local_c;
}

