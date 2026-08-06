#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00635da0(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
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
  if ((((iVar4 < g_sT3DSMAPContext_00807598->field_0048) ||
       (g_sT3DSMAPContext_00807598->field_0058 < iVar4)) ||
      (iVar5 < g_sT3DSMAPContext_00807598->field_0044)) ||
     (g_sT3DSMAPContext_00807598->field_0054 < iVar5)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006ddbd0();
  }
  pVVar2 = g_visibleClass_00802A88;
  if (((char)uVar3 != '\0') && (g_visibleClass_00802A88 != nullptr)) {
    if ((((DAT_0080874d != -1) &&
         ((uVar3 = 0, g_visibleClass_00802A88->field_00F8 != 0 &&
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                      &param_2,&param_3), uVar3 = param_1, -1 < param_1)))) &&
        ((param_1 < 5 &&
         ((((-1 < param_2 && (param_2 < (int)pVVar2->field_0030)) &&
           (uVar3 = g_centeredOffsets5[param_1] + param_3, -1 < (int)uVar3)) &&
          (((int)uVar3 < pVVar2->field_0034 && (pVVar2->field_004C != nullptr)))))))) &&
       (uVar3 = (uint)pVVar2->field_004C[param_2 + uVar3 * pVVar2->field_0030], uVar3 == 0)) {
      return 0;
    }
    return STReplaceLowByte((uint32_t)(uVar3), (uint8_t)(1));
  }
  return uVar3;
}

