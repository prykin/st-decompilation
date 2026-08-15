#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=006E903A MOV AX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=006E9030 MOV CX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated return.
   Evidence: 006E9000 returns forwarded through return of STManRuinC::sub_00630C50 @ 00630F22

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=6; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=5;
   incoming_ecx_receiver_callers=1; attributed_named_callers=3; owner_evidence_coverage=adequate */

ushort * __thiscall
ST3DSMAPContext::sub_006E9000
          (ST3DSMAPContext *this,int param_1,ushort param_2,ushort param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  AnonShape_006E8EA0_96B71903 *pAVar1;
  int iVar2;
  longlong lVar3;

  pAVar1 = Library::DKW::LIB::MemAllocClear(0x2c);
  pAVar1->field_0008 = param_4;
  pAVar1->field_000C = param_5;
  pAVar1->field_0010 = param_6;
  lVar3 = Library::MSVCRT::__ftol();
  *(int *)&pAVar1->field_0x18 = (int)lVar3;
  pAVar1->field_001E = param_3;
  pAVar1->field_001C = param_2;
  pAVar1->field_0020 = param_1;
  pAVar1->field_0024 = param_7;
  FUN_006b9910((undefined4 *)&this->field_0x294,(int)pAVar1);
  iVar2 = sub_006E8EA0(this,pAVar1);
  if (iVar2 != 0) {
    this->field_0134 = 1;
  }
  return (ushort *)pAVar1;
}

