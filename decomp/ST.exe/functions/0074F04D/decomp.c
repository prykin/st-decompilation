#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074f04d(void *this,undefined4 param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
  /* ST_CALLSITE[0074F05C]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  if (STField<int>(this,0x48) == 1) {
    /* ST_CALLSITE[0074F069]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = -0x7fffbffb;
  }
  else {
    /* ST_CALLSITE[0074F08B]: CALL dword ptr [EAX + 0x34] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x34))
                      (this,param_1,0,STField<undefined4>(this,0x38),
                       STField<undefined4>(this,0x3c),&DAT_007a1dd8);
    if ((param_2 != 0) && (-1 < iVar1)) {
      /* ST_CALLSITE[0074F0A9]: CALL dword ptr [EAX + 0x34] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*(int *)this + 0x34))
                        (this,param_2,0,STField<undefined4>(this,0x40),
                         STField<undefined4>(this,0x44),&DAT_007a1dd8);
    }
    /* ST_CALLSITE[0074F0B1]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}

