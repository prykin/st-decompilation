#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00719C90 -> EXTERNAL:000000D2 @ 00719CCB

   [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=17, unknown=0 */

void __cdecl FUN_00719c90(MCIERROR mcierr,MCIDEVICEID *param_2)

{
  BOOL BVar1;
  CHAR local_104 [256];

  if (*param_2 != 0) {
    FUN_00719c60((DWORD_PTR)param_2);
  }
  *param_2 = 0;
  if (DAT_007f07c4 != 0) {
    /* ST_CALLSITE[00719CCB]: CALL dword ptr [0x0085bebc] */
    BVar1 = mciGetErrorStringA(mcierr,local_104,0x100);
    if (BVar1 != 0) {
      /* ST_CALLSITE[00719CE8]: CALL dword ptr [0x0085bdec] */
      MessageBoxA((HWND)0x0,local_104,"MCI error",0x2030);
    }
  }
  return;
}

