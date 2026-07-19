
DWORD FUN_0072aca0(int *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  DWORD extraout_EAX;
  HANDLE pvVar1;
  DWORD DVar2;
  
  DAT_00857134 = param_1;
  if (param_1 == (int *)0x0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Ddsprcur_cpp_007f1084,0x4e);
    return extraout_EAX;
  }
  if (((0 < param_3) && (0 < param_4)) && (param_5 != 0)) {
    DAT_00857128 = param_5;
    DAT_00857130 = param_3;
    DAT_0085711c = param_4;
    if (DAT_0085713c != (HANDLE)0x0) {
      FUN_0072afc0();
    }
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)(*DAT_00857134 + 0x508) = pvVar1;
    if (*(int *)(*DAT_00857134 + 0x508) == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0) {
        DVar2 = 0xffffff03;
      }
      RaiseInternalException(DVar2,DAT_007ed77c,s_E__ourlib_Ddsprcur_cpp_007f1084,0x5d);
      return DVar2;
    }
    DAT_0085713c = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0072ae80,(LPVOID)0x0,0,
                                (LPDWORD)&param_1);
    if (DAT_0085713c == (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(*DAT_00857134 + 0x508));
      DVar2 = GetLastError();
      if (DVar2 == 0) {
        DVar2 = 0xffffff03;
      }
      RaiseInternalException(DVar2,DAT_007ed77c,s_E__ourlib_Ddsprcur_cpp_007f1084,99);
      return DVar2;
    }
    SetThreadPriority(DAT_0085713c,2);
    FUN_006b21e0((uint)DAT_00857134,&DAT_007f1080,0,0,(int *)0x0,0x8000000,0xffffffff,0xffffffff,0);
    FUN_006b1bd0((int)DAT_00857134,DAT_007f1080);
    DAT_00857118 = *(uint **)(DAT_00857134[0x6c] + DAT_007f1080 * 4);
    *DAT_00857118 = *DAT_00857118 | 0x80000;
    *param_2 = DAT_007f1080;
    return 0;
  }
  FUN_006b21e0((uint)param_1,&DAT_007f1080,0,0,(int *)0x0,0x8000000,0xffffffff,0xffffffff,0);
  FUN_006b1bd0((int)DAT_00857134,DAT_007f1080);
  *param_2 = DAT_007f1080;
  return 0;
}

