
int FUN_006b3840(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int exceptionCode;
  bool bVar3;
  int local_8;
  
  local_8 = 0;
  if (param_2 < param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x80000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    exceptionCode = 0;
    if (((param_3 != 0xfffffffe) && (uVar2 = puVar1[0x31], uVar2 != param_3)) &&
       (exceptionCode = local_8, (*puVar1 & 0x8000) != 0)) {
      if ((int)param_3 < 0) {
        bVar3 = param_3 != 0xffffffff;
        param_3 = uVar2 + 1;
        if (bVar3) {
          param_3 = uVar2;
        }
        if ((puVar1[0x32] != 0) && ((int)puVar1[0x32] <= (int)param_3)) {
          param_3 = 0;
        }
      }
      else if (puVar1[0x32] != 0) {
        param_3 = (int)param_3 % (int)puVar1[0x32];
      }
      puVar1[0x31] = param_3;
      if (((byte)*puVar1 & 0x30) == 0x20) {
        exceptionCode = FUN_006b3120(param_1,puVar1);
      }
    }
    if ((*puVar1 & 0x80000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddsinit_c_007edac0,0x75e);
      return exceptionCode;
    }
  }
  return 0;
}

