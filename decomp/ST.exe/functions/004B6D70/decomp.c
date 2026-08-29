#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=7, scalar_uses=0; sites=004B6D73 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004B6D76 dereference: MOV ECX,dword ptr [ESI + 0x23d] | 004B6D8D dereference: MOV CL,byte ptr
   [ESI + 0x24] | 004B6D92 dereference: MOV EAX,dword ptr [ESI + 0x235] | 004B6DC3 dereference: MOV
   DL,byte ptr [ESI + 0x24] | 004B6DD4 dereference: MOV EAX,dword ptr [ESI + 0x10] | 004B6DDF
   dereference: MOV EAX,dword ptr [ESI + 0x24] */

undefined4 __fastcall FUN_004b6d70(void *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;

  if (STField<int>(param_1,0x24) != STField<int>(param_1,0x23d)) {
    /* ST_CALLSITE[004B6D88]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar2 = LookupRecordByte((char)STField<int>(param_1,0x23d));
    iVar1 = STField<int>(param_1,0x235);
    /* ST_CALLSITE[004B6DAD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = LookupRecordByte(STField<char>(param_1,0x24));
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    param_2 = extraout_EDX;
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }

  thunk_FUN_004b70d0(g_allPlayers_007FA174,
                     STReplaceLowByte((uint32_t)(param_2), (uint8_t)(STField<undefined1>(param_1,0x24))),0x28);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (STField<uint>(param_1,0x24) == (uint)*(byte *)(STField<int>(param_1,0x10) + 0x112d)) {
    /* ST_CALLSITE[004B6DEF]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)STField<uint>(param_1,0x24));
  }
  return 0;
}

