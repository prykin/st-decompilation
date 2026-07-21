#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_006a58b0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  uVar2 = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar3 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_1[iVar3 + 6] =
           *(int *)(param_3 + 0x18 + iVar3 * 4) - *(int *)(param_2 + 0x18 + iVar3 * 4);
      iVar4 = *(int *)(param_3 + 4 + iVar3 * 4) - *(int *)(param_2 + 4 + iVar3 * 4);
      param_1[iVar3 + 1] = iVar4;
      if (((param_1[iVar3 + 6] != 0) || (iVar4 != 0)) &&
         ((iVar3 != 0 && ((iVar3 != 2 || ((DAT_007ec178 & 0x10) != 0)))))) {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(param_3 + 0x30);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)(param_2 + 0x30);
    *param_1 = 0;
    param_1[0xc] = iVar3 - iVar4;
    return uVar2;
  }
  iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

