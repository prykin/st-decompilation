
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=8;
   incoming_edx_uses=5 */

uint __thiscall STBoatC::sub_00417910(STBoatC *this,short param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar3 = (uint)this->field_0086;
  iVar4 = (int)param_1;
  if ((int)(param_1 / this->field_0086) * uVar3 - iVar4 != 0) {
    return 0xffffffff;
  }
  sVar1 = this->field_006C;
  if (sVar1 == param_1) {
    return 0;
  }
  uVar2 = (int)uVar3 >> 0x1f;
  if (param_1 < sVar1) {
    if (0xb3 < sVar1 - iVar4) {
      iVar4 = (uVar3 ^ uVar2) - uVar2;
      sVar1 = (short)iVar4;
      goto cf_common_exit_00417989;
    }
  }
  else if (iVar4 - sVar1 < 0xb4) {
    iVar4 = (uVar3 ^ uVar2) - uVar2;
    sVar1 = (short)iVar4;
    goto cf_common_exit_00417989;
  }
  iVar4 = (uVar3 ^ uVar2) - uVar2;
  sVar1 = -(short)iVar4;
cf_common_exit_00417989:
  this->field_006C = this->field_006C + sVar1;
  if (0x168 - iVar4 < (int)this->field_006C) {
    this->field_006C = 0;
  }
  if (this->field_006C < 0) {
    this->field_006C = 0x168 - (short)iVar4;
  }
  return -(uint)(this->field_006C != param_1) & 2;
}

