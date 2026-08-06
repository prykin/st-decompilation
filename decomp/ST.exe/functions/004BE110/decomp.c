#include "../../pseudocode_runtime.h"


byte __fastcall FUN_004be110(int param_1)

{
  byte bVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar1 = LookupRecordByte(*(char *)(param_1 + 0x23d));
  return bVar1;
}

