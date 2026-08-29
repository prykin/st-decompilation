#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004DF107 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004DF130 dereference: MOV ECX,dword ptr [ESI + 0x24] | 004DF14B dereference: MOV ESI,dword ptr
   [ESI + 0x24] */

undefined4 __fastcall FUN_004df100(RecoveredRecord_004DF100_3B3D6BBD *param_1)

{
  DArrayTy *pDVar1;
  RecoveredRecord_004DF100_3B3D6BBD *local_8;

  if (g_packedRecords_A62x8[param_1->field_0024].field1974_0x9ee == nullptr) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    g_packedRecords_A62x8[param_1->field_0024].field1974_0x9ee = pDVar1;
  }
  local_8 = param_1;

  Library::DKW::TBL::DArrayAppend
            (g_packedRecords_A62x8[param_1->field_0024].field1974_0x9ee,&local_8);
  return 0;
}

