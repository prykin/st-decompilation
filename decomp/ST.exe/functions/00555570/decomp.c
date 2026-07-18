
void __fastcall FUN_00555570(int param_1)

{
  int iVar1;
  tagMSG local_20;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = PeekMessageA(&local_20,DAT_00806748,0,0,1);
    while (iVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
      iVar1 = PeekMessageA(&local_20,DAT_00806748,0,0,1);
    }
  }
  return;
}

