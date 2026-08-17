#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004CFFF0 @ 004CB045 */

void __thiscall
FUN_004cfff0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;

  /* ST_CALLSITE[004D0005]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar4 = bVar3 - 1;
  if (param_1 == CASE_9) {
    iVar2 = STField<int>(this,0x4d0);
  }
  else {
    if (param_1 == CASE_D) {
      *param_4 = 0;
      *param_3 = 0;
      return;
    }
    if (param_1 != CASE_E) {
      return;
    }
    iVar2 = STField<int>(this,0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8) + -0x10;
    *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
LAB_004d014f:
    iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_3 = iVar1;
    *param_4 = iVar1;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_3 = iVar1 + -0x10;
      *param_4 = iVar1 + -0x10;
      return;
    }
    if (iVar2 != 1) goto LAB_004d014f;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8) + -0x10;
  return;
}

