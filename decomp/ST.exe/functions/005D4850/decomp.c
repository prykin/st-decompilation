
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::RunGame */

void __thiscall SettMapMTy::RunGame(SettMapMTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  SettMapMTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (iVar3 == 0) {
    if (DAT_0080877e != '\0') {
      FUN_006b7070(DAT_00811764);
    }
    pSVar2 = local_8;
    thunk_FUN_005b6350(local_8,0x6948,0,0);
    iVar3 = *(int *)pSVar2;
    pSVar2[1].field_0xc9 = 1;
    pSVar2[1].field_0xc8 = 1;
    pSVar2[1].field_0xc7 = 1;
    pSVar2[1].field_0xca = 1;
    pSVar2[1].field_0xc5 = 1;
    pSVar2[1].field_0xc4 = 1;
    (**(code **)(iVar3 + 8))();
    this_00 = *(MMsgTy **)(*(int *)&pSVar2->field_0x1a5b + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_00,1,0,1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x998,0,iVar3,&DAT_007a4ccc,
                             s_SettMapMTy__RunGame_007cd510);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x998);
  return;
}

