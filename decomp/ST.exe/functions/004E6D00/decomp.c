#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6D00 -> 004E5C40 @ 004E6DAA */

void FUN_004e6d00(byte *param_1,int param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar8;

  memset(param_3, 0, 0x1e); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[004E6D1D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte((char)param_1);
  iVar5 = thunk_FUN_004e6c20((int)param_1,param_2);
  if (iVar5 == 0) {
    iVar8 = 1;
    iVar6 = param_2 + -0x32 + (bVar2 - 1) * 0x42;
    cVar1 = (&DAT_007c0e4d)[iVar6 * 3];
    while ((cVar1 != '\0' && (iVar8 < 3))) {
      iVar4 = thunk_FUN_004e60d0((int)param_1,(uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3]);
      if (iVar4 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3];
        /* ST_CALLSITE[004E6D99]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte((char)param_1);
        ((byte *)param_3)[1] = bVar2;
        bVar3 = thunk_FUN_004e5c40(param_1,*param_3);
        STField<bool>(param_3,5) = bVar3;
        param_3 = (uint *)((int)param_3 + 6);
      }
      iVar8 = iVar8 + 1;
      cVar1 = (&DAT_007c0e4c)[iVar8 + iVar6 * 3];
    }
  }
  return;
}

