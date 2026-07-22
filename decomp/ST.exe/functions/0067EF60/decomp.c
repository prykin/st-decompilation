
int __cdecl FUN_0067ef60(byte *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    pcVar2 = thunk_FUN_0067eea0(param_1);
    if (pcVar2 == (char *)0x0) {
      Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a1c,(char *)param_1);
      iVar1 = Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_00848a18,&DAT_008016a0);
      pcVar2 = (char *)thunk_FUN_0067ee40(iVar1);
    }
    else {
      iVar1 = thunk_FUN_0067ed20(param_1);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    g_currentExceptionFrame = local_48.previous;
    return (int)pcVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return 0;
}

