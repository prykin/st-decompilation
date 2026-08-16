#include "../../pseudocode_runtime.h"


void FUN_00564dd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = g_runtimeRecords_00803300[(int)param_4].field_0000;
  iVar2 = g_runtimeRecords_00803300[(int)param_4].field_0004;
  iVar3 = DAT_008032ec;
  if ((int)param_4 < DAT_0080337c) {
    iVar3 = DAT_00803378;
  }
  iVar5 = 0;
  if (0 < DAT_0080337c) {
    iVar6 = 0;
    auto param_4_after_write = param_3; /* compiler stack-slot lifetime split */
    do {
      iVar4 = FUN_006acf90(STObjectAtByteOffset(g_runtimeRecords_00803300, iVar6).field_0000,
                           STObjectAtByteOffset(g_runtimeRecords_00803300, iVar6).field_0004,iVar1,iVar2
                          );
      if (iVar4 < DAT_00803378 / 2 + iVar3 / 4) {
        *param_4_after_write = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      param_4_after_write = param_4_after_write + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < DAT_0080337c);
  }
  if (iVar5 < DAT_00803398) {
    iVar6 = iVar5 * 0x14;
    auto param_3_after_write = param_3 + iVar5; /* compiler stack-slot lifetime split */
    do {
      iVar4 = FUN_006acf90(STObjectAtByteOffset(g_runtimeRecords_00803300, iVar6).field_0000,
                           STObjectAtByteOffset(g_runtimeRecords_00803300, iVar6).field_0004,iVar1,iVar2
                          );
      if (iVar4 < DAT_008032ec / 2 + iVar3 / 4) {
        *param_3_after_write = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
      param_3_after_write = param_3_after_write + 1;
    } while (iVar5 < DAT_00803398);
  }
  return;
}

