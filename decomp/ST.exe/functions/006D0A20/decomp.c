
int FUN_006d0a20(uint param_1,int *param_2,int param_3,int param_4,BITMAPINFO *param_5,uint *param_6
                ,int param_7,int param_8,DWORD param_9,DWORD param_10)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_120 [3];
  undefined2 local_114;
  undefined2 local_112;
  int local_f8 [4];
  undefined4 local_e8;
  int local_d4;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30 [4];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079da90;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffed0;
  local_20 = 0;
  if (((int)param_9 < 1) || ((int)param_10 < 1)) {
    return 0;
  }
  ExceptionList = &local_14;
  puVar1 = &stack0xfffffed0;
  if (param_6 == (uint *)0x0) {
    ExceptionList = &local_14;
    param_6 = (uint *)FUN_006b4fa0((int)param_5);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if ((*(int *)(param_1 + 0x20) == 8) && ((param_5->bmiHeader).biBitCount == 8)) {
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    piVar4 = local_f8;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_f8[0] = 0x7c;
    local_f8[1] = 6;
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_2 + 100))(param_2,0,local_f8,0x21,0);
      if (iVar2 == 0) goto LAB_006d0b09;
      if (iVar2 != -0x7789fe3e) break;
      (**(code **)(*param_2 + 0x6c))(param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    if (iVar2 == 0) {
LAB_006d0b09:
      piVar4 = local_120;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      local_120[0] = 0x28;
      local_120[1] = local_e8;
      local_120[2] = -local_f8[2];
      local_114 = 1;
      local_112 = 8;
      local_8 = 0;
      FUN_006b55f0(local_120,local_d4,param_3,param_4,(int)param_5,(int)param_6,param_7,param_8,
                   param_9,param_10);
      local_8 = 0xffffffff;
      (**(code **)(*param_2 + 0x80))(param_2,0);
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      ExceptionList = local_14;
      return iVar2;
    }
  }
  else {
    local_74 = DAT_00858df8;
    DAT_00858df8 = &local_74;
    iVar2 = __setjmp3(local_70,2,FUN_0072da21,local_8);
    local_1c = &stack0xfffffed0;
    puVar1 = &stack0xfffffed0;
    if (iVar2 == 0) {
      FUN_006c4630(param_1,param_2,local_30);
      FUN_006b42d0(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      iVar2 = local_20;
      puVar1 = local_1c;
    }
    local_1c = puVar1;
    local_20 = iVar2;
    iVar2 = local_20;
    DAT_00858df8 = (undefined4 *)local_74;
    FUN_006c44e0(param_1,local_30);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee1cc,0x1f);
    }
  }
  ExceptionList = local_14;
  return iVar2;
}

