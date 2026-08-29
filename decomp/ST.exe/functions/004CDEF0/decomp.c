#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004cdef0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  iVar2 = 0;
  iVar1 = STField<int>(this,0x524);
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x4d0);
    while (*piVar3 != param_1) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        return 0;
      }
    }

    Library::MSVCRT::FUN_0072da70
              ((RecoveredRecord_006BFE70_3123BCE8 *)((int)this + iVar2 * 4 + 0x4d0),
               (AnonPointee_TLOBaseTy_0607 *)((int)this + iVar2 * 4 + 0x4d4),
               ((iVar2 + 1) * 0x3fffffff + iVar1) * 4);
    STField<int>(this,0x524) = STField<int>(this,0x524) + -1;
  }
  return 0;
}

