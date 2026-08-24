#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00749be1(void *this,undefined4 param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  void *this_00;
  int iVar2;
  uint *puVar3;
  void *local_8;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  local_8 = this;
  /* ST_CALLSITE[00749BEF]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  iVar2 = STField<int>(this,0x50);
  if (iVar2 == 0) {
    local_8 = nullptr;
    this_00 = (void *)Library::MSVCRT::FUN_0072e530(0x50);
    if (this_00 == nullptr) {
      puVar3 = nullptr;
    }
    else {
      /* ST_CALLSITE[00749C29]: CALL dword ptr [EAX + 0x1c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)this + 0x1c))(0);
      puVar3 = FUN_0074eef3(this_00,0,STField<int>(this,4),&local_8,
                            -(uint)(iVar2 != 0) & iVar2 + 0xcU);
    }
    STField<undefined4 *>(this,0x50) = puVar3;
    if (puVar3 == nullptr) {
      /* ST_CALLSITE[00749C54]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return 0x8007000e;
    }
    if ((int)local_8 < 0) {
      if (puVar3 != nullptr) {
        /* ST_CALLSITE[00749C71]: CALL dword ptr [EAX + 0xc] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(puVar3[2] + 0xc))(1);
      }
      STField<undefined4>(this,0x50) = 0;
      /* ST_CALLSITE[00749C78]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return 0x80004002;
    }
    /* ST_CALLSITE[00749C8F]: CALL dword ptr [EAX + 0x24] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  }
  else {
    /* ST_CALLSITE[00749C0B]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))(iVar2 + 8,param_1,param_2);
  }
  /* ST_CALLSITE[00749C95]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

