
int FUN_007506f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,int param_9)

{
  void **ppvVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  RECT local_38;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_007a1e38;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff8c;
  local_24 = 0;
  ppvVar1 = &local_14;
  puVar2 = &stack0xffffff8c;
  if ((0 < param_8) && (ppvVar1 = &local_14, puVar2 = &stack0xffffff8c, 0 < param_9)) {
    if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
      return 0;
    }
    local_38.left = param_6;
    local_38.top = param_7;
    local_38.right = param_6 + param_8;
    local_58.bottom = param_7 + param_9;
    local_58.left = 0;
    local_58.top = 0;
    local_58.right = param_5;
    ExceptionList = &local_14;
    local_38.bottom = local_58.bottom;
    BVar3 = IntersectRect(&local_68,&local_58,&local_38);
    ppvVar1 = ExceptionList;
    puVar2 = local_1c;
    if (BVar3 != 0) {
      local_38.left = *(int *)(param_1 + 0x10) + param_2 + (local_68.left - local_38.left);
      local_38.top = *(int *)(param_1 + 0x14) + param_3 + (local_68.top - local_38.top);
      local_38.right = (local_68.right - local_68.left) + local_38.left;
      local_38.bottom = (local_68.bottom - local_68.top) + local_38.top;
      local_58.right = *(int *)(param_1 + 0x18);
      local_58.bottom = *(int *)(param_1 + 0x1c);
      BVar3 = IntersectRect(&local_48,&local_58,&local_38);
      ppvVar1 = ExceptionList;
      puVar2 = local_1c;
      if (BVar3 != 0) {
        local_68.left = local_68.left + (local_48.left - local_38.left);
        local_68.top = local_68.top + (local_48.top - local_38.top);
        uVar5 = local_48.right - local_48.left;
        iVar4 = local_48.bottom - local_48.top;
        local_68.right = local_68.left + uVar5;
        local_68.bottom = local_68.top + iVar4;
        local_24 = FUN_006bb8b0(param_1);
        if (local_24 == 0) {
          local_8 = 0;
          FUN_006cea60((undefined8 *)
                       (*(int *)(param_1 + 0x474) +
                       *(int *)(param_1 + 0x478) * local_48.top + local_48.left),
                       *(int *)(param_1 + 0x478),
                       (undefined8 *)(local_68.top * param_5 + local_68.left + param_4),param_5,
                       uVar5,iVar4);
          local_8 = 0xffffffff;
          FUN_006bb980(param_1);
        }
        ppvVar1 = ExceptionList;
        puVar2 = local_1c;
        if ((local_24 == -0x7789ff60) || (local_24 == -0x7789fe52)) {
          local_24 = 0;
        }
      }
    }
  }
  local_1c = puVar2;
  ExceptionList = ppvVar1;
  iVar4 = local_24;
  if (local_24 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  RaiseInternalException(local_24,DAT_007ed77c,s_E__DKW_DDX_C_ddcopyp_c_007f2ab4,0x49);
  ExceptionList = local_14;
  return iVar4;
}

