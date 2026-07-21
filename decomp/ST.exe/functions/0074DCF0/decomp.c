
DWORD FUN_0074dcf0(undefined4 param_1,DWORD param_2,HWND param_3,UINT param_4)

{
  bool bVar1;
  HWND hWnd;
  DWORD DVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE pvVar5;
  bool bVar6;
  UINT UVar7;
  WPARAM wParam;
  int nPriority;
  LPARAM lParam;
  DWORD local_24;
  uint local_20;
  tagMSG local_1c;

  bVar1 = false;
  if ((param_2 != 0xffffffff) && (param_2 != 0)) {
    local_24 = GetTickCount();
  }
  bVar6 = param_3 != (HWND)0x0;
  while( true ) {
    DVar4 = param_2;
    if (10 < param_2) {
      DVar4 = 10;
    }
    DVar2 = MsgWaitForMultipleObjects(1,(HANDLE *)&param_1,0,DVar4,(-(uint)bVar6 & 8) + 0x40);
    UVar7 = param_4;
    hWnd = param_3;
    if ((DVar2 != 1) && ((DVar2 != 0x102 || (DVar4 == param_2)))) break;
    if (param_3 != (HWND)0x0) {
      while (BVar3 = PeekMessageA(&local_1c,hWnd,UVar7,UVar7,1), BVar3 != 0) {
        DispatchMessageA(&local_1c);
      }
    }
    PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
    if ((param_2 != 0xffffffff) && (param_2 != 0)) {
      DVar4 = GetTickCount();
      if (param_2 < DVar4 - local_24) {
        param_2 = 0;
        local_24 = DVar4;
      }
      else {
        param_2 = param_2 - (DVar4 - local_24);
        local_24 = DVar4;
      }
    }
    if (!bVar1) {
      pvVar5 = GetCurrentThread();
      local_20 = GetThreadPriority(pvVar5);
      if (local_20 < 2) {
        nPriority = 2;
        pvVar5 = GetCurrentThread();
        SetThreadPriority(pvVar5,nPriority);
      }
      bVar1 = true;
    }
  }
  if (bVar1) {
    pvVar5 = GetCurrentThread();
    SetThreadPriority(pvVar5,local_20);
    DVar4 = GetQueueStatus(8);
    if ((DVar4 >> 0x10 & 8) != 0) {
      lParam = 0;
      wParam = 0;
      UVar7 = 0;
      DVar4 = GetCurrentThreadId();
      PostThreadMessageA(DVar4,UVar7,wParam,lParam);
    }
  }
  return DVar2;
}

