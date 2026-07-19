
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::DoneSystem */

void __thiscall GameSystemC::DoneSystem(GameSystemC *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  GameSystemC *pGVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;
  
  this->field_0430 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pGVar3 = local_8;
  if (errorCode == 0) {
    if (local_8[1].vtable != (GameSystemCVTable *)0x0) {
      FUN_00725680((int *)(local_8 + 1));
    }
    FUN_0070b1d0(&DAT_00806724);
    if (DAT_00802a28 != 0) {
      thunk_FUN_005711d0(&DAT_00807620,&DAT_00802a28);
    }
    if (DAT_00802a38 != 0) {
      thunk_FUN_005711d0(&DAT_00807620,&DAT_00802a38);
    }
    thunk_FUN_0058d720();
    piVar2 = DAT_00807598;
    DAT_0080674c = 0;
    if (DAT_00807598 != (int *)0x0) {
      FUN_006dbcf0(DAT_00807598);
      Library::MSVCRT::FUN_0072e2b0(piVar2);
      DAT_00807598 = (int *)0x0;
    }
    thunk_FUN_00578370();
    if (DAT_00806750 != 0) {
      thunk_FUN_0042a780(&DAT_00806750);
    }
    FUN_006e52d0((int)pGVar3);
    ShowCursor(1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0xa7,0,errorCode,&DAT_007a4ccc,
                             s_GameSystemC__DoneSystem_007cac18);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0xa7);
  return;
}

