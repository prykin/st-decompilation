#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=00668676 dereference: MOV CL,byte ptr [EAX + 0x18] |
   0066868A dereference: MOV EAX,dword ptr [ESI] | 00668696 dereference: MOV dword ptr [ESI],0x0 */

void __cdecl FUN_00668670(RecoveredRecord_00668670_926FA73E *param_1)

{
  uint *puVar1;
  int iVar2;

  if (param_1->field_0018 != '\0') {
    puVar1 = (undefined4 *)&param_1[0x13].field_0x10;
    iVar2 = 7;
    do {
      if ((DArrayTy *)*puVar1 != nullptr) {
        DArrayDestroy((DArrayTy *)*puVar1);
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

