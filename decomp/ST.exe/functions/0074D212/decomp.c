
bool __thiscall FUN_0074d212(void *this,uint param_1)

{
  DWORD DVar1;
  tagMSG local_2c;
  DWORD local_10;
  HANDLE *local_c;
  DWORD local_8;

  DVar1 = param_1;
  local_c = this;
  if (param_1 != 0xffffffff) {
    local_10 = timeGetTime();
  }
  do {
    local_8 = MsgWaitForMultipleObjects(1,local_c,0,DVar1,0x40);
    if ((local_8 == 1) && (PeekMessageA(&local_2c,(HWND)0x0,0,0,0), DVar1 != 0xffffffff)) {
      DVar1 = timeGetTime();
      DVar1 = -(uint)(DVar1 - local_10 < param_1) & param_1 - (DVar1 - local_10);
    }
  } while (local_8 == 1);
  return local_8 == 0;
}

