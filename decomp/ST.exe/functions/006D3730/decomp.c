
int FUN_006d3730(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int *piVar1;
  void **ppvVar2;
  undefined1 *puVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  tagRECT local_6c;
  RECT local_5c;
  tagRECT local_48;
  RECT local_38;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dac0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  iVar8 = 0;
  ppvVar2 = &local_14;
  puVar3 = &stack0xffffff88;
  if ((0 < param_6) && (ppvVar2 = &local_14, puVar3 = &stack0xffffff88, 0 < param_7)) {
    if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
      return 0;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      return 0;
    }
    local_38.left = *(int *)(param_1 + 0x10) + param_4;
    local_38.top = *(int *)(param_1 + 0x14) + param_5;
    local_38.right = local_38.left + param_6;
    local_38.bottom = local_38.top + param_7;
    local_5c.left = 0;
    local_5c.top = 0;
    local_5c.right = *(LONG *)(param_1 + 0x18);
    local_5c.bottom = *(LONG *)(param_1 + 0x1c);
    ExceptionList = &local_14;
    BVar4 = IntersectRect(&local_6c,&local_5c,&local_38);
    ppvVar2 = ExceptionList;
    puVar3 = local_1c;
    if (BVar4 != 0) {
      local_38.left = *(int *)(param_1 + 0x10) + param_2 + (local_6c.left - local_38.left);
      local_38.top = *(int *)(param_1 + 0x14) + param_3 + (local_6c.top - local_38.top);
      local_38.right = (local_6c.right - local_6c.left) + local_38.left;
      local_38.bottom = (local_6c.bottom - local_6c.top) + local_38.top;
      BVar4 = IntersectRect(&local_48,&local_5c,&local_38);
      ppvVar2 = ExceptionList;
      puVar3 = local_1c;
      if (BVar4 != 0) {
        local_6c.left = local_6c.left + (local_48.left - local_38.left);
        local_6c.top = local_6c.top + (local_48.top - local_38.top);
        uVar9 = local_48.right - local_48.left;
        iVar5 = local_48.bottom - local_48.top;
        local_6c.right = local_6c.left + uVar9;
        local_6c.bottom = iVar5 + local_6c.top;
        if (((((*(byte *)(param_1 + 0xc) & 0x10) == 0) || (local_48.top < local_6c.top)) ||
            ((local_48.top == local_6c.top && (local_48.left <= local_6c.left)))) ||
           (BVar4 = IntersectRect(&local_5c,&local_48,&local_6c), BVar4 == 0)) {
          iVar5 = 0;
          while( true ) {
            piVar1 = *(int **)(param_1 + 0x40);
            iVar8 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_48,piVar1,&local_6c,0x1000000,0);
            if (iVar8 == 0) break;
            if (iVar8 == -0x7789fe3e) {
              FUN_006cec40(param_1);
            }
            else {
              if (((iVar8 != -0x7789ff60) && (iVar8 != -0x7789fe52)) || (iVar5 != 0)) break;
              Sleep(2);
            }
            iVar5 = iVar5 + 1;
            if (1 < iVar5) break;
          }
        }
        else {
          local_24 = FUN_006bb8b0(param_1);
          iVar8 = local_24;
          if (local_24 == 0) {
            iVar8 = *(int *)(param_1 + 0x478);
            if (*(int *)(param_1 + 0x20) == 0x10) {
              iVar6 = iVar8 * local_6c.top + local_6c.left * 2;
              iVar7 = iVar8 * local_48.top + local_48.left * 2;
              uVar9 = uVar9 * 2;
            }
            else {
              iVar6 = iVar8 * local_6c.top + local_6c.left;
              iVar7 = iVar8 * local_48.top + local_48.left;
            }
            local_8 = 0;
            FUN_006d1610((undefined8 *)(*(int *)(param_1 + 0x474) + iVar7),
                         (undefined8 *)(iVar6 + *(int *)(param_1 + 0x474)),iVar8,uVar9,iVar5);
            iVar8 = local_24;
            local_8 = 0xffffffff;
            FUN_006bb980(param_1);
          }
        }
        ppvVar2 = ExceptionList;
        puVar3 = local_1c;
        if ((iVar8 == -0x7789ff60) || (iVar8 == -0x7789fe52)) {
          iVar8 = 0;
        }
      }
    }
  }
  local_1c = puVar3;
  ExceptionList = ppvVar2;
  if (iVar8 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  FUN_006a5e40(iVar8,DAT_007ed77c,0x7ee1fc,0x67);
  ExceptionList = local_14;
  return iVar8;
}

