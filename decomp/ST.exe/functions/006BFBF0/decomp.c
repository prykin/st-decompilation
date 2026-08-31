#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=4, ignored=1, unknown=0 */

int FUN_006bfbf0(RecoveredRecordView_006BFBF0_7F78587C *param_1)

{
  byte *puVar1;
  byte *puVar2;
  int *piVar3;
  RecoveredRecordView_006BFBF0_7F78587C *pRVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar11;
  uint local_34 [4];
  byte *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  RecoveredRecord_006BFE70_3123BCE8 *local_8;

  pRVar4 = param_1;
  memset(local_34, 0, 0x24); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_24 = &param_1->field_0x8a;
  *(undefined4 *)&param_1->field_0x18 = 0x7fffffff;
  puVar9 = (byte *)&param_1->field_0x4c;
  puVar11 = (byte *)local_24;
  memmove(puVar11, puVar9, 0x32); /* compiler REP MOVS byte copy */
  local_34[0] = 0x24;
  if (*(short *)local_24 == 2) {
    *(undefined2 *)local_24 = 1;
    *(undefined2 *)&param_1->field_0x98 = 0x10;
    uVar5 = (int)((uint)*(ushort *)&param_1->field_0x8c * 0x10) >> 3;
    param_1->field_0096 = (short)uVar5;
    param_1->field_0092 = param_1->field_008E * (uVar5 & 0xffff);
    param_1->field_009A = 0;
    *(uint *)&param_1[1].field_0x24 = param_1->field_0066;
  }
  else {
    *(uint *)&param_1[1].field_0x24 = param_1->field_005E / (uint)(ushort)param_1->field_0096;
  }
  uVar5 = (uint)(ushort)param_1->field_0096 * *(int *)&param_1[1].field_0x24;
  local_34[2] = param_1->field_0092 * 2;
  if (local_34[2] < uVar5 || local_34[2] - uVar5 == 0) {
    uVar8 = 0x100e0;
  }
  else {
    uVar8 = 0xe2;
    local_34[2] = uVar5;
  }
  *(uint *)&param_1->field_0x14 = local_34[2];
  if (((*(uint *)&param_1->field_0x4 & 0x1000) == 0) || (DAT_007ede10 < 1)) {
    local_34[1] = uVar8 | 8;
    *(uint *)&param_1->field_0x4 = *(uint *)&param_1->field_0x4 & 0xffffefff;
  }
  else {
    local_34[1] = uVar8 | 0x20010;
    local_20 = DAT_0079ea38;
    local_1c = DAT_0079ea3c;
    local_18 = DAT_0079ea40;
    local_14 = DAT_0079ea44;
    if (DAT_007ede10 == 1) {
      local_34[1] = uVar8 | 0x20018;
    }
  }
  puVar1 = &param_1->field_0xc;
  /* ST_CALLSITE[006BFD34]: CALL dword ptr [ECX + 0xc] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar7 = (**(code **)(*PTR_008568b4 + 0xc))(PTR_008568b4,local_34,puVar1,0);
  if (-1 < iVar7) {
    if ((local_34[1] & 2) != 0) {
      *(uint *)&pRVar4->field_0x4 = *(uint *)&pRVar4->field_0x4 | 0x4000;
    }
    /* ST_CALLSITE[006BFD6B]: CALL dword ptr [ECX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar7 = (**(code **)(**(int **)puVar1 + 0x2c))
                      (*(int **)puVar1,0,local_34[2],&local_8,&param_1,&local_10,&local_c,0);
    if (iVar7 == 0) {

      FUN_006bfe70(local_8,(AnonShape_006BFE70_9EDC24A5 *)pRVar4,(int)param_1);
      /* ST_CALLSITE[006BFD99]: CALL dword ptr [EDX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar7 = (**(code **)(**(int **)puVar1 + 0x4c))
                        (*(int **)puVar1,local_8,param_1,local_10,local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((iVar7 == 0) &&
         /* ST_CALLSITE[006BFDAD]: CALL dword ptr [EDX + 0x3c] */
         (iVar7 = (**(code **)(**(int **)puVar1 + 0x3c))
                            (*(int **)puVar1,*(undefined4 *)&pRVar4->field_0x30), iVar7 == 0)) {
        piVar3 = *(int **)puVar1;
        if ((*(uint *)&pRVar4->field_0x4 & 0x1000) == 0) {
          /* ST_CALLSITE[006BFE2E]: CALL dword ptr [ECX + 0x40] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*piVar3 + 0x40))(piVar3,*(undefined4 *)&pRVar4->field_0x34);
        }
        else {
          puVar2 = &pRVar4->field_0x10;
          /* ST_CALLSITE[006BFDCE]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)*piVar3)(piVar3,&DAT_0079eaa8,puVar2);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFDEB]: CALL dword ptr [ECX + 0x4c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x4c))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x38,
                             *(undefined4 *)&pRVar4->field_0x3c,*(undefined4 *)&pRVar4->field_0x40,1
                            );
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFDFD]: CALL dword ptr [ECX + 0x44] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x44))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x44,1);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFE0F]: CALL dword ptr [EAX + 0x40] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x40))
                            (*(int **)puVar2,*(undefined4 *)&pRVar4->field_0x48,1);
          if (iVar7 != 0) {
            return iVar7;
          }
          /* ST_CALLSITE[006BFE1E]: CALL dword ptr [EDX + 0x44] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*PTR_008568bc + 0x44))(PTR_008568bc);
        }
        if (iVar7 == 0) {
          /* ST_CALLSITE[006BFE35]: CALL dword ptr [0x0085bedc] */
          DVar6 = timeGetTime();
          *(DWORD *)&pRVar4->field_0x8 = DVar6;
          uVar5 = ~*(uint *)&pRVar4->field_0x4 >> 0xe & 1;
          if ((*(uint *)&pRVar4->field_0x4 & 1) != 0) {
            uVar5 = 1;
          }
          /* ST_CALLSITE[006BFE5C]: CALL dword ptr [ECX + 0x30] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(**(int **)puVar1 + 0x30))(*(int **)puVar1,0,0,uVar5);
          if (iVar7 == 0) {
            *(uint *)pRVar4 = *(uint *)pRVar4 | 1;
          }
        }
      }
    }
  }
  return iVar7;
}

