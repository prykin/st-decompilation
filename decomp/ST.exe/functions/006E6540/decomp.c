#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=5, scalar_uses=0; sites=006E654C dereference: MOV dword ptr [ECX + 0x8],EAX
   | 006E6552 dereference: FSTP float ptr [ECX + 0x4] | 006E6561 dereference: MOV AL,byte ptr [ECX +
   0x16] | 006E6568 dereference: MOV DL,byte ptr [ECX + 0x17] | 006E6576 dereference: MOV byte ptr
   [ECX + 0x16],AL */

void FUN_006e6540(RecoveredRecordView_006E6540_42B9D3AB *param_1,undefined4 param_2,
                 undefined4 param_3,int param_4)

{
  param_1->field_0008 = param_3;
  param_1->field_0004 = param_2;
  if (param_4 != -2) {
    if (param_4 == -1) {
      param_4 = (byte)param_1->field_0016 + 1;
    }
    if ((int)(uint)param_1->field_0017 <= param_4) {
      param_4 = param_4 % (int)(uint)param_1->field_0017;
    }
    param_1->field_0016 = (char)param_4;
  }
  return;
}

