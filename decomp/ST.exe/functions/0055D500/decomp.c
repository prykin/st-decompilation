
void __thiscall
FUN_0055d500(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  *(undefined4 *)((int)this + 0x6b8) = param_2;
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (g_fSGS_0081174C != (FSGSTy *)0x0)) {
    FSGSTy::SetLadder(g_fSGS_0081174C,param_1,param_2,param_3,param_4);
  }
  return;
}

