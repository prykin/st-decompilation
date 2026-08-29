#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004055EC
   Slots: 0x68
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1802/2106; unique_owner_for_target; unique physical vtable owner and slot type
   only the existing __thiscall receiver; explicit parameters and return are retained */

void __thiscall STBoatC::vfunc_68(STBoatC *this,RecoveredRecordView_004898C0_EBFAD36E *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecordView_004898C0_EBFAD36E *pRVar3;

  pRVar3 = param_1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pRVar3 = 0;
    pRVar3 = (RecoveredRecordView_004898C0_EBFAD36E *)&pRVar3->field_0x4;
  }
  *(int *)param_1 = this->field_0018;
  *(STBoatC_field_06F7State *)&param_1->field_0x4 = this->field_06F7;

  iVar1 = thunk_FUN_004e8030(this->field_06F7);
  param_1->field_0x8 = (char)iVar1;
  param_1->field_0009 = this->field_06FB;
  param_1->field_000D = this->field_06FF;
  param_1->field_0011 = this->field_0703;
  param_1->field_0015 = this->field_0707;
  param_1->field_0017 = this->field_0709;
  return;
}

