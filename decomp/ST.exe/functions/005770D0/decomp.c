#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::DoneSystem */

void __thiscall GameSystemC::DoneSystem(GameSystemC *this,int param_1)

{
  code *pcVar1;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar2;
  GameSystemC *pGVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  this->field_0430 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pGVar3 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0431 != 0) {
      FUN_00725680(&local_8->field_0431);
    }
    FUN_0070b1d0(&DAT_00806724);
    if (PTR_00802a28 != (ccFntTy *)0x0) {
      thunk_FUN_005711d0(&DAT_00807620,(int *)&PTR_00802a28);
    }
    if (PTR_00802a38 != (STPlaySystemC *)0x0) {
      thunk_FUN_005711d0(&DAT_00807620,(int *)&PTR_00802a38);
    }
    thunk_FUN_0058d720();
    pAVar2 = PTR_00807598;
    DAT_0080674c = 0;
    if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      FUN_006dbcf0((int *)PTR_00807598);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar2);
      PTR_00807598 = (AnonShape_GLOBAL_00807598_0C6808FB *)0x0;
    }
    thunk_FUN_00578370();
    if (DAT_00806750 != 0) {
      thunk_FUN_0042a780(&DAT_00806750);
    }
    FUN_006e52d0((AnonShape_006E52D0_AF06BCD2 *)pGVar3);
    ShowCursor(1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0xa7,0,errorCode,&DAT_007a4ccc,
                             s_GameSystemC__DoneSystem_007cac18);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0xa7);
  return;
}

