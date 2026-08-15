#include "../../pseudocode_runtime.h"


void __thiscall FUN_004d6890(void *this,AnonShape_004D6890_0C7826D6 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  AnonShape_004D6890_0C7826D6 *pAVar5;

  pAVar5 = param_1;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = 0;
    pAVar5 = (AnonShape_004D6890_0C7826D6 *)((int)&pAVar5->field_0003 + 1);
  }
  *(undefined2 *)pAVar5 = 0;
  bVar2 = LookupRecordByte(STField<char>(this,0x24));
  param_1->field_0007 = bVar2;
  *(undefined1 *)param_1 = 1;
  uVar3 = STField<undefined1>(this,0x21d);
  param_1->field_0002 = 2;
  param_1->field_0001 = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x7c))();
  param_1->field_001B = uVar3;
  param_1->field_0003 = STField<undefined4>(this,0x259);
  uVar1 = STField<undefined4>(this,0x18);
  param_1->field_0008 = (short)uVar1;
  param_1->field_000A = (short)((uint)uVar1 >> 0x10);
  param_1->field_001E = 0;
  param_1->field_0026 = 0xffff;
  *(undefined2 *)&param_1->field_0x20 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x265))) = 1;
  return;
}

