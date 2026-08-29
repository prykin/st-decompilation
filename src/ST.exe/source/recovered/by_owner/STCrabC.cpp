#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STCrabC.cpp

// 00578430 STCrabC::vfunc_DC
#line 4 "decomp/ST.exe/functions/00578430/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B238
   Entries: 00401B90
   Slots: 0xDC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/641; unique_owner_for_target */

undefined4 __thiscall
st::fn_00578430(STCrabC *this,short param_1,short param_2,short param_3,short param_4,
                 short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar1 = this->field_0045 + -0x1c;
  sVar4 = this->field_0045 + 0x1c;
  sVar6 = this->field_0041 + -0x1c;
  sVar2 = this->field_0043 + -0x1c;
  sVar3 = this->field_0041 + 0x1c;
  sVar5 = this->field_0043 + 0x1c;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 00578520 STCrabC::vfunc_E0
#line 4 "decomp/ST.exe/functions/00578520/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B238
   Entries: 0040263A
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=71/641; unique_owner_for_target

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0057852A exact 2-byte output store from /STCrabC+0x41; exact partial-width MOV at
   00578526

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00578534 exact 2-byte output store from /STCrabC+0x43; exact partial-width MOV at
   00578530

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00578541 exact 2-byte output store from /STCrabC+0x45; exact partial-width MOV at
   00578537 */

undefined4 __thiscall
st::fn_00578520(STCrabC *this,undefined4 param_1,short *param_2,short *param_3,short *param_4,
                 undefined4 *param_5)

{
  *param_2 = this->field_0041;
  *param_3 = this->field_0043;
  *param_4 = this->field_0045;
  *param_5 = 0;
  return 0;
}

// 005785E0 STCrabC::STCrabC
#line 4 "decomp/ST.exe/functions/005785E0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B238 (store 005785FC)
   Evidence: final_vptr=0079B238; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005785E0 returns STCrabC::STCrabC this @ 00578610

   [STSwitchEnumApplier] Switch target field_0239 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0239State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

STCrabC * __thiscall st::fn_005785E0(STCrabC *this)

{
  /* ST_CALLSITE[005785E4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  st::fn_00401933(reinterpret_cast<STGameObjC *>(this));
  /* ST_CALLSITE[005785F1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  st::fn_00401316(reinterpret_cast<STT3DSprC *>(&this->field_01D5));
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079B398);
  this->vtable = &st_global_0079B238;
  this->field_0239 = CASE_0;
  return this;
}

// 0057A2A0 STCrabC::vfunc_2C
#line 4 "decomp/ST.exe/functions/0057A2A0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B238
   Entries: 00403026
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0057A2A0(STCrabC *this)

{
  return this->field_0279;
}
