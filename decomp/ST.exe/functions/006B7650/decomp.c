
int FUN_006b7650(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int exceptionCode;
  undefined4 uVar1;
  
  if (((param_1[1] & 1) == 0) || (param_2 != 1)) {
    uVar1 = 0;
    if (((param_1[1] & 2) != 0) && ((param_1[10] != 1 && (param_1[10] != 3)))) {
      uVar1 = 1;
    }
    exceptionCode =
         (**(code **)(*(int *)*param_1 + 0x68))
                   ((int *)*param_1,param_1[0xe],param_2,uVar1,param_3,param_4);
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x499);
      return exceptionCode;
    }
  }
  return 0;
}

