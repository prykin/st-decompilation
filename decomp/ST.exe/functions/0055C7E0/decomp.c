
void __thiscall FUN_0055c7e0(void *this,undefined4 param_1)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (DAT_0081174c != (undefined4 *)0x0)) {
    *(undefined4 *)((int)this + 0x1b) = 0x6155;
    *(undefined4 *)((int)this + 0x1f) = param_1;
    (**(code **)*DAT_0081174c)((int)this + 0xb);
  }
  return;
}

