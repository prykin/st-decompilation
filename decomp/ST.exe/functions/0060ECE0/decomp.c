#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
FUN_0060ece0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  short *psVar1;
  int iVar2;
  short *psVar3;

  STField<int>(this,0x256) = param_8;
  STField<short>(this,0x25a) = (short)param_2;
  STField<short>(this,0x260) = (short)param_2;
  STField<short>(this,0x25e) = (short)param_4;
  STField<short>(this,0x264) = (short)param_4;
  STField<short>(this,0x25c) = (short)param_3;
  STField<short>(this,0x262) = (short)param_3;
  STField<short>(this,0x266) = (short)(param_5 % 0xc9);
  STField<short>(this,0x268) = (short)(param_6 % 0xc9);
  STField<short>(this,0x26a) = (short)(param_7 % 200);
  if (param_8 == 2) {
    iVar2 = FUN_006acf0d(param_2,param_3,param_4,param_5,param_6,param_7);
    STField<int>(this,0x28c) = iVar2;
    STField<int>(this,0x27c) = ((param_5 - param_2) * 10000) / iVar2;
    STField<int>(this,0x280) = ((param_6 - param_3) * 10000) / iVar2;
    STField<int>(this,0x284) = ((param_7 - param_4) * 10000) / iVar2;
  }
  else {
    STField<undefined4>(this,0x28c) = 0;
    if (((STField<int>(this,0x2dd) != 0) && (1 < STField<int>(this,0x2d5))) &&
       (param_1 < STField<int>(this,0x2d5))) {
      iVar2 = param_1 * 0x1c;
      do {
        psVar3 = (short *)(STField<int>(this,0x2dd) + iVar2);
        *psVar3 = *psVar3 * 0xc9 + STField<short>(this,0x266);
        *(short *)(STField<int>(this,0x2dd) + 2 + iVar2) =
             *(short *)(STField<int>(this,0x2dd) + 2 + iVar2) * 0xc9 +
             STField<short>(this,0x268);
        psVar3 = (short *)(STField<int>(this,0x2dd) + 4 + iVar2);
        psVar1 = (short *)(STField<int>(this,0x2dd) + 4 + iVar2);
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 0x1c;
        *psVar1 = *psVar3 * 200 + STField<short>(this,0x26a);
      } while (param_1 < STField<int>(this,0x2d5));
    }
  }
  STField<undefined4>(this,0x288) = 0x21;
  STField<uint>(this,0x294) = g_playSystem_00802A38->field_00E4;
  STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
  return;
}

