#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
FUN_0063d460(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 == 10) {
    memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
    iVar2 = 0;
    STField<undefined4>(this,0x2a8) = param_2;
    STField<undefined4>(this,0x2a4) = param_1;
    STField<int>(this,0x2ac) = param_3;
    STField<undefined4>(this,0x2b0) = 0x6ac;
    STField<undefined4>(this,0x2b4) = 0x109;
    STField<undefined1>(this,0x328) = 4;
    STField<undefined4>(this,700) = 0x32;
    STField<undefined4>(this,0x2c0) = 0;
  }
  else {
    if (param_4 == 0xb) {
      memset((void *)((int)this + 0x2a4), 0, 0x92); /* compiler bulk-zero initialization */
      STField<undefined4>(this,0x2a8) = param_2;
      STField<undefined4>(this,0x2a4) = param_1;
      STField<undefined4>(this,0x2b4) = 0x32;
      STField<undefined4>(this,700) = 0x32;
      STField<int>(this,0x2ac) = param_3;
      STField<undefined4>(this,0x2b0) = 0x3ed;
      STField<undefined1>(this,0x328) = 4;
      STField<undefined4>(this,0x2c0) = 0;
      uVar1 = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x33e) = 0;
      STField<uint>(this,0x32e) = uVar1;
      return;
    }
    if (param_4 == 0xc) {
      STField<undefined4>(this,0x2a8) = param_2;
      iVar2 = STField<int>(this,0x2c0);
      STField<undefined4>(this,0x2a4) = param_1;
      STField<int>(this,0x2ac) = param_3;
      STField<undefined4>(this,0x2b4) = STField<undefined4>(this,0x2b8);
      STField<undefined4>(this,0x2b0) = 0x50;
      STField<undefined4>(this,0x2c0) = 0;
      STField<undefined1>(this,0x328) = 4;
      STField<undefined4>(this,700) = 0x24;
      STField<int>(this,0x32a) = (iVar2 * 0x23) / 5;
      STField<uint>(this,0x32e) = g_playSystem_00802A38->field_00E4;
      return;
    }
  }
  return;
}

