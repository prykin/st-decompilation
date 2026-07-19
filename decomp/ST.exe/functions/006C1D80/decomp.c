
int FUN_006c1d80(int param_1,undefined4 param_2)

{
  int *piVar1;
  int exceptionCode;
  
  exceptionCode = 0;
  if (DAT_008568b4 == 0) {
    return -0x34;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (((param_1 < 0) || (0x1f < param_1)) || (((&DAT_00854ff8)[param_1 * 0xc4] & 1) == 0)) {
    exceptionCode = -4;
  }
  else {
    piVar1 = (int *)(&DAT_00855004)[param_1 * 0x31];
    if (piVar1 != (int *)0x0) {
      exceptionCode = (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
    }
    *(undefined4 *)(&DAT_0085502c + param_1 * 0xc4) = param_2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if ((exceptionCode != -4) && (exceptionCode != 0)) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x538);
  }
  return exceptionCode;
}

