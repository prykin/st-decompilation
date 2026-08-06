#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0061D190 -> 0061DFE0 @ 0061D28F */

void __fastcall FUN_0061dfe0(STLightC *param_1)

{
  uint *puVar1;
  uint uVar2;
  STLightC_field_00A3DArray *pSVar3;
  ushort *puVar4;
  int *piVar5;
  bool bVar6;
  uint local_8;

  uVar2 = param_1->field_00AC * 0x41c64e6d + 0x3039;
  param_1->field_00AC = uVar2;
  pSVar3 = param_1->field_00A3;
  puVar4 = PTR_008032d0 + ((uVar2 >> 0x10) % 3 + 3) * 0x100;
  if (pSVar3 != nullptr) {
    local_8 = 0;
    if (0 < (int)pSVar3->count) {
      bVar6 = pSVar3->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((bVar6) &&
           (piVar5 = (int *)((int)&pSVar3->data->field_0000 + pSVar3->elementSize * local_8),
           piVar5 != nullptr)) {
          puVar1 = (uint *)((int)piVar5 + 0x26);
          ST3DSMAPContext::sub_006E88C0
                    (g_sT3DSMAPContext_00807598,(int *)puVar1,piVar5[1],piVar5[2],piVar5[3],
                     piVar5[4],piVar5[5],piVar5[6],piVar5[7],*(byte *)(piVar5 + 8),
                     STField<undefined4>(piVar5,0x21),puVar4,0xffffffff);
          if (STField<byte>(piVar5,0x2f) == 0) {
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,*puVar1);
          }
          else {
            Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*puVar1,0);
          }
        }
        pSVar3 = param_1->field_00A3;
        local_8 = local_8 + 1;
        bVar6 = local_8 < pSVar3->count;
      } while ((int)local_8 < (int)pSVar3->count);
    }
  }
  return;
}

