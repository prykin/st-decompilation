#include "../../pseudocode_runtime.h"


void FUN_006829b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_c;
  float local_b;

  iVar1 = thunk_FUN_006800a0((byte *)PTR_00857528);
  if (iVar1 == 0) {
    if (DAT_007d3fa4 != 0) {
      thunk_FUN_006802a0(-0x73,PTR_00857528);
    }
    uVar2 = thunk_FUN_0067f5e0((byte *)PTR_00857528);
    if ((int)uVar2 < 0) {
      thunk_FUN_006802a0(-0x73,PTR_00857528);
    }
    else {
      iVar1 = 2;
    }
  }
  switch(iVar1) {
  case 1:
    local_c = 6;
    iVar1 = thunk_FUN_0067ed20((byte *)PTR_00857528);
    local_b = (float)STReplaceLowWord((uint32_t)(local_b), (uint16_t)((short)iVar1));
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006827a0();
    return;
  case 2:
    local_c = 1;
    local_b = (float)thunk_FUN_0067f5b0((byte *)PTR_00857528);
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006827a0();
    return;
  case 3:
    local_c = 2;
    fVar5 = thunk_FUN_0067f920((byte *)PTR_00857528);
    local_b = (float)fVar5;
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006827a0();
    return;
  case 4:
    iVar1 = thunk_FUN_0067fce0((byte *)PTR_00857528);
    if (iVar1 == 0) {
      thunk_FUN_006802a0(-0x73,PTR_00857528);
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 4)) {
      iVar3 = 0;
      do {
        thunk_FUN_00682370((undefined4 *)(*(int *)(iVar1 + 8) + iVar3));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 5;
      } while (iVar4 < *(int *)(iVar1 + 4));
      thunk_FUN_006827a0();
      return;
    }
    break;
  case 5:
    local_c = 1;
    local_b = 1.26117e-44;
    thunk_FUN_00682370((undefined4 *)&local_c);
    local_c = 1;
    local_b = (float)thunk_FUN_0067ff00(PTR_00857528);
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006823a0(0x7d1,2);
    thunk_FUN_006827a0();
    return;
  case 6:
    local_c = 1;
    local_b = (float)thunk_FUN_0067ff50(PTR_00857528);
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006823a0(0x7d2,1);
    thunk_FUN_006827a0();
    return;
  case 7:
    local_c = 1;
    local_b = (float)thunk_FUN_0067ffa0(PTR_00857528);
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006823a0(0x7d4,1);
    thunk_FUN_006827a0();
    return;
  case 8:
    local_c = 1;
    local_b = (float)thunk_FUN_0067fff0(PTR_00857528);
    thunk_FUN_00682370((undefined4 *)&local_c);
    thunk_FUN_006823a0(0x7d5,1);
    thunk_FUN_006827a0();
    return;
  default:
    thunk_FUN_006802a0(-0x73,PTR_00857528);
  }
  thunk_FUN_006827a0();
  return;
}

