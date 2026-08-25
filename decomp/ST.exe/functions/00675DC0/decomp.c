#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00675EA0 -> 00675DC0 @ 00675F34

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00675dc0(uint param_1,DArrayTy *param_2)

{
  dword dVar1;
  ushort *puVar2;
  STGameObjC *this;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (((g_allPlayers_007FA174 != nullptr) && (param_2 != nullptr)) &&
     (dVar1 = param_2->count, dVar1 != 0)) {
    uVar5 = 0;
    if (dVar1 != 0) {
      uVar4 = 0;
      if (dVar1 == 0) {
        puVar2 = nullptr;
        goto LAB_00675dfe;
      }
      do {
        puVar2 = DArrayAt<ushort>(param_2, uVar4);
LAB_00675dfe:
        /* ST_CALLSITE[00675E0E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        /* ST_CALLSITE[00675E1D]: CALL dword ptr [EDX + 0x2c] */
        if (((this != nullptr) && (iVar3 = this->vfunc_2C(), iVar3 == 0x78)
            /* ST_CALLSITE[00675E29]: CALL dword ptr [EAX + 0x2c] */
            ) && (iVar3 = this->vfunc_2C(), iVar3 == 0x78)) {
          this->field_0269 = -1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xffff;
      } while (uVar4 < param_2->count);
    }
    /* ST_CALLSITE[00675E5B]: CALL 0x0040178f; direct=0040178F STAllPlayersC::AddObjsToGroup */
    STAllPlayersC::AddObjsToGroup(g_allPlayers_007FA174,(char)param_1,0,param_2,nullptr);
  }
  return;
}

