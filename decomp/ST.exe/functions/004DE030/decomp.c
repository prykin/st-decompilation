#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004DE037 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004DE060 dereference: MOV ECX,dword ptr [ESI + 0x24] | 004DE07B dereference: MOV ESI,dword ptr
   [ESI + 0x24] */

undefined4 __fastcall FUN_004de030(RecoveredRecord_004DE030_FF2F073D *param_1)

{
  DArrayTy *pDVar1;
  RecoveredRecord_004DE030_FF2F073D *local_8;

  if (g_packedRecords_A62x8[param_1->field_0024].field1966_0x9ce == nullptr) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
    g_packedRecords_A62x8[param_1->field_0024].field1966_0x9ce = pDVar1;
  }
  local_8 = param_1;

  Library::DKW::TBL::DArrayAppend
            (g_packedRecords_A62x8[param_1->field_0024].field1966_0x9ce,&local_8);
  return 0;
}

