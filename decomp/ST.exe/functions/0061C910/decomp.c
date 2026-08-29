#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00619C70 -> 0061C910 @ 0061A76B; /STJumpMineC+0x93

   [STPrototypeApplier] Propagated return.
   Evidence: 0061C910 returns stored into /STJumpMineC+0x93 @ 0061A773

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 0061C910 -> 0061B340 @ 0061C9DA

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=2; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=18; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

STJumpMineC_field_0093State __thiscall
STJumpMineC::sub_0061C910
          (STJumpMineC *this,int param_1,STJumpMineC_field_0093State param_2,undefined4 param_3,
          undefined4 param_4,int param_5,int param_6,int param_7,int param_8)

{
  STJumpMineC_field_0093State SVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  iVar2 = param_7;
  SVar1 = param_2;
  local_8 = 0;
  if (param_1 == 1) {
    /* ST_CALLSITE[0061C9DA]: CALL 0x004046ab; direct=004046AB STJumpMineC::sub_0061B340 */
    iVar3 = sub_0061B340(this,(short)param_3,(short)param_4,param_5,param_6,param_7,param_8,&param_7
                        );
    if (iVar3 != 0) {
      this->field_009F = this->field_0040;
      this->field_00A3 = this->field_0044;
      this->field_00A7 = param_7;
      this->field_0034 = 0;
      return CASE_1;
    }
    this->field_009F = param_6;
    this->field_00A3 = iVar2;
    this->field_00A7 = param_7;
    this->field_0034 = 0;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    if ((int *)this->field_0034 != nullptr) {
      /* ST_CALLSITE[0061C95B]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
      iVar2 = STStructuralVirtualCall<undefined4>(STField<int *>(this,0x34), 0xE0, this->field_0038, (byte *)((int)&param_2 + 2), (int)&param_1 + 2, (int)&param_8 + 2, &local_8);
      if (iVar2 == 0) {
        this->field_0044 = (int)STPiece<2,2>(param_1);
        this->field_00A3 = (int)STPiece<2,2>(param_1);
        this->field_0040 = (short)STPiece<2,2>(param_2);
        this->field_0048 = STPiece<2,2>(param_8) + 0x28;
        this->field_003C = local_8;
        this->field_009F = (short)STPiece<2,2>(param_2);
        this->field_00A7 = STPiece<2,2>(param_8) + 0x28;
        /* ST_CALLSITE[0061C999]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
        iVar2 = LoadImagJMine(this,2);
        return CASE_6 - (iVar2 != 0);
      }
    }
    return CASE_6;
  }
  return SVar1;
}

