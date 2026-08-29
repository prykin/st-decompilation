#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0060bdd0(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int **ppiVar3;
  int *local_58 [6];
  uint local_40;
  int local_38 [3];
  ushort local_2c;
  ushort local_2a;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  ppiVar3 = local_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar3 = nullptr;
    ppiVar3 = ppiVar3 + 1;
  }
  memset(local_38, 0, 0x1c); /* compiler bulk-zero initialization */
  local_58[3] = (int *)0x4;
  local_58[2] = (int *)param_1[6];
  local_38[1] = STField<undefined4>(this,0x1f5);
  switch(local_38[1]) {
  case 0x42:
    local_38[2] = STField<undefined4>(this,0x1d9);
    local_38[0] = DAT_007e67b0;
    local_38[1] = 0x42;
    /* ST_CALLSITE[0060BE96]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte(((char *)param_1)[9]);
    if (bVar1 == 3) {
      iVar2 = thunk_FUN_004e60d0(param_1[9],0x6a);
    }
    else {
      iVar2 = thunk_FUN_004e60d0(param_1[9],0x2d);
    }
    if (iVar2 != 0) {
      local_38[0] = local_38[0] - (STSignedDiv4(local_38[0]));
    }
    local_2c = STField<undefined2>(this,0x205);
    local_2a = STField<undefined2>(this,0x201);
    local_58[5] = local_38;
    local_58[4] = (int *)0x110;
    break;
  case 0x43:
    local_10 = STField<int>(this,0x1d9);
    local_c = 100;
    local_8 = 0;
    local_58[4] = (int *)0x121;
    local_58[5] = &local_10;
    break;
  case 0x4c:
    local_1c = STField<int>(this,0x1d9);
    local_58[5] = &local_1c;
    local_14 = 0x19;
    local_18 = 0x41;
    local_58[4] = (int *)0x122;
    break;
  case 0x65:
    local_38[2] = STField<undefined4>(this,0x1d9);
    local_2c = STField<undefined2>(this,0x205);
    local_2a = STField<undefined2>(this,0x201);
    local_38[0] = DAT_007e67c4;
    local_38[1] = 0x65;
    local_58[4] = (int *)0x110;
    local_58[5] = local_38;
  }
  /* ST_CALLSITE[0060BF48]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
  STStructuralVirtualCall<void>(param_1, 0x0, local_58);
  return local_40;
}

