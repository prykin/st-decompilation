#include "../../pseudocode_runtime.h"


int FUN_00562170(int *param_1,int param_2)

{
  int iVar1;
  int iVar4;
  int local_EAX_292;
  int iVar2;
  uint uVar1;
  int iVar3;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  iVar3 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = nullptr;
  if (0 < g_runtimeRecordCount_0080338C) {
    local_14 = 0;
    do {
      iVar1 = FUN_006db910(DAT_00803304,DAT_00803308,
                           STObjectAtByteOffset(g_runtimeRecords_00803310, local_14).field_0000,
                           STObjectAtByteOffset(g_runtimeRecords_00803310, local_14).field_0004);
      if (0 < param_2) {
        local_c = local_c + param_2;
        iVar5 = param_2;
        piVar6 = param_1;
        do {
          iVar4 = FUN_006db910(DAT_00803304,DAT_00803308,
                               g_runtimeRecords_00803300[*piVar6].field_0000,
                               g_runtimeRecords_00803300[*piVar6].field_0004);
          uVar1 = iVar4 - iVar1 >> 0x1f;
          iVar3 = (iVar4 - iVar1 ^ uVar1) - uVar1;
          if (0xb4 < iVar3) {
            iVar3 = 0x168 - iVar3;
          }
          piVar6 = piVar6 + 1;
          iVar3 = local_8 + iVar3;
          iVar5 = iVar5 + -1;
          local_8 = iVar3;
        } while (iVar5 != 0);
      }
      local_10 = (int *)((int)local_10 + 1);
      local_14 = local_14 + 0x14;
    } while ((int)local_10 < g_runtimeRecordCount_0080338C);
  }
  iVar7 = 1;
  iVar5 = g_runtimeRecords_00803300[*param_1].field_000C;
  local_10 = param_1;
  if (1 < param_2) {
    do {
      local_10 = local_10 + 1;
      iVar3 = *local_10;
      iVar5 = iVar5 + g_runtimeRecords_00803300[iVar3].field_000C;
      local_EAX_292 =
           FUN_006db910(DAT_00803304,DAT_00803308,g_runtimeRecords_00803300[iVar3].field_0000,
                        g_runtimeRecords_00803300[iVar3].field_0004);
      if (0 < iVar7) {
        local_c = local_c + iVar7;
        piVar6 = param_1;
        local_14 = iVar7;
        do {
          iVar2 = FUN_006db910(DAT_00803304,DAT_00803308,
                               g_runtimeRecords_00803300[*piVar6].field_0000,
                               g_runtimeRecords_00803300[*piVar6].field_0004);
          uVar1 = iVar2 - local_EAX_292 >> 0x1f;
          iVar3 = (iVar2 - local_EAX_292 ^ uVar1) - uVar1;
          if (0xb4 < iVar3) {
            iVar3 = 0x168 - iVar3;
          }
          piVar6 = piVar6 + 1;
          local_8 = local_8 + iVar3;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar3 = local_8;
    } while (iVar7 < param_2);
  }
  if (0 < local_c) {
    iVar3 = iVar3 + (DAT_00803328 * iVar3) / local_c;
  }
  return iVar5 + iVar3;
}

