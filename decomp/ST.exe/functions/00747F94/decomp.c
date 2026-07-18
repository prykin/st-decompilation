
int * FUN_00747f94(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    param_2 = (int *)0x80004003;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(*(int *)(param_1 + 100) + 0x14) == 0) {
        piVar1 = (int *)(param_1 + -0xc);
        piVar2 = (int *)(**(code **)(*(int *)(param_1 + -0xc) + 0x28))(param_2);
        if ((int)piVar2 < 0) {
          (**(code **)(*piVar1 + 0x2c))();
          param_2 = piVar2;
        }
        else {
          piVar2 = (int *)(**(code **)(*piVar1 + 0x20))(param_3);
          if (piVar2 == (int *)0x0) {
            *(int **)(param_1 + 0xc) = param_2;
            (**(code **)(*param_2 + 4))(param_2);
            (**(code **)(*piVar1 + 0x24))(param_3);
            piVar2 = (int *)(**(code **)(*piVar1 + 0x30))(param_2);
            if ((int)piVar2 < 0) {
              (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
              *(undefined4 *)(param_1 + 0xc) = 0;
              (**(code **)(*piVar1 + 0x2c))();
              LeaveCriticalSection(lpCriticalSection);
              return piVar2;
            }
            LeaveCriticalSection(lpCriticalSection);
            return (int *)0x0;
          }
          (**(code **)(*piVar1 + 0x2c))();
          if (((-1 < (int)piVar2) || (piVar2 == (int *)0x80004005)) ||
             (param_2 = piVar2, piVar2 == (int *)0x80070057)) {
            param_2 = (int *)0x8004022a;
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      else {
        LeaveCriticalSection(lpCriticalSection);
        param_2 = (int *)0x80040224;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
      param_2 = (int *)0x80040204;
    }
  }
  return param_2;
}

