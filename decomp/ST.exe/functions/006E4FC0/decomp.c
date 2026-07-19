
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::RunApp */

WPARAM __thiscall AppClassTy::RunApp(AppClassTy *this)

{
  code *pcVar1;
  AppClassTy *pAVar2;
  WPARAM WVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  InternalExceptionFrame local_6c;
  tagMSG local_28;
  AppClassTy *local_c;
  int local_8;
  
  local_8 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_c = this;
  WVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_c;
  if (WVar3 == 0) {
    while (local_8 == 0) {
      BVar4 = PeekMessageA(&local_28,(HWND)0x0,0,0,1);
      if (BVar4 == 0) {
        if ((DAT_00856d7c == 0) || (DAT_00856d74 != 0)) {
          GetAsyncKeyState(0x13);
          if (*(int *)(pAVar2 + 0x20) == 0) {
            DVar5 = timeGetTime();
            iVar6 = (*(int *)(pAVar2 + 0x34) - DVar5) + *(int *)(pAVar2 + 0x18);
            if ((0 < iVar6) && (*(int *)(*(int *)(pAVar2 + 0x2c) + 0xc) == 0)) {
              (**(code **)(*(int *)pAVar2 + 0x10))(iVar6);
            }
            if ((-1 < iVar6) || (iVar6 <= -(*(int *)(pAVar2 + 0x34) / 2))) {
              iVar6 = 0;
            }
            DVar5 = timeGetTime();
            *(DWORD *)(pAVar2 + 0x18) = DVar5 + iVar6;
            local_28.wParam = FUN_006e4ee0((int *)pAVar2);
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
      if (*(int *)(pAVar2 + 0x1c) != 0) {
        (**(code **)(*(int *)pAVar2 + 4))();
        PostQuitMessage(0);
        *(undefined4 *)(pAVar2 + 0x1c) = 0;
        *(undefined4 *)(pAVar2 + 0x20) = 1;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return local_28.wParam;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar6 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x336,0,WVar3,&DAT_007a4ccc,
                             s_AppClassTy__RunApp_Error___007eea60);
  if (iVar6 == 0) {
    (**(code **)(*(int *)local_c + 8))();
    RaiseInternalException(WVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x338);
    return WVar3;
  }
  pcVar1 = (code *)swi(3);
  WVar3 = (*pcVar1)();
  return WVar3;
}

