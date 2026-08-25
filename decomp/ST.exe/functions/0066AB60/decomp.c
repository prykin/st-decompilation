#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0066AB60 -> 004357F0 @ 0066AB8E */

int FUN_0066ab60(char playerId,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  AiPlrClassTy *this;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;

  if (((param_2 != nullptr) && (param_3 != nullptr)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    this = thunk_FUN_004357f0(playerId);
    if ((this != nullptr) &&
       (iVar3 = thunk_FUN_00679d60(this,param_2,param_3), iVar3 != 0)) {
      return iVar3;
    }
    if ((g_allPlayers_007FA174 != nullptr) &&
       (iVar4 = thunk_FUN_0042a9c0(playerId), iVar4 != 0)) {
      uVar2 = STField<uint>(iVar4,0xC);
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        if (uVar2 < STField<uint>(iVar4,0xC)) {
          piVar5 = (int *)(STField<int>(iVar4,0x8) * uVar2 + STField<int>(iVar4,0x1C));
        }
        else {
          piVar5 = nullptr;
        }
        if ((*piVar5 != 0) && (iVar6 = thunk_FUN_00423300(*piVar5), iVar6 != 0)) {
          pbVar9 = (byte *)(iVar6 + 0x3b);
          pbVar7 = param_2;
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0066ac18:
              iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_0066ac1d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0066ac18;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_0066ac1d:
          if (iVar8 == 0) {
            return iVar6;
          }
        }
      }
    }
  }
  return 0;
}

