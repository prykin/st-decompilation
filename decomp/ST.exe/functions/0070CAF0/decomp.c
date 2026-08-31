#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070CAF0 -> 0070C9E0 @ 0070CAFF

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: incoming stack slot is read as a int before its address is passed as a distinct output
   lifetime
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/char
   previous_type=/int Evidence: entry-use width=/char; unmasked_dword_reads=0; evidence=0070CAF3 MOV
   ECX,dword ptr [EBP + 0x10]; first-use mask or exact narrow callee formal | 0070CAFF address-of
   incoming slot passed to call; end entry lifetime
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:2: parameter=/int
   Evidence: the physical incoming slot address escapes through a call; the later output lifetime
   must not narrow the entry ABI or expose an upper-byte in_stack live-in; restoring /int; entry-use
   width=/char; unmasked_dword_reads=0; evidence=0070CAF3 MOV ECX,dword ptr [EBP + 0x10]; first-use
   mask or exact narrow callee formal | 0070CAFF address-of incoming slot passed to call; end entry
   lifetime */

void __cdecl FUN_0070caf0(RecoveredRecordView_0070C9E0_7D0EE2FF *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  puVar1 = FUN_0070c9e0(param_1,(char)param_3,(uint *)&param_3);
  if (puVar1 == nullptr) {
    return;
  }
  *param_2 = param_3;
  return;
}

