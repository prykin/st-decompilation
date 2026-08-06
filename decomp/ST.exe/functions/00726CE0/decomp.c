#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00726ce0(void *this,int param_1)

{
  DAT_0085708c = STField<undefined4>(this,0xc);
  DAT_00857090 = STField<undefined4>(this,0x28);
  DAT_0085707c = STField<undefined4>(this,0x14);
  DAT_008570dc = STField<int>(this,0x30) << 0x10;
  DAT_0085705c = STField<int>(this,0x38) << 0x10;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  _DAT_00857100 = *(int *)(param_1 + 0xc);
  if (_DAT_00857100 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    _DAT_00857100 = *(int *)(param_1 + 0x10);
  }
  if (STField<int>(this,0x280) != 0) {
    DAT_0085709c = (uint)*(byte *)(STField<int>(this,0x280) + 4) << 1;
  }
  if (STField<int>(this,0x124) == 1) {
    DAT_0085706c = '\x02' << ((byte)(STField<int>(this,0x35c) << 1) & 0x1f);
    DAT_00857058 = '\x01' << ((byte)(STField<int>(this,0x35c) << 1) & 0x1f);
  }
  return;
}

