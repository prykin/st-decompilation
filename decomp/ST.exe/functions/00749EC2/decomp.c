#include "../../pseudocode_runtime.h"


int FUN_00749ec2(AnonShape_00749EC2_C411FB81 *param_1)

{
  AnonShape_00749EC2_C411FB81 *lpCriticalSection;
  undefined1 *this;
  AnonNested_AnonShape_00749EC2_C411FB81_006C_7E3C32DA *pAVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = param_1 + 1;
  /* ST_CALLSITE[00749ED4]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = param_1->field_0008;
  if (iVar2 != 1) {
    if (param_1->entries_006C[6] != nullptr) {
      iVar3 = FUN_007470e5((AnonShape_007470E5_0A8F5E67 *)param_1);
      if (iVar3 < 0) {
        /* ST_CALLSITE[00749F10]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return iVar3;
      }
      this = &param_1[-1].field_0x64;
      FUN_0074a81d(this,1);
      /* ST_CALLSITE[00749F2A]: CALL dword ptr [EAX + 0x80] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x80))();
      /* ST_CALLSITE[00749F35]: CALL dword ptr [EAX + 0x28] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x28))(1);
      /* ST_CALLSITE[00749F3C]: CALL dword ptr [EAX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x6c))();
      FUN_0074a760((int)this);
      pAVar1 = param_1->entries_006C[0x27];
      if (pAVar1 != nullptr) {
        /* ST_CALLSITE[00749F56]: CALL dword ptr [ECX + 0x14] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(pAVar1->field_0000 + 0x14))(pAVar1);
      }
      if (iVar2 == 0) {
        param_1->field_0054 = 0;
        /* ST_CALLSITE[00749F67]: CALL dword ptr [EAX + 0x70] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)this + 0x70))();
      }
      /* ST_CALLSITE[00749F71]: CALL dword ptr [EAX + 0x30] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*(int *)this + 0x30))(iVar2);
      goto LAB_00749f79;
    }
    param_1->field_0008 = 1;
  }
  /* ST_CALLSITE[00749EFA]: CALL dword ptr [EAX + 0x30] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (**(code **)(*(int *)&param_1[-1].field_0x64 + 0x30))(1);
LAB_00749f79:
  /* ST_CALLSITE[00749F79]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar2;
}

