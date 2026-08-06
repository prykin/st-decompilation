#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067f860(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;

  dVar2 = g_dArray_00848A34->elementSize;
  uVar6 = 0;
  if (0 < (int)dVar2) {
    if ((int)dVar2 < 1) {
      pbVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067f88b;
    }
    do {
      pbVar5 = *(byte **)(g_dArray_00848A34->growCapacity + uVar6 * 4);
      pbVar3 = param_1;
LAB_0067f88b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067f8af:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f8b4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067f8af;
        pbVar5 = pbVar5 + 2;
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
    } while ((int)uVar6 < (int)dVar2);
  }
  return 0;
}

