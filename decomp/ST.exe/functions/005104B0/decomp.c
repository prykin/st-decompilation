
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
  FrmPanelTy *pFVar4;
  void *unaff_EDI;
  int *piVar5;
  bool bVar6;
  InternalExceptionFrame local_54;
  int local_10 [2];
  FrmPanelTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
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
  pFVar4 = local_8 + 0x1ab;
  local_10[0] = *(int *)pFVar4;
  local_10[1] = *(int *)(local_8 + 0x1af);
  *(int *)pFVar4 = 0;
  *(undefined4 *)(local_8 + 0x1af) = 0;
  thunk_FUN_0043beb0(DAT_007fa174,0x11,(int *)pFVar4);
  iVar2 = 2;
  bVar6 = true;
  piVar5 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *(int *)pFVar4 == *piVar5;
    pFVar4 = pFVar4 + 4;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    *(undefined4 *)(this_00 + 0x28) = 5;
    pFVar4 = this_00 + 0x1b3;
    iVar2 = 8;
    do {
      if (*(int *)pFVar4 != 0) {
        FUN_006e6080(this_00,2,*(int *)pFVar4,(undefined4 *)(this_00 + 0x18));
      }
      pFVar4 = pFVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

