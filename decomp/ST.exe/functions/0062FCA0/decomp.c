#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STRubbishC::sub_0062FCA0(STRubbishC *this,AnonShape_0062FCA0_22A9EE35 *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;

  /* ST_CALLSITE[0062FCA7]: CALL 0x004017f3; direct=004017F3 STRubbishC::RubbishCreatePart */
  iVar3 = RubbishCreatePart(this);
  iVar4 = this->field_01E1;
  if (iVar3 < 0) {
    if (iVar4 == 0) {
      /* ST_CALLSITE[0062FD9A]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
      sub_0062F900(this);
      return 0xffff;
    }
  }
  else {
    if (4 < iVar4) {
      sVar2 = (short)((uint)param_1->field_0028 >> 0x10);
      if ((sVar2 != 3) && (sVar2 != 6)) {
        iVar4 = param_1->field_0020;
        puVar6 = &this->field_01E5;
        iVar5 = 5;
        do {
          piVar1 = (int *)*puVar6;
          if (((piVar1 != nullptr) && (piVar1[1] != 3)) && (piVar1[1] != 6)) {
            *piVar1 = *piVar1 + iVar4 / 5;
          }
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      return this->field_01E1;
    }
    this->field_01E1 = iVar4 + 1;
    /* ST_CALLSITE[0062FCCF]: CALL 0x004036ca; direct=004036CA STRubbishC::sub_0062EF00 */
    sub_0062EF00(this,iVar3,param_1);
    if (this->field_01F9 != '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = thunk_FUN_0062f080(this,iVar3,*(undefined4 *)((&this->field_01E5)[iVar3] + 0xc),
                                 *(undefined4 *)((&this->field_01E5)[iVar3] + 4));
      if (iVar4 != 0) {
        thunk_FUN_0062f0d0(this,iVar3);
        return iVar3;
      }
      if (this->field_01E1 == 0) {
        /* ST_CALLSITE[0062FD05]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
        sub_0062F900(this);
        return 0xffff;
      }
      thunk_FUN_0062f6c0(this,iVar3);
      iVar3 = -1;
    }
  }
  return iVar3;
}

