#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C7EA9 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C1610 -> 006C7EA0 @ 005C172E; /MReportTy+0x73 | 005C1610 -> 006C7EA0 @ 005C17C7;
   /MReportTy+0x73

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006c7ea0(AnonPointee_MReportTy_0073 *param_1,undefined4 param_2,undefined4 *param_3,
                 uint param_4,byte param_5)

{
  AnonPointee_MReportTy_0073 *local_10;
  uint local_c;
  uint local_8;

  local_10 = param_1;
  local_8 = (uint)param_5;
  local_c = param_2;
  Library::DKW::DDX::FUN_006d8260(param_3,param_4,FUN_006c7ee0,&local_10);
  return;
}

