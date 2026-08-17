#include "../../pseudocode_runtime.h"


uint __thiscall FUN_0074a4d1(void *this,undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_retaddr;

  /* ST_CALLSITE[0074A4DD]: CALL dword ptr [EAX + 0x98] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar1 = (**(code **)(*(int *)this + 0x98))(param_1);
  if ((int)uVar1 < 0) {
    return -(uint)(uVar1 != 0x8004022b) & uVar1;
  }
  if (STField<int>(this,0x14) == 1) {
    /* ST_CALLSITE[0074A50F]: CALL dword ptr [EAX + 0x50] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x50))();
    STField<undefined4>(this,0xb4) = 0;
    /* ST_CALLSITE[0074A520]: CALL EBX */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (STField<int>(this,0x14) == 0) {
      /* ST_CALLSITE[0074A529]: CALL EDI */
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      return 0;
    }
    STField<undefined4>(this,0xb4) = 1;
    /* ST_CALLSITE[0074A541]: CALL EBX */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    /* ST_CALLSITE[0074A54B]: CALL dword ptr [EAX + 0x34] */
    /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x34))(unaff_retaddr);
    /* ST_CALLSITE[0074A54F]: CALL EDI */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    /* ST_CALLSITE[0074A555]: CALL EDI */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    /* ST_CALLSITE[0074A55A]: CALL dword ptr [0x0085bb80] */
    SetEvent(STField<HANDLE>(this,0x5c));
  }
  /* ST_CALLSITE[0074A564]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 < 0) {
    STField<undefined4>(this,0xb4) = 0;
  }
  else {
    /* ST_CALLSITE[0074A57B]: CALL dword ptr [EAX + 0x50] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x50))();
    STField<undefined4>(this,0xb4) = 0;
    /* ST_CALLSITE[0074A590]: CALL EBX */
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    if (STField<int>(this,0x14) != 0) {
      /* ST_CALLSITE[0074A5A2]: CALL EBX */
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
      /* ST_CALLSITE[0074A5AB]: CALL dword ptr [EAX + 0xa8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xa8))(STField<undefined4>(this,0x6c));
      /* ST_CALLSITE[0074A5B5]: CALL dword ptr [EAX + 0x70] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x70))();
      /* ST_CALLSITE[0074A5BC]: CALL dword ptr [EAX + 0x60] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x60))();
      /* ST_CALLSITE[0074A5C3]: CALL dword ptr [EAX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x6c))();
      /* ST_CALLSITE[0074A5C7]: CALL EDI */
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x94));
    }
    /* ST_CALLSITE[0074A5CD]: CALL EDI */
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  }
  return 0;
}

