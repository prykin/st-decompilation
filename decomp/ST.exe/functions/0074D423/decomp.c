
void __fastcall FUN_0074d423(int param_1)

{
  HoloTy *pHVar1;
  int local_8;
  
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    local_8 = param_1;
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  local_8 = *(int *)(param_1 + 0xc);
  while (local_8 != 0) {
    pHVar1 = (HoloTy *)FUN_0074dec2(&local_8);
    Library::MSVCRT::FUN_0072e2b0(pHVar1);
  }
  FUN_0074de91((undefined4 *)(param_1 + 0xc));
  if (*(HANDLE *)(param_1 + 0x3c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x3c));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  FUN_0074de7f((undefined4 *)(param_1 + 0xc));
  return;
}

