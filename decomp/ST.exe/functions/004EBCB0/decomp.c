#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ebcb0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = thunk_FUN_004e1490(this);
  if ((iVar2 != 0) && (STField<int>(this,0x5b8) < g_worldGrid.sizeZ + -1)) {
    STField<int>(this,0x508) = param_1;
    STField<undefined4>(this,0x4d0) = 3;
    STField<int>(this,0x50c) = param_2;
    STField<undefined4>(this,0x4dc) = 0;
    STField<undefined4>(this,0x4e0) = 0;
    STField<undefined4>(this,0x4ec) = 0;
    /* ST_CALLSITE[004EBD0C]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
    TLOBaseTy::RotateSpr(this,0);
    if (STField<int>(this,0x5ac) == 0x52) {
      iVar2 = *(int *)this;
      /* ST_CALLSITE[004EBD2C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar1 = LookupRecordByte(STField<char>(this,0x23d));
      /* ST_CALLSITE[004EBD43]: CALL dword ptr [EDI + 0x90] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(iVar2 + 0x90))(3,(-(uint)(bVar1 != 2) & 0xffffff3b) + 0x35e);
      return;
    }
    if (STField<int>(this,0x5ac) == 0x5f) {
      /* ST_CALLSITE[004EBD5F]: CALL dword ptr [EDX + 0x90] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x90))(3,0x3b1);
    }
  }
  return;
}

