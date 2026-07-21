#include "../../pseudocode_runtime.h"


void FUN_006bfbf0(AnonShape_006BFBF0_13F73F95 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  AnonShape_006BFBF0_13F73F95 *pAVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar11;
  uint local_34 [4];
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;

  pAVar4 = param_1;
  memset(local_34, 0, 0x24); /* compiler bulk-zero initialization */
  iVar7 = 0;
  local_24 = &param_1->field_0x8a;
  *(undefined4 *)&param_1->field_0x18 = 0x7fffffff;
  puVar9 = (undefined4 *)&param_1->field_0x4c;
  puVar11 = (undefined4 *)local_24;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar7 = (**(code **)(*DAT_008568b4 + 0xc))(DAT_008568b4,local_34,puVar1,0);
  if (-1 < iVar7) {
    if ((local_34[1] & 2) != 0) {
      *(uint *)&pAVar4->field_0x4 = *(uint *)&pAVar4->field_0x4 | 0x4000;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(**(int **)puVar1 + 0x2c))
                      (*(int **)puVar1,0,local_34[2],&local_8,&param_1,&local_10,&local_c,0);
    if (iVar7 == 0) {
      FUN_006bfe70(local_8,(AnonShape_006BFE70_9EDC24A5 *)pAVar4,param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(**(int **)puVar1 + 0x4c))
                        (*(int **)puVar1,local_8,param_1,local_10,local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((iVar7 == 0) &&
         (iVar7 = (**(code **)(**(int **)puVar1 + 0x3c))
                            (*(int **)puVar1,*(undefined4 *)&pAVar4->field_0x30), iVar7 == 0)) {
        piVar3 = *(int **)puVar1;
        if ((*(uint *)&pAVar4->field_0x4 & 0x1000) == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*piVar3 + 0x40))(piVar3,*(undefined4 *)&pAVar4->field_0x34);
        }
        else {
          puVar2 = &pAVar4->field_0x10;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)*piVar3)(piVar3,&DAT_0079eaa8,puVar2);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x4c))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x38,
                             *(undefined4 *)&pAVar4->field_0x3c,*(undefined4 *)&pAVar4->field_0x40,1
                            );
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x44))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x44,1);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar2 + 0x40))
                            (*(int **)puVar2,*(undefined4 *)&pAVar4->field_0x48,1);
          if (iVar7 != 0) {
            return;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*DAT_008568bc + 0x44))(DAT_008568bc);
        }
        if (iVar7 == 0) {
          DVar6 = timeGetTime();
          *(DWORD *)&pAVar4->field_0x8 = DVar6;
          uVar5 = ~*(uint *)&pAVar4->field_0x4 >> 0xe & 1;
          if ((*(uint *)&pAVar4->field_0x4 & 1) != 0) {
            uVar5 = 1;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(**(int **)puVar1 + 0x30))(*(int **)puVar1,0,0,uVar5);
          if (iVar7 == 0) {
            *(uint *)pAVar4 = *(uint *)pAVar4 | 1;
          }
        }
      }
    }
  }
  return;
}

