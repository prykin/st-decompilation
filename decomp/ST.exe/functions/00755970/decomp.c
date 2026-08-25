#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00754390 -> 00755970 @ 0075439E; FUN_00754390 parameter param_1 */

int FUN_00755970(AnonShape_00753C80_4C8E695D *param_1,ushort *param_2,int param_3)

{
  short sVar1;
  AnonShape_00753C80_4C8E695D *pAVar2;
  AnonShape_00753C80_4C8E695D *pAVar3;
  int iVar7_mg1;
  uint uVar4;
  AnonShape_00753C80_4C8E695D *pAVar5;
  int iVar6;
  AnonShape_00753C80_4C8E695D *pAVar7;
  int local_c;
  uint *local_8;

  pAVar2 = param_1;
  iVar6 = 0;
  local_8 = nullptr;
  local_c = 0;
  param_1->field_000C =
       *(AnonNested_AnonShape_00753C80_4C8E695D_000C_9E74E987 **)&param_1->field_0008[1].field_0x18;
  do {
    pAVar2->field_000C->field_001C = local_8;
    iVar7_mg1 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)pAVar2,iVar6,(int)local_8);
    AnonShape_00753C80_4C8E695D * param_1_after_write = (AnonShape_00753C80_4C8E695D *)0xffffffff; /* compiler stack-slot lifetime split */
    pAVar5 = (AnonShape_00753C80_4C8E695D *)0xffffffff;
    pAVar3 = nullptr;
    if (0 < STField<short>(iVar7_mg1,0x8)) {
      do {
        pAVar7 = pAVar3;
        if (*(int *)&pAVar2->field_000C->field_0x30 == 0xff) {
          /* ST_CALLSITE[007559C7]: CALL dword ptr [EAX + 0x4] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          uVar4 = (**(code **)&pAVar2->field_000C->field_0x4)(param_2);
        }
        else {
          uVar4 = FUN_007575b0((AnonShape_007575B0_A94973CA *)pAVar2,param_2,
                               (ushort *)(&pAVar7[1].field_0x4 + iVar7_mg1));
        }
        pAVar5 = param_1_after_write;
        if ((int)uVar4 < 0) break;
        pAVar5 = pAVar7;
        if (uVar4 == 0) {
          local_c = 1;
          break;
        }
        sVar1 = pAVar2->field_000C->field_0034;
        if (sVar1 == 0) {
          /* ST_CALLSITE[007559F8]: CALL dword ptr [EAX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar6 = (**(code **)&pAVar2->field_000C->field_0x8)(&pAVar7[1].field_0x4 + iVar7_mg1);
        }
        else {
          iVar6 = (int)sVar1;
        }
        pAVar3 = (AnonShape_00753C80_4C8E695D *)((int)&pAVar7->field_0008 + iVar6);
        *(AnonShape_00753C80_4C8E695D **)
         (&pAVar2->field_000C[1].field_0xe + (int)pAVar2->field_000C->field_001C * 8) = pAVar3;
        param_1_after_write = pAVar7;
      } while ((int)pAVar3 < (int)STField<short>(iVar7_mg1,0x8));
    }
    *(AnonShape_00753C80_4C8E695D **)
     (&pAVar2->field_000C[1].field_0xe + (int)pAVar2->field_000C->field_001C * 8) = pAVar5;
    if ((local_c != 0) && (param_3 != 0)) {
      return local_c;
    }
    if (pAVar5 == (AnonShape_00753C80_4C8E695D *)0xffffffff) {
      iVar6 = STField<int>(iVar7_mg1,0x4);
    }
    else {
      iVar6 = STObjectAtByteOffset(pAVar5, iVar7_mg1).field_0010;
    }
    *(AnonShape_00753C80_4C8E695D **)(&pAVar2->field_000C[1].field_0xe + (int)local_8 * 8) = pAVar5;
    local_8 = (uint *)((int)local_8 + 1);
    if (iVar6 == -1) {
      return local_c;
    }
  } while( true );
}

