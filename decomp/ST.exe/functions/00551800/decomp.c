
/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TradePanelTy::sub_00551800(TradePanelTy *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar1 = this->field_01C8;
  if ((&this->field_01BC)[(byte)this->field_01D0] == 0) {
    if (iVar1 != 0) {
      this->field_0028 = 0x21;
      FUN_006e6080(this,2,iVar1,(undefined4 *)&this->field_0x18);
      if (*(int *)&this->field_0x2c != 0) {
        this->field_0028 = 0x20;
        *(undefined4 *)&this->field_0x2c = 0;
        FUN_006e6080(this,2,this->field_01C8,(undefined4 *)&this->field_0x18);
      }
    }
    if (this->field_01CC == 0) {
      return;
    }
    this->field_0028 = 0x21;
    FUN_006e6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
    if (*(int *)&this->field_0x2c == 0) {
      return;
    }
    this->field_0028 = 0x20;
    *(undefined4 *)&this->field_0x2c = 0;
    goto LAB_00551a54;
  }
  if ((iVar1 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) goto LAB_005519bc;
  this->field_0028 = 0x21;
  FUN_006e6080(this,2,iVar1,(undefined4 *)&this->field_0x18);
  iVar1 = *(int *)&this->field_0x2c;
  if (this->field_01BB == '\0') {
    if ((DAT_0080874e == '\x03') && (this->field_01D0 == '\0')) {
      if (*(ushort *)&this->field_0x1ad == 0) goto LAB_0055198e;
      iVar3 = (uint)(ushort)this->field_01BC * (uint)*(ushort *)&this->field_0x1ad;
LAB_0055194f:
      if (iVar3 < 1) goto LAB_0055198e;
      if (DAT_0080874e == '\x03') {
        iVar2 = thunk_FUN_004e41c0((uint)DAT_0080874d);
      }
      else {
        iVar2 = thunk_FUN_004d8870(DAT_0080874d);
      }
      if (iVar2 < iVar3) goto LAB_0055198e;
      iVar3 = 1;
    }
    else {
      if (*(ushort *)(&this->field_0x1ad + (uint)(byte)this->field_01D0 * 8) != 0) {
        iVar3 = (int)((ulonglong)(ushort)(&this->field_01BC)[(byte)this->field_01D0] /
                     (ulonglong)
                     (longlong)
                     (int)(uint)*(ushort *)(&this->field_0x1ad + (uint)(byte)this->field_01D0 * 8));
        goto LAB_0055194f;
      }
LAB_0055198e:
      iVar3 = 0;
    }
    *(int *)&this->field_0x2c = iVar3;
    if (iVar3 == 0) {
      if (iVar1 != 0) {
LAB_005519a4:
        uVar5 = this->field_01C8;
        this->field_0028 = 0x20;
        goto LAB_005519b3;
      }
    }
    else if (iVar1 == 0) goto LAB_005519a4;
  }
  else {
    if (iVar1 != 0) goto LAB_005519bc;
    uVar5 = this->field_01C8;
    this->field_0028 = 0x20;
    *(undefined4 *)&this->field_0x2c = 1;
LAB_005519b3:
    FUN_006e6080(this,2,uVar5,(undefined4 *)&this->field_0x18);
  }
LAB_005519bc:
  if (this->field_01CC == 0) {
    return;
  }
  if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
    return;
  }
  this->field_0028 = 0x21;
  FUN_006e6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
  iVar1 = *(int *)&this->field_0x2c;
  if (this->field_01D0 == '\0') {
    iVar3 = thunk_FUN_004d89b0(DAT_0080874d);
  }
  else {
    iVar3 = thunk_FUN_004d8af0(DAT_0080874d);
  }
  uVar4 = (uint)((int)(uint)(ushort)(&this->field_01BC)[(byte)this->field_01D0] <= iVar3);
  *(uint *)&this->field_0x2c = uVar4;
  if (uVar4 == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  this->field_0028 = 0x20;
LAB_00551a54:
  FUN_006e6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
  return;
}

