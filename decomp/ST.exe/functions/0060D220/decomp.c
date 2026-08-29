#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=0060D224 dereference: MOV EAX,dword ptr [ESI +
   0x240] | 0060D236 dereference: MOV EAX,dword ptr [ESI + 0x244] | 0060D255 dereference: MOV
   EAX,dword ptr [ESI + 0x244] */

void __fastcall FUN_0060d220(RecoveredRecordView_0060D220_EC588C54 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  if (param_1->field_0240 == 0) {
    iVar3 = 0;
    if (0 < param_1->field_023C) {
      iVar4 = 0;
      do {
        iVar1 = param_1->field_0244 + iVar4;
        if (*(int *)(param_1->field_0244 + iVar4) != 0) {
          if (STField<int>(iVar1,0x40) != 0) {
            thunk_FUN_0062c2a0((int *)(iVar1 + 0x40));
          }
          if (*(int *)(param_1->field_0244 + 8 + iVar4) != 0) {
            FreeAndNull((void *)(param_1->field_0244 + 8 + iVar4));
          }
          *(undefined4 *)(param_1->field_0244 + iVar4) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x44;
      } while (iVar3 < param_1->field_023C);
    }
  }
  else if ((param_1->field_0240 == 1) && (piVar2 = (int *)param_1->field_0244, *piVar2 != 0)) {
    if (piVar2[2] != 0) {
      FreeAndNull(piVar2 + 2);
    }
    *STField<undefined4 *>(param_1,0x244) = 0;
    return;
  }
  return;
}

