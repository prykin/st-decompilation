
void __thiscall
FUN_0055d500(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  *(undefined4 *)((int)this + 0x6b8) = param_2;
  if (((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 9) == '\0')) &&
     (DAT_0081174c != (void *)0x0)) {
    thunk_FUN_005a40f0(DAT_0081174c,param_1,param_2,param_3,param_4);
  }
  return;
}

