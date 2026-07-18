
undefined4 FUN_007491c3(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
    EnterCriticalSection(lpCriticalSection);
    param_2[1] = *(undefined4 *)(param_1 + 0x34);
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    param_2[2] = *(undefined4 *)(param_1 + 0x38);
    param_2[3] = *(undefined4 *)(param_1 + 0x3c);
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}

