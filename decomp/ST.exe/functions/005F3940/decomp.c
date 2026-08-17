#include "../../pseudocode_runtime.h"


int FUN_005f3940(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  iVar4 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar5 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
  param_2 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4) &&
       (iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar5)) &&
     (iVar5 <= g_sT3DSMAPContext_00807598->field_0054)) {
    iVar3 = FUN_006ddbd0();
    pVVar2 = g_visibleClass_00802A88;
    if (iVar3 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return iVar3;
    }
    if (DAT_0080874d == -1) {
      return iVar3;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar3;
    }
    /* ST_CALLSITE[005F3A3E]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,&param_3,
               &local_8);
    if (param_2 < 0) {
      return iVar3;
    }
    if (4 < param_2) {
      return iVar3;
    }
    if (param_3 < 0) {
      return iVar3;
    }
    if ((int)pVVar2->field_0030 <= param_3) {
      return iVar3;
    }
    local_8 = g_centeredOffsets5[param_2] + local_8;
    if (local_8 < 0) {
      return iVar3;
    }
    if (pVVar2->field_0034 <= local_8) {
      return iVar3;
    }
    if (pVVar2->field_004C == nullptr) {
      return iVar3;
    }
    if (pVVar2->field_004C[param_3 + local_8 * pVVar2->field_0030] != 0) {
      return iVar3;
    }
  }
  return 0;
}

