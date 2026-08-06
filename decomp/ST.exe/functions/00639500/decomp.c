#include "../../pseudocode_runtime.h"


void __thiscall FUN_00639500(void *this,undefined4 param_1)

{
  int iVar2;
  int iVar1;
  int iVar3;

  iVar2 = (int)STField<short>(this,0x245);
  STField<int>(this,0x282) = (int)STField<short>(this,0x249);
  STField<int>(this,0x27a) = iVar2;
  iVar3 = (int)STField<short>(this,0x247);
  STField<int>(this,0x27e) = iVar3;
  STField<int>(this,0x25f) = STField<short>(this,0x24b) - iVar2;
  STField<int>(this,0x263) = STField<short>(this,0x24d) - iVar3;
  iVar1 = FUN_006aced8(iVar2,iVar3,(int)STField<short>(this,0x24b),
                       (int)STField<short>(this,0x24d));
  STField<int>(this,0x267) = iVar1;
  if (iVar1 == 0) {
    STField<undefined4>(this,0x267) = 1;
  }
  iVar2 = (STField<int>(this,0x267) + -100) / 0x32;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  STField<int>(this,0x26b) =
       (((&DAT_007d1dc0)[iVar2 * 3] * (int)STField<short>(this,0x249) +
        (&DAT_007d1dc4)[iVar2 * 3]) * (int)STField<short>(this,0x249) +
       (&DAT_007d1dc8)[iVar2 * 3]) / 0x19a28;
  STField<undefined4>(this,0x2a3) = param_1;
  if (STField<int>(this,0x251) != 0) {
    STField<undefined1>(this,0x26f) = 1;
  }
  return;
}

