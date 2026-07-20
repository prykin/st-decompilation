
int FUN_00747c63(AnonShape_00747C63_5B932397 *param_1,int *param_2,char *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    lpCriticalSection = param_1->field_005C;
    EnterCriticalSection(lpCriticalSection);
    if (param_1->field_000C == 0) {
      if (*(int *)(param_1->field_0064 + 0x14) == 0) {
        iVar1 = FUN_00747e65(&param_1[-1].field_005C,param_2,param_3);
        if (iVar1 < 0) {
          (*(code *)param_1[-1].field_005C[1].SpinCount)();
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

