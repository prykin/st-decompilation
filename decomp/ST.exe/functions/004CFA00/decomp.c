#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14 */

void __thiscall
TLOBaseTy::sub_004CFA00
          (TLOBaseTy *this,TLOBaseTy_sub_004CFA00_param_1Enum param_1,int param_2,int *param_3,
          int *param_4)

{
  TLOBaseTy_field_0245State TVar1;
  TLOBaseTy_field_04D0State TVar2;
  byte bVar3;
  int iVar4;
  int iVar5;

  /* ST_CALLSITE[004CFA15]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte((char)this->field_023D);
  iVar4 = (-(uint)(bVar3 != 1) & 0xfffffffd) + 0x13;
  /* ST_CALLSITE[004CFA34]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar3 = LookupRecordByte((char)this->field_023D);
  TVar1 = this->field_0245;
  iVar5 = bVar3 - 1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
    TVar2 = this->field_04D0;
    break;
  default:
    goto switchD_004cfa5c_caseD_a;
  case CASE_D:
  case CASE_E:
    TVar2 = this->field_04D0;
  }
  if (TVar2 == CASE_3) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5;
    *param_4 = iVar5 + iVar4;
    return;
  }
  if (TVar2 == CASE_4) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5 + iVar4;
    *param_4 = iVar5 + iVar4;
    return;
  }
  if (TVar2 == CASE_5) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_4 = iVar5;
    *param_3 = iVar5 + iVar4;
    return;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8 + 4);
switchD_004cfa5c_caseD_a:
  return;
}

