#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00401F1E
   Slots: 0x48
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:18 calls=3
   caller_families=2 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall TLOBaseTy::sub_004EB600(TLOBaseTy *this,short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((this->field_05AC == CASE_52) || (this->field_05AC == CASE_5F)) {
    iVar2 = 0;
    psVar4 = param_1;
    do {
      uint param_1_after_write = 0x2; /* compiler stack-slot lifetime split */
      iVar3 = iVar2;
      psVar5 = psVar4;
      do {
        iVar2 = *(int *)((int)&g_packedRecords_A62x8[(int)this->field_0024].field1952_0x9a2 + iVar3);
        iVar1 = *(int *)((int)&g_packedRecords_A62x8[(int)this->field_0024].field1953_0x9a6 + iVar3);
        if (iVar2 == iVar1) {
          *psVar5 = 0;
        }
        else {
          *psVar5 = (iVar2 <= iVar1) + 1;
        }
        iVar2 = iVar3 + 8;
        psVar4 = psVar5 + 2;
        psVar5[1] = *(short *)(iVar3 + STRecordByteAddress(g_packedRecords_A62x8, (int)this->field_0024, 0x9A2));
        param_1_after_write = ((int)param_1_after_write + -1);
        iVar3 = iVar2;
        psVar5 = psVar4;
      } while (param_1_after_write != 0);
    } while (iVar2 < 0x20);
  }
  return;
}

