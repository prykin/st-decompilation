#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=7, scalar_uses=0; sites=004D9B23 dereference: MOV EAX,dword ptr [ESI +
   0x4d0] | 004D9B34 dereference: MOV AL,byte ptr [ESI + 0x24] | 004D9B3D dereference: MOV CL,byte
   ptr [ESI + 0x24] | 004D9B4C dereference: MOV EDX,dword ptr [ESI + 0x10] | 004D9B4F dereference:
   MOV ECX,dword ptr [ESI + 0x24] | 004D9B6A dereference: MOV dword ptr [ESI + 0x4d0],0x0 | 004D9B80
   dereference: MOV dword ptr [ESI + 0x4d4],EAX */

undefined4 __fastcall FUN_004d9b20(void *param_1)

{
  if (STField<int>(param_1,0x4d0) != 0) {

    thunk_FUN_004d87b0(STField<char>(param_1,0x24),STField<int>(param_1,0x4d0));

    thunk_FUN_004d78e0(STField<char>(param_1,0x24));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (STField<uint>(param_1,0x24) == (uint)*(byte *)(STField<int>(param_1,0x10) + 0x112d)) {
      /* ST_CALLSITE[004D9B65]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
      STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)STField<uint>(param_1,0x24));
    }
    STField<undefined4>(param_1,0x4d0) = 0;
    STField<uint>(param_1,0x4d4) = g_playSystem_00802A38->field_00E4;
  }
  return 0;
}

