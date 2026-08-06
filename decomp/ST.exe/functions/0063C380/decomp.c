#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0063c380(void *this,int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = param_1 - STField<int>(this,0x28e);
  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar2 = ((int)STField<short>(this,0x251) - (STField<int>(this,0x296) * iVar2 * iVar2) / 10)
          - STField<int>(this,0x292) * iVar2;
  STField<int>(this,0x26e) = iVar2;
  if (STField<int>(this,0x245) != 2) {
    uVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                      ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                       STField<int>(this,0x26a),iVar2,STField<int>(this,0x272),
                       STField<int>(this,0x276),STField<int>(this,0x27a),
                       STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                       STField<ushort>(this,0x261),0xa8,0,0);
    return uVar1;
  }
  if (iVar2 <= STField<short>(this,599)) {
    return 1;
  }
  return 0;
}

