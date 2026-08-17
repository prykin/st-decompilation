#include "../../pseudocode_runtime.h"


void __thiscall FUN_004d6d50(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = STField<undefined4>(this,0x18);
  param_1[1] = STField<undefined4>(this,0x259);
  /* ST_CALLSITE[004D6D72]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(STField<char>(this,0x24));
  ((byte *)param_1)[2] = bVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),(char *)((int)this + 0x271),0xe);
  return;
}

