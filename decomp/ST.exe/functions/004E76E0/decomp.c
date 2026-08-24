#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004E7D70 -> 004E76E0 @ 004E7DB9; zero-filled partial register load at 004E7DAF */

undefined4 FUN_004e76e0(int param_1,uint *param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint **ppuVar11;
  uint *local_c;

  if ((param_1 < 0) || (7 < param_1)) {
    return 0;
  }
  /* ST_CALLSITE[004E7701]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar4 = LookupRecordByte((char)param_1);
  ppuVar11 = &PTR_00801020;
  for (iVar7 = 0xc3; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = nullptr;
    ppuVar11 = ppuVar11 + 1;
  }
  PTR_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    if (PTR_00801020 == nullptr) {
      return 0;
    }
    auto param_2_after_write = (uint *)&PTR_00801020; /* compiler stack-slot lifetime split */
    do {
      thunk_FUN_004e5b80(param_1,*param_2_after_write,(uint)(byte)param_2_after_write[1]);
      pbVar5 = &DAT_007c0dd4;
      do {
        bVar2 = pbVar5[1];
        iVar7 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar7)) goto LAB_004e77b8;
          if ((uint)pbVar5[iVar7] == *param_2_after_write) break;
          bVar2 = pbVar5[iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar5 * 4) = 0;
LAB_004e77b8:
        pbVar5 = pbVar5 + 3;
      } while ((int)pbVar5 < 0x7c0e4c);
      iVar7 = 0x42;
      pbVar5 = &DAT_007c0e4c + (bVar4 - 1) * 0xc6;
      do {
        bVar2 = pbVar5[1];
        iVar6 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar6)) goto LAB_004e7823;
          if ((uint)pbVar5[iVar6] == *param_2_after_write) break;
          bVar2 = pbVar5[iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar5 * 4) = 0;
LAB_004e7823:
        pbVar5 = pbVar5 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      puVar8 = (uint *)(&PTR_DAT_007c0dc8)[bVar4 - 1];
      if (*puVar8 != 0) {
        piVar10 = (int *)((int)puVar8 + 5);
        local_c = (uint *)((int)&DAT_00800bd0 + _param_3 * 5);
        do {
          iVar7 = *piVar10;
          iVar6 = 0;
          puVar3 = puVar8;
          while( true ) {
            if ((iVar7 == 0) || (3 < iVar6)) goto LAB_004e789c;
            if ((STField<uint>(puVar3,5) == *param_2_after_write) &&
               (STField<char>(puVar3,9) == (char)param_2_after_write[1])) break;
            iVar7 = STField<int>(puVar3,10);
            iVar6 = iVar6 + 1;
            puVar3 = (uint *)((int)puVar3 + 5);
          }
          *local_c = *puVar8;
          ((char *)local_c)[1] = (char)puVar8[1];
          _param_3 = _param_3 + 1;
          local_c = (uint *)((int)local_c + 5);
LAB_004e789c:
          piVar1 = (int *)((int)puVar8 + 0x19);
          puVar8 = (uint *)((int)puVar8 + 0x19);
          piVar10 = (int *)((int)piVar10 + 0x19);
        } while (*piVar1 != 0);
      }
      param_2_after_write = (uint *)((int)param_2_after_write + 5);
    } while (*param_2_after_write != 0);
    if (_param_3 == 0) {
      return 0;
    }
    puVar9 = &DAT_00800bd0;
    ppuVar11 = &PTR_00801020;
    for (iVar7 = 0xc3; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppuVar11 = (uint *)*puVar9;
      puVar9 = puVar9 + 1;
      ppuVar11 = ppuVar11 + 1;
    }
  } while( true );
}

