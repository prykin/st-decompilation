#include "../../pseudocode_runtime.h"


int __thiscall FUN_00747ce5(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;

  /* ST_CALLSITE[00747CF1]: CALL dword ptr [EAX + 0x28] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*(int *)this + 0x28))(param_1);
  if (iVar2 < 0) {
    /* ST_CALLSITE[00747CFE]: CALL dword ptr [EAX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x2c))();
  }
  else {
    /* ST_CALLSITE[00747D0C]: CALL dword ptr [EAX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*(int *)this + 0x20))(param_1);
    if (iVar2 == 0) {
      STField<int *>(this,0x18) = param_1;
      /* ST_CALLSITE[00747D1B]: CALL dword ptr [EAX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 4))(param_1);
      /* ST_CALLSITE[00747D26]: CALL dword ptr [EAX + 0x24] */
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x24))(unaff_EBX);
      /* ST_CALLSITE[00747D3C]: CALL dword ptr [EAX + 0x10] */
      /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*param_1 + 0x10))
                        (param_1,-(uint)(this != nullptr) & (int)this + 0xcU,unaff_ESI);
      if (-1 < iVar2) {
        /* ST_CALLSITE[00747D4A]: CALL dword ptr [EAX + 0x30] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar2 = (**(code **)(*(int *)this + 0x30))(param_1);
        if (-1 < iVar2) {
          return iVar2;
        }
        /* ST_CALLSITE[00747D56]: CALL dword ptr [EAX + 0x14] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1 + 0x14))(param_1);
      }
    }
    else if (((-1 < iVar2) || (iVar2 == -0x7fffbffb)) || (iVar2 == -0x7ff8ffa9)) {
      iVar2 = -0x7ffbfdd6;
    }
    /* ST_CALLSITE[00747D76]: CALL dword ptr [EAX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x2c))();
    piVar1 = STField<int *>(this,0x18);
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[00747D83]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      STField<undefined4>(this,0x18) = 0;
    }
  }
  return iVar2;
}

