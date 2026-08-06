#include "../../pseudocode_runtime.h"


/* [STDestructorApplier] Recovered destructor for InterSystemC.
   Evidence: cleanup_only_vtable_method; zeroed_this_fields=4; same_this_calls=2;
   field_cleanup_calls=0; 00542ECE ccFntTy::operator; 00542F14 FUN_006e52d0 */

void __thiscall InterSystemC::DoneSystem(InterSystemC *this)

{
  if (this->field_0024 != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_0024);
    this->field_0024 = nullptr;
  }
  if (this->field_0028 != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_0028);
    this->field_0028 = nullptr;
  }
  if ((uint *)this->field_002C != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_002C);
    this->field_002C = 0;
  }
  if ((uint *)this->field_0030 != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_0030);
    this->field_0030 = 0;
  }
  FUN_006e52d0((AnonShape_006E52D0_AF06BCD2 *)this);
  return;
}

