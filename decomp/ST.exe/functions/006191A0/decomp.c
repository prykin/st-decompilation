#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00618C00 @ 00618D6F -> read as AL on every CFG path | 00618C00 @
   00618E68 -> read as AL on every CFG path */

byte __thiscall STJumpMineC::sub_006191A0(STJumpMineC *this,uint param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  STJumpMineC *local_8;

  if ((((g_sT3DSMAPContext_00807598->field_0048 <= (int)param_1) &&
       ((int)param_1 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= param_2)) &&
     (param_2 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_8 = this;
    param_1 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    if (((param_1 == 0) || (g_visibleClass_00802A88 == nullptr)) ||
       ((iVar2 = (int)this->field_00CD, DAT_0080874d == -1 ||
        (g_visibleClass_00802A88->field_00F8 == 0)))) goto cf_common_exit_00619287;
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,(int)this->field_00C9,
               (int)this->field_00CB,&param_2,(int *)&local_8);
    if (((iVar2 < 0) || (4 < iVar2)) ||
       ((param_2 < 0 ||
        (((((int)pVVar1->field_0030 <= param_2 ||
           (iVar2 = (int)&local_8->vtable + g_centeredOffsets5[iVar2], iVar2 < 0)) ||
          (pVVar1->field_0034 <= iVar2)) ||
         ((pVVar1->field_004C == nullptr ||
          (pVVar1->field_004C[param_2 + iVar2 * pVVar1->field_0030] != 0))))))))
    goto cf_common_exit_00619287;
  }
  param_1 = 0;
cf_common_exit_00619287:
  return (byte)param_1;
}

