#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall TLOBaseTy::sub_004C90C0(TLOBaseTy *this)

{
  int iVar1;
  TLOBaseTy_field_05ACState TVar2;
  int iVar2;

  iVar1 = *(int *)&this->field_0x361;
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar1 == 1) {
    /* ST_CALLSITE[004C90FB]: CALL 0x00401fdc; direct=00401FDC TLOBaseTy::sub_004CE7D0 */
    iVar2 = sub_004CE7D0(this);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        /* ST_CALLSITE[004C90E7]: CALL 0x00405768; direct=00405768 TLOBaseTy::sub_004CC900 */
        sub_004CC900(this);
      }
      iVar2 = 1;
      goto LAB_004c9106;
    }
    /* ST_CALLSITE[004C90F2]: CALL 0x00403481; direct=00403481 TLOBaseTy::sub_004E3120 */
    iVar2 = sub_004E3120(this);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004c9106:
  *(undefined4 *)&this->field_0x361 = 0;
  if ((((*(int *)(&DAT_00792778 + this->field_0235 * 4) != 0) &&
       ((TVar2 = this->field_05AC, TVar2 != CASE_45 || (this->field_04D0 == CASE_1)))) &&
      ((TVar2 != CASE_4E || (this->field_04D0 == CASE_1)))) &&
     ((TVar2 != CASE_72 || (this->field_04D0 == CASE_1)))) {
    this->field_0261 = 1;
    *(undefined4 *)&this->field_0x2e1 = 1;
  }
  /* ST_CALLSITE[004C915D]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  RotateSpr(this,1);
  return iVar2;
}

