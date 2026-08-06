#include "../../pseudocode_runtime.h"


void __thiscall FUN_0063c030(void *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  sVar1 = STField<short>(this,0x24d);
  iVar3 = (int)sVar1;
  sVar2 = STField<short>(this,0x24f);
  iVar4 = (int)sVar2;
  iVar5 = (int)STField<short>(this,0x251);
  STField<int>(this,0x266) = iVar3;
  STField<int>(this,0x26a) = iVar4;
  STField<int>(this,0x26e) = iVar5;
  STField<int>(this,0x272) = iVar3;
  STField<int>(this,0x276) = iVar4;
  STField<int>(this,0x27a) = iVar5;
  if (iVar3 < 0) {
    iVar3 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
  }
  STField<int>(this,0x286) = iVar3;
  if (iVar4 < 0) {
    iVar3 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  STField<int>(this,0x28a) = iVar3;
  if (STField<int>(this,0x245) == 2) {
    STField<undefined2>(this,599) = 0x451;
  }
  STField<int>(this,0x27e) = iVar5;
  STField<undefined4>(this,0x28e) = param_1;
  STField<int>(this,0x282) = (int)STField<short>(this,599);
  STField<undefined4>(this,0x292) = 0x41;
  STField<undefined4>(this,0x296) = 1;
  STField<undefined4>(this,0x29a) = 1;
  STField<undefined1>(this,0x29e) = 1;
  return;
}

