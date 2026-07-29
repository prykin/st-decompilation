
/* [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=23; incoming_this_accesses=20;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

void __thiscall CursorClassTy::sub_0054B540(CursorClassTy *this)

{
  uint uVar1;

  this->field_00CD = CASE_0;
  *(undefined4 *)&this->field_0xd3 = 0;
  this->field_00D7 = 0;
  this->field_00DB = 0;
  this->field_00DD = 0;
  uVar1 = this->field_010B;
  if (-1 < (int)uVar1) {
    if (this->field_00DE == CASE_5) {
      if (g_sT3DSMAPContext_00807598 != (ST3DSMAPContext *)0x0) {
        Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,uVar1);
      }
      if (this->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8a60((byte *)this->field_00AD);
      }
      else if (this->field_001C != (cLoadingTy *)0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this->field_0060,(uint)this->field_001C,0xfffffffe,this->field_0034,
                   this->field_0038);
      }
      DrawSprite(this,this->field_00C5,this->field_00C9);
    }
    else {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,uVar1);
    }
    this->field_010B = -1;
  }
  this->field_00DE = CASE_0;
  this->field_0496 = 0;
  this->field_049A = (STFishC *)0x0;
  this->field_04AE = 0;
  return;
}

