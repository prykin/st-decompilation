
void __thiscall FUN_0055d480(void *this,int param_1)

{
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    FSGSTy::CreateGame(g_fSGS_0081174C,param_1);
  }
  return;
}

