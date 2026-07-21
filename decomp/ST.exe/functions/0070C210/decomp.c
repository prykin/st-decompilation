
undefined4 * __cdecl
FUN_0070c210(byte *param_1,undefined2 *param_2,undefined2 *param_3,DWORD *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar1 == 0) {
    puVar2 = Library::Ourlib::MFIMG::imgGetPcxGifJpgFromFile(param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_48.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_48.previous;
  return (undefined4 *)0x0;
}

