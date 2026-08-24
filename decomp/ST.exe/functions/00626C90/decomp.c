#include "../../pseudocode_runtime.h"


void __thiscall FUN_00626c90(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  if (STField<char>(this,0x2ad) == '\x02') {
    *param_1 = ((STField<uint>(this,0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  else {
    *param_1 = '\x04';
  }
  cVar1 = STField<char>(this,0x21d);
  param_1[2] = '\x01';
  param_1[1] = cVar1;
  /* ST_CALLSITE[00626CD7]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  /* ST_CALLSITE[00626CE7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x24));
  param_1[7] = bVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  Library::MSVCRT::_strncpy(param_1 + 0xc,(char *)((int)this + 0x28e),0xe);
  param_1[0x1b] = 'd';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2e - STField<short>(this,0x4b)] = '\x01';
  if (STField<int>(this,0x2ae) != 4) {
    param_1[0x1d] = '\x01';
  }
  return;
}

