#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl FUN_006a2d80(ushort param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RecoveredRecord_006A1370_30F34641 local_c;

  iVar2 = 0;
  if (0 < *param_2) {
    do {
      iVar3 = 0;
      if (0 < param_2[1]) {
        do {
          STPiece<0,4>(local_c) = 0;
          local_c.field_0004 = 0;

          iVar1 = thunk_FUN_006a1370(param_2,iVar2,iVar3,0,&local_c);
          if (local_c.field_0004 == 0) {
            local_c.field_0004 = 0x1100;
          }
          if ((param_1 & 0x4000) == 0) {
            STPiece<0,2>(local_c) = param_1;
          }
          else {
            STPiece<2,2>(local_c) = param_1;
          }
          thunk_FUN_006a1620(param_2,iVar2,iVar3,(short)iVar1,0xff,(ushort *)&local_c,
                             nullptr,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}

