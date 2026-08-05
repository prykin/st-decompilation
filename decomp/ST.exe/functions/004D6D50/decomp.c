
void __thiscall FUN_004d6d50(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = *(undefined4 *)((int)this + 0x259);
  bVar1 = LookupRecordByte(*(char *)((int)this + 0x24));
  *(byte *)(param_1 + 2) = bVar1;
  Library::MSVCRT::_strncpy((char *)((int)param_1 + 9),(char *)((int)this + 0x271),0xe);
  return;
}

