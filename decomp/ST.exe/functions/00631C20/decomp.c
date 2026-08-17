#include "../../pseudocode_runtime.h"


void __thiscall
FUN_00631c20(void *this,int param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;

  if (STField<int>(this,0x6d) != 0) {
    iVar3 = *(int *)(STField<int>(this,0x6d) + 0xc);
    uVar8 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = STField<int>(this,0x6d);
        if (((((uVar8 < *(uint *)(iVar6 + 0xc)) &&
              (puVar7 = (uint *)(*(int *)(iVar6 + 8) * uVar8 + *(int *)(iVar6 + 0x1c)),
              puVar7 != nullptr)) &&
             (iVar5 = FUN_006aced8(param_1,param_2,puVar7[3],puVar7[4]), iVar5 < (int)puVar7[6])) &&
            (*puVar7 < 8)) &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[*puVar7].field_0022 < 8)))) {
          bVar1 = (byte)*puVar7;
          if (DAT_00808a8f == '\0') {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            if (param_3 == bVar1) {
LAB_00631d60:
              iVar6 = 0;
            }
            else {
              uVar4 = (uint)param_3;
              bVar2 = g_playerRelationMatrix[uVar4][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar6 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar6 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
                iVar6 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_00631d60;
                iVar6 = 2;
              }
            }
            bVar9 = iVar6 < 0;
          }
          else {
            bVar9 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                    g_bulkInitializedRecords_008087C7[param_3].field_0023;
          }
          if (bVar9) {
            STField<undefined4>(puVar7,0x25) = param_5;
            ((byte *)puVar7)[8] = 1;
            STField<undefined4>(puVar7,0x21) = param_6;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar3);
    }
  }
  return;
}

