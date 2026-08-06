#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE */

void __thiscall
FUN_004dcaa0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;

  bVar3 = LookupRecordByte(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar2 = STField<int>(this,0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      *param_3 = 0;
      *param_4 = 0x27;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + ((bVar3 - 1) + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + ((bVar3 - 1) + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

