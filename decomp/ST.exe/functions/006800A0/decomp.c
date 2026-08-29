#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006829B0 @ 006829BF
   -> MOV MOV ESI,EAX */

int __cdecl FUN_006800a0(byte *param_1)

{
  byte bVar1;
  dword dVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;


  iVar3 = thunk_FUN_0067ff00((char *)param_1);
  if (-1 < iVar3) {
    return 5;
  }

  iVar3 = thunk_FUN_0067ff50((char *)param_1);
  if (-1 < iVar3) {
    return 6;
  }

  iVar3 = thunk_FUN_0067ffa0((char *)param_1);
  if (-1 < iVar3) {
    return 7;
  }

  iVar3 = thunk_FUN_0067fff0((char *)param_1);
  if (-1 < iVar3) {
    return 8;
  }
  pcVar4 = thunk_FUN_0067eea0(param_1);
  if (pcVar4 != nullptr) {
    return 1;
  }
  iVar3 = 0;
  dVar2 = g_dArray_00848A2C->elementSize;
  if (0 < (int)dVar2) {
    do {
      pbVar6 = param_1;
      if (iVar3 < (int)dVar2) {
        pbVar7 = *(byte **)(g_dArray_00848A2C->growCapacity + iVar3 * 4);
      }
      else {
        pbVar7 = nullptr;
      }
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00680161:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00680166;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00680161;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00680166:
      if (iVar5 == 0) {
        if (-1 < iVar3) {
          return 2;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)dVar2);
  }
  iVar3 = 0;
  dVar2 = g_dArray_00848A34->elementSize;
  if (0 < (int)dVar2) {
    do {
      pbVar6 = param_1;
      if (iVar3 < (int)dVar2) {
        pbVar7 = *(byte **)(g_dArray_00848A34->growCapacity + iVar3 * 4);
      }
      else {
        pbVar7 = nullptr;
      }
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_006801cd:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006801d2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_006801cd;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_006801d2:
      if (iVar5 == 0) {
        if (-1 < iVar3) {
          return 3;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)dVar2);
  }

  iVar3 = thunk_FUN_0067fc10(param_1);
  return (iVar3 < 0) - 1 & 4;
}

