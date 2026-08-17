#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004CFDE0 @ 004CB068 */

void __thiscall
FUN_004cfde0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,uint param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int iVar3;
  uint uVar4;

  /* ST_CALLSITE[004CFDF5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar3 = LookupRecordByte(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar3 = uVar3 + -1;
  if (param_1 == CASE_9) {
    iVar2 = STField<int>(this,0x4d0);
  }
  else {
    if (param_1 == CASE_D) {
      uVar4 = param_2 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      *param_4 = (uint)(uVar4 != 0);
      *param_3 = (uint)(uVar4 != 0);
      return;
    }
    if (param_1 != CASE_E) {
      return;
    }
    iVar2 = STField<int>(this,0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) - 0xf;
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
LAB_004cff4c:
    uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_3 = uVar4;
    *param_4 = uVar4;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_3 = iVar1 - 0xfU;
      *param_4 = iVar1 - 0xfU;
      return;
    }
    if (iVar2 != 1) goto LAB_004cff4c;
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) - 0xf;
  return;
}

