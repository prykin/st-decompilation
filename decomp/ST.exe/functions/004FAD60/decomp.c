#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004FAD60 -> 004AB530 @ 004FAE21 | 004FAD60 -> 006E68C0 @ 004FADF7 | 005449B0 ->
   004FAD60 @ 00547B96; unproven partial register write at 00547B8D

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort
   previous_type=/uint Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=004FAD85
   MOV ECX,dword ptr [EBP + 0xc]; first-use mask or exact narrow callee formal | 004FADF7 address-of
   incoming slot passed to call; end entry lifetime
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:2: parameter=/uint
   Evidence: the physical incoming slot address escapes through a call; the later output lifetime
   must not narrow the entry ABI or expose an upper-byte in_stack live-in; restoring /uint;
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004FAD85 MOV ECX,dword ptr [EBP + 0xc];
   first-use mask or exact narrow callee formal | 004FADF7 address-of incoming slot passed to call;
   end entry lifetime */

void __thiscall CPanelTy::sub_004FAD60(CPanelTy *this,uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = this->field_004C;
  iVar1 = this->field_00A4;
  if (this->field_023F != CASE_2) {
    uVar2 = (uint)param_1 & 0xffff;
    uVar4 = param_2 & 0xffff;
    if (((((iVar3 <= (int)uVar2) && ((int)uVar2 < this->field_0078 + iVar3)) &&
         (iVar1 <= (int)uVar4)) && (((int)uVar4 < this->field_00D0 + iVar1 && (DAT_00808784 == 0))))
       && ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {

      iVar3 = ST3DSMAPContext::sub_006E68C0
                        (g_sT3DSMAPContext_00807598,(uVar2 - iVar3) + -5,(uVar4 - iVar1) + -7,
                         (int *)&param_1,(int *)&param_2);
      if (iVar3 != 0) {
        this->field_013C = 1;
        thunk_FUN_004ab530((uint)DAT_00807349,param_1,param_2);
      }
    }
  }
  return;
}

