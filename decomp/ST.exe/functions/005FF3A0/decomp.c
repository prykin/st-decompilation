#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005FF3A0 -> 00416270 @ 005FF3EB

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005FF3A0 -> 00416270 @ 005FF3EB
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005FD3A0 @ 005FD453 -> read as EAX on
   every CFG path | 005FFF60 @ 005FFF84 -> read as EAX on every CFG path */

int __thiscall FUN_005ff3a0(void *this,uint *param_1,short *param_2,short *param_3)

{
  STGameObjC *this_00;
  int iVar1;

  /* ST_CALLSITE[005FF3BE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  this_00 = STAllPlayersC::GetObjPtr
                      (g_allPlayers_007FA174,STField<char>(this,0x20a),
                       STField<ushort>(this,0x224),CASE_1);
  if (this_00 != nullptr) {
    /* ST_CALLSITE[005FF3CD]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar1 = (*this_00->vtable[1].vfunc_24)(this_00);
    if (iVar1 != 0) {
      thunk_FUN_00416270(this_00,param_1,param_2,param_3);
      *param_3 = *param_3 + -0x1e;
      return 1;
    }
  }
  return 0;
}

