
void FUN_005531f0(void)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffbc;
  
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffbc,0,pIVar2,in_stack_ffffffbc);
  if (iVar1 == 0) {
    if (PTR_00802a4c == (AnonShape_GLOBAL_00802A4C_E3045C67 *)0x0) {
      PTR_00802a4c = (AnonShape_GLOBAL_00802A4C_E3045C67 *)
                     Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,6,10);
    }
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

