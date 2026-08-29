#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=0062B303 dereference: MOV AL,byte ptr [ECX + 0x15] |
   0062B31F dereference: CMP byte ptr [ECX + 0x14],0x3 | 0062B32E dereference: CMP byte ptr [ECX +
   0x14],0x6 | 0062B33D dereference: MOV AL,byte ptr [ECX + 0x14] */

undefined4 __fastcall FUN_0062b300(RecoveredRecordView_0062B300_D23B876C *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_0015) {
  case 1:
    if (param_1->field_0014 < 4) {
      return 1;
    }
    break;
  case 2:
  case 8:
    if (param_1->field_0014 < 7) {
      return 1;
    }
    break;
  case 0x80:
    if (param_1->field_0014 == 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

