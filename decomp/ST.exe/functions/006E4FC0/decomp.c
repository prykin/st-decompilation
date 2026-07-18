
WPARAM FUN_006e4fc0(void)

{
  code *pcVar1;
  WPARAM WVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  undefined4 local_6c;
  undefined4 local_68 [16];
  tagMSG local_28;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  WVar2 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
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
    DAT_00858df8 = (undefined4 *)local_6c;
    return local_28.wParam;
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x336,0,WVar2,&DAT_007a4ccc);
  if (iVar5 == 0) {
    (**(code **)(*local_c + 8))();
    FUN_006a5e40(WVar2,0,0x7ee78c,0x338);
    return WVar2;
  }
  pcVar1 = (code *)swi(3);
  WVar2 = (*pcVar1)();
  return WVar2;
}

