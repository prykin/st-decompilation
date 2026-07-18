
DWORD FUN_006c3630(LPVOID param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  LPVOID lpParameter;
  DWORD DVar3;
  HANDLE pvVar4;
  
  lpParameter = param_1;
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    FUN_006c3570((int)param_1);
  }
  DVar3 = CoCreateInstance((IID *)&DAT_007a10e8,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a10f8,
                           (LPVOID *)((int)lpParameter + 0x54));
  if (-1 < (int)DVar3) {
    puVar1 = *(LPVOID *)((int)lpParameter + 0x54);
    DVar3 = (**(code **)*puVar1)(puVar1,&DAT_007a10d8,(undefined4 *)((int)lpParameter + 0x58));
    if (DVar3 == 0) {
      piVar2 = *(int **)((int)lpParameter + 0x58);
      DVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,(int)lpParameter + 0x74);
      if (-1 < (int)DVar3) {
        DVar3 = FUN_006d4ef0((undefined4 *)((int)lpParameter + 0x40),(int)lpParameter + 0x48,
                             (int)lpParameter);
        if (DVar3 == 0) {
          DVar3 = FUN_006d4f70((undefined4 *)((int)lpParameter + 0x44),(int)lpParameter + 0x4c,
                               lpParameter);
          if (DVar3 == 0) {
            pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_006c3720,lpParameter,0,
                                  (LPDWORD)&param_1);
            *(HANDLE *)((int)lpParameter + 0x84) = pvVar4;
            if (pvVar4 != (HANDLE)0x0) {
              *(uint *)((int)lpParameter + 4) = *(uint *)((int)lpParameter + 4) | 0x80000000;
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

