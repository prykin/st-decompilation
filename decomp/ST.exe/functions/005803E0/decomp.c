#include "../../pseudocode_runtime.h"


void __fastcall FUN_005803e0(int param_1)

{
  if ((((byte *)param_1)[0x261] & 1) == 0) {
    /* ST_CALLSITE[00580403]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00580419]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)(param_1 + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    *(uint *)(param_1 + 0x261) = *(uint *)(param_1 + 0x261) | 1;
  }
  return;
}

