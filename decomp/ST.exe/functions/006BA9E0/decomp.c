
int FUN_006ba9e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  BOOL BVar1;
  uint uVar2;
  int exceptionCode;
  undefined4 local_98 [20];
  undefined4 local_48;
  tagRECT local_34;
  RECT local_24;
  RECT local_14;
  
  exceptionCode = 0;
  if (((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100) && (*(int *)(param_1 + 0x40) != 0)) {
    local_98[0] = 100;
    local_48 = param_6;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x18);
    }
    if (param_5 == 0) {
      param_5 = *(int *)(param_1 + 0x1c);
    }
    local_14.left = *(int *)(param_1 + 0x10) + param_2;
    local_14.top = *(int *)(param_1 + 0x14) + param_3;
    local_14.right = local_14.left + param_4;
    local_14.bottom = local_14.top + param_5;
    local_24.right = *(LONG *)(param_1 + 0x48c);
    local_24.left = *(LONG *)(param_1 + 0x484);
    local_24.top = *(LONG *)(param_1 + 0x488);
    local_24.bottom = *(LONG *)(param_1 + 0x490);
    BVar1 = IntersectRect(&local_34,&local_14,&local_24);
    if (BVar1 != 0) {
      uVar2 = 0;
      while( true ) {
        exceptionCode =
             (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                       (*(int **)(param_1 + 0x40),&local_34,0,0,0x1000400,local_98);
        if (exceptionCode == 0) break;
        if (exceptionCode == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if (((exceptionCode != -0x7789ff60) && (exceptionCode != -0x7789fe52)) || (uVar2 != 0))
          break;
          Sleep(2);
        }
        uVar2 = uVar2 + 1;
        if (1 < uVar2) break;
      }
      if ((exceptionCode == -0x7789ff60) || (exceptionCode == -0x7789fe52)) {
        exceptionCode = 0;
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddx_c_007edc48,0x2ed);
      return exceptionCode;
    }
  }
  return 0;
}

