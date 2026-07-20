
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004653B0 -> 00415ED0 @ 00465529 | 004653B0 -> 00415ED0 @ 0046570D | 0046C980 ->
   00415ED0 @ 0046CB8D | 0046C980 -> 00415ED0 @ 0046CD4F | 004714D0 -> 00415ED0 @ 004716C6 |
   004714D0 -> 00415ED0 @ 004718EB
   
   [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5 */

undefined4 __thiscall STJellyGunC::sub_00415ED0(STJellyGunC *this,undefined4 *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007901b0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if ((this->field_0068 == this->field_0064) && (0 < (int)this->field_0068)) {
    return 0;
  }
  if (10 < *(int *)&this->field_0x8f) {
    ExceptionList = &local_14;
    thunk_FUN_0041d8e0((int *)this);
  }
  *(undefined4 *)&this->field_0x8f = 0xffffffff;
  if (this->field_007A == 1) {
    *param_1 = 1;
    this->field_007A = 0;
    ExceptionList = local_14;
    return 1;
  }
  this->field_0040 = this->field_004D;
  this->field_0041 = this->field_004E;
  this->field_0043 = this->field_0050;
  this->field_0045 = this->field_0052;
  this->field_0047 = this->field_0054;
  this->field_0049 = this->field_0056;
  this->field_004B = this->field_0058;
  this->field_004D = this->field_005A;
  iVar4 = this->field_0068;
  this->field_0068 = iVar4 + 1;
  iVar4 = iVar4 + 2;
  iVar5 = this->field_0064;
  sVar6 = this->field_0034 +
          (short)((((int)(short)this->field_003A - (int)(short)this->field_0034) * iVar4) / iVar5);
  this->field_004E = sVar6;
  sVar1 = (short)((((int)(short)this->field_003C - (int)(short)this->field_0036) * iVar4) / iVar5) +
          this->field_0036;
  this->field_0050 = sVar1;
  sVar2 = (short)((((int)this->field_003E - (int)this->field_0038) * iVar4) / iVar5) +
          this->field_0038;
  this->field_0052 = sVar2;
  iVar7 = (int)sVar6;
  this->field_0054 = (short)(iVar7 / 0xc9);
  iVar4 = (int)sVar1;
  this->field_0056 = (short)(iVar4 / 0xc9);
  iVar5 = (int)sVar2;
  this->field_0058 = (short)(iVar5 / 200);
  uVar3 = (iVar7 / 0xc9) * 0xc9 + 100U & 0xffff;
  if (((int)(uVar3 - 0x1e) < iVar7) && (iVar7 < (int)(uVar3 + 0x1e))) {
    uVar3 = (iVar4 / 0xc9) * 0xc9 + 100U & 0xffff;
    if (((int)(uVar3 - 0x1e) < iVar4) && (iVar4 < (int)(uVar3 + 0x1e))) {
      uVar3 = (iVar5 / 200) * 200 + 100U & 0xffff;
      if (((int)(uVar3 - 0x1d) < iVar5) && (iVar5 < (int)(uVar3 + 0x1d))) {
        this->field_005A = 0;
        goto LAB_004160cd;
      }
    }
  }
  this->field_005A = 1;
LAB_004160cd:
  if ((this->field_004D == '\0') && (this->field_005A == '\x01')) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  if (((this->field_0047 == this->field_0054) && (this->field_0049 == this->field_0056)) &&
     (this->field_004B == this->field_0058)) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  if (this->field_0068 == this->field_0064) {
    *(int *)&this->field_0x8f = *(int *)&this->field_0x8f + 1;
    ExceptionList = local_14;
    return 0;
  }
  ExceptionList = local_14;
  return 1;
}

