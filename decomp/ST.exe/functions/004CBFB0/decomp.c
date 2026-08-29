#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004cbfb0(int param_1)

{
  uint uVar1;
  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:

    uVar1 = thunk_FUN_004d0670((RecoveredRecordView_004D0670_0B3E93E7 *)param_1);
    return uVar1;
  case 0x52:
  case 0x5f:

    uVar1 = thunk_FUN_004ec2a0((RecoveredRecordView_004EC2A0_85163159 *)param_1);
  }
  return uVar1;
}

