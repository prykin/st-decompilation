
int FUN_006b3730(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int exceptionCode;
  bool bVar2;
  
  if (param_1[0x68] <= param_2) {
    return 0;
  }
  puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
  if ((*puVar1 & 0x80000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if (((((puVar1[6] != param_4) || (puVar1[7] != param_5)) || ((*puVar1 & 0x10) != 0)) ||
      ((param_3 != 0xfffffffe && (puVar1[0x31] != param_3)))) && ((*puVar1 & 0x8000) != 0)) {
    puVar1[6] = param_4;
    puVar1[7] = param_5;
    if ((int)param_3 < 0) {
      bVar2 = param_3 == 0xffffffff;
      param_3 = puVar1[0x31];
      if (bVar2) {
        param_3 = param_3 + 1;
      }
      if ((puVar1[0x32] != 0) && ((int)puVar1[0x32] <= (int)param_3)) {
        param_3 = 0;
      }
    }
    else if (puVar1[0x32] != 0) {
      param_3 = (int)param_3 % (int)puVar1[0x32];
    }
    puVar1[0x31] = param_3;
    if ((*puVar1 & 0x30) != 0) {
      exceptionCode = FUN_006b3120(param_1,puVar1);
      *puVar1 = *puVar1 & 0xffffffef;
      goto LAB_006b37f9;
    }
  }
  exceptionCode = 0;
LAB_006b37f9:
  if ((*puVar1 & 0x80000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if (exceptionCode == 0) {
    return 0;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x72c);
  return exceptionCode;
}

