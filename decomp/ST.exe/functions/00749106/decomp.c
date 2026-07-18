
undefined4 FUN_00749106(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0x80004003;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
    EnterCriticalSection(lpCriticalSection);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    if (param_2[2] == 1) {
      if (*(int *)(param_1 + 0x44) == 0) {
        if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x20)) {
          uVar1 = param_2[1];
          *(undefined4 *)(param_1 + 0x34) = uVar1;
          param_3[1] = uVar1;
          uVar1 = *param_2;
          *(undefined4 *)(param_1 + 0x2c) = uVar1;
          *param_3 = uVar1;
          uVar1 = param_2[2];
          *(undefined4 *)(param_1 + 0x38) = uVar1;
          param_3[2] = uVar1;
          uVar1 = param_2[3];
          *(undefined4 *)(param_1 + 0x3c) = uVar1;
          param_3[3] = uVar1;
          *(undefined4 *)(param_1 + 0x40) = 1;
          LeaveCriticalSection(lpCriticalSection);
          uVar1 = 0;
        }
        else {
          LeaveCriticalSection(lpCriticalSection);
          uVar1 = 0x80040210;
        }
      }
      else {
        LeaveCriticalSection(lpCriticalSection);
        uVar1 = 0x8004020f;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0x8004020e;
    }
  }
  return uVar1;
}

