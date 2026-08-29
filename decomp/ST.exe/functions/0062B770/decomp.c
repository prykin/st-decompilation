#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=3, unknown=0 */

void __cdecl
FUN_0062b770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            RecoveredRecord_0062B770_F0FEBA2F *param_5,undefined4 param_6,undefined4 param_7,
            undefined4 param_8)

{
  uint local_44 [5];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  local_18 = param_5->field_0018;
  local_14 = param_5->field_0024;
  local_10 = param_6;
  local_8 = param_8;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 0;
  local_30 = 0;
  local_c = param_7;
  /* ST_CALLSITE[0062B7ED]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x124,nullptr,nullptr,(short)local_44,0);
  return;
}

