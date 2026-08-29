#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall MoneyTy::sub_0052BDA0(MoneyTy *this,char param_1,int param_2)

{
  byte uVar1;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  CHAR local_c [8];

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == DAT_0080874d) {
    if (DAT_00808a97 != -1) {
      param_2 = DAT_00808a97 - param_2;
    }
    this->field_009E = param_2;
    /* ST_CALLSITE[0052BDDC]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_c,"%5d",param_2);
    if (DAT_00808a97 == -1) {
      bVar3 = 0;
    }
    else {
      bVar3 = (-(0x14 < (uint)this->field_009E) & 0xfeU) + 2;
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = bVar3 + 1;
    }
    pRVar2 = (RecoveredRecord_006B4FA0_DAC3A217 *)this->field_007E;
    uVar5 = *(uint *)&pRVar2[1].field_0x4;
    if (uVar5 == 0) {
      uVar5 = ((uint)pRVar2->field_000E * *(int *)&pRVar2->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar2->field_0x8;
    }
    uVar1 = this->field_0069;

    puVar4 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar2));
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }

    ccFntTy::SetSurf(this->field_006E,(int)this->field_007E,0,0,0,this->field_0060,this->field_0064);

    ccFntTy::WrStr(this->field_006E,local_c,-1,-1,(uint)bVar3);
    /* ST_CALLSITE[0052BE9D]: CALL 0x004033cd; direct=004033CD MoneyTy::sub_0052BBE0 */
    sub_0052BBE0(this);
  }
  return;
}

