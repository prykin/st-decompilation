
/* [STMethodOwnerApplier] Structural method owner recovered as STResourceC.
   Evidence: this_call_owners=[STResourceC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0 */

void __thiscall STResourceC::sub_005802A0(STResourceC *this,int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  SetResource(this,param_1,param_2);
  if (this->field_025D == 1) {
    sVar1 = this->field_0245;
    sVar2 = this->field_024D;
    sVar3 = this->field_0249;
    if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
       (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2)))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_007fb248 +
                      ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                      (int)sVar1) * 8);
    }
    if (*(int *)(iVar4 + 0x18) == this->field_0269) {
      thunk_FUN_004e0250(iVar4);
    }
  }
  return;
}

