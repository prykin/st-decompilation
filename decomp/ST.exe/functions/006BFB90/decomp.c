
DWORD FUN_006bfb90(HANDLE param_1,DWORD param_2,LPVOID param_3,DWORD param_4)

{
  DWORD DVar1;
  DWORD DVar2;
  BOOL BVar3;
  
  DVar1 = SetFilePointer(param_1,param_2,(PLONG)0x0,0);
  DVar2 = param_4;
  if ((DVar1 != 0xffffffff) &&
     (BVar3 = ReadFile(param_1,param_3,param_4,&param_2,(LPOVERLAPPED)0x0), BVar3 != 0)) {
    return -(uint)(param_2 != DVar2) & 0xfffffff2;
  }
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    return DVar2;
  }
  return 0xffffff03;
}

