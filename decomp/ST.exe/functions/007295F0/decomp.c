#include "../../pseudocode_runtime.h"


int __fastcall FUN_007295f0(AnonShape_007295F0_722683CC *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e320;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa4;
  iVar7 = 0;
  local_2c = 0;
  local_24 = 0;
  iVar1 = param_1->field_0328;
  iVar2 = param_1->field_0320;
  local_8 = 0;
  iVar6 = iVar1 + -1;
  pbVar5 = (byte *)(param_1->field_0330 + iVar6 * 0x68);
  ExceptionList = &local_14;
  for (; iVar1 - iVar2 <= iVar6; iVar6 = iVar6 + -1) {
    local_20 = *(uint **)(pbVar5 + 100);
    if ((((*(uint *)(pbVar5 + 4) & 0x8000) != 0) && ((*pbVar5 & 2) != 0)) &&
       (puVar8 = (uint *)(*(int *)(pbVar5 + 0x60) * 0x10 + local_20[0x3c]), (*puVar8 & 2) == 0)) {
      if (local_2c == 0) {
        iVar7 = FUN_006bbe40(&param_1->entries_0004[0x10]->field_0000,&local_2c,&local_24,0);
        local_28 = iVar7;
        if (iVar7 != 0) break;
        local_2c = local_2c + param_1->field_0024 * local_24 + param_1->field_0020;
        local_28 = 0;
      }
      uVar4 = local_20[0x41];
      if (uVar4 == 0) {
        if ((param_1->field_0144 == 0) || (param_1->field_0158 == 0)) {
          uVar4 = param_1->field_027C;
        }
        else {
          iVar3 = param_1->field_0278;
          iVar7 = (((int)*(short *)(puVar8[3] + 4) - param_1->field_016C) * iVar3) /
                  (param_1->field_0170 - param_1->field_016C);
          if (iVar7 < 0) {
            uVar4 = param_1->field_027C;
          }
          else {
            if (iVar3 <= iVar7) {
              iVar7 = iVar3 + -1;
            }
            uVar4 = param_1->field_027C + iVar7 * 0x100;
          }
        }
      }
      iVar7 = FUN_00728da0(param_1,local_2c,local_24,(short *)puVar8[3],puVar8[2],*puVar8 & 1,uVar4);
      local_28 = iVar7;
      if (iVar7 != 0) break;
      *local_20 = *local_20 | 0x10;
    }
    *local_20 = *local_20 & 0xffffffdf;
    pbVar5 = pbVar5 + -0x68;
  }
  local_8 = 0xffffffff;
  if (local_2c != 0) {
    /* ST_CALLSITE[007297C6]: CALL dword ptr [EDX + 0x80] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(param_1->entries_0004[0x10]->field_0000 + 0x80))(param_1->entries_0004[0x10],0);
  }
  ExceptionList = local_14;
  return iVar7;
}

