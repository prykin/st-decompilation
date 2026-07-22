
int FUN_006b96f0(int *param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;

  iVar1 = FUN_006b2330((AnonShape_006B1B10_121F236C *)param_1,param_2,param_3,0x6b94e0,0,0,param_5);
  if (iVar1 == 0) {
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (param_4 < 1) {
      param_4 = 1;
    }
    *(int *)(*(int *)(param_1[0x6c] + *param_2 * 4) + 200) = param_4;
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return iVar1;
}

