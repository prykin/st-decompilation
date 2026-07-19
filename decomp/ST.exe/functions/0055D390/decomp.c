
void __thiscall FUN_0055d390(void *this,char *param_1,char *param_2,ulong param_3)

{
  CFsgsConnection::JoinChannel(this,param_1,param_2,param_3);
  Library::MSVCRT::_strncpy((char *)((int)this + 0x648),param_1,0x3f);
  *(undefined1 *)((int)this + 0x687) = 0;
  Library::MSVCRT::_strncpy((char *)((int)this + 0x688),param_2,0x1f);
  *(ulong *)((int)this + 0x6a8) = param_3;
  *(undefined1 *)((int)this + 0x6a7) = 0;
  return;
}

