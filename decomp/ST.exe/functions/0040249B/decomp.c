
void __fastcall thunk_FUN_00555570(int param_1)

{
  int iVar1;
  tagMSG tStack_20;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = PeekMessageA(&tStack_20,DAT_00806748,0,0,1);
    while (iVar1 != 0) {
      TranslateMessage(&tStack_20);
      DispatchMessageA(&tStack_20);
      iVar1 = PeekMessageA(&tStack_20,DAT_00806748,0,0,1);
    }
  }
  return;
}

