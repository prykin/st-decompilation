#include "../../pseudocode_runtime.h"


void __thiscall FUN_004ebf10(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  if (STField<int>(this,0x508) == param_1) {
    STField<undefined4>(this,0x4d0) = 5;
    thunk_FUN_004cbf70(this);
    TLOBaseTy::RotateSpr(this,0);
    if (STField<int>(this,0x5ac) == 0x52) {
      iVar1 = *(int *)this;
      bVar2 = LookupRecordByte(STField<char>(this,0x23d));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3b) + 0x35f);
      return;
    }
    if (STField<int>(this,0x5ac) == 0x5f) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(3,0x3b2);
    }
  }
  return;
}

