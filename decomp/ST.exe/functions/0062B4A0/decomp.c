#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=4, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00627EB0 @ 0062809D -> read as AL on every CFG path | 00627EB0 @
   00628557 -> read as AL on every CFG path | 00629E60 @ 00629E75 -> read as AL on every CFG path |
   00629F90 @ 00629FE5 -> read as AL on every CFG path */

byte __thiscall STParticleC::sub_0062B4A0(STParticleC *this)

{
  int iVar1;
  int iVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = this->field_0046;
  sVar3 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar3) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar3) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5;
  }
  iVar1 = this->field_004A;
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar6;
  }
  iVar2 = this->field_004E;
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    local_10 = (short)(((short)(iVar2 / 200) + sVar3) -
                      (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_10 = (int)(short)(((short)(iVar2 / 200) + sVar3) -
                           (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (local_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar5) &&
       (iVar5 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar6)) &&
     (iVar6 <= g_sT3DSMAPContext_00807598->field_0054)) {
    iVar5 = FUN_006ddbd0();
    pVVar4 = g_visibleClass_00802A88;
    if (((iVar5 == 0) || (g_visibleClass_00802A88 == nullptr)) ||
       ((DAT_0080874d == -1 || (g_visibleClass_00802A88->field_00F8 == 0))))
    goto cf_common_exit_0062B616;
    VisibleClassTy::sub_00558C00
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_8,&local_14
               ,&local_c);
    if (((local_10 < 0) || (4 < local_10)) ||
       ((local_14 < 0 ||
        ((((pVVar4->field_0030 <= local_14 ||
           (local_c = g_centeredOffsets5[local_10] + local_c, local_c < 0)) ||
          (pVVar4->field_0034 <= local_c)) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_14 + local_c * pVVar4->field_0030] != 0))))))))
    goto cf_common_exit_0062B616;
  }
  iVar5 = 0;
cf_common_exit_0062B616:
  return (byte)iVar5;
}

