#include "../../pseudocode_runtime.h"


void FUN_0075cdf0(RecoveredRecord_0075CDF0_76EF4ECD *param_1,int param_2)

{
  AnonNested_RecoveredRecord_0075CDF0_76EF4ECD_0000_CC0F059B *pAVar1;
  AnonNested_RecoveredRecord_0075CDF0_76EF4ECD_019E_EB733C66 *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  pAVar2 = (AnonNested_RecoveredRecord_0075CDF0_76EF4ECD_019E_EB733C66 *)
           /* ST_CALLSITE[0075CDFF]: CALL dword ptr [EAX] */
           (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x1c);
  param_1->field_019E = pAVar2;
  pAVar2->field_0000 = Library::DKW::JPG::FUN_0075ce80;
  pAVar2->field_0008 = 0;
  pAVar2->field_000C = 0;
  if (*(int *)&param_1->field_0x4c != 0) {
    iVar5 = param_1->field_0126;
    pAVar2[1].field_0000 = iVar5;
    if (param_2 != 0) {
      pAVar1 = param_1->field_0000;

      iVar3 = FUN_00759e90(*(int *)&param_1->field_0x6c,iVar5);
      /* ST_CALLSITE[0075CE4A]: CALL dword ptr [EBX + 0x10] */
      uVar4 = (*STField<code *>(pAVar1,0x10))
                        (param_1,1,0,*(int *)&param_1->field_0x70 * *(int *)&param_1->field_0x68,
                         iVar3,iVar5);
      pAVar2->field_0008 = uVar4;
      return;
    }
    /* ST_CALLSITE[0075CE65]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar4 = (**(code **)&param_1->field_0000->field_0x8)
                      (param_1,1,*(int *)&param_1->field_0x70 * *(int *)&param_1->field_0x68,iVar5);
    pAVar2->field_000C = uVar4;
  }
  return;
}

