
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0 */

undefined4 __thiscall STFishC::sub_0057D5F0(STFishC *this,uint param_1)

{
  int iVar1;
  undefined2 local_10 [2];
  undefined2 local_c [2];
  int local_8;
  
  local_8 = 0;
  if ((((this->field_0047 == this->field_0235) && (this->field_0049 == this->field_0237)) &&
      (this->field_004B == this->field_0239)) || (param_1 != 0)) {
    iVar1 = sub_0057D700(this,&param_1,(uint *)local_c,(int *)local_10,&local_8);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = thunk_FUN_00417740(this,this->field_006C,(short)local_8);
      if (iVar1 != 0) {
        return 0;
      }
      return 2;
    }
    this->field_0235 = (undefined2)param_1;
    this->field_0237 = local_c[0];
    this->field_0239 = local_10[0];
  }
  iVar1 = thunk_FUN_0057d420((AnonShape_0057D420_ACBACC73 *)this);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

