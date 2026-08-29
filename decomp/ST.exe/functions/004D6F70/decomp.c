#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=00478640 @ 00478724
   -> CMP CMP EAX,0x1 | 00478640 @ 004788C5 -> CMP CMP EAX,0x1 | 00478640 @ 00478A39 -> CMP CMP
   EAX,0x1 | 00478640 @ 00478D6D -> CMP CMP EAX,0x1 | 00478640 @ 00478F28 -> CMP CMP EAX,0x1 |
   00478640 @ 00479106 -> CMP CMP EAX,0x1 */

int __fastcall FUN_004d6f70(int *param_1)

{
  int iVar1;
  int iVar2;

  /* ST_CALLSITE[004D6F74]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
  iVar1 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)param_1);

  iVar2 = thunk_FUN_004e41c0(param_1[9]);
  if (iVar2 < iVar1) {

    iVar1 = thunk_FUN_004e41c0(param_1[9]);
  }

  thunk_FUN_004e4330(param_1[9],iVar1);
  thunk_FUN_004d6eb0(param_1,iVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
    /* ST_CALLSITE[004D6FD2]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    STAllPlayersC::sub_004D8B70(g_allPlayers_007FA174,(char)param_1[9]);
  }
  /* ST_CALLSITE[004D6FDB]: CALL dword ptr [EAX + 0xc4]; [STIndirectCallsiteApplier] exact slot 0xC4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0xC4);
  return (uint)(99 < iVar1);
}

