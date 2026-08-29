#include "../../pseudocode_runtime.h"


void FUN_007576c0(RecoveredRecord_007576C0_30DE796E *param_1)

{
  AnonNested_RecoveredRecord_007576C0_30DE796E_01A2_AB632069 *pAVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  pAVar1 = (AnonNested_RecoveredRecord_007576C0_30DE796E_01A2_AB632069 *)
           /* ST_CALLSITE[007576CE]: CALL dword ptr [EAX] */
           (**(code **)param_1->field_0000)(param_1,0,0x1c);
  param_1->field_01A2 = pAVar1;
  pAVar1->field_0000 = Library::DKW::JPG::FUN_007579c0;
  pAVar1->field_0004 = Library::DKW::JPG::FUN_00757c90;
  pAVar1->field_0008 = Library::DKW::JPG::FUN_00757710;
  pAVar1->field_000C = Library::DKW::JPG::FUN_007579a0;
  pAVar1->field_0010 = 0;
  pAVar1->field_0014 = 0;
  pAVar1->field_0018 = 1;
  return;
}

