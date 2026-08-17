#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 007503AA -> EXTERNAL:0000006D @ 00750436 */

undefined4 __thiscall FUN_007503aa(void *this,int *param_1,DWORD dwMilliseconds)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  while( true ) {
    /* ST_CALLSITE[007503C2]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    iVar4 = 0;
    if (0 < STField<int>(this,0x28)) {
      iVar4 = FUN_0074ded7(STField<int>(this,0x20));
    }
    if ((STField<int>(this,100) != 0) && (0 < STField<int>(this,0x40))) {
      iVar1 = FUN_0074ded7(STField<int>(this,0x38));
      iVar3 = STField<int>(this,0x6c) + *(int *)(iVar1 + 0x1c) +
              (uint)CARRY4(STField<uint>(this,0x68),*(uint *)(iVar1 + 0x18));
      if ((iVar4 == 0) ||
         ((iVar3 <= *(int *)(iVar4 + 0x1c) &&
          ((iVar3 < *(int *)(iVar4 + 0x1c) ||
           (STField<uint>(this,0x68) + *(uint *)(iVar1 + 0x18) < *(uint *)(iVar4 + 0x18))))))) {
        iVar4 = iVar1;
      }
    }
    if ((iVar4 != 0) &&
       (iVar1 = FUN_0074fea4(this,*(uint *)(iVar4 + 0x18),*(int *)(iVar4 + 0x1c),
                             *(int *)(iVar4 + 0x30)), iVar1 != 0)) break;
    /* ST_CALLSITE[0075042E]: CALL EBX */
    LeaveCriticalSection(lpCriticalSection);
    /* ST_CALLSITE[00750436]: CALL dword ptr [0x0085bce0] */
    DVar2 = WaitForSingleObject(STField<HANDLE>(this,0x50),dwMilliseconds);
    if (DVar2 != 0) {
      return 0x80004004;
    }
  }
  /* ST_CALLSITE[0075044C]: CALL dword ptr [ECX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)(iVar4 + 0xc) + 4))(iVar4 + 0xc);
  *param_1 = iVar4;
  /* ST_CALLSITE[00750457]: CALL EBX */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

