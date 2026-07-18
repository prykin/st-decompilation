
int FUN_00749f88(int *param_1,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar3 = param_1[2];
  if (iVar3 != 2) {
    if (*(int *)(param_1[0x1b] + 0x18) != 0) {
      SetEvent((HANDLE)param_1[0x14]);
      iVar2 = FUN_00747161(param_1,param_2,param_3);
      if (iVar2 < 0) {
        LeaveCriticalSection(lpCriticalSection);
        return iVar2;
      }
      this = param_1 + -3;
      (**(code **)(param_1[-3] + 0x28))(1);
      FUN_0074a81d(this,0);
      piVar1 = *(int **)(param_1[0x1b] + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(piVar1);
      }
      if (iVar3 == 0) {
        param_1[0x15] = 0;
        (**(code **)(*this + 0x70))();
      }
      iVar3 = (**(code **)(*this + 0x7c))();
      LeaveCriticalSection(lpCriticalSection);
      return iVar3;
    }
    FUN_00747406(param_1 + -3,1,0,-(uint)(param_1 + -3 != (int *)0x0) & (uint)param_1);
    param_1[2] = 2;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

