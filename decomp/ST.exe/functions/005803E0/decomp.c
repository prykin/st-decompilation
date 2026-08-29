#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=005803E3 dereference: TEST byte ptr [ESI +
   0x261],0x1 | 0058041E dereference: MOV EAX,dword ptr [ESI + 0x261] | 00580427 dereference: MOV
   dword ptr [ESI + 0x261],EAX */

void __fastcall FUN_005803e0(void *param_1)

{
  if ((STField<byte>(param_1,0x261) & 1) == 0) {
    /* ST_CALLSITE[00580403]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00580419]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)((int)param_1 + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    STField<uint>(param_1,0x261) = STField<uint>(param_1,0x261) | 1;
  }
  return;
}

