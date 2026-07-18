
int FUN_006d5e50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  if (param_1 == 0xc) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  }
  EnterCriticalSection(lpCriticalSection);
  local_14 = 1;
  iVar1 = FUN_006d5df0(param_1 + -0xc,(int)&local_14);
  if (-1 < iVar1) {
    iVar1 = FUN_00749106(param_1,&local_14,param_3);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}

