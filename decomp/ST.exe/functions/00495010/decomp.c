#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_00495010(void *this,undefined4 param_1)

{
  int iVar1;
  uint local_8;

  if (STField<int>(this,0x73a) == 0) {
    iVar1 = STField<int>(this,0x45d);
    if (iVar1 == 3) {
      STField<undefined4>(this,0x73a) = param_1;
      return;
    }
    if (iVar1 != 0x14) {
      if (iVar1 == 0xb) goto LAB_00495071;
      local_8 = g_playSystem_00802A38->field_00E4;
      /* ST_CALLSITE[0049504C]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
      STBoatC::CmdToObj(this,CASE_3,&local_8);
    }
    STField<undefined4>(this,0x73a) = param_1;
    return;
  }
LAB_00495071:
  STField<undefined4>(this,0x73a) = param_1;
  return;
}

