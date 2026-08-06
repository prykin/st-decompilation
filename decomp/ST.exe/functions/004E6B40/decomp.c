#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6B40 -> 004E5C40 @ 004E6BC4 */

void FUN_004e6b40(byte *param_1,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar6;
  int iVar5;
  int iVar7;

  memset(param_3, 0, 0x1e); /* compiler bulk-zero initialization */
  iVar7 = 0;
  iVar6 = thunk_FUN_004e6a80(param_1,param_2);
  if (iVar6 == 0) {
    cVar1 = (&DAT_007c0dd2)[param_2 * 3];
    for (iVar7 = 1; (cVar1 != '\0' && (iVar7 < 3)); iVar7 = iVar7 + 1) {
      iVar2 = param_2 * 3;
      iVar5 = thunk_FUN_004e60d0((int)param_1,(uint)(byte)(&DAT_007c0dd1)[iVar7 + iVar2]);
      if (iVar5 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0dd1)[iVar7 + iVar2];
        bVar3 = LookupRecordByte((char)param_1);
        *(byte *)(param_3 + 1) = bVar3;
        bVar4 = thunk_FUN_004e5c40(param_1,*param_3);
        STField<bool>(param_3,5) = bVar4;
        param_3 = (uint *)((int)param_3 + 6);
      }
      cVar1 = (&DAT_007c0dd2)[iVar7 + iVar2];
    }
  }
  return;
}

