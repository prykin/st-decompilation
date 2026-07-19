
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::DoneSAMPanel */

void __thiscall SAMPanelTy::DoneSAMPanel(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  SAMPanelTy *pSVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 7;
    *(undefined4 *)(local_8 + 0x1b1) = 0;
    pSVar5 = local_8 + 0x1b5;
    do {
      if (*(uint *)pSVar5 != 0) {
        FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)pSVar5);
        *(uint *)pSVar5 = 0;
      }
      pSVar5 = pSVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_008016ec = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x38,0,iVar3,&DAT_007a4ccc,
                             s_SAMPanelTy__DoneSAMPanel_007c77fc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x38);
  return;
}

