#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00401839
   Slots: 0x28
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/884; unique_owner_for_target */

undefined4 __thiscall TLOEmbryoTy::vfunc_28(TLOEmbryoTy *this,undefined4 param_1,int *param_2)

{
  int iVar1;

  if ((TLOEmbryoTy *)param_2 == this) {
    return 4;
  }
  if ((param_2 != nullptr) && (param_2[9] == this->field_0024)) {
    this = (TLOEmbryoTy *)param_2[8];
    if (this == (TLOEmbryoTy *)0x14) {
      /* ST_CALLSITE[004D6CC3]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
      this = nullptr;
      if (iVar1 != 0) {
        return 3;
      }
    }
    else if ((this == (TLOEmbryoTy *)0x3e8) || (this == (TLOEmbryoTy *)0x3e9)) {
      /* ST_CALLSITE[004D6CE7]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_2, 0xEC);
      this = nullptr;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (uint)this & 0xffff0000;
}

