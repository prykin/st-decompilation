
void __thiscall FUN_004d6d50(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = *(undefined4 *)((int)this + 0x259);
  iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)(param_1 + 2) = (char)iVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),(char *)((int)this + 0x271),0xe);
  return;
}

