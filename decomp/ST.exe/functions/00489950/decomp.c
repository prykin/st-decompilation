#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=00489956 dereference: MOV AL,byte ptr [EBX + 0x281]
   | 00489967 dereference: MOV EAX,dword ptr [ESI] | 00489973 dereference: MOV dword ptr [ESI],0x0 |
   0048997C dereference: MOV AL,byte ptr [EBX + 0x281] */

void __fastcall FUN_00489950(RecoveredRecord_00489950_C0CE8121 *param_1)

{
  RecoveredRecord_00489950_C0CE8121 *pRVar1;
  int iVar2;

  iVar2 = 0;
  if (param_1->field_0281 != '\0') {
    pRVar1 = param_1 + 1;
    do {
      if (*(DArrayTy **)pRVar1 != nullptr) {
        DArrayDestroy(*(DArrayTy **)pRVar1);
        *(undefined4 *)pRVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      pRVar1 = (RecoveredRecord_00489950_C0CE8121 *)&pRVar1->field_0x4;
    } while (iVar2 < (int)(uint)(byte)param_1->field_0281);
  }
  return;
}

