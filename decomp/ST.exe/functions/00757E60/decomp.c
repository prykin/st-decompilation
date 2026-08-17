#include "../../pseudocode_runtime.h"


void FUN_00757e60(AnonShape_00759190_45B6ED67 *param_1)

{
  AnonNested_AnonShape_00759190_45B6ED67_01A6_2E084C16 *pAVar1;
  int iVar2;
  int iVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  pAVar1 = (AnonNested_AnonShape_00759190_45B6ED67_01A6_2E084C16 *)
           /* ST_CALLSITE[00757E6E]: CALL dword ptr [EAX] */
           (**(code **)param_1->field_0000)(param_1,0,0x60);
  param_1->field_01A6 = pAVar1;
  pAVar1->field_0000 = Library::DKW::JPG::FUN_00759190;
  param_1->field_01A6->field_0004 = Library::DKW::JPG::FUN_00758170;
  param_1->field_01A6->field_0008 = Library::DKW::JPG::FUN_00759120;
  param_1->field_01A6->field_000C = Library::DKW::JPG::FUN_00758100;
  iVar2 = 0x10;
  do {
    iVar3 = iVar2 + 4;
    *(code **)((int)&param_1->field_01A6->field_0000 + iVar2) = Library::DKW::JPG::FUN_00758100;
    iVar2 = iVar3;
  } while (iVar3 < 0x50);
  param_1->field_01A6->field_0010 = Library::DKW::JPG::FUN_00757ef0;
  param_1->field_01A6->field_0048 = Library::DKW::JPG::FUN_00758010;
  Library::DKW::JPG::FUN_00759190(param_1);
  return;
}

