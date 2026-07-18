
int FUN_006b42d0(uint param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5,int param_6,
                int param_7,DWORD param_8,DWORD param_9)

{
  int iVar1;
  int iVar2;
  HDC local_4c;
  int local_48;
  int local_44;
  DWORD local_40;
  DWORD local_3c;
  uint local_38;
  int local_34;
  int local_30;
  DWORD local_2c;
  DWORD local_28;
  uint local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d8c0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  if (((0 < (int)param_8) && (0 < (int)param_9)) && ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100))
  {
    local_20 = 0;
    if (((*(int *)(param_1 + 0x20) < 0x11) && ((param_4->bmiHeader).biBitCount == 8)) ||
       (((param_4->bmiHeader).biBitCount == 0x10 && (*(int *)(param_1 + 0x4dc) != 0)))) {
      ExceptionList = &local_14;
      local_1c = &stack0xffffffa8;
      if (param_5 == (uint *)0x0) {
        ExceptionList = &local_14;
        local_1c = &stack0xffffffa8;
        param_5 = (uint *)FUN_006b4fa0((int)param_4);
      }
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
      local_34 = *(int *)(param_1 + 0x10) + param_2;
      local_30 = *(int *)(param_1 + 0x14) + param_3;
      local_2c = param_8;
      local_28 = param_9;
      iVar1 = FUN_006cfeb0(&local_34,&local_34,(int *)(param_1 + 0x484));
      if (iVar1 != 0) {
        iVar2 = param_6 + ((local_34 - *(int *)(param_1 + 0x10)) - param_2);
        iVar1 = param_7 + ((local_30 - *(int *)(param_1 + 0x14)) - param_3);
        local_20 = FUN_006bb8b0(param_1);
        if (local_20 == 0) {
          if (*(int *)(param_1 + 0x20) == 8) {
            if ((param_4->bmiHeader).biBitCount == 8) {
              *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x478);
              local_8 = 0;
              FUN_006b55f0((undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x474),local_34,
                           local_30,(int)param_4,(int)param_5,iVar2,iVar1,local_2c,local_28);
              local_8 = 0xffffffff;
            }
            else {
              local_8 = 1;
              FUN_006d0820(*(int *)(param_1 + 0x474),*(int *)(param_1 + 0x478),local_34,local_30,
                           (int)param_4,(int)param_5,iVar2,iVar1,local_2c,local_28,
                           *(int *)(param_1 + 0x4dc),*(HPALETTE *)(param_1 + 0x4e0));
              local_8 = 0xffffffff;
            }
          }
          else {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x478) / 2;
            local_40 = local_2c;
            local_3c = local_28;
            local_48 = iVar2;
            local_44 = iVar1;
            iVar1 = FUN_006d0680(param_1 + 0x4c,&local_34,&local_24,(int)param_4,&local_48,&local_38
                                );
            if (iVar1 != 0) {
              if ((int)local_38 < 0) {
                iVar1 = -(((local_3c - 1) + local_44) * local_38);
              }
              else {
                iVar1 = (((param_4->bmiHeader).biHeight - local_3c) - local_44) * local_38;
              }
              param_5 = (uint *)((int)param_5 + local_48 + iVar1);
              local_8 = 2;
              FUN_006d05b0((undefined4 *)
                           ((*(int *)(param_1 + 0x474) - ((local_28 - 1) + local_30) * local_24) +
                           local_34 * 2),local_24,param_5,local_38,local_2c,local_28,
                           *(int *)(param_1 + 0x4c0));
              local_8 = 0xffffffff;
            }
          }
          FUN_006bb980(param_1);
        }
        if ((local_20 == -0x7789ff60) || (local_20 == -0x7789fe52)) {
          local_20 = 0;
        }
      }
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
    }
    else {
      ExceptionList = &local_14;
      local_20 = FUN_006ce770(param_1,&local_4c);
      if (local_20 == 0) {
        FUN_006d03e0(local_4c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
        FUN_006ce8c0(param_1,local_4c);
      }
    }
    iVar1 = local_20;
    if (local_20 != 0) {
      FUN_006a5e40(local_20,DAT_007ed77c,0x7edaf0,0x84);
      ExceptionList = local_14;
      return iVar1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

