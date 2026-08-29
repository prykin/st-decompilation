#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; MOVSX at 00476B00 establishes signed source width 2 |
   00476A10 -> 005FD750 @ 00476B69; MOVSX at 00476B60 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; MOVSX at 00476AFD establishes signed source width 2 |
   00476A10 -> 005FD750 @ 00476B69; MOVSX at 00476B58 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00476A10 -> 005FD750 @ 00476B0B; literal 100 at 00476B03 | 00476A10 -> 005FD750 @
   00476B69; literal 100 at 00476B5E */

void __cdecl
FUN_005fd750(uint param_1,short param_2,short param_3,ushort param_4,uint param_5,undefined4 param_6
            )

{
  STGameObjC *this;
  int iVar1;
  uint local_30 [5];
  short local_1c;
  short local_1a;
  ushort local_18;
  uint local_16;
  ushort local_12;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_30, 0, 0x2c); /* compiler bulk-zero initialization */
  local_1c = param_2;
  local_1a = param_3;
  local_18 = param_4;
  local_12 = (ushort)param_5;
  local_30[3] = 1;
  local_30[2] = 1;
  local_30[1] = param_1;
  local_30[0] = 0x82;
  /* ST_CALLSITE[005FD7A4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,local_12,CASE_1);
  if (this != nullptr) {
    /* ST_CALLSITE[005FD7B3]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar1 = (*this->vtable[1].vfunc_24)(this);
    if (iVar1 != 0) {
      local_16 = this->field_0018;
    }
  }
  local_10 = param_6;
  local_c = 0xb4;
  local_8 = 5;
  /* ST_CALLSITE[005FD7EE]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x10a,nullptr,nullptr,(short)local_30,0);
  return;
}

