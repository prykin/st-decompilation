
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005252C0_param_1Enum. Cases:
   CASE_AF=175;CASE_B0=176;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185 */

void __cdecl FUN_005252c0(Global_sub_005252C0_param_1Enum param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  if (param_1 != 0xffffffff) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
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
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return;
}

