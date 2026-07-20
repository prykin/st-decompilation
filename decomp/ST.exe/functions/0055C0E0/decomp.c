
void __thiscall
FUN_0055c0e0(void *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
            undefined4 *param_5)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffbc;
  
  pIVar2 = g_currentExceptionFrame;
  if (((*(char *)((int)this + 9) == '\0') && (g_fSGS_0081174C != (FSGSTy *)0x0)) &&
     (param_5 != (undefined4 *)0x0)) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
    iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar2,in_stack_ffffffbc);
    if (iVar1 == 0) {
      FSGSTy::SetBanner(g_fSGS_0081174C,param_1,param_2,param_3,param_4,param_5);
      g_currentExceptionFrame = pIVar2;
      return;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

