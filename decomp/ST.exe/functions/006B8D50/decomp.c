
int FUN_006b8d50(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, (*(uint *)(iVar1 + 0xc) & 0x100) == 0)) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    if ((param_1[1] & 0x4000U) != 0) {
      if (((((param_2 < param_1[6] + param_1[4]) && (param_1[4] < param_2 + param_4)) &&
           (param_3 < param_1[7] + param_1[5])) && (param_1[5] < param_5 + param_3)) ||
         (((param_2 == 0 && (param_3 == 0)) && ((param_4 == 0 && (param_5 == 0)))))) {
        iVar1 = FUN_006b8e30(param_1);
        if (iVar1 != 0) {
          RaiseInternalException(iVar1,DAT_007ed77c,s_E__DKW_DDX_C_ddcurs_c_007edc18,0x15e);
          return iVar1;
        }
        param_1[1] = param_1[1] & 0xffffefffU | 0x2000;
      }
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return 0;
}

