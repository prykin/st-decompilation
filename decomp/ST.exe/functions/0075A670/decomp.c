#include "../../pseudocode_runtime.h"


void FUN_0075a670(RecoveredRecord_0075A670_EE0D550C *param_1,undefined4 *param_2)

{
  byte *puVar1;
  byte *puVar2;
  AnonNested_RecoveredRecord_0075A670_EE0D550C_0000_7CAE5057 *pAVar3;
  RecoveredRecord_0075A670_EE0D550C *pRVar4;
  AnonNested_RecoveredRecord_0075A670_EE0D550C_019A_F8ADDB3E *pAVar5;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar7;

  pRVar4 = param_1;
  pAVar5 = (AnonNested_RecoveredRecord_0075A670_EE0D550C_019A_F8ADDB3E *)
           /* ST_CALLSITE[0075A681]: CALL dword ptr [EAX] */
           (*STField<code *>(param_1->field_0000,0x0000))(param_1,1,0x74);
  param_1->field_019A = pAVar5;
  pAVar5->field_0000 = Library::DKW::JPG::FUN_0075a780;
  pAVar5->field_0008 = Library::DKW::JPG::FUN_0075a800;
  pAVar5->field_0070 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == nullptr) {
    /* ST_CALLSITE[0075A73F]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar7 = (**(code **)&param_1->field_0000->field_0x4)(param_1,1,0xa00);
    piVar8 = (int *)&pAVar5->field_0x20;
    iVar9 = 10;
    do {
      *piVar8 = iVar7;
      piVar8 = piVar8 + 1;
      iVar7 = iVar7 + 0x100;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *(undefined4 *)&pAVar5->field_0x10 = 0;
    *(code **)&pAVar5->field_0x4 = Library::DKW::JPG::FUN_0075aaa0;
    *(code **)&pAVar5->field_0xc = Library::DKW::JPG::FUN_0075a860;
    return;
  }
  puVar1 = &param_1->field_0x1c;
  puVar2 = &param_1->field_0xd0;
  RecoveredRecord_0075A670_EE0D550C * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  if (0 < *(int *)puVar1) {
    auto param_2_after_write = (undefined4 *)&pAVar5->field_0x48; /* compiler stack-slot lifetime split */
    piVar8 = (int *)(*(int *)puVar2 + 0xc);
    do {
      iVar7 = *piVar8;
      iVar9 = iVar7;
      if (*(int *)&pRVar4->field_0xd4 != 0) {
        iVar9 = iVar7 * 3;
      }
      pAVar3 = pRVar4->field_0000;

      iVar4 = FUN_00759e90(piVar8[5],iVar7);

      iVar5 = FUN_00759e90(piVar8[4],piVar8[-1]);
      /* ST_CALLSITE[0075A6F6]: CALL dword ptr [EBX + 0x14] */
      uVar6 = (*STField<code *>(pAVar3,0x14))(pRVar4,1,1,iVar5,iVar4,iVar9);
      piVar8 = piVar8 + 0x15;
      *param_2_after_write = uVar6;
      param_2_after_write = param_2_after_write + 1;
      param_1_after_write = (RecoveredRecord_0075A670_EE0D550C *)((int)&param_1_after_write->field_0000 + 1);
    } while ((int)param_1_after_write < *(int *)&pRVar4->field_0x1c);
  }
  *(code **)&pAVar5->field_0x4 = Library::DKW::JPG::FUN_0075aab0;
  *(code **)&pAVar5->field_0xc = Library::DKW::JPG::FUN_0075acb0;
  *(undefined1 **)&pAVar5->field_0x10 = &pAVar5->field_0x48;
  return;
}

