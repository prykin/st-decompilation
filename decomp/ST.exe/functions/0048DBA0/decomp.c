
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0 */

void __thiscall STBoatC::sub_0048DBA0(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  
  if ((this->field_045D == CASE_4) || (this->field_0459 == CASE_68)) {
    sVar1 = this->field_0554;
    sVar2 = this->field_0558;
    sVar3 = this->field_0556;
    if (((-1 < sVar1) && (((sVar1 < SHORT_007fb240 && (-1 < sVar3)) && (sVar3 < SHORT_007fb242))))
       && ((-1 < sVar2 && (sVar2 < SHORT_007fb244)))) {
      this_00 = g_worldCells
                [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1].
                objects[0];
      if ((this_00 != (STWorldObject *)0x0) && (*(int *)&this_00->field_0x18 == this->field_055A)) {
        thunk_FUN_004e22a0(this_00,this->field_0568,this->field_0018);
        thunk_FUN_004e2000(this_00,this->field_0568,this->field_0018);
      }
    }
  }
  return;
}

