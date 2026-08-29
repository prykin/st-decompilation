#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004DFB00 @ 004DFB0F -> read as EAX on
   every CFG path | 004DFC70 @ 004DFD94 -> read as EAX on every CFG path */

int __fastcall FUN_004df910(RecoveredRecord_004DF910_541A5D53 *param_1)

{
  int iVar1;


  iVar1 = thunk_FUN_004e60d0(param_1->field_0024,0x2f);
  if (iVar1 != 0) {
    return DAT_00798f90;
  }
  return DAT_00798f8c;
}

