
undefined4 FUN_006c3720(WPARAM param_1)

{
  uint uVar1;
  WPARAM WVar2;
  LPARAM lParam;
  DWORD DVar3;
  int iVar4;
  undefined1 local_c [4];
  LPARAM local_8;
  
  WVar2 = param_1;
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x74),0xffffffff);
  while (DVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
    iVar4 = (**(code **)(**(int **)(WVar2 + 0x58) + 0x20))
                      (*(int **)(WVar2 + 0x58),&param_1,&local_8,local_c,0);
    lParam = local_8;
    if (iVar4 == 0) {
      uVar1 = *(uint *)(WVar2 + 4);
      if (((int)param_1 < 1) || (3 < (int)param_1)) {
        param_1 = 0;
      }
      else {
        FUN_006c4110(WVar2);
        if ((param_1 != 0) && ((uVar1 & 0x20000000) != 0)) {
          PostMessageA(*(HWND *)(WVar2 + 0x78),*(UINT *)(WVar2 + 0x80),param_1,lParam);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
    DVar3 = WaitForSingleObject(*(HANDLE *)(WVar2 + 0x74),0xffffffff);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
  *(undefined4 *)(WVar2 + 0x84) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
  return 0;
}

