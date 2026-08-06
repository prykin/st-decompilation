#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=006829B0 @ 006829BF
   -> MOV MOV ESI,EAX */

int __cdecl FUN_006800a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  AnonNested_AnonShape_GLOBAL_00848A2C_50EB5CD1_0014_282260F2 *pAVar6;
  AnonNested_AnonShape_GLOBAL_00848A34_1A834A18_0014_B03F56A9 *pAVar7;
  int iVar8;
  bool bVar9;

  iVar2 = thunk_FUN_0067ff00((char *)param_1);
  if (-1 < iVar2) {
    return 5;
  }
  iVar2 = thunk_FUN_0067ff50((char *)param_1);
  if (-1 < iVar2) {
    return 6;
  }
  iVar2 = thunk_FUN_0067ffa0((char *)param_1);
  if (-1 < iVar2) {
    return 7;
  }
  iVar2 = thunk_FUN_0067fff0((char *)param_1);
  if (-1 < iVar2) {
    return 8;
  }
  pcVar3 = thunk_FUN_0067eea0(param_1);
  if (pcVar3 != nullptr) {
    return 1;
  }
  iVar8 = 0;
  iVar2 = PTR_00848a2c->field_0008;
  if (0 < iVar2) {
    do {
      pbVar5 = param_1;
      if (iVar8 < iVar2) {
        pAVar6 = PTR_00848a2c->entries_0014[iVar8];
      }
      else {
        pAVar6 = nullptr;
      }
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < pAVar6->field_0000;
        if (bVar1 != pAVar6->field_0000) {
LAB_00680161:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00680166;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pAVar6->field_0001;
        if (bVar1 != pAVar6->field_0001) goto LAB_00680161;
        pAVar6 = pAVar6 + 1;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00680166:
      if (iVar4 == 0) {
        if (-1 < iVar8) {
          return 2;
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  iVar8 = 0;
  iVar2 = PTR_00848a34->field_0008;
  if (0 < iVar2) {
    do {
      pbVar5 = param_1;
      if (iVar8 < iVar2) {
        pAVar7 = PTR_00848a34->entries_0014[iVar8];
      }
      else {
        pAVar7 = nullptr;
      }
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < pAVar7->field_0000;
        if (bVar1 != pAVar7->field_0000) {
LAB_006801cd:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_006801d2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pAVar7->field_0001;
        if (bVar1 != pAVar7->field_0001) goto LAB_006801cd;
        pAVar7 = pAVar7 + 1;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006801d2:
      if (iVar4 == 0) {
        if (-1 < iVar8) {
          return 3;
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  iVar2 = thunk_FUN_0067fc10(param_1);
  return (iVar2 < 0) - 1 & 4;
}

