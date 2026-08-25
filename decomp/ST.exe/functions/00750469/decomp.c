#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00750469(void *this,uint param_1,int param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  /* ST_CALLSITE[00750479]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  iVar3 = 0;
  iVar2 = 0;
  if (0 < STField<int>(this,0x40)) {
    iVar2 = FUN_0074ded7(STField<int>(this,0x38));
  }
  if (0 < STField<int>(this,0x28)) {
    iVar3 = FUN_0074ded7(STField<int>(this,0x20));
  }
  if ((iVar3 == 0) ||
     (iVar1 = FUN_0074fea4(this,STField<uint>(iVar3,0x18),STField<int>(iVar3,0x1C),0), iVar1 == 0)) {
    if (((iVar2 != 0) && (STField<int>(iVar2,0x1C) <= param_2)) &&
       ((STField<int>(iVar2,0x1C) < param_2 || (STField<uint>(iVar2,0x18) <= param_1)))) {
      /* ST_CALLSITE[007504EA]: CALL dword ptr [ECX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(STField<int>(iVar3,0xC) + 4))(iVar3 + 0xc);
      *param_3 = iVar2;
      goto LAB_0075051f;
    }
    if ((STField<int>(this,100) == 0) || (iVar3 == 0)) {
LAB_0075052c:
      /* ST_CALLSITE[0075052F]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return 0x80040216;
    }
    iVar2 = STField<int>(this,0x6c) + param_2 + (uint)CARRY4(STField<uint>(this,0x68),param_1);
    if ((iVar2 < STField<int>(iVar3,0x1C)) ||
       ((iVar2 <= STField<int>(iVar3,0x1C) &&
        (STField<uint>(this,0x68) + param_1 < STField<uint>(iVar3,0x18))))) goto LAB_0075052c;
  }
  else {
    /* ST_CALLSITE[007504C8]: CALL dword ptr [ECX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(STField<int>(iVar3,0xC) + 4))(iVar3 + 0xc);
  }
  *param_3 = iVar3;
LAB_0075051f:
  /* ST_CALLSITE[00750522]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

