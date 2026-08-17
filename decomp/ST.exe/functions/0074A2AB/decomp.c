#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0074B44A @ 0074B451
   -> TEST TEST EAX,EAX */

int __thiscall FUN_0074a2ab(void *this,int param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;

  if (param_1 != 0) {
    /* ST_CALLSITE[0074A2C9]: CALL dword ptr [EAX + 0x58] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x58))(param_1,&local_c,local_14);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        /* ST_CALLSITE[0074A2D9]: CALL dword ptr [0x0085bb80] */
        SetEvent(STField<HANDLE>(this,0x54));
        return 1;
      }
      /* ST_CALLSITE[0074A2FD]: CALL dword ptr [ECX + 0x10] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*STField<int *>(this,0x18) + 0x10))
                        (STField<int *>(this,0x18),STField<undefined4>(this,0x20),
                         STField<undefined4>(this,0x24),local_c,local_8,
                         STField<undefined4>(this,0x54),(int)this + 0x68);
      return (uint)(-1 < iVar1);
    }
  }
  return 0;
}

