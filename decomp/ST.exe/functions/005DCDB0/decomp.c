
/* [STDestructorApplier] Recovered destructor for StartSystemTy.
   Evidence: cleanup_only_vtable_method; zeroed_this_fields=4; same_this_calls=6;
   field_cleanup_calls=1; 005DCDBE FUN_006e56b0; 005DCDD3 FUN_006e56b0; 005DCDEB FUN_006e56b0;
   005DCE03 FUN_006e56b0; 005DCE2B FUN_005db2a0; 005DCE3C FUN_005daf20; 005DCE43 FUN_005db010;
   005DCE4A FUN_005da910; 005DCE51 FUN_006e52d0 */

void __thiscall StartSystemTy::~StartSystemTy(StartSystemTy *this)

{
  if (this->field_0020 != 0) {
    sub_006E56B0(this,this->field_0020);
  }
  this->field_0020 = 0;
  if (this->field_0389 != 0) {
    sub_006E56B0(this,this->field_0389);
  }
  this->field_0389 = 0;
  if (this->field_054C != 0) {
    sub_006E56B0(this,this->field_054C);
  }
  this->field_054C = 0;
  if (this->field_0550 != 0) {
    sub_006E56B0(this,this->field_0550);
  }
  this->field_0550 = 0;
  if (this->field_069A != 0) {
    FUN_006ab060((LPVOID *)&this->field_069A);
  }
  DelAllAccelerators();
  sub_005DB2A0(this);
  DAT_0080c50a = 1;
  sub_005DAF20(this);
  thunk_FUN_005db010();
  sub_005DA910(this);
  FUN_006e52d0((int)this);
  return;
}

