#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0063c170(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  short local_8;
  short local_6;

  iVar3 = param_1 - STField<int>(this,0x28e);
  STField<undefined4>(this,0x27a) = STField<undefined4>(this,0x26e);
  iVar3 = (iVar3 + 0x40) * iVar3 * 8;
  iVar3 = (int)STField<short>(this,0x251) + ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6);
  STField<int>(this,0x26e) = iVar3;
  iVar1 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
  if (0x18 < iVar1) {
    return 10;
  }
  uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                    ((AnonReceiver_00601500 *)((int)this + 899),STField<int>(this,0x266),
                     STField<int>(this,0x26a),iVar3,STField<int>(this,0x272),
                     STField<int>(this,0x276),STField<int>(this,0x27a),
                     STField<int>(this,0x235),50000,STField<int>(this,0x25d),
                     STField<ushort>(this,0x261),0xa8,0,0);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      STField<undefined4>(this,0x266) = STField<undefined4>(this,0x3a3);
      STField<undefined4>(this,0x26a) = STField<undefined4>(this,0x3a7);
      STField<undefined4>(this,0x26e) = STField<undefined4>(this,0x3ab);
      STField<undefined4>(this,0x397) = 0;
      return 1;
    }
    if (uVar2 == 2) {
      if (STField<int *>(this,0x397) != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)(*STField<int *>(this,0x397) + 0xe0))
                          (STField<undefined4>(this,0x39b),(int)&param_1 + 2,&local_6,&local_8,
                           &local_c);
        if (iVar3 == 0) {
          STField<int>(this,0x3a3) = (int)STPiece<2,2>(param_1);
          STField<int>(this,0x266) = (int)STPiece<2,2>(param_1);
          STField<int>(this,0x3a7) = (int)local_6;
          STField<undefined4>(this,0x39f) = local_c;
          STField<int>(this,0x3ab) = (int)local_8;
          STField<int>(this,0x26a) = (int)local_6;
          STField<int>(this,0x26e) = (int)local_8;
          return 2;
        }
      }
      thunk_FUN_0063cc10(this);
    }
  }
  return uVar2;
}

