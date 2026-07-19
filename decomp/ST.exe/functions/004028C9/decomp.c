
int __cdecl thunk_FUN_0067ef60(byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  iVar1 = Library::MSVCRT::__setjmp3(IStack_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0067eea0(param_1);
    if (iVar1 == 0) {
      Library::DKW::TBL::FUN_006b5aa0(DAT_00848a1c,(char *)param_1);
      iVar2 = Library::DKW::TBL::FUN_006b5aa0(DAT_00848a18,&DAT_008016a0);
      iVar1 = thunk_FUN_0067ee40(iVar2);
    }
    else {
      iVar2 = thunk_FUN_0067ed20(param_1);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    g_currentExceptionFrame = IStack_48.previous;
    return iVar1;
  }
  g_currentExceptionFrame = IStack_48.previous;
  return 0;
}

