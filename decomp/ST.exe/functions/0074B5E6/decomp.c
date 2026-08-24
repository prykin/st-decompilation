#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0074B5E6 -> EXTERNAL:00000019 @ 0074B659 */

undefined4 __thiscall
FUN_0074b5e6(void *this,uint param_1,LPCRITICAL_SECTION lpCriticalSection,uint param_3,int param_4,
            uint param_5,uint param_6)

{
  uint uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  ulonglong uVar4;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_CALLSITE[0074B605]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if ((STField<int>(this,0x18) == 0) || ((int)param_1 < 2)) {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      lVar3 = FUN_0074d786(param_5,param_6,param_5,param_6,param_1,(int)param_1 >> 0x1f,0,0);
      uVar4 = Library::MSVCRT::__alldiv
                        (param_3 - (uint)lVar3,
                         (param_4 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)(param_3 < (uint)lVar3)
                         ,param_1 - 1,(int)(param_1 - 1) >> 0x1f);
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_0074b584((int)uVar4);
      lpCriticalSection->DebugInfo = p_Var2;
    }
    /* ST_CALLSITE[0074B659]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    uVar1 = 0;
  }
  return uVar1;
}

