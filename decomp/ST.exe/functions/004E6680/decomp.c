#include "../../pseudocode_runtime.h"


void FUN_004e6680(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int local_8;

  bVar2 = LookupRecordByte((char)param_1);
  local_8 = 0x42;
  pbVar7 = &DAT_007c0dd4;
  iVar6 = (bVar2 - 1) * 0x10;
  do {
    iVar3 = FUN_006b0fd0((int)(&DAT_008013f0 + iVar6));
    if (((iVar3 != 0) || (iVar3 = FUN_006b0fd0((int)(&DAT_008013b0 + iVar6)), iVar3 != 0)) &&
       (iVar3 = 1, pbVar7[1] != 0)) {
      do {
        if (2 < iVar3) break;
        iVar4 = thunk_FUN_004e60d0(param_1,(uint)pbVar7[iVar3]);
        if (iVar4 == 0) goto LAB_004e6740;
        iVar4 = iVar3 + 1;
        iVar3 = iVar3 + 1;
      } while (pbVar7[iVar4] != 0);
      if (pbVar7[1] != 0) {
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar7 * 4) = 1;
      }
    }
LAB_004e6740:
    pbVar7 = pbVar7 + 3;
    iVar3 = local_8 + -0x40;
    local_8 = local_8 + 1;
  } while (iVar3 < 0x29);
  local_8 = 0x32;
  do {
    iVar3 = FUN_006b0fd0((int)(&DAT_00801380 + iVar6));
    if (iVar3 != 0) {
      iVar8 = (bVar2 - 1) * 0x42;
      iVar4 = 1;
      iVar3 = iVar8 + -0x32 + local_8;
      if ((&DAT_007c0e4d)[iVar3 * 3] != '\0') {
        do {
          if (2 < iVar4) break;
          iVar1 = (iVar8 + -0x32 + local_8) * 3;
          iVar5 = thunk_FUN_004e60d0(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar4 + iVar1]);
          if (iVar5 == 0) goto LAB_004e680d;
          iVar1 = iVar4 + iVar1;
          iVar4 = iVar4 + 1;
        } while ((&DAT_007c0e4d)[iVar1] != '\0');
        if ((&DAT_007c0e4d)[iVar3 * 3] != '\0') {
          *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)(byte)(&DAT_007c0e4c)[iVar3 * 3] * 4) =
               1;
        }
      }
    }
LAB_004e680d:
    local_8 = local_8 + 1;
    if (0x73 < local_8) {
      return;
    }
  } while( true );
}

