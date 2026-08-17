#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ebf10(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  if (STField<int>(this,0x508) == param_1) {
    STField<undefined4>(this,0x4d0) = 5;
    thunk_FUN_004cbf70(this);
    /* ST_CALLSITE[004EBF38]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(this,0);
    if (STField<int>(this,0x5ac) == 0x52) {
      iVar1 = *(int *)this;
      /* ST_CALLSITE[004EBF58]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = LookupRecordByte(STField<char>(this,0x23d));
      /* ST_CALLSITE[004EBF6F]: CALL dword ptr [EDI + 0x90] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3b) + 0x35f);
      return;
    }
    if (STField<int>(this,0x5ac) == 0x5f) {
      /* ST_CALLSITE[004EBF8B]: CALL dword ptr [EDX + 0x90] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x90))(3,0x3b2);
    }
  }
  return;
}

