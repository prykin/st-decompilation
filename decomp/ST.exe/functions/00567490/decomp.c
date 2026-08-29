#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=00567493 dereference: MOV EAX,dword ptr [ESI +
   0xf8b] | 005674B3 dereference: MOV ECX,dword ptr [ESI + 0xdf3] | 005674CC dereference: MOV
   EAX,dword ptr [ESI + 0xdef] | 005674DF dereference: MOV dword ptr [ESI + 0xdef],0x0 */

void __fastcall FUN_00567490(RecoveredRecordView_00567490_37C489F0 *param_1)

{

  if (param_1->field_0F8B != 0) {
    FUN_006c1e20();
    memset(&param_1->field_0xe0b, 0, 0x180); /* compiler bulk-zero initialization */
  }
  if (param_1->field_0DF3 != 0) {
    FUN_0071a8d0(&param_1->field_0DF3);
  }
  if (param_1->field_0DEF != nullptr) {
    cMf32::delete(param_1->field_0DEF);
    param_1->field_0DEF = nullptr;
  }
  return;
}

