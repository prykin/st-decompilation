#include "../../pseudocode_runtime.h"


void __thiscall FUN_00626d70(void *this,AnonShape_00626D70_1F4C15C4 *param_1)

{
  byte uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;

  /* ST_CALLSITE[00626D79]: CALL dword ptr [EAX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  /* ST_CALLSITE[00626D8B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0x4 = bVar2;
  if (STField<char>(this,0x2ad) == '\x02') {
    if (STField<uint>(this,0x262) == (uint)DAT_0080874d) {
      param_1->field_0005 = 1;
    }
    else {
      param_1->field_0005 = 3;
    }
    param_1->field_0009 = 0x4c;
    param_1->field_000F = STField<int>(this,0x2ae) != 4;
  }
  else {
    param_1->field_0005 = 4;
  }
  if (STField<char>(this,0x2ad) == '\x03') {
    iVar4 = ((STField<int>(this,0x35f) - g_playSystem_00802A38->field_00E4) + 0x1194) * 0x28;
    param_1[3].field_0x4 =
         ((char)(iVar4 / 0x1194) + (char)(iVar4 >> 0x1f)) -
         (char)((longlong)iVar4 * 0x7482296b >> 0x3f);
  }
  uVar1 = STField<undefined1>(this,0x21d);
  param_1->field_0006 = 1;
  param_1->field_0x8 = uVar1;
  if (STField<int>(this,0x2ae) != 4) {
    param_1->field_0007 = 1;
  }
  return;
}

