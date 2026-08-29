#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004E28D7 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004E2900 dereference: MOV ECX,dword ptr [ESI + 0x24] | 004E291B dereference: MOV ESI,dword ptr
   [ESI + 0x24] */

undefined4 __fastcall FUN_004e28d0(RecoveredRecord_004E28D0_27E8535E *param_1)

{
  DArrayTy *pDVar1;
  RecoveredRecord_004E28D0_27E8535E *local_8;

  if (g_packedRecords_A62x8[param_1->field_0024].field1969_0x9da == nullptr) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    g_packedRecords_A62x8[param_1->field_0024].field1969_0x9da = pDVar1;
  }
  local_8 = param_1;

  Library::DKW::TBL::DArrayAppend
            (g_packedRecords_A62x8[param_1->field_0024].field1969_0x9da,&local_8);
  return 0;
}

