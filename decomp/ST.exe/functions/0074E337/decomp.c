
uint FUN_0074e337(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  
  if (param_5 == (int *)0x0) {
    return 0x80004003;
  }
  *param_5 = 0;
  if (param_3 != (int *)0x0) {
    return 0x8002802b;
  }
  if (*param_1 == 0) {
    hModule = (HMODULE)FUN_0074b79e();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"LoadRegTypeLib"), pFVar1 == (FARPROC)0x0)) {
LAB_0074e3ab:
      DVar3 = GetLastError();
      return -(uint)(DVar3 != 0) & (DVar3 & 0xffff | 0x80070000);
    }
    iVar2 = (*pFVar1)(&DAT_007a1db8,1,0,param_4,&param_3);
    if (iVar2 < 0) {
      pFVar1 = GetProcAddress(hModule,"LoadTypeLib");
      if (pFVar1 == (FARPROC)0x0) goto LAB_0074e3ab;
      uVar4 = (*pFVar1)(L"control.tlb",&param_3);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
    }
    uVar4 = (**(code **)(*param_3 + 0x18))(param_3,param_2,param_1);
    (**(code **)(*param_3 + 8))(param_3);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  *param_5 = *param_1;
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1);
  return 0;
}

