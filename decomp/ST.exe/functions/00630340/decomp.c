#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F88D0 @ 005F897A -> read as EAX on
   every CFG path | 005F88D0 @ 005F899A -> read as EAX on every CFG path */

int __thiscall
FUN_00630340(void *this,int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((-1 < param_1) && (param_1 < 5)) &&
      (iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5), iVar1 != 0)) &&
     ((STField<int>(iVar1,0x4) == 3 || (STField<int>(iVar1,0x4) == 6)))) {
    if ((param_3 != nullptr) &&
       ((param_2 != nullptr && (param_4 != nullptr)))) {
      *param_3 = STField<undefined4>(iVar1,0x10);
      *param_2 = *(int *)((int)this + param_1 * 4 + 0x1e5) + 0x14;
      *param_4 = *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 8);
      *(undefined4 *)(*(int *)((int)this + param_1 * 4 + 0x1e5) + 0x10) = 0;
    }
    iVar2 = 1;
  }
  return iVar2;
}

