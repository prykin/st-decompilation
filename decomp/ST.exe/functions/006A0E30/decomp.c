
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
CGenerate::sub_006A0E30(CGenerate *this,uint param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  short sStack_a;

  piVar1 = this->field_0008;
  uVar2 = *(uint *)((int)piVar1 + ((piVar1[1] * param_3 + param_2) * *piVar1 + param_1) * 6 + 8);
  sStack_a = (short)(uVar2 >> 0x10);
  if ((-1 < param_3) && (param_3 < 6)) {
    if (param_4 == -1) {
      param_4 = 0xff;
      if ((uVar2 & 0x10000000) != 0) {
        param_4 = 1;
      }
      if ((sStack_a == 0) && ((uVar2 & 0x1000) != 0)) {
        param_4 = 0;
      }
    }
    thunk_FUN_006a2920(piVar1,param_1,param_2,param_3,param_4,(undefined *)0x0,0);
  }
  return;
}

