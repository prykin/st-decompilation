
void __cdecl thunk_FUN_005252c0(int param_1)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffb8;
  int iStack_8;
  
  pIVar2 = g_currentExceptionFrame;
  iStack_8 = 0;
  if (param_1 != -1) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffb8,0,pIVar2,in_stack_ffffffb8);
    if (iVar1 == 0) {
      switch(param_1) {
      case 0xaf:
      case 0xb0:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
        iStack_8 = 1;
      }
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_5,(char *)0x0,param_1,(SoundPosition *)0x0,
                 iStack_8);
      g_currentExceptionFrame = pIVar2;
      return;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

