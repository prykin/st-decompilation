
undefined4 FUN_007480a5(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(*(int *)(param_1 + 100) + 0x14) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 1;
    }
    else {
      (**(code **)(*(int *)(param_1 + -0xc) + 0x2c))();
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80040224;
  }
  return uVar1;
}

