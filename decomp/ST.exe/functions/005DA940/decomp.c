#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005BC5E0 @ 005BC90F -> read as EAX on
   every CFG path | 005BC5E0 @ 005BCCB0 -> read as EAX on every CFG path */

int __thiscall StartSystemTy::sub_005DA940(StartSystemTy *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;

  iVar1 = 4;
  bVar4 = true;
  piVar2 = (int *)(this->field_068A + 0xc + param_1 * 0x14);
  piVar3 = &DAT_007cd700;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  return (uint)bVar4;
}

