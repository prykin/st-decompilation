
int FUN_006c43b0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int exceptionCode;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((*(uint *)(param_1 + 0xc) & 0x1100) != 0x100) {
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    local_80 = 0x7c;
    local_7c = 6;
    exceptionCode = (**(code **)(*param_6 + 0x58))(param_6,&local_80);
    if (exceptionCode == 0) {
      exceptionCode =
           FUN_006bb9d0(param_1,*(int *)(param_1 + 0x10) + param_2,
                        *(int *)(param_1 + 0x14) + param_3,param_4,param_5,param_6,local_74,local_78
                        ,0);
    }
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcreats_c_007edef4,0x23);
      return exceptionCode;
    }
  }
  return 0;
}

