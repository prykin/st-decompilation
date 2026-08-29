#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as OpticClassC.
   Evidence: this_call_owners=[OpticClassC]; agreed_this_calls=6; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; incoming_this_forward_calls=1;
   entry_incoming_ecx_capture=true; ret_stack_matches_explicit_parameters=true;
   direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0; attributed_named_callers=6;
   owner_evidence_coverage=adequate; unique_primary_physical_vtable=true;
   callee_closed_hidden_ecx_receiver_transport */

void __thiscall
OpticClassC::sub_004A9B60(OpticClassC *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1 - DAT_00807400;
  iVar2 = iVar1 - DAT_00807408;
  DAT_00807418 = param_3;
  iVar3 = param_2 - DAT_00807404;
  iVar4 = iVar3 - DAT_0080740c;
  DAT_00807410 = param_1;
  DAT_00807414 = param_2;
  DAT_0080741c = param_4;
  Library::Ourlib::STREND::FUN_006dd660(g_sT3DSMAPContext_00807598,iVar1,iVar3,param_3,param_4);
  unique0x10000069 = ((float)iVar1 * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807441 = ((float)(iVar2 + param_3) * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807445 = ((float)(iVar4 + param_4) * DAT_00807424) / (float)DAT_0080740c;
  _DAT_00807449 = ((float)iVar3 * DAT_00807424) / (float)DAT_0080740c;
  thunk_FUN_004a9990();
  return;
}

