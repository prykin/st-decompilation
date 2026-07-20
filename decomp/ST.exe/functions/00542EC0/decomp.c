
/* [STDestructorApplier] Recovered destructor for InterSystemC.
   Evidence: cleanup_only_vtable_method; zeroed_this_fields=4; same_this_calls=2;
   field_cleanup_calls=0; 00542ECE ccFntTy::operator; 00542F14 FUN_006e52d0 */

void __thiscall InterSystemC::~InterSystemC(InterSystemC *this)

{
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  
  this_00 = (ccFntTy *)this;
  if ((uint *)this->field_0024 != (uint *)0x0) {
    ccFntTy::operator((ccFntTy *)this,(uint *)this->field_0024);
    this->field_0024 = 0;
    this_00 = extraout_ECX;
  }
  if ((uint *)this->field_0028 != (uint *)0x0) {
    ccFntTy::operator(this_00,(uint *)this->field_0028);
    this->field_0028 = 0;
    this_00 = extraout_ECX_00;
  }
  if ((uint *)this->field_002C != (uint *)0x0) {
    ccFntTy::operator(this_00,(uint *)this->field_002C);
    this->field_002C = 0;
    this_00 = extraout_ECX_01;
  }
  if ((uint *)this->field_0030 != (uint *)0x0) {
    ccFntTy::operator(this_00,(uint *)this->field_0030);
    this->field_0030 = 0;
  }
  FUN_006e52d0((AnonShape_006E52D0_AF06BCD2 *)this);
  return;
}

