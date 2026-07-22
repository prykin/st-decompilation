
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00597120 -> 0055D390 @ 0059778F */

void __thiscall FUN_0055d390(void *this,char *resourceString,char *param_2,ulong param_3)

{
  CFsgsConnection::JoinChannel(this,resourceString,param_2,param_3);
  Library::MSVCRT::_strncpy((char *)((int)this + 0x648),resourceString,0x3f);
  *(undefined1 *)((int)this + 0x687) = 0;
  Library::MSVCRT::_strncpy((char *)((int)this + 0x688),param_2,0x1f);
  *(ulong *)((int)this + 0x6a8) = param_3;
  *(undefined1 *)((int)this + 0x6a7) = 0;
  return;
}

