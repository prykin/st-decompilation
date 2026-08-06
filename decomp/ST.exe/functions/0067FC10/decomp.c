#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067fc10(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;

  dVar2 = g_dArray_00848A3C->elementSize;
  iVar6 = 0;
  if (0 < (int)dVar2) {
    if ((int)dVar2 < 1) {
      pbVar5 = nullptr;
      pbVar3 = param_1;
      goto LAB_0067fc3b;
    }
    do {
      pbVar5 = *(byte **)(g_dArray_00848A3C->growCapacity + iVar6 * 4);
      pbVar3 = param_1;
LAB_0067fc3b:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0067fc5f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0067fc64;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0067fc5f;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0067fc64:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)dVar2);
  }
  return -1;
}

