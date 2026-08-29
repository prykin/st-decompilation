#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079AE38
   Entries: 004021DA
   Slots: 0x8
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/248; unique_owner_for_target */

int __thiscall
STPlaySystemC::vfunc_8
          (STPlaySystemC *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
          int param_5)

{
  int iVar1;

  iVar1 = SystemWithNamedObjClassTy::CreateObject
                    ((SystemWithNamedObjClassTy *)this,param_1,param_2,&param_5,param_4,param_5);
  if (param_3 != nullptr) {
    *param_3 = param_5;
  }
  if (iVar1 == 0) {
    thunk_FUN_0054cd90();
  }
  return iVar1;
}

