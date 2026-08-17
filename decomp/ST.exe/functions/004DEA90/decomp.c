#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DEA90 @ 004CB0F4 */

void __thiscall
FUN_004dea90(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;

  /* ST_CALLSITE[004DEAA5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar3 = bVar2 - 1;
  if (param_1 == CASE_E) {
    if (STField<int>(this,0x361) != 6) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = iVar1;
      *param_3 = iVar1;
      return;
    }
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) + 1;
  }
  else {
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
  }
  *param_3 = iVar4;
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

