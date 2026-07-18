
int FUN_00747161(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  EnterCriticalSection(lpCriticalSection);
  param_1[5] = param_2;
  param_1[6] = param_3;
  if ((param_1[2] == 0) && (iVar3 = (**(code **)(*param_1 + 0x14))(param_1), iVar3 < 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return iVar3;
  }
  if (param_1[2] != 2) {
    piVar1 = param_1 + -3;
    iVar3 = (**(code **)(param_1[-3] + 0x18))();
    param_1 = (int *)0x0;
    if (0 < iVar3) {
      do {
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1);
        if ((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x1c))(param_2,param_3), iVar5 < 0))
        {
          LeaveCriticalSection(lpCriticalSection);
          return iVar5;
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < iVar3);
    }
  }
  piVar2[2] = 2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

