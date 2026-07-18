
void FUN_006b5f80(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  param_1[0x6d] = 1;
  if (param_1[0x6e] == 0) {
    iVar1 = FUN_006d1ad0((int *)param_1[0x6f],100,param_2 + param_1[0x5b],param_3 + param_1[0x5c],
                         param_4,param_5,param_1[3],param_1[4],1);
    if (iVar1 == -1) {
      param_1[0x6e] = 1;
    }
  }
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  return;
}

