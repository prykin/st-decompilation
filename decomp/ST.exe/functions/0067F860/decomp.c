#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067f860(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A34_1A834A18_0014_B03F56A9 *pAVar5;
  uint uVar6;
  bool bVar7;

  iVar2 = PTR_00848a34->field_0008;
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f88b;
    }
    do {
      pAVar5 = PTR_00848a34->entries_0014[uVar6];
      pbVar3 = param_1;
LAB_0067f88b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f8af:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f8b4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f8af;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f8b4:
      if (iVar4 == 0) {
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (g_array_00848A30->count <= uVar6) {
          return 0;
        }
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(g_array_00848A30, uVar6) (runtime stride) */
        return (int)(g_array_00848A30->elementSize * uVar6 + (int)g_array_00848A30->data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

