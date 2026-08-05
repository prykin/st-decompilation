#include "../../pseudocode_runtime.h"


void __cdecl FUN_00575460(AnonShape_00575460_06C413C6 *param_1)

{
  void **value;
  int iVar1;
  uint uVar2;
  ST3DSMAPContext *pSVar3;
  AnonShape_00575460_06C413C6 *pAVar4;
  DArrayTy *array;
  int iVar5;
  undefined4 *puVar6;
  int local_8;

  pAVar4 = param_1;
  pSVar3 = g_sT3DSMAPContext_0080760C;
  if (g_sT3DSMAPContext_0080760C != nullptr) {
    ST3DSMAPContext::sub_006DBCF0(g_sT3DSMAPContext_0080760C);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar3);
    g_sT3DSMAPContext_0080760C = nullptr;
  }
  if (param_1 != nullptr) {
    array = Library::DKW::TBL::DArrayCreate(nullptr,0x14,4,0x14);
    *(undefined4 *)(param_1->field_0451 + 4) = 0;
    while( true ) {
      iVar1 = param_1->field_0451;
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (iVar5 == 0) break;
      puVar6 = (undefined4 *)(iVar5 + 8);
      Library::DKW::TBL::DArrayAppend(array,puVar6);
      FUN_006a5e90((short *)*puVar6);
    }
    DArrayDestroy((DArrayTy *)param_1->field_0451);
    param_1->field_0451 = 0;
    local_8 = 0;
    if (0 < param_1->field_0455) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x459;
      do {
        iVar1 = *(int *)param_1;
        if ((iVar1 != 0) && (value = (void **)(iVar1 + 0xc), *(int *)(iVar1 + 0xc) != 0)) {
          array->iteratorIndex = 0;
          do {
            uVar2 = array->iteratorIndex;
            if (array->count <= uVar2) goto LAB_0057554f;
            puVar6 = DArrayAt<undefined4>(array, uVar2);
            array->iteratorIndex = uVar2 + 1;
            if (puVar6 == nullptr) goto LAB_0057554f;
          } while (*value != (void *)*puVar6);
          if (puVar6 == nullptr) {
LAB_0057554f:
            Library::DKW::TBL::DArrayAppend(array,value);
            FreeAndNull(value);
          }
          *value = nullptr;
        }
        local_8 = local_8 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (AnonShape_00575460_06C413C6 *)&param_1->field_0x4;
      } while (local_8 < pAVar4->field_0455);
    }
    DArrayDestroy(array);
  }
  *(undefined4 *)(*(int *)&pAVar4->field_0x44d + 4) = 0;
  while( true ) {
    iVar1 = *(int *)&pAVar4->field_0x44d;
    uVar2 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
    iVar5 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
    *(uint *)(iVar1 + 4) = uVar2 + 1;
    if (iVar5 == 0) break;
    FUN_006a5e90(*(short **)(iVar5 + 4));
  }
  DArrayDestroy(*(DArrayTy **)&pAVar4->field_0x44d);
  *(undefined4 *)&pAVar4->field_0x44d = 0;
  return;
}

