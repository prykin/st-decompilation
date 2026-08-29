#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 773 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOFakeTy.
   Evidence: this_call_owners=[TLOFakeTy]; agreed_this_calls=12; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=11; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOFakeTy::sub_004D0A80(TLOFakeTy *this,int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int exceptionCode;
  uint uVar2;
  int iVar3;
  ushort *puVar4;

  iVar3 = 0;
  if (0 < this->field_0245) {
    puVar4 = this->field_024D;
    puVar1 = puVar4;
    while (((*(int *)puVar1 != param_1 || (*(int *)(puVar1 + 2) != param_2)) ||
           (*(int *)(puVar1 + 4) != param_3))) {
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 6;
      if (this->field_0245 <= iVar3) {
        return 0;
      }
    }

    exceptionCode =
         thunk_FUN_00495ff0(puVar4[iVar3 * 6],puVar4[iVar3 * 6 + 2],puVar4[iVar3 * 6 + 4],0,
                            (RecoveredRecordView_00495FF0_A2A90B23 *)this);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp"
                 ,0x305);
    }
    if (iVar3 < this->field_0245 + -1) {
      puVar4 = this->field_024D + (iVar3 * 3 + 3) * 2;
      puVar1 = this->field_024D + iVar3 * 6;
      for (uVar2 = ((this->field_0245 - iVar3) + -1) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1
          ) {
        *(undefined4 *)puVar1 = *(undefined4 *)puVar4;
        puVar4 = puVar4 + 2;
        puVar1 = puVar1 + 2;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)puVar1 = (char)*puVar4;
        puVar4 = (ushort *)((int)puVar4 + 1);
        puVar1 = (ushort *)((int)puVar1 + 1);
      }
    }
    this->field_0245 = this->field_0245 + -1;
  }
  return 0;
}

