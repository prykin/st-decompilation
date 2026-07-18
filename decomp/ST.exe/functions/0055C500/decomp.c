
void __thiscall FUN_0055c500(void *this,int param_1)

{
  *(undefined1 *)((int)this + 8) = 0;
  if (((*(char *)((int)this + 9) == '\0') && (param_1 != 0)) && (DAT_0081174c != (undefined4 *)0x0))
  {
    *(undefined4 *)((int)this + 0x1b) = 0x6150;
    *(int *)((int)this + 0x1f) = param_1;
    (**(code **)*DAT_0081174c)((int)this + 0xb);
  }
  return;
}

