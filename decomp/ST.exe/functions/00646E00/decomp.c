#include "../../pseudocode_runtime.h"


int FUN_00646e00(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_2;
  iVar5 = param_1;
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar7 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7 + -1;
  }
  else {
    iVar7 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7;
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar6 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = iVar6 + -1;
  }
  else {
    iVar6 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    param_2 = iVar6;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if (iVar4 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (iVar5 < 0) {
    iVar7 = iVar7 + -1;
  }
  if ((((iVar7 + 3 < g_sT3DSMAPContext_00807598->field_0048) ||
       (g_sT3DSMAPContext_00807598->field_0058 < iVar7 + -3)) ||
      (iVar6 + 3 < g_sT3DSMAPContext_00807598->field_0044)) ||
     (g_sT3DSMAPContext_00807598->field_0054 < iVar6 + -3)) {
    return 0;
  }
  iVar7 = FUN_006ddbd0();
  iVar4 = local_8;
  iVar5 = param_2;
  pVVar2 = g_visibleClass_00802A88;
  if ((iVar7 != 0) && (g_visibleClass_00802A88 != nullptr)) {
    iVar6 = param_2 + -3;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    param_2 = local_8 + -3;
    if (param_2 < 0) {
      param_2 = 0;
    }
    local_8 = iVar5 + 4;
    if (g_worldGrid.sizeY < local_8) {
      local_8 = (int)g_worldGrid.sizeY;
    }
    auto param_3_after_write = iVar4 + 4; /* compiler stack-slot lifetime split */
    if (g_worldGrid.sizeX < param_3_after_write) {
      param_3_after_write = (int)g_worldGrid.sizeX;
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          /* ST_CALLSITE[00646F85]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          ((VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_c,&local_10), pVVar3 = g_visibleClass_00802A88, -1 < param_1 &&
           ((((param_1 < 5 && (-1 < local_c)) && (local_c < pVVar2->field_0030)) &&
            ((iVar5 = g_centeredOffsets5[param_1] + local_10, -1 < iVar5 &&
             (iVar5 < pVVar2->field_0034)))))))) && (pVVar2->field_004C != nullptr)) &&
        ((pVVar2->field_004C[local_c + iVar5 * pVVar2->field_0030] == 0 && (DAT_0080874d != -1))))
       && (((((g_visibleClass_00802A88->field_00F8 != 0 &&
              /* ST_CALLSITE[00647027]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
              (((VisibleClassTy::sub_00558C00
                           (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                            iVar6,&local_10,&local_c), pVVar2 = g_visibleClass_00802A88,
                -1 < local_10 && (local_10 < pVVar3->field_0030)) &&
               (iVar5 = g_centeredOffsets5[param_1] + local_c, -1 < iVar5)))) &&
             (((iVar5 < pVVar3->field_0034 && (pVVar3->field_004C != nullptr)) &&
              (pVVar3->field_004C[local_10 + iVar5 * pVVar3->field_0030] == 0)))) &&
            ((((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)) &&
              /* ST_CALLSITE[006470B8]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
              ((VisibleClassTy::sub_00558C00
                          (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_3_after_write,iVar6
                           ,&local_10,&local_c), iVar5 = local_8, pVVar3 = g_visibleClass_00802A88,
               -1 < local_10 &&
               (((local_10 < pVVar2->field_0030 &&
                 (local_c = g_centeredOffsets5[param_1] + local_c, -1 < local_c)) &&
                (local_c < pVVar2->field_0034)))))) &&
             ((pVVar2->field_004C != nullptr &&
              (pVVar2->field_004C[local_10 + local_c * pVVar2->field_0030] == 0)))))) &&
           ((DAT_0080874d != -1 &&
            (((g_visibleClass_00802A88->field_00F8 != 0 &&
              /* ST_CALLSITE[00647148]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
              (VisibleClassTy::sub_00558C00
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                          local_8,&param_2,&local_10), -1 < param_2)) &&
             ((param_2 < pVVar3->field_0030 &&
              ((((local_10 = g_centeredOffsets5[param_1] + local_10, -1 < local_10 &&
                 (local_10 < pVVar3->field_0034)) && (pVVar3->field_004C != nullptr)) &&
               ((pVVar3->field_004C[param_2 + local_10 * pVVar3->field_0030] == 0 &&
                /* ST_CALLSITE[00647196]: CALL 0x00404e5d; direct=00404E5D VisibleClassTy::sub_005F1D80 */
                (iVar5 = VisibleClassTy::sub_005F1D80(g_visibleClass_00802A88,param_3_after_write,iVar5,param_1)
                , iVar5 != 1)))))))))))))) {
      return 0;
    }
  }
  return iVar7;
}

