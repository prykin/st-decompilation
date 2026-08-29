#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_006473e0(void *this,undefined4 param_1)

{
  int iVar1;
  uint local_44 [5];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = STField<undefined4>(this,0x3c);
  local_24 = STField<undefined4>(this,0x40);
  iVar1 = STField<int>(this,0x50);
  local_44[0] = 0xd2;
  local_2c = 4;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_20 = STField<int>(this,0x44) + 0x96;
      goto cf_common_exit_00647445;
    }
    if (iVar1 == 2) {
      local_20 = STField<int>(this,0x44) + 0xfa;
      goto cf_common_exit_00647445;
    }
  }
  local_20 = STField<int>(this,0x44) + 0x96;
cf_common_exit_00647445:
  local_1c = param_1;
  local_30 = 0;
  /* ST_CALLSITE[00647469]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x124,nullptr,nullptr,(short)local_44,0);
  thunk_FUN_00647a60(this,0x4b5);
  return;
}

