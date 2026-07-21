
int * __cdecl
FUN_0070be00(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    piVar2 = Library::Ourlib::MFIMG::imgGetDibFromFile
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    g_currentExceptionFrame = local_48.previous;
    return piVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return (int *)0x0;
}

