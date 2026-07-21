
int FUN_006d5e50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG local_14;
  LONG local_10;
  LONG local_c;
  HANDLE local_8;

  local_14 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = (HANDLE)param_2[3];
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  local_14 = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
  iVar1 = FUN_006d5df0(param_1 + -0xc,(AnonShape_006D5DF0_C24DE923 *)&local_14);
  if (-1 < iVar1) {
    iVar1 = FUN_00749106((AnonShape_00749106_79800343 *)param_1,(LPCRITICAL_SECTION)&local_14,
                         param_3);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

