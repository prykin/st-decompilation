
undefined4 FUN_007494d1(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  _SYSTEM_INFO local_28;
  
  iVar2 = param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
    EnterCriticalSection(lpCriticalSection);
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    GetSystemInfo(&local_28);
    iVar1 = param_2[2];
    if ((iVar1 == 0) || ((local_28.dwAllocationGranularity & iVar1 - 1U) != 0)) {
      LeaveCriticalSection(lpCriticalSection);
      uVar3 = 0x8004020e;
    }
    else if (*(int *)(param_1 + 0x44) == 1) {
      LeaveCriticalSection(lpCriticalSection);
      uVar3 = 0x8004020f;
    }
    else if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
      LeaveCriticalSection(lpCriticalSection);
      uVar3 = 0x80040210;
    }
    else {
      param_1 = param_2[1] + param_2[3];
      if (param_1 % iVar1 != 0) {
        param_1 = param_1 + (iVar1 - param_1 % iVar1);
      }
      iVar1 = param_2[3];
      *(int *)(iVar2 + 0x34) = param_1 - iVar1;
      param_3[1] = param_1 - iVar1;
      uVar3 = *param_2;
      *(undefined4 *)(iVar2 + 0x2c) = uVar3;
      *param_3 = uVar3;
      uVar3 = param_2[2];
      *(undefined4 *)(iVar2 + 0x38) = uVar3;
      param_3[2] = uVar3;
      uVar3 = param_2[3];
      *(undefined4 *)(iVar2 + 0x3c) = uVar3;
      param_3[3] = uVar3;
      *(undefined4 *)(iVar2 + 0x40) = 1;
      LeaveCriticalSection(lpCriticalSection);
      uVar3 = 0;
    }
  }
  return uVar3;
}

