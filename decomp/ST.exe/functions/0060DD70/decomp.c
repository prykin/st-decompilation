#include "../../pseudocode_runtime.h"


int __fastcall FUN_0060dd70(AnonShape_0060DD70_701DD710 *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar5 = param_1->field_01E9;
  iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar6 = param_1->field_01ED;
  iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
  iVar4 = param_1->field_01F1;
  local_8 = STBiasedDiv16(iVar4, 200); /* exact signed 16-bit grid-index division */
  iVar4 = param_1->field_024C;
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4 + iVar5) &&
       (iVar5 - iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar4 + iVar6)) &&
     (iVar6 - iVar4 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_14 = FUN_006ddbd0();
    pVVar2 = g_visibleClass_00802A88;
    if (local_14 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return local_14;
    }
    iVar4 = param_1->field_024C;
    local_18 = iVar6 - iVar4;
    if (local_18 < 0) {
      local_18 = 0;
    }
    local_c = iVar5 - iVar4;
    if (local_c < 0) {
      local_c = 0;
    }
    local_1c = iVar4 + 1 + iVar6;
    if (g_worldGrid.sizeY < local_1c) {
      local_1c = (int)g_worldGrid.sizeY;
    }
    local_10 = iVar4 + 1 + iVar5;
    if (g_worldGrid.sizeX < local_10) {
      local_10 = (int)g_worldGrid.sizeX;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    /* ST_CALLSITE[0060DEE8]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6,&local_20,
               &local_24);
    iVar6 = local_8;
    iVar5 = local_18;
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 < 0) {
      return local_14;
    }
    if (4 < local_8) {
      return local_14;
    }
    if (local_20 < 0) {
      return local_14;
    }
    if (pVVar2->field_0030 <= local_20) {
      return local_14;
    }
    iVar4 = g_centeredOffsets5[local_8] + local_24;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar2->field_004C[local_20 + iVar4 * pVVar2->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    /* ST_CALLSITE[0060DF8D]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_18,
               &local_24,&local_20);
    pVVar2 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    iVar6 = g_centeredOffsets5[iVar6] + local_20;
    if (iVar6 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= iVar6) {
      return local_14;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar3->field_004C[local_24 + iVar6 * pVVar3->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    /* ST_CALLSITE[0060E01B]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10,iVar5,&local_24,
               &local_20);
    iVar6 = local_8;
    iVar5 = local_1c;
    pVVar3 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar2->field_0030 <= local_24) {
      return local_14;
    }
    iVar4 = g_centeredOffsets5[local_8] + local_20;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar2->field_004C[local_24 + iVar4 * pVVar2->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    /* ST_CALLSITE[0060E0AB]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_1c,
               &local_24,&local_20);
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    local_20 = g_centeredOffsets5[iVar6] + local_20;
    if (local_20 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= local_20) {
      return local_14;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar3->field_004C[local_24 + local_20 * pVVar3->field_0030] != 0) {
      return local_14;
    }
    /* ST_CALLSITE[0060E0F9]: CALL 0x00404e5d; direct=00404E5D VisibleClassTy::sub_005F1D80 */
    iVar5 = VisibleClassTy::sub_005F1D80(g_visibleClass_00802A88,local_10,iVar5,local_8);
    if (iVar5 == 1) {
      return local_14;
    }
  }
  return 0;
}

