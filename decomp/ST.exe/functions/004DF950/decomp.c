#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004DF957 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004DF980 dereference: MOV ECX,dword ptr [ESI + 0x24] | 004DF99B dereference: MOV ESI,dword ptr
   [ESI + 0x24] */

undefined4 __fastcall FUN_004df950(RecoveredRecord_004DF950_B7AEE0F8 *param_1)

{
  DArrayTy *pDVar1;
  RecoveredRecord_004DF950_B7AEE0F8 *local_8;

  if (g_packedRecords_A62x8[param_1->field_0024].field1967_0x9d2 == nullptr) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    g_packedRecords_A62x8[param_1->field_0024].field1967_0x9d2 = pDVar1;
  }
  local_8 = param_1;

  Library::DKW::TBL::DArrayAppend
            (g_packedRecords_A62x8[param_1->field_0024].field1967_0x9d2,&local_8);
  return 0;
}

