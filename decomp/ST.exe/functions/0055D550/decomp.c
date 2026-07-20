
void __thiscall FUN_0055d550(void *this,byte *param_1,uint param_2,byte *param_3)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    FSGSTy::SetInfo(g_fSGS_0081174C,param_1,param_2,param_3);
  }
  return;
}

