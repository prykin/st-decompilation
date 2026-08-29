#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=6, scalar_uses=0; sites=00647963 dereference: MOV EAX,dword ptr [ESI + 0x5d]
   | 0064796A dereference: MOV ECX,dword ptr [ESI + 0x71] | 0064797C dereference: MOV EAX,dword ptr
   [ESI + 0x7a] | 00647983 dereference: MOV EDX,dword ptr [ESI + 0x7e] | 00647995 dereference: MOV
   EAX,dword ptr [ESI + 0x86] | 0064799F dereference: MOV ECX,dword ptr [ESI + 0x8a] */

void __fastcall FUN_00647960(RecoveredRecord_STVolcanoC_00647960 *param_1)

{
  if (-1 < (int)param_1->field_005D) {
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,param_1->field_005D,0,param_1->field_0071);
  }
  if (-1 < (int)param_1->field_007A) {
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,param_1->field_007A,0,param_1->field_007E);
  }
  if (-1 < (int)param_1->field_0086) {
    ST3DSMAPContext::sub_006EA270
              (g_sT3DSMAPContext_00807598,param_1->field_0086,0,param_1->field_008A);
  }
  return;
}

