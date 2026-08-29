#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00754390 -> 00755970 @ 0075439E; FUN_00754390 parameter param_1 */

int FUN_00755970(RecoveredRecordView_00753C80_637B4E8C *param_1,ushort *param_2,int param_3)

{
  short sVar1;
  RecoveredRecordView_00753C80_637B4E8C *pRVar2;
  RecoveredRecordView_00753C80_637B4E8C *pRVar3;
  int iVar7_mg1;
  uint uVar4;
  RecoveredRecordView_00753C80_637B4E8C *pRVar5;
  int iVar6;
  RecoveredRecordView_00753C80_637B4E8C *pRVar7;
  int local_c;
  uint *local_8;

  pRVar2 = param_1;
  iVar6 = 0;
  local_8 = nullptr;
  local_c = 0;
  param_1->field_000C =
       *(AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 **)&param_1->field_0008[1].field_0x18;
  do {
    pRVar2->field_000C->field_001C = local_8;
    /* ST_CALLSITE[0075599D]: CALL 0x00753b80; direct=00753B80 FUN_00753b80; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    iVar7_mg1 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)pRVar2,iVar6,(int)local_8
                                 );
    RecoveredRecordView_00753C80_637B4E8C * param_1_after_write = (RecoveredRecordView_00753C80_637B4E8C *)0xffffffff; /* compiler stack-slot lifetime split */
    pRVar5 = (RecoveredRecordView_00753C80_637B4E8C *)0xffffffff;
    pRVar3 = nullptr;
    if (0 < STField<short>(iVar7_mg1,0x8)) {
      do {
        pRVar7 = pRVar3;
        if (*(int *)&pRVar2->field_000C->field_0x30 == 0xff) {
          /* ST_CALLSITE[007559C7]: CALL dword ptr [EAX + 0x4] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          uVar4 = (**(code **)&pRVar2->field_000C->field_0x4)(param_2);
        }
        else {

          uVar4 = FUN_007575b0((AnonShape_007575B0_A94973CA *)pRVar2,param_2,
                               (ushort *)(&pRVar7[1].field_0x4 + iVar7_mg1));
        }
        pRVar5 = param_1_after_write;
        if ((int)uVar4 < 0) break;
        pRVar5 = pRVar7;
        if (uVar4 == 0) {
          local_c = 1;
          break;
        }
        sVar1 = pRVar2->field_000C->field_0034;
        if (sVar1 == 0) {
          /* ST_CALLSITE[007559F8]: CALL dword ptr [EAX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar6 = (**(code **)&pRVar2->field_000C->field_0x8)(&pRVar7[1].field_0x4 + iVar7_mg1);
        }
        else {
          iVar6 = (int)sVar1;
        }
        pRVar3 = (RecoveredRecordView_00753C80_637B4E8C *)((int)&pRVar7->field_0008 + iVar6);
        *(RecoveredRecordView_00753C80_637B4E8C **)
         (&pRVar2->field_000C[1].field_0xe + (int)pRVar2->field_000C->field_001C * 8) = pRVar3;
        param_1_after_write = pRVar7;
      } while ((int)pRVar3 < (int)STField<short>(iVar7_mg1,0x8));
    }
    *(RecoveredRecordView_00753C80_637B4E8C **)
     (&pRVar2->field_000C[1].field_0xe + (int)pRVar2->field_000C->field_001C * 8) = pRVar5;
    if ((local_c != 0) && (param_3 != 0)) {
      return local_c;
    }
    if (pRVar5 == (RecoveredRecordView_00753C80_637B4E8C *)0xffffffff) {
      iVar6 = STField<int>(iVar7_mg1,0x4);
    }
    else {
      iVar6 = STObjectAtByteOffset(pRVar5, iVar7_mg1).field_0010;
    }
    *(RecoveredRecordView_00753C80_637B4E8C **)(&pRVar2->field_000C[1].field_0xe + (int)local_8 * 8)
         = pRVar5;
    local_8 = (uint *)((int)local_8 + 1);
    if (iVar6 == -1) {
      return local_c;
    }
  } while( true );
}

