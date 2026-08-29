#include "../../pseudocode_runtime.h"


void __cdecl FUN_00575460(RecoveredRecordView_00575460_D990C64A *param_1)

{
  undefined4 *element;
  int *element_00;
  AnonNested_AnonShape_00575460_06C413C6_0451_3D38181E *pAVar1;
  uint uVar2;
  AnonNested_AnonShape_00575460_06C413C6_044D_A1003587 *pAVar3;
  ST3DSMAPContext *pSVar4;
  RecoveredRecordView_00575460_D990C64A *pRVar5;
  DArrayTy *array;
  int iVar6;
  int *piVar7;
  int local_8;

  pRVar5 = param_1;
  pSVar4 = g_sT3DSMAPContext_0080760C;
  if (g_sT3DSMAPContext_0080760C != nullptr) {
    ST3DSMAPContext::sub_006DBCF0(g_sT3DSMAPContext_0080760C);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar4);
    g_sT3DSMAPContext_0080760C = nullptr;
  }
  if (param_1 != nullptr) {
    array = Library::DKW::TBL::DArrayCreate(nullptr,0x14,4,0x14);
    param_1->field_0451->field_0004 = 0;
    while( true ) {
      pAVar1 = param_1->field_0451;
      uVar2 = pAVar1->field_0004;
      if ((uint)pAVar1->field_000C <= uVar2) break;
      iVar6 = *(int *)&pAVar1->field_0x8 * uVar2 + pAVar1[1].field_000C;
      pAVar1->field_0004 = uVar2 + 1;
      if (iVar6 == 0) break;
      element = (undefined4 *)(iVar6 + 8);

      Library::DKW::TBL::DArrayAppend(array,element);
      FUN_006a5e90((short *)*element);
    }
    DArrayDestroy((DArrayTy *)param_1->field_0451);
    param_1->field_0451 = nullptr;
    local_8 = 0;
    if (0 < param_1->field_0455) {
      auto param_1_after_write = (RecoveredRecordView_00575460_D990C64A *)&param_1->field_0x459; /* compiler stack-slot lifetime split */
      do {
        iVar6 = *(int *)param_1_after_write;
        if ((iVar6 != 0) && (element_00 = (int *)(iVar6 + 0xc), STField<int>(iVar6,0xC) != 0)) {
          array->iteratorIndex = 0;
          do {
            uVar2 = array->iteratorIndex;
            if (array->count <= uVar2) goto LAB_0057554f;
            piVar7 = DArrayAt<int>(array, uVar2);
            array->iteratorIndex = uVar2 + 1;
            if (piVar7 == nullptr) goto LAB_0057554f;
          } while (*element_00 != *piVar7);
          if (piVar7 == nullptr) {
LAB_0057554f:

            Library::DKW::TBL::DArrayAppend(array,element_00);
            FreeAndNull(element_00);
          }
          *element_00 = 0;
        }
        local_8 = local_8 + 1;
        param_1_after_write = (RecoveredRecordView_00575460_D990C64A *)&param_1_after_write->field_0x4;
      } while (local_8 < pRVar5->field_0455);
    }
    DArrayDestroy(array);
  }
  pRVar5->field_044D->field_0004 = 0;
  while( true ) {
    pAVar3 = pRVar5->field_044D;
    uVar2 = pAVar3->field_0004;
    if ((uint)pAVar3->field_000C <= uVar2) break;
    iVar6 = *(int *)&pAVar3->field_0x8 * uVar2 + pAVar3[1].field_000C;
    pAVar3->field_0004 = uVar2 + 1;
    if (iVar6 == 0) break;
    FUN_006a5e90(*(short **)(iVar6 + 4));
  }
  DArrayDestroy((DArrayTy *)pRVar5->field_044D);
  pRVar5->field_044D = nullptr;
  return;
}

