#include "../../pseudocode_runtime.h"


int __thiscall FUN_00693c10(void *this,RecoveredRecord_00693C10_160B536B *param_1)

{
  int iVar1;
  int iVar2;
  RecoveredRecord_00693C10_160B536B *pRVar4;
  byte *puVar5;


  iVar1 = thunk_FUN_00693e60(this,(uint)param_1->field_0022);
  if (iVar1 == 0) {

    iVar2 = thunk_FUN_006941c0(this);
    pRVar4 = param_1;
    puVar5 = (byte *)((uint)param_1->field_0022 * 0x51 + 0x11 + (int)this);
    memmove(puVar5, pRVar4, 0x51); /* compiler REP MOVS byte copy */
    STField<char>(this,0x10) = STField<char>(this,0x10) + '\x01';
    if (-1 < iVar2) {
      *(char *)((uint)param_1->field_0022 * 0x51 + 0x34 + (int)this) = (char)iVar2;
    }
    return (uint)param_1->field_0022 * 0x51 + 0x11 + (int)this;
  }
  return 0;
}

