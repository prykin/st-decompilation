#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TradePanelTy.cpp

// 00551800 TradePanelTy::sub_00551800
#line 4 "decomp/ST.exe/functions/00551800/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00551800(TradePanelTy *this)

{
  int iVar1;
  uint uVar2;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  iVar1 = this->field_01C8;
  if ((&this->field_01BC)[(byte)this->field_01D0] == 0) {
    if (iVar1 != 0) {
      this->field_0028 = 0x21;
      st::fn_006E6080(this,2,iVar1,(undefined4 *)&this->field_0x18);
      if (*(int *)&this->field_0x2c != 0) {
        this->field_0028 = 0x20;
        *(undefined4 *)&this->field_0x2c = 0;
        st::fn_006E6080(this,2,this->field_01C8,(undefined4 *)&this->field_0x18);
      }
    }
    if (this->field_01CC == 0) {
      return;
    }
    this->field_0028 = 0x21;
    st::fn_006E6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
    if (*(int *)&this->field_0x2c == 0) {
      return;
    }
    this->field_0028 = 0x20;
    *(undefined4 *)&this->field_0x2c = 0;
    goto LAB_00551a54;
  }
  if ((iVar1 == 0) || (g_allPlayers_007FA174 == nullptr)) goto LAB_005519bc;
  this->field_0028 = 0x21;
  st::fn_006E6080(this,2,iVar1,(undefined4 *)&this->field_0x18);
  iVar1 = *(int *)&this->field_0x2c;
  if (this->field_01BB == '\0') {
    if ((DAT_0080874e == '\x03') && (this->field_01D0 == '\0')) {
      if (*(ushort *)&this->field_0x1ad == 0) goto LAB_0055198e;
      iVar2 = (uint)(ushort)this->field_01BC * (uint)*(ushort *)&this->field_0x1ad;
LAB_0055194f:
      if (iVar2 < 1) goto LAB_0055198e;
      if (DAT_0080874e == '\x03') {
        uVar2 = st::fn_004036A7((uint)DAT_0080874d);
      }
      else {
        uVar2 = st::fn_004016E0(DAT_0080874d);
      }
      if ((int)uVar2 < iVar2) goto LAB_0055198e;
      iVar2 = 1;
    }
    else {
      if (*(ushort *)(&this->field_0x1ad + (uint)(byte)this->field_01D0 * 8) != 0) {
        iVar2 = (int)((ulonglong)(ushort)(&this->field_01BC)[(byte)this->field_01D0] /
                     (ulonglong)
                     (longlong)
                     (int)(uint)*(ushort *)(&this->field_0x1ad + (uint)(byte)this->field_01D0 * 8));
        goto LAB_0055194f;
      }
LAB_0055198e:
      iVar2 = 0;
    }
    *(int *)&this->field_0x2c = iVar2;
    if (iVar2 == 0) {
      if (iVar1 != 0) {
LAB_005519a4:
        uVar4 = this->field_01C8;
        this->field_0028 = 0x20;
        goto LAB_005519b3;
      }
    }
    else if (iVar1 == 0) goto LAB_005519a4;
  }
  else {
    if (iVar1 != 0) goto LAB_005519bc;
    uVar4 = this->field_01C8;
    this->field_0028 = 0x20;
    *(undefined4 *)&this->field_0x2c = 1;
LAB_005519b3:
    st::fn_006E6080(this,2,uVar4,(undefined4 *)&this->field_0x18);
  }
LAB_005519bc:
  if (this->field_01CC == 0) {
    return;
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  this->field_0028 = 0x21;
  st::fn_006E6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
  iVar1 = *(int *)&this->field_0x2c;
  if (this->field_01D0 == '\0') {
    iVar2 = st::fn_00403954(DAT_0080874d);
  }
  else {
    iVar2 = st::fn_00402284(DAT_0080874d);
  }
  uVar3 = (uint)((int)(uint)(ushort)(&this->field_01BC)[(byte)this->field_01D0] <= iVar2);
  *(uint *)&this->field_0x2c = uVar3;
  if (uVar3 == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  this->field_0028 = 0x20;
LAB_00551a54:
  st::fn_006E6080(this,2,this->field_01CC,(undefined4 *)&this->field_0x18);
  return;
}

// 00551B10 TradePanelTy::sub_00551B10
#line 4 "decomp/ST.exe/functions/00551B10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_00551B10(TradePanelTy *this)

{
  if (this->field_01C0 != 0) {
    this->field_0028 = 0x26;
    st::fn_006E6080(this,2,this->field_01C0,(undefined4 *)&this->field_0x18);
    if (*(uint *)&this->field_0x2c != (uint)(ushort)(&this->field_01BC)[(byte)this->field_01D0]) {
      this->field_0028 = 0x22;
      *(uint *)&this->field_0x2c = (uint)(ushort)(&this->field_01BC)[(byte)this->field_01D0];
      st::fn_006E6080(this,2,this->field_01C0,(undefined4 *)&this->field_0x18);
    }
    st::fn_0040578B(this);
  }
  return;
}

// 00552160 TradePanelTy::sub_00552160
#line 4 "decomp/ST.exe/functions/00552160/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TradePanelTy.
   Evidence: this_call_owners=[TradePanelTy]; agreed_this_calls=12; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=7; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00552160(TradePanelTy *this,char param_1,char param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((this->field_0184 != param_1) &&
     (uVar1 = st::fn_00401E4C((SpecPanelTy *)this,param_1), param_1 != '\0')) {
    st::fn_00403D4B(this,param_2);
    st::fn_0040391D(this);
  }
  return uVar1;
}

