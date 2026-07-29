#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067f4f0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar5;
  uint uVar6;
  bool bVar7;

  iVar2 = PTR_00848a2c->field_0008;
  uVar6 = 0;
  if (0 < iVar2) {
    if (iVar2 < 1) {
      pAVar5 = (AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *)0x0;
      pbVar3 = param_1;
      goto LAB_0067f51b;
    }
    do {
      pAVar5 = PTR_00848a2c->entries_0014[uVar6];
      pbVar3 = param_1;
LAB_0067f51b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < pAVar5->field_0000;
        if (bVar1 != pAVar5->field_0000) {
LAB_0067f53f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067f544;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pAVar5->field_0001;
        if (bVar1 != pAVar5->field_0001) goto LAB_0067f53f;
        pAVar5 = pAVar5 + 1;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067f544:
      if (iVar4 == 0) {
        if ((int)uVar6 < 0) {
          return 0;
        }
        if (PTR_00848a28->count <= uVar6) {
          return 0;
        }
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00848a28, uVar6) (runtime stride) */
        return (int)(PTR_00848a28->elementSize * uVar6 + (int)PTR_00848a28->data);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  return 0;
}

