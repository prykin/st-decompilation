
void __thiscall FUN_0055d440(void *this,int param_1,undefined4 *param_2)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (DAT_0081174c != (FSGSTy *)0x0)) {
    FSGSTy::SetChannelList(DAT_0081174c,param_1,param_2);
  }
  return;
}

