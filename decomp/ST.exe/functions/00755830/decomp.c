#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint FUN_00755830(AnonShape_00753C80_4C8E695D *param_1,uint *param_2,int param_3)

{
  byte *puVar1;
  short sVar2;
  uint uVar3;
  DWORD uVar4;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *puVar8;
  uint *puVar9;
  byte *puVar10;
  uint *puVar11;
  uint *puVar12;

  if (param_3 < 0) {
    puVar8 = (byte *)&param_1->field_000C[1].field_0xa;
    puVar10 = (byte *)&param_1->field_000C[1].field_0x12;
    memmove(puVar10, puVar8, 0x38); /* compiler REP MOVS byte copy */
    uVar3 = FUN_00753b40(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = Library::DKW::FMM::FUN_006d4c50
                      ((AnonNested_00757670_0008_104EC36D *)param_1->field_0008,uVar3,
                       (int)((AnonNested_00757670_0008_104EC36D *)param_1->field_0008)->field_0016);
    if (uVar4 == 0) {
      *(uint *)&param_1->field_0008->field_0x8 = *(uint *)&param_1->field_0008->field_0x8 | 0x10;
      iVar4 = param_1->field_0008->field_0034;
      puVar12 = (uint *)(iVar4 + uVar3);
      puVar7 = (uint *)(*(int *)&param_1->field_000C->field_0x24 + iVar4);
      uVar5 = (uint)*(short *)&param_1->field_0008->field_0x16;
      puVar9 = puVar7;
      puVar11 = puVar12;
      memmove(puVar11, puVar9, uVar5); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      *puVar12 = uVar3;
      sVar2 = param_1->field_000C->field_0034;
      if (sVar2 == 0) {
        /* ST_CALLSITE[007558EB]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)&param_1->field_000C->field_0x8)(param_2 + 2);
      }
      else {
        iVar4 = (int)sVar2;
      }
      uVar6 = iVar4 + 8;
      puVar12 = puVar7 + 4;
      memmove(puVar12, param_2, uVar6); /* compiler REP MOVS byte copy */
      *(short *)(puVar7 + 2) = (short)uVar6;
      puVar7[1] = uVar3;
      param_1->field_000C->field_001C = nullptr;
      *(undefined4 *)&param_1->field_000C[1].field_0xe = 0;
      puVar1 = &param_1->field_000C->field_0x2a;
      *(short *)puVar1 = *(short *)puVar1 + 1;
      *(undefined4 *)&param_1->field_000C->field_0x14 = 1;
      return 0;
    }
    if (0 < (int)uVar4) {
      return uVar4 | 0xffff0000;
    }
  }
  else {
    FUN_007574c0(param_1,param_1->field_0008->field_0034 + param_1->field_0010,param_2,
                 *(int *)(&param_1->field_000C[1].field_0xe + param_3 * 8));
    uVar4 = 0;
  }
  return uVar4;
}

