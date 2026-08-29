#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 0040594D
   Slots: 0x30
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:12 calls=8
   caller_families=2 receiver_extent=617/884; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=8; caller_families=2;
   owner_type=/TLOEmbryoTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall
TLOEmbryoTy::sub_004D6890(TLOEmbryoTy *this,RecoveredRecordView_004D6890_603A41DD *param_1)

{
  byte uVar1;
  ushort uVar2;
  byte bVar3;
  dword dVar4;
  int iVar5;
  RecoveredRecordView_004D6890_603A41DD *pRVar6;

  pRVar6 = param_1;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pRVar6 = 0;
    pRVar6 = (RecoveredRecordView_004D6890_603A41DD *)((int)&pRVar6->field_0003 + 1);
  }
  *(undefined2 *)pRVar6 = 0;
  /* ST_CALLSITE[004D68B2]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte((char)this->field_0024);
  param_1->field_0007 = bVar3;
  *(undefined1 *)param_1 = 1;
  uVar1 = this->field_021D;
  param_1->field_0002 = 2;
  param_1->field_0001 = uVar1;
  /* ST_CALLSITE[004D68CE]: CALL dword ptr [EDX + 0x7c] */
  dVar4 = this->sub_004D6C50();
  param_1->field_001B = (char)dVar4;
  param_1->field_0003 = this->field_0259;
  uVar2 = STField<undefined2>(this,0x1A);
  param_1->field_0008 = *(undefined2 *)&this->field_0018;
  param_1->field_000A = uVar2;
  param_1->field_001E = 0;
  param_1->field_0026 = 0xffff;
  *(undefined2 *)&param_1->field_0x20 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - this->field_0265)) = 1;
  return;
}

