#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004eb150(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;

  iVar3 = param_1;
  uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar5;
  if ((uVar5 >> 0x10) % 0x385 + 0x834 + g_packedRecords_A62x8[param_1].field1963_0x9c2 <=
      g_playSystem_00802A38->field_00E4) {
    g_packedRecords_A62x8[param_1].field1963_0x9c2 = g_playSystem_00802A38->field_00E4;
    /* ST_CALLSITE[004EB1B0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar4 = LookupRecordByte((char)param_1);
    if (bVar4 != 3) {
      if ((g_playSystem_00802A38->field_00E4 < 30000) ||
         (0 < (int)g_packedRecords_A62x8[param_1].field1964_0x9c6)) {
        if ((59999 < g_playSystem_00802A38->field_00E4) &&
           ((int)g_packedRecords_A62x8[param_1].field1964_0x9c6 < 2)) {
          g_packedRecords_A62x8[param_1].field1964_0x9c6 = 2;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 0;
        iVar8 = 0;
        piVar6 = &g_packedRecords_A62x8[iVar3].field1952_0x9a2;
      }
      else {
        g_packedRecords_A62x8[param_1].field1964_0x9c6 = 1;
        param_1 = 0;
        iVar8 = 0;
        piVar6 = &g_packedRecords_A62x8[iVar3].field1952_0x9a2;
      }
      while( true ) {
        do {
          piVar6[1] = *piVar6;
          piVar7 = piVar6 + 2;
          iVar1 = iVar8 + (param_1 + g_packedRecords_A62x8[iVar3].field1964_0x9c6 * 2) * 2;
          iVar2 = (&DAT_007c15c4)[iVar1 * 2];
          iVar1 = *(int *)(&DAT_007c15c0 + iVar1 * 8);
          uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar5;
          iVar8 = iVar8 + 1;
          *piVar6 = (uVar5 >> 0x10) % ((iVar2 - iVar1) + 1U) + iVar1;
          piVar6 = piVar7;
        } while (iVar8 < 2);
        param_1 = param_1 + 1;
        if (1 < param_1) break;
        iVar8 = 0;
      }
    }
  }
  return 0;
}

