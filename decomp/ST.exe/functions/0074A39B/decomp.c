#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074a39b(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  undefined4 uVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  EnterCriticalSection(lpCriticalSection);
  STField<undefined4>(this,0xb4) = 1;
  iVar1 = FUN_00748721((AnonShape_00748721_F11EED2A *)(STField<int>(this,0x78) + 0x98),param_1);
  if (iVar1 == 0) {
    iVar2 = (STField<int *>(this,0x78))[0x33];
    if (iVar2 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*STField<int *>(this,0x78) + 0x24))(iVar2);
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
    EnterCriticalSection(lpCriticalSection_00);
    if (((STField<int>(this,0x6c) == 0) && (STField<int>(this,0x70) == 0)) &&
       (STField<int>(this,0x60) == 0)) {
      if (STField<void *>(this,0x50) != nullptr) {
        FUN_0074ef87(STField<void *>(this,0x50),param_1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((STField<int>(this,100) == 1) &&
         (iVar2 = (**(code **)(*(int *)this + 0x54))(param_1), iVar2 == 0)) {
        STField<undefined4>(this,0xb4) = 0;
        LeaveCriticalSection(lpCriticalSection_00);
        LeaveCriticalSection(lpCriticalSection);
        return 0x8004022b;
      }
      STField<undefined4>(this,0xb8) = *(undefined4 *)(STField<int>(this,0x78) + 0xc0);
      uVar1 = *(undefined4 *)(STField<int>(this,0x78) + 0xc4);
      STField<int *>(this,0x6c) = param_1;
      STField<undefined4>(this,0xbc) = uVar1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 4))(param_1);
      if (STField<int>(this,100) == 0) {
        FUN_0074a81d(this,1);
      }
      LeaveCriticalSection(lpCriticalSection_00);
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
    else {
      SetEvent(STField<HANDLE>(this,0x5c));
      STField<undefined4>(this,0xb4) = 0;
      LeaveCriticalSection(lpCriticalSection_00);
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0x8000ffff;
    }
  }
  else {
    STField<undefined4>(this,0xb4) = 0;
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80004005;
  }
  return uVar1;
}

