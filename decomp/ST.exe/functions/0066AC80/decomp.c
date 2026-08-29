#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: previous_type=/undefined4
   parameter=/char Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=0066AC86 MOV
   ECX,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: previous_type=/uint
   parameter=/ushort Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=0066AC83
   MOV EAX,dword ptr [EBP + 0xc]; first-use mask or exact narrow callee formal
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/uint
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /uint */

int FUN_0066ac80(char param_1,ushort param_2)

{
  STGroupBoatC *pSVar1;
  int iVar2;

  /* ST_CALLSITE[0066AC91]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00423300_67884733; source view only; no Ghidra override */
  pSVar1 = thunk_FUN_0042b760(param_1,param_2);
  if ((pSVar1 != nullptr) &&

     (iVar2 = thunk_FUN_00423300((RecoveredRecord_00423300_67884733 *)pSVar1), iVar2 != 0)) {
    return iVar2;
  }
  return 0;
}

