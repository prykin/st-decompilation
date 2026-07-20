
/* [STMethodOwnerApplier] Structural method owner recovered as STResourceC.
   Evidence: this_call_owners=[STResourceC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

void __thiscall STResourceC::sub_00580D30(STResourceC *this,int param_1)

{
  undefined2 extraout_var;
  undefined2 uVar1;
  
  if (param_1 != 0) {
    this->field_025D = 2;
  }
  uVar1 = 0;
  if (this->field_0259 != 0) {
    sub_005802A0(this,0,0);
    uVar1 = extraout_var;
  }
  STAllPlayersC::UnRegisterDeposit(g_sTAllPlayers_007FA174,CONCAT22(uVar1,this->field_0032),this);
  thunk_FUN_004d8530(this);
  this->field_0032 = 0xffff;
  if (param_1 == 0) {
    thunk_FUN_00580380(this);
  }
  return;
}

