#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e13a0(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;

  uVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar2 = LookupRecordByte((char)*(int *)(param_1 + 0x23d));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x235);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar3 = LookupRecordByte(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar4 = 1;
  }
  return uVar4;
}

