
int FUN_006b8a60(byte *param_1)

{
  int iVar1;
  int exceptionCode;
  int local_14 [4];
  
  exceptionCode = 0;
  if ((param_1 != (byte *)0x0) && (iVar1 = *(int *)param_1, (*(uint *)(iVar1 + 0xc) & 0x100) == 0))
  {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
      exceptionCode = FUN_006b8f10(param_1,local_14);
      if (exceptionCode == 0) {
        exceptionCode = FUN_006b92b0((int *)param_1,local_14);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffdfff | 0x8000;
      }
    }
    if ((*(uint *)(*(int *)param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)param_1 + 0x4f0));
    }
    if (exceptionCode != 0) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcurs_c_007edc18,0xd3);
      return exceptionCode;
    }
  }
  return 0;
}

