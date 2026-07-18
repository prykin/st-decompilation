
void __thiscall thunk_FUN_0055beb0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = CFsgsConnection::IsInitialized(this);
  if (((iVar1 != 0) && (*(undefined1 *)((int)this + 8) = 0, *(char *)((int)this + 9) == '\0')) &&
     (DAT_0081174c != (undefined4 *)0x0)) {
    *(undefined4 *)((int)this + 0x1b) = 0x614f;
    *(undefined4 *)((int)this + 0x1f) = param_1;
    (**(code **)*DAT_0081174c)((int)this + 0xb);
  }
  return;
}

