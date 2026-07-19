
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::Update */

void __thiscall SAMPanelTy::Update(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  SAMPanelTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_10 = local_8->field_01AB;
    local_c = local_8->field_01AF;
    STAllPlayersC::GetPanelInfo(DAT_007fa174,0x12,&local_8->field_01AB);
    this_00->field_0028 = 5;
    piVar4 = &this_00->field_01B5;
    iVar2 = 6;
    do {
      if (*piVar4 != 0) {
        FUN_006e6080(this_00,2,*piVar4,(undefined4 *)&this_00->field_0x18);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x57,0,iVar2,&DAT_007a4ccc,
                             s_SAMPanelTy__Update_007c783c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x57);
  return;
}

