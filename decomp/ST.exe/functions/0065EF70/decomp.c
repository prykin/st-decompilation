#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0065ef70(AnonShape_0065EF70_E78A8204 *param_1)

{
  byte bVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  int iVar4;
  byte bVar5;
  short *psVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_1c;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  AnonShape_0065EF70_EB9B857D *local_8;

  if (g_allPlayers_007FA174 != nullptr) {
    pDVar3 = param_1->field_022F;
    local_1c = 0;
    if (0 < (int)pDVar3->count) {
      bVar8 = pDVar3->count != 0;
      local_8 = (AnonShape_0065EF70_EB9B857D *)param_1;
      do {
        if (bVar8) {
          psVar6 = DArrayAt<short>(pDVar3, local_1c);
          bVar5 = 0;
          pbVar7 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        }
        else {
          psVar6 = nullptr;
          bVar5 = 0;
          pbVar7 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        }
        do {
          if (((int)pbVar7 < 0x808a71) &&
             ((g_playSystem_00802A38 == nullptr || (*pbVar7 < 8)))) {
            bVar1 = local_8->field_0024;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            _local_c = CONCAT31(uStack_b,bVar1);
            if (DAT_00808a8f == '\0') {
              if (bVar5 == bVar1) {
LAB_0065f095:
                iVar4 = 0;
              }
              else {
                bVar2 = g_playerRelationMatrix[bVar5][bVar1];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar5] == 0)) {
                  iVar4 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar5] == 0)) {
                  iVar4 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar5] == 1)) {
                  iVar4 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar5] != 1))
                  goto LAB_0065f095;
                  iVar4 = 2;
                }
              }
              bVar8 = iVar4 < 0;
            }
            else {
              bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                      g_bulkInitializedRecords_008087C7[bVar5].field_0023;
            }
            if (bVar8) {
              local_10 = 0;
              local_14 = 0;
              STAllPlayersC::GetGObjFromBox
                        (g_allPlayers_007FA174,bVar5,*psVar6,psVar6[1],psVar6[2],psVar6[3],psVar6[4]
                         ,psVar6[5],nullptr,nullptr,&local_10,&local_14);
              if ((0 < local_10) || (0 < local_14)) {
                local_8->field_0195 = *(undefined4 *)psVar6;
                local_8->field_0199 = *(undefined4 *)(psVar6 + 2);
                local_8->field_019D = *(undefined4 *)(psVar6 + 4);
                return 1;
              }
            }
          }
          pbVar7 = pbVar7 + 0x51;
          bVar5 = bVar5 + 1;
        } while ((int)pbVar7 < 0x808a71);
        local_1c = local_1c + 1;
        pDVar3 = (DArrayTy *)local_8->field_022F;
        bVar8 = local_1c < pDVar3->count;
      } while ((int)local_1c < (int)pDVar3->count);
    }
  }
  return 0;
}

