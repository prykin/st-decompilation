
void FUN_0042a860(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *unaff_ESI;
  undefined4 in_stack_fffffbb8;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_ESI,in_stack_fffffbb8);
  if (iVar1 == 0) {
    puVar2 = &stack0xfffffbb9;
    iVar1 = 0x100;
    puVar3 = (undefined1 *)(DAT_00806750 + 0xe);
    do {
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar1 != 0);
    FUN_006b08f0(DAT_0080759c,(int)&stack0xfffffbb8,0,0x100);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  RaiseInternalException(iVar1,0,s_E____titans_tload_cpp_007a5fdc,0x536);
  return;
}

