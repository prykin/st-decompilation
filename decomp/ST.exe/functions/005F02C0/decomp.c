
void __thiscall FUN_005f02c0(void *this,int param_1,undefined1 *param_2)

{
  if (((param_2 != (undefined1 *)0x0) && (param_1 == 0x15)) &&
     (*(char *)((int)this + 0x24f) == '\0')) {
    *(undefined1 *)((int)this + 0x325) = *param_2;
    *(undefined1 *)((int)this + 800) = 1;
    *(undefined4 *)((int)this + 0x321) = 0x15;
  }
  return;
}

