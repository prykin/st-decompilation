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
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7 + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7;
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = iVar6;
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = local_8 + -3;
    if (param_2 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
    }
    local_8 = iVar5 + 4;
    if (g_worldGrid.sizeY < local_8) {
      local_8 = (int)g_worldGrid.sizeY;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = iVar4 + 4;
    if (g_worldGrid.sizeX < param_3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (int)g_worldGrid.sizeX;
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          ((VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_c,&local_10), pVVar3 = g_visibleClass_00802A88, -1 < param_1 &&
           ((((param_1 < 5 && (-1 < local_c)) && (local_c < pVVar2->field_0030)) &&
            ((iVar5 = g_centeredOffsets5[param_1] + local_10, -1 < iVar5 &&
             (iVar5 < pVVar2->field_0034)))))))) && (pVVar2->field_004C != nullptr)) &&
        ((pVVar2->field_004C[local_c + iVar5 * pVVar2->field_0030] == 0 && (DAT_0080874d != -1))))
       && (((((g_visibleClass_00802A88->field_00F8 != 0 &&
              (((VisibleClassTy::sub_00558C00
                           (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                            iVar6,&local_10,&local_c), pVVar2 = g_visibleClass_00802A88,
                -1 < local_10 && (local_10 < pVVar3->field_0030)) &&
               (iVar5 = g_centeredOffsets5[param_1] + local_c, -1 < iVar5)))) &&
             (((iVar5 < pVVar3->field_0034 && (pVVar3->field_004C != nullptr)) &&
              (pVVar3->field_004C[local_10 + iVar5 * pVVar3->field_0030] == 0)))) &&
            ((((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)) &&
              ((VisibleClassTy::sub_00558C00
                          (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_3,iVar6
                           ,&local_10,&local_c), iVar5 = local_8, pVVar3 = g_visibleClass_00802A88,
               -1 < local_10 &&
               (((local_10 < pVVar2->field_0030 &&
                 (local_c = g_centeredOffsets5[param_1] + local_c, -1 < local_c)) &&
                (local_c < pVVar2->field_0034)))))) &&
             ((pVVar2->field_004C != nullptr &&
              (pVVar2->field_004C[local_10 + local_c * pVVar2->field_0030] == 0)))))) &&
           ((DAT_0080874d != -1 &&
            (((g_visibleClass_00802A88->field_00F8 != 0 &&
              (VisibleClassTy::sub_00558C00
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                          local_8,&param_2,&local_10), -1 < param_2)) &&
             ((param_2 < pVVar3->field_0030 &&
              ((((local_10 = g_centeredOffsets5[param_1] + local_10, -1 < local_10 &&
                 (local_10 < pVVar3->field_0034)) && (pVVar3->field_004C != nullptr)) &&
               ((pVVar3->field_004C[param_2 + local_10 * pVVar3->field_0030] == 0 &&
                (iVar5 = VisibleClassTy::sub_005F1D80(g_visibleClass_00802A88,param_3,iVar5,param_1)
                , iVar5 != 1)))))))))))))) {
      return 0;
    }
  }
  return iVar7;
}

