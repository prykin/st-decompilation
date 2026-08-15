#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004E7E10 -> 004E7980 @ 004E7E63; zero-filled partial register load at 004E7E59 */

undefined4 FUN_004e7980(uint *param_1,int param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  byte *puVar10;
  byte *pbVar11;
  int *piVar12;
  byte *puVar13;
  undefined4 *local_1c;
  int local_10;
  int local_c;

  puVar5 = param_1;
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  bVar5 = LookupRecordByte((char)param_1);
  iVar6 = bVar5 - 1;
  memset(&DAT_00801020, 0, 0x30c); /* compiler bulk-zero initialization */
  iVar9 = 0;
  DAT_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    local_c = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    iVar9 = 0;
    if (DAT_00801020 == 0) {
      return 0;
    }
    param_1 = (uint *)&DAT_00801020;
    do {
      thunk_FUN_004e5af0((int)puVar5,*param_1,(uint)(byte)param_1[1]);
      pbVar11 = &DAT_007c0dd4;
      do {
        bVar2 = pbVar11[1];
        for (iVar9 = 1; (bVar2 != 0 && (iVar9 < 3)); iVar9 = iVar9 + 1) {
          if ((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x2EB) + ((int)(pbVar11[iVar9] ^ 7) >> 3)) >>
               ((pbVar11[iVar9] ^ 7) & 7) & 1) == 0) goto LAB_004e7a7f;
          bVar2 = pbVar11[iVar9 + 1];
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x593) + (uint)*pbVar11 * 4) = 1;
LAB_004e7a7f:
        pbVar11 = pbVar11 + 3;
      } while ((int)pbVar11 < 0x7c0e4c);
      param_2 = 0x42;
      pbVar11 = &DAT_007c0e4c + iVar6 * 0xc6;
      do {
        bVar2 = pbVar11[1];
        for (iVar9 = 1; (bVar2 != 0 && (iVar9 < 3)); iVar9 = iVar9 + 1) {
          if ((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x2EB) + ((int)(pbVar11[iVar9] ^ 7) >> 3)) >>
               ((pbVar11[iVar9] ^ 7) & 7) & 1) == 0) goto LAB_004e7b13;
          bVar2 = pbVar11[iVar9 + 1];
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x593) + (uint)*pbVar11 * 4) = 1;
LAB_004e7b13:
        pbVar11 = pbVar11 + 3;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      piVar12 = (int *)(&PTR_DAT_007c0dc8)[iVar6];
      if (*piVar12 != 0) {
        _param_3 = 0;
        param_2 = 5;
        local_1c = (undefined4 *)((int)&DAT_00800bd0 + local_c * 5);
        do {
          if ((*(uint *)((int)piVar12 + _param_3) == *param_1) &&
             (*(char *)((int)piVar12 + _param_3 + 4) == (char)param_1[1])) {
            bVar4 = true;
            local_10 = 0;
            iVar9 = _param_3;
            if (*(int *)((int)piVar12 + param_2) != 0) {
              do {
                if (3 < local_10) break;
                puVar3 = (&PTR_DAT_007c0dc8)[iVar6];
                iVar7 = thunk_FUN_004e60d0((int)puVar5,*(int *)(puVar3 + iVar9 + 5));
                if (iVar7 < (int)(uint)(byte)puVar3[iVar9 + 9]) {
                  bVar4 = false;
                }
                iVar7 = iVar9 + 10;
                local_10 = local_10 + 1;
                iVar9 = iVar9 + 5;
              } while (*(int *)(puVar3 + iVar7) != 0);
              if (!bVar4) goto LAB_004e7bd3;
            }
            thunk_FUN_004e5d50((int)puVar5,*param_1);
          }
LAB_004e7bd3:
          iVar9 = 0;
          piVar12 = (int *)(&PTR_DAT_007c0dc8)[iVar6];
          if (*(int *)((int)piVar12 + param_2) != 0) {
            puVar8 = (uint *)((int)piVar12 + _param_3 + 5);
            do {
              if (3 < iVar9) break;
              if ((*puVar8 == *param_1) && ((char)puVar8[1] == (char)param_1[1])) {
                *local_1c = *(undefined4 *)((int)piVar12 + _param_3);
                *(undefined1 *)(local_1c + 1) = *(undefined1 *)((int)piVar12 + _param_3 + 4);
                local_c = local_c + 1;
                local_1c = (undefined4 *)((int)local_1c + 5);
                break;
              }
              piVar1 = (int *)((int)puVar8 + 5);
              puVar8 = (uint *)((int)puVar8 + 5);
              iVar9 = iVar9 + 1;
            } while (*piVar1 != 0);
          }
          param_2 = param_2 + 0x19;
          _param_3 = _param_3 + 0x19;
        } while (*(int *)((int)piVar12 + _param_3) != 0);
      }
      piVar12 = (int *)((int)param_1 + 5);
      param_1 = (uint *)((int)param_1 + 5);
    } while (*piVar12 != 0);
    if (local_c == 0) {
      return 0;
    }
    puVar10 = (byte *)(&DAT_00800bd0);
    puVar13 = (byte *)(&DAT_00801020);
    memmove(puVar13, puVar10, 0x30c); /* compiler REP MOVS byte copy */
  } while( true );
}

