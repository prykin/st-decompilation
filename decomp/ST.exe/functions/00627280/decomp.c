#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 00403369
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=718/1456; unique_owner_for_target */

undefined4 __thiscall
STMineSetC::vfunc_DC(STMineSetC *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = this->field_02C2 - (int)param_1;
  iVar3 = this->field_02C6 - (int)param_2;
  iVar4 = this->field_02CA - (int)param_3;
  iVar1 = (uint)this->field_02AD * 6;
  if ((iVar2 * iVar2 * 1000) /
      ((int)*(short *)(&DAT_007d04a8 + iVar1) * (int)*(short *)(&DAT_007d04a8 + iVar1)) +
      (iVar3 * iVar3 * 1000) /
      ((int)*(short *)(&DAT_007d04aa + iVar1) * (int)*(short *)(&DAT_007d04aa + iVar1)) +
      (iVar4 * iVar4 * 1000) /
      ((int)*(short *)(&DAT_007d04ac + iVar1) * (int)*(short *)(&DAT_007d04ac + iVar1)) < 1000) {
    return 1;
  }
  return 0xffffffff;
}

