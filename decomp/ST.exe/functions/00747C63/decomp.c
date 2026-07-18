
int FUN_00747c63(int param_1,int *param_2,char *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(*(int *)(param_1 + 100) + 0x14) == 0) {
        iVar1 = FUN_00747e65((int *)(param_1 + -0xc),param_2,param_3);
        if (iVar1 < 0) {
          (**(code **)(*(int *)(param_1 + -0xc) + 0x2c))();
          LeaveCriticalSection(lpCriticalSection);
        }
        else {
          LeaveCriticalSection(lpCriticalSection);
          iVar1 = 0;
        }
      }
      else {
        LeaveCriticalSection(lpCriticalSection);
        iVar1 = -0x7ffbfddc;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
      iVar1 = -0x7ffbfdfc;
    }
  }
  return iVar1;
}

