#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=00478640 @ 00478724
   -> CMP CMP EAX,0x1 | 00478640 @ 004788C5 -> CMP CMP EAX,0x1 | 00478640 @ 00478A39 -> CMP CMP
   EAX,0x1 | 00478640 @ 00478D6D -> CMP CMP EAX,0x1 | 00478640 @ 00478F28 -> CMP CMP EAX,0x1 |
   00478640 @ 00479106 -> CMP CMP EAX,0x1 */

int __fastcall FUN_004d6f70(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)param_1);
  uVar2 = thunk_FUN_004e41c0(param_1[9]);
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = thunk_FUN_004e41c0(param_1[9]);
  }
  thunk_FUN_004e4330(param_1[9],uVar1);
  thunk_FUN_004d6eb0(param_1,uVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
    thunk_FUN_004d8b70((char)param_1[9]);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*param_1 + 0xc4))();
  return (uint)(99 < iVar3);
}

