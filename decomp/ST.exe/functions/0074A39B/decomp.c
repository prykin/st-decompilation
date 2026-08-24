#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074a39b(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  int iVar1;
  uint uVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x7c);
  /* ST_CALLSITE[0074A3AE]: CALL EDI */
  EnterCriticalSection(lpCriticalSection);
  STField<undefined4>(this,0xb4) = 1;
  iVar1 = FUN_00748721((AnonShape_00748721_F11EED2A *)(STField<int>(this,0x78) + 0x98),param_1);
  if (iVar1 == 0) {
    iVar2 = (STField<int *>(this,0x78))[0x33];
    if (iVar2 != 0) {
      /* ST_CALLSITE[0074A3FA]: CALL dword ptr [EDX + 0x24] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*STField<int *>(this,0x78) + 0x24))(iVar2);
    }
    lpCriticalSection_00 = (LPCRITICAL_SECTION)((int)this + 0x94);
    /* ST_CALLSITE[0074A407]: CALL EDI */
    EnterCriticalSection(lpCriticalSection_00);
    if (((STField<int>(this,0x6c) == 0) && (STField<int>(this,0x70) == 0)) &&
       (STField<int>(this,0x60) == 0)) {
      if (STField<void *>(this,0x50) != nullptr) {
        FUN_0074ef87(STField<void *>(this,0x50),param_1);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((STField<int>(this,100) == 1) &&
         /* ST_CALLSITE[0074A441]: CALL dword ptr [EAX + 0x54] */
         (iVar2 = (**(code **)(*(int *)this + 0x54))(param_1), iVar2 == 0)) {
        STField<undefined4>(this,0xb4) = 0;
        /* ST_CALLSITE[0074A457]: CALL ESI */
        LeaveCriticalSection(lpCriticalSection_00);
        /* ST_CALLSITE[0074A45A]: CALL ESI */
        LeaveCriticalSection(lpCriticalSection);
        return 0x8004022b;
      }
      STField<undefined4>(this,0xb8) = *(undefined4 *)(STField<int>(this,0x78) + 0xc0);
      uVar1 = *(undefined4 *)(STField<int>(this,0x78) + 0xc4);
      STField<int *>(this,0x6c) = param_1;
      STField<undefined4>(this,0xbc) = uVar1;
      /* ST_CALLSITE[0074A484]: CALL dword ptr [EAX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 4))(param_1);
      if (STField<int>(this,100) == 0) {
        FUN_0074a81d(this,1);
      }
      /* ST_CALLSITE[0074A49F]: CALL ESI */
      LeaveCriticalSection(lpCriticalSection_00);
      /* ST_CALLSITE[0074A4A2]: CALL ESI */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
    else {
      /* ST_CALLSITE[0074A4AB]: CALL dword ptr [0x0085bb80] */
      SetEvent(STField<HANDLE>(this,0x5c));
      STField<undefined4>(this,0xb4) = 0;
      /* ST_CALLSITE[0074A4C0]: CALL ESI */
      LeaveCriticalSection(lpCriticalSection_00);
      /* ST_CALLSITE[0074A4C3]: CALL ESI */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0x8000ffff;
    }
  }
  else {
    STField<undefined4>(this,0xb4) = 0;
    /* ST_CALLSITE[0074A3DA]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80004005;
  }
  return uVar1;
}

