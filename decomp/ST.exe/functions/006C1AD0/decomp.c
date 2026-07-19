
int FUN_006c1ad0(uint param_1,int param_2)

{
  int iVar1;
  int exceptionCode;
  uint uVar2;
  byte *pbVar3;
  
  exceptionCode = 0;
  if (DAT_008568b4 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (param_1 == 0xff) {
      uVar2 = 0;
      pbVar3 = &DAT_00854ff8;
      do {
        if (((*pbVar3 & 1) != 0) && (iVar1 = FUN_006c19d0(param_2,uVar2), exceptionCode == 0)) {
          exceptionCode = iVar1;
        }
        pbVar3 = pbVar3 + 0xc4;
        uVar2 = uVar2 + 1;
      } while ((int)pbVar3 < 0x856878);
    }
    else if ((((int)param_1 < 0) || (0x1f < (int)param_1)) ||
            (((&DAT_00854ff8)[param_1 * 0xc4] & 1) == 0)) {
      exceptionCode = -4;
    }
    else {
      exceptionCode = FUN_006c19d0(param_2,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if ((exceptionCode != -4) && (exceptionCode != 0)) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x4d9);
    }
    return exceptionCode;
  }
  return -0x34;
}

