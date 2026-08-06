#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004ddba0(void *this,int param_1)

{
  int uVar1;
  int iVar1;

  uVar1 = LookupRecordByte(STField<char>(this,0x24));
  uVar1 = (int)(byte)uVar1;
  if (uVar1 == 1) {
    iVar1 = 0x17;
  }
  else if (uVar1 == 2) {
    iVar1 = 0x88;
  }
  else if (uVar1 == 3) {
    iVar1 = 0x78;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = thunk_FUN_004e60d0(STField<int>(this,0x24),iVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(&DAT_007e601c + (iVar1 + param_1 * 5 + -0x2ee) * 4);
}

