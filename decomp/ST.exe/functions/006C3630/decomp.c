
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C3630 -> EXTERNAL:00000011 @ 006C36CB */

DWORD FUN_006c3630(LPDWORD lpThreadId)

{
  undefined4 *puVar1;
  int *piVar2;
  LPDWORD lpParameter;
  DWORD DVar3;
  HANDLE pvVar4;
  
  lpParameter = lpThreadId;
  if ((lpThreadId[1] & 0x80000000) != 0) {
    FUN_006c3570((int)lpThreadId);
  }
  DVar3 = CoCreateInstance((IID *)&DAT_007a10e8,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a10f8,
                           (LPVOID *)(lpParameter + 0x15));
  if (-1 < (int)DVar3) {
    puVar1 = (undefined4 *)lpParameter[0x15];
    DVar3 = (**(code **)*puVar1)(puVar1,&DAT_007a10d8,lpParameter + 0x16);
    if (DVar3 == 0) {
      piVar2 = (int *)lpParameter[0x16];
      DVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,lpParameter + 0x1d);
      if (-1 < (int)DVar3) {
        DVar3 = FUN_006d4ef0(lpParameter + 0x10,lpParameter + 0x12,(int)lpParameter);
        if (DVar3 == 0) {
          DVar3 = FUN_006d4f70(lpParameter + 0x11,lpParameter + 0x13,lpParameter);
          if (DVar3 == 0) {
            pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_006c3720,lpParameter,0,
                                  (LPDWORD)&lpThreadId);
            lpParameter[0x21] = (DWORD)pvVar4;
            if (pvVar4 != (HANDLE)0x0) {
              lpParameter[1] = lpParameter[1] | 0x80000000;
              return 0;
            }
            DVar3 = GetLastError();
            if (DVar3 == 0) {
              FUN_006c3570((int)lpParameter);
              return 0xffffff03;
            }
          }
        }
      }
    }
  }
  FUN_006c3570((int)lpParameter);
  return DVar3;
}

