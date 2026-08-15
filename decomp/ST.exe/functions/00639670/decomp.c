#include "../../pseudocode_runtime.h"


uint __thiscall FUN_00639670(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  short local_6;

  iVar4 = param_1 - STField<int>(this,0x2a3);
  if (iVar4 == 0) {
    return 0;
  }
  param_1 = ((iVar4 * 500) / 0x1e + (iVar4 * iVar4 * 1000) / 900) / 10;
  STField<undefined4>(this,0x286) = STField<undefined4>(this,0x27a);
  STField<undefined4>(this,0x28e) = STField<undefined4>(this,0x282);
  STField<undefined4>(this,0x28a) = STField<undefined4>(this,0x27e);
  local_c = (STField<int>(this,0x25f) * param_1) / STField<int>(this,0x267) +
            (int)STField<short>(this,0x245);
  STField<int>(this,0x27a) = local_c;
  iVar3 = (int)STField<short>(this,0x247) +
          (STField<int>(this,0x263) * param_1) / STField<int>(this,0x267);
  STField<int>(this,0x27e) = iVar3;
  iVar1 = (int)STField<short>(this,0x249) -
          ((STField<int>(this,0x26b) * iVar4 * 10) / 0x1e - (iVar4 * iVar4 * 300) / 900) / 10;
  iVar4 = STField<int>(this,0x286);
  STField<int>(this,0x282) = iVar1;
  uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                    ((AnonReceiver_00601500 *)((int)this + 0x2ab),local_c,iVar3,iVar1,iVar4,iVar4,
                     iVar4,STField<int>(this,0x255),0x35c,STField<int>(this,0x25b),
                     STField<ushort>(this,0x259),0x10c,0,0);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (uVar2 == 1) {
    STField<undefined4>(this,0x27e) = STField<undefined4>(this,0x2cf);
    STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x2cb);
    STField<undefined4>(this,0x282) = STField<undefined4>(this,0x2d3);
    STField<undefined4>(this,0x2bf) = 0;
    return 1;
  }
  if (uVar2 != 5) {
    if (uVar2 != 2) {
      return uVar2;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if ((STField<int *>(this,0x2bf) != nullptr) &&
       (iVar4 = (**(code **)(*STField<int *>(this,0x2bf) + 0xe0))
                          (STField<undefined4>(this,0x2c3),(int)&param_1 + 2,&local_6,
                           (int)&local_c + 2,&local_10), iVar4 != 0)) {
      STField<int>(this,0x2cf) = (int)local_6;
      STField<int>(this,0x27e) = (int)local_6;
      STField<int>(this,0x2cb) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x27a) = (int)STPiece<2,2>(param_1);
      STField<int>(this,0x2d3) = (int)STPiece<2,2>(local_c);
      STField<int>(this,0x282) = (int)STPiece<2,2>(local_c);
      STField<undefined4>(this,0x2c7) = local_10;
      return 2;
    }
  }
  thunk_FUN_00639630(this);
  return uVar2;
}

