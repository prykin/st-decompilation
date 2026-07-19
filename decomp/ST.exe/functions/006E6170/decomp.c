
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079E1B4
   Entries: 006E6170
   Slots: 0x8
   Anchor: 006E5580 SystemClassTy::CreateObject
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   signature_anchor=SystemClassTy::CreateObject */

int __thiscall
SystemWithNamedObjClassTy::CreateObject
          (SystemWithNamedObjClassTy *this,int param_1,undefined4 *param_2,int *param_3,
          undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)
           SystemClassTy::_CreateObject((SystemClassTy *)this,param_1,param_2,param_3,param_5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[6] = *(undefined4 *)(this + 0x20);
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    puVar3 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_14 = 2;
    local_10 = param_4;
    iVar2 = (**(code **)*puVar1)(local_24);
    if (iVar2 == 0xffff) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x503);
    }
    return 0;
  }
  return -2;
}

