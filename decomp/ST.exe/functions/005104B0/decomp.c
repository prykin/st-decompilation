
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::Update */

void __thiscall FrmPanelTy::Update(FrmPanelTy *this)

{
  code *pcVar1;
  FrmPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  bool bVar6;
  InternalExceptionFrame local_54;
  int local_10 [2];
  FrmPanelTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x70,0,iVar2,&DAT_007a4ccc
                               ,s_FrmPanelTy__Update_007c2aac);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x70);
    return;
  }
  piVar4 = &local_8->field_01AB;
  local_10[0] = *piVar4;
  local_10[1] = local_8->field_01AF;
  *piVar4 = 0;
  local_8->field_01AF = 0;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,0x11,piVar4);
  iVar2 = 2;
  bVar6 = true;
  piVar5 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    this_00->field_0028 = 5;
    piVar4 = &this_00->field_01B3;
    iVar2 = 8;
    do {
      if (*piVar4 != 0) {
        FUN_006e6080(this_00,2,*piVar4,(undefined4 *)&this_00->field_0x18);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

