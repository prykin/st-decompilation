
void __thiscall sub_004167A0(void *this)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (*(void **)((int)this + 0x97) != (void *)0x0) {
    ExceptionList = &local_14;
    FreeAndNull((void **)((int)this + 0x97));
    *(undefined4 *)((int)this + 0x9b) = 0;
    *(undefined4 *)((int)this + 0xd3) = 0;
    *(undefined1 *)((int)this + 0xe3) = 0;
  }
  ExceptionList = local_14;
  return;
}

