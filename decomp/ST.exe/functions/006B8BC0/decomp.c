
void FUN_006b8bc0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_4 < 0) {
      iVar1 = param_1[10];
      if (param_4 == -1) {
        iVar1 = iVar1 + 1;
      }
      if (param_1[0xb] <= iVar1) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = param_4 % param_1[0xb];
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (((param_1[2] != param_2) || (param_1[3] != param_3)) || (param_1[10] != iVar1)) {
      param_1[2] = param_2;
      param_1[3] = param_3;
      param_1[10] = iVar1;
      if ((param_1[1] & 0xa000U) == 0x8000) {
        param_1[1] = param_1[1] | 0x1000;
      }
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

