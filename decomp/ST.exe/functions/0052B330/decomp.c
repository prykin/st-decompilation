
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] boolean_return_domain.
   Evidence: all explicit return values are constants in {0,1}: [0, 0, 0, 0, 1, 0]

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

bool __thiscall CPanelTy::sub_0052B330(CPanelTy *this)

{
  bool bVar1;

  bVar1 = true;
  if (this->field_0DC7 != '\x01') {
    if (this->field_0DC7 != '\x02') {
      return false;
    }
    if (0x13 < this->field_0DC8) {
      return false;
    }
    this->field_0DC8 = this->field_0DC8 + 1;
    return false;
  }
  this->field_0DC8 = this->field_0DC8 + 1;
  if (((this->field_0DCD == '\0') || (this->field_0DCD == '\x01')) &&
     (this->field_0DD6 != this->field_0DCE)) {
    bVar1 = false;
    this->field_0DD6 = this->field_0DD6 + this->field_0DDE;
    if (this->field_0DE6 != _DAT_0079034c) {
      this->field_0DDE = this->field_0DE6 + this->field_0DDE;
    }
    if (this->field_0DDE <= _DAT_0079034c) {
      if (this->field_0DD6 < this->field_0DCE) {
        this->field_0DD6 = this->field_0DCE;
        goto LAB_0052b416;
      }
    }
    else if (this->field_0DCE < this->field_0DD6) {
      this->field_0DD6 = this->field_0DCE;
LAB_0052b416:
      this->field_0DCD = 2;
      bVar1 = true;
    }
  }
  if (((this->field_0DCD == '\0') || (this->field_0DCD == '\x02')) &&
     (this->field_0DDA != this->field_0DD2)) {
    this->field_0DDA = this->field_0DDA + this->field_0DE2;
    if (this->field_0DEA != _DAT_0079034c) {
      this->field_0DE2 = this->field_0DEA + this->field_0DE2;
    }
    if (this->field_0DE2 <= _DAT_0079034c) {
      if (this->field_0DD2 <= this->field_0DDA) goto cf_common_exit_0052B581;
      this->field_0DDA = this->field_0DD2;
    }
    else {
      if (this->field_0DDA <= this->field_0DD2) goto cf_common_exit_0052B581;
      this->field_0DDA = this->field_0DD2;
    }
    this->field_0DCD = 1;
    if (this->field_0DD6 != this->field_0DCE) {
cf_common_exit_0052B581:
      if (this->field_0DB3 == 0) {
        return false;
      }
      FUN_006e6540(this->field_0DB3,this->field_0DD6,this->field_0DDA,-1);
      return true;
    }
  }
  else if (!bVar1) goto cf_common_exit_0052B581;
  this->field_0DC7 = 2;
  if ((int *)this->field_0DB3 != (int *)0x0) {
    FUN_006e6580(PTR_00807598,(int *)this->field_0DB3);
  }
  this->field_0DB3 = 0;
  this->field_0DC8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006e65c0(PTR_00807598,(&this->field_0DBF)[(byte)this->field_0DCC],
               (char)*(undefined2 *)((&this->field_09C8)[(byte)this->field_0DCC] + 0x23),
               this->field_0DD6,this->field_0DDA,5,5,1);
  thunk_FUN_005252c0((this->field_0DCC != '\0') + CASE_B6);
  return false;
}

