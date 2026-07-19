
WPARAM FUN_006e4fc0(void)

{
  code *pcVar1;
  WPARAM WVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_6c;
  tagMSG local_28;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  WVar2 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (WVar2 == 0) {
    while (local_8 == 0) {
      BVar3 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
      if (BVar3 == 0) {
        if ((DAT_00856d7c == 0) || (DAT_00856d74 != 0)) {
          GetAsyncKeyState(0x13);
          if (local_c[8] == 0) {
            DVar4 = timeGetTime();
            iVar5 = (local_c[0xd] - DVar4) + local_c[6];
            if ((0 < iVar5) && (*(int *)(local_c[0xb] + 0xc) == 0)) {
              (**(code **)(*local_c + 0x10))(iVar5);
            }
            if ((-1 < iVar5) || (iVar5 <= -(local_c[0xd] / 2))) {
              iVar5 = 0;
            }
            DVar4 = timeGetTime();
            local_c[6] = DVar4 + iVar5;
            local_28.wParam = FUN_006e4ee0(local_c);
          }
        }
        else {
          WaitMessage();
        }
      }
      else {
        if (local_28.message == 0x12) {
          local_8 = 1;
        }
        TranslateMessage(&local_28);
        DispatchMessageA(&local_28);
      }
      if (local_c[7] != 0) {
        (**(code **)(*local_c + 4))();
        PostQuitMessage(0);
        local_c[7] = 0;
        local_c[8] = 1;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return local_28.wParam;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x336,0,WVar2,&DAT_007a4ccc,
                             s_AppClassTy__RunApp_Error___007eea60);
  if (iVar5 == 0) {
    (**(code **)(*local_c + 8))();
    RaiseInternalException(WVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x338);
    return WVar2;
  }
  pcVar1 = (code *)swi(3);
  WVar2 = (*pcVar1)();
  return WVar2;
}

