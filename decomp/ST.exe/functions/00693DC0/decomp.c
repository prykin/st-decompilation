#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00693DC0 -> 00693D00 @ 00693E07

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00693B20.
   Evidence: incoming_receiver_captures=0; entry_receiver_register_captures=1; receiver_accesses=1;
   receiver_bulk_copies=1; incoming_edx_uses=0; calls=0; ecx_pointer_setup=0; ecx_scalar_setup=0;
   caller_cleanup_calls=0; callee_ret_pop=[8]; expected_stack=8; receiver_family_members=13;
   same_this_callees=3; closed_callee_receiver_chain */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693dc0
          (RecoveredReceiver_00693B20 *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  RecoveredReceiver_00693B20 *pRVar3;
  RecoveredRecordView_00693910_0CDC4AE1 *pRVar4;
  RecoveredRecordView_00693910_0CDC4AE1 local_19a8;
  uint uStack_8;
  uStack_8 = 0x693dcd;
  thunk_FUN_00693910(&local_19a8);
  pRVar3 = this;
  pRVar4 = &local_19a8;
  memmove(pRVar4, pRVar3, 0x1998); /* compiler REP MOVS byte copy */
  pRVar4 = (RecoveredRecordView_00693910_0CDC4AE1 *)((byte *)pRVar4 + 0x1998);
  pRVar3 = pRVar3 + 0x222;
  *(undefined1 *)pRVar4 = *(undefined1 *)&pRVar3->field_0000;
  iVar1 = 0;
  do {
    thunk_FUN_006940b0(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);

  iVar1 = thunk_FUN_00693d00(this,param_1,param_2);
  pRVar4 = &local_19a8;
  memmove(this, pRVar4, 0x1998); /* compiler REP MOVS byte copy */
  this = this + 0x222;
  pRVar4 = (RecoveredRecordView_00693910_0CDC4AE1 *)((byte *)pRVar4 + 0x1998);
  *(undefined1 *)&this->field_0000 = *(undefined1 *)pRVar4;
  thunk_FUN_006939d0();
  return iVar1;
}

