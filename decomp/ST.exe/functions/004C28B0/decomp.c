#include "../../pseudocode_runtime.h"


void __thiscall FUN_004c28b0(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  STField<undefined1>(param_1,10) = 0;
  *(undefined1 *)param_1 = 1;
  /* ST_CALLSITE[004C28DA]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar1 = LookupRecordByte(STField<char>(this,0x23d));
  STField<byte>(param_1,6) = bVar1;
  switch(STField<undefined4>(this,0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    STField<undefined1>(param_1,1) = 0;
    break;
  case 3:
  case 4:
    STField<undefined1>(param_1,1) = 1;
  }
  STField<undefined4>(param_1,2) = STField<undefined4>(this,0x5ac);
  STField<undefined4>(param_1,7) = STField<undefined4>(this,0x18);
  return;
}

