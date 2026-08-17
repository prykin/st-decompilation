#include "../../pseudocode_runtime.h"


undefined4 FUN_004b72e0(char param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if ((0x31 < param_2) && (param_2 < 0x74)) {
    /* ST_CALLSITE[004B72FD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(param_1);
    return *(undefined4 *)(&DAT_007e0c04 + ((uint)bVar1 + param_2 * 3) * 4);
  }
  if (param_2 == 0x78) {
    uVar2 = 2;
  }
  return uVar2;
}

