
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005252C0_param_1Enum. Cases:
   CASE_AF=175;CASE_B0=176;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185 */

void __cdecl FUN_005252c0(Global_sub_005252C0_param_1Enum param_1)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffb8;
  int local_8;
  
  pIVar2 = g_currentExceptionFrame;
  local_8 = 0;
  if (param_1 != 0xffffffff) {
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
    iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffb8,0,pIVar2,in_stack_ffffffb8);
    if (iVar1 == 0) {
      switch(param_1) {
      case CASE_AF:
      case CASE_B0:
      case CASE_B6:
      case CASE_B7:
      case CASE_B8:
      case CASE_B9:
        local_8 = 1;
      }
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_5,(char *)0x0,param_1,(SoundPosition *)0x0,
                 local_8);
      g_currentExceptionFrame = pIVar2;
      return;
    }
  }
  g_currentExceptionFrame = pIVar2;
  return;
}

