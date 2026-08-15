#include "../../pseudocode_runtime.h"


undefined4 FUN_00412de0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_18;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1 * 4 + 2;
  iVar2 = param_2 * 4 + 2;
  iVar4 = DAT_007f4d30 * DAT_007f4d2c;
  iVar7 = 0;
  iVar3 = param_3 * 4 + 2;
  local_18 = 0;
  if (0 < DAT_007f4d20) {
    do {
      local_c = (STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 * DAT_007f4d38 +
                 0x8000 + DAT_007f4d28 *
                          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 >> 0x10) +
                iVar1 >> 2;
      local_10 = ((DAT_007f4d38 * STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 -
                  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 * DAT_007f4d28) +
                  0x8000 >> 0x10) + iVar2 >> 2;
      local_8 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0008 + iVar3 >> 2;
      if (local_8 < 0) {
        local_8 = 0;
      }
      else if (DAT_007f4d34 <= local_8) {
        local_8 = DAT_007f4d34 + -1;
      }
      if (((((local_c < 0) || (DAT_007f4d2c <= local_c)) || (local_10 < 0)) ||
          (((DAT_007f4d30 <= local_10 ||
            (uVar6 = local_c + DAT_007f4d2c * local_10 + local_8 * iVar4,
            *(short *)((int)PTR_007f4cf0 + uVar6 * 2) != 0)) ||
           (uVar6 = uVar6 ^ 7, (g_bitset_007F4CFC[(int)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0)))) &&
         (iVar5 = FUN_0040f270(&local_c,&local_10,&local_8,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                               DAT_007f4d1c >> 2,iVar1 >> 2,iVar2 >> 2,iVar3 >> 2), iVar5 != 0)) {
        return 0xfffffffc;
      }
      uVar6 = local_8 * iVar4 + local_c + DAT_007f4d2c * local_10 ^ 7;
      g_bitset_007F4CFC[(int)uVar6 >> 3] =
           g_bitset_007F4CFC[(int)uVar6 >> 3] | '\x01' << (uVar6 & 7);
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 = local_c;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 = local_10;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0008 = local_8;
      local_18 = local_18 + 1;
      iVar7 = iVar7 + 0x14;
    } while (local_18 < DAT_007f4d20);
  }
  return 0;
}

