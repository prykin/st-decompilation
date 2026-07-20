
int __fastcall FUN_007295f0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079e320;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa4;
  iVar8 = 0;
  local_2c = 0;
  local_24 = 0;
  iVar1 = *(int *)((int)param_1 + 0x328);
  iVar2 = *(int *)((int)param_1 + 800);
  local_8 = 0;
  iVar7 = iVar1 + -1;
  pbVar6 = (byte *)(*(int *)((int)param_1 + 0x330) + iVar7 * 0x68);
  ExceptionList = &local_14;
  for (; iVar1 - iVar2 <= iVar7; iVar7 = iVar7 + -1) {
    local_20 = *(uint **)(pbVar6 + 100);
    if ((((*(uint *)(pbVar6 + 4) & 0x8000) != 0) && ((*pbVar6 & 2) != 0)) &&
       (puVar9 = (uint *)(*(int *)(pbVar6 + 0x60) * 0x10 + local_20[0x3c]), (*puVar9 & 2) == 0)) {
      if (local_2c == 0) {
        iVar8 = FUN_006bbe40(*(int **)(*(int *)((int)param_1 + 4) + 0x40),&local_2c,&local_24,0);
        local_28 = iVar8;
        if (iVar8 != 0) break;
        local_2c = local_2c +
                   *(int *)((int)param_1 + 0x24) * local_24 + *(int *)((int)param_1 + 0x20);
        local_28 = 0;
      }
      uVar5 = local_20[0x41];
      if (uVar5 == 0) {
        if ((*(int *)((int)param_1 + 0x144) == 0) || (*(int *)((int)param_1 + 0x158) == 0)) {
          uVar5 = *(uint *)((int)param_1 + 0x27c);
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x278);
          iVar8 = (((int)*(short *)(puVar9[3] + 4) - *(int *)((int)param_1 + 0x16c)) * iVar3) /
                  (*(int *)((int)param_1 + 0x170) - *(int *)((int)param_1 + 0x16c));
          if (iVar8 < 0) {
            uVar5 = *(uint *)((int)param_1 + 0x27c);
          }
          else {
            if (iVar3 <= iVar8) {
              iVar8 = iVar3 + -1;
            }
            uVar5 = *(int *)((int)param_1 + 0x27c) + iVar8 * 0x100;
          }
        }
      }
      iVar8 = FUN_00728da0(param_1,local_2c,local_24,(short *)puVar9[3],puVar9[2],*puVar9 & 1,uVar5)
      ;
      local_28 = iVar8;
      if (iVar8 != 0) break;
      *local_20 = *local_20 | 0x10;
    }
    *local_20 = *local_20 & 0xffffffdf;
    pbVar6 = pbVar6 + -0x68;
  }
  local_8 = 0xffffffff;
  if (local_2c != 0) {
    piVar4 = *(int **)(*(int *)((int)param_1 + 4) + 0x40);
    (**(code **)(*piVar4 + 0x80))(piVar4,0);
  }
  ExceptionList = local_14;
  return iVar8;
}

