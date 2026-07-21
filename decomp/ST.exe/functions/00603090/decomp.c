
void __thiscall FUN_00603090(void *this,int param_1)

{
  short sVar1;

  if ((*(int *)((int)this + 0x36e) == 0) && (param_1 != 0)) {
    sVar1 = *(short *)(DAT_00806724 + 0x23);
    *(undefined1 *)((int)this + 0x39f) = 0xff;
    *(int *)((int)this + 0x397) = sVar1 + -1;
    *(undefined4 *)((int)this + 0x36e) = 2;
  }
  if ((*(int *)((int)this + 0x36e) == 1) && (param_1 == 0)) {
    *(undefined4 *)((int)this + 0x397) = 0;
    *(undefined1 *)((int)this + 0x39f) = 1;
    *(undefined4 *)((int)this + 0x36e) = 2;
  }
  return;
}

