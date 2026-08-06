#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004c2e60(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x245)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0:
    if (*(int *)(param_1 + 0x24d) != -1) {
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
      if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
        thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
        return 0;
      }
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
  case 2:
  case 6:
    if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
      thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
    }
  }
  return 0;
}

