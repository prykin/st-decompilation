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
  byte *puVar9;
  int *piVar10;
  byte *puVar11;
  uint *local_c;

  if ((param_1 < 0) || (7 < param_1)) {
    return 0;
  }
  bVar4 = LookupRecordByte((char)param_1);
  memset(&DAT_00801020, 0, 0x30c); /* compiler bulk-zero initialization */
  iVar7 = 0;
  DAT_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    if (DAT_00801020 == nullptr) {
      return 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)&DAT_00801020;
    do {
      thunk_FUN_004e5b80(param_1,*param_2,(uint)(byte)param_2[1]);
      pbVar5 = &DAT_007c0dd4;
      do {
        bVar2 = pbVar5[1];
        iVar7 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar7)) goto LAB_004e77b8;
          if ((uint)pbVar5[iVar7] == *param_2) break;
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
          if ((uint)pbVar5[iVar6] == *param_2) break;
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
            if ((STField<uint>(puVar3,5) == *param_2) &&
               (STField<char>(puVar3,9) == (char)param_2[1])) break;
            iVar7 = STField<int>(puVar3,10);
            iVar6 = iVar6 + 1;
            puVar3 = (uint *)((int)puVar3 + 5);
          }
          *local_c = *puVar8;
          *(char *)(local_c + 1) = (char)puVar8[1];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_3 = _param_3 + 1;
          local_c = (uint *)((int)local_c + 5);
LAB_004e789c:
          piVar1 = (int *)((int)puVar8 + 0x19);
          puVar8 = (uint *)((int)puVar8 + 0x19);
          piVar10 = (int *)((int)piVar10 + 0x19);
        } while (*piVar1 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)((int)param_2 + 5);
    } while (*param_2 != 0);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (_param_3 == 0) {
      return 0;
    }
    puVar9 = (byte *)(&DAT_00800bd0);
    puVar11 = (byte *)(&DAT_00801020);
    memmove(puVar11, puVar9, 0x30c); /* compiler REP MOVS byte copy */
  } while( true );
}

