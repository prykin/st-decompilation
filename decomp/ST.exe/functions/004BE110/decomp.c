#include "../../pseudocode_runtime.h"


byte __fastcall FUN_004be110(int param_1)

{
  byte bVar1;

  /* ST_CALLSITE[004BE11D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(((char *)param_1)[0x23d]);
  return bVar1;
}

