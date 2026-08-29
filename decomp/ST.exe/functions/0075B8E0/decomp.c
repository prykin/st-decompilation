#include "../../pseudocode_runtime.h"


void FUN_0075b8e0(RecoveredRecord_0075B8E0_0BFBB4AB *param_1)

{
  AnonNested_RecoveredRecord_0075B8E0_0BFBB4AB_01AA_F7377AC4 *pAVar1;
  int iVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  pAVar1 = (AnonNested_RecoveredRecord_0075B8E0_0BFBB4AB_01AA_F7377AC4 *)
           /* ST_CALLSITE[0075B8EE]: CALL dword ptr [EAX] */
           (**(code **)param_1->field_0000)(param_1,1,0x48);
  param_1->field_01AA = pAVar1;
  pAVar1->field_0000 = Library::DKW::JPG::FUN_0075b920;
  pAVar1->field_0004 = Library::DKW::JPG::FUN_0075ba30;
  pAVar1 = pAVar1 + 5;
  iVar2 = 4;
  do {
    pAVar1[2].field_0000 = 0;
    pAVar1->field_0000 = 0;
    pAVar1 = (AnonNested_RecoveredRecord_0075B8E0_0BFBB4AB_01AA_F7377AC4 *)&pAVar1->field_0004;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

