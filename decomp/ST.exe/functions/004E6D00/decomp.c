#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6D00 -> 004E5C40 @ 004E6DAA */

void FUN_004e6d00(byte *param_1,int param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar7;

  memset(param_3, 0, 0x1e); /* compiler bulk-zero initialization */
  bVar2 = LookupRecordByte((char)param_1);
  iVar5 = thunk_FUN_004e6c20((int)param_1,param_2);
  if (iVar5 == 0) {
    iVar7 = 1;
    iVar5 = param_2 + -0x32 + (bVar2 - 1) * 0x42;
    cVar1 = (&DAT_007c0e4d)[iVar5 * 3];
    while ((cVar1 != '\0' && (iVar7 < 3))) {
      iVar4 = thunk_FUN_004e60d0((int)param_1,(uint)(byte)(&DAT_007c0e4c)[iVar7 + iVar5 * 3]);
      if (iVar4 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0e4c)[iVar7 + iVar5 * 3];
        bVar2 = LookupRecordByte((char)param_1);
        *(byte *)(param_3 + 1) = bVar2;
        bVar3 = thunk_FUN_004e5c40(param_1,*param_3);
        *(bool *)((int)param_3 + 5) = bVar3;
        param_3 = (uint *)((int)param_3 + 6);
      }
      iVar7 = iVar7 + 1;
      cVar1 = (&DAT_007c0e4c)[iVar7 + iVar5 * 3];
    }
  }
  return;
}

