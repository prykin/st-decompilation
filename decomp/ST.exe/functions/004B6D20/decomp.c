#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004B6D2B dereference: MOV AL,byte ptr [ESI + 0x24] |
   004B6D34 dereference: MOV ECX,dword ptr [ESI + 0x10] | 004B6D37 dereference: MOV EAX,dword ptr
   [ESI + 0x24] */

undefined4 __fastcall FUN_004b6d20(void *param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;


  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  thunk_FUN_004b7080(g_allPlayers_007FA174,
                     STReplaceLowByte((uint32_t)(in_EAX), (uint8_t)(STField<undefined1>(param_1,0x24))),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (STField<uint>(param_1,0x24) == (uint)*(byte *)(STField<int>(param_1,0x10) + 0x112d)) {
    /* ST_CALLSITE[004B6D4D]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)STField<uint>(param_1,0x24));
  }
  return 0;
}

