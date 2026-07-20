
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update */

void __thiscall BldLabPanelTy::Update(BldLabPanelTy *this,void *param_1)

{
  int *piVar1;
  code *pcVar2;
  AnonShape_004EFE20_20805E12 *this_00;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  dword local_c;
  AnonShape_004EFE20_20805E12 *local_8;
  
  if (this->field_027A != (DArrayTy *)0x0) {
    local_c = this->field_027A->count;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = (AnonShape_004EFE20_20805E12 *)this;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (errorCode == 0) {
      piVar1 = &local_8->field_027A;
      STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,0xc,(AnonShape_0043BEB0_1C00EC12 *)piVar1)
      ;
      thunk_FUN_0053f510(this_00,*(uint *)(*piVar1 + 0xc),local_c);
      thunk_FUN_004efe20(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x30,0,errorCode,
                               &DAT_007a4ccc,s_BldLabPanelTy__Update_007c1928);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x30);
  }
  return;
}

