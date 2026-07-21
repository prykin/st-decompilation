
void __thiscall FUN_0055c290(void *this,char *param_1)

{
  ulong uVar1;
  DWORD lastError;

  if (param_1 != (char *)0x0) {
    uVar1 = CFsgsConnection::InitConnection(this,param_1);
    if (uVar1 == 1) {
      *(undefined1 *)((int)this + 8) = 1;
      return;
    }
  }
  lastError = GetLastError();
  thunk_FUN_0055beb0(this,lastError);
  return;
}

