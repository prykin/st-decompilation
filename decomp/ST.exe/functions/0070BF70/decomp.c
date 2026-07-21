
int __cdecl
FUN_0070bf70(byte *param_1,int param_2,int param_3,int param_4,int param_5,byte param_6,uint param_7
            )

{
  int iVar1;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    iVar1 = Library::Ourlib::MFIMG::imgGetSprFromFile
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    g_currentExceptionFrame = local_48.previous;
    return iVar1;
  }
  g_currentExceptionFrame = local_48.previous;
  return 0;
}

