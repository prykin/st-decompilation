
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::DoneOptPanel */

void __thiscall OptPanelTy::DoneOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pOVar2 = local_8;
  if (iVar3 == 0) {
    if ((byte *)local_8->field_01E9 != (byte *)0x0) {
      FUN_006b5570((byte *)local_8->field_01E9);
      pOVar2->field_01E9 = 0;
    }
    if ((byte *)pOVar2->field_01ED != (byte *)0x0) {
      FUN_006ae110((byte *)pOVar2->field_01ED);
      pOVar2->field_01ED = 0;
    }
    if ((byte *)pOVar2->field_01F1 != (byte *)0x0) {
      FUN_006b5570((byte *)pOVar2->field_01F1);
      pOVar2->field_01F1 = 0;
    }
    this_00 = (ccFntTy *)0x0;
    if (pOVar2->field_01E5 != 0) {
      FUN_006ab060(&pOVar2->field_01E5);
      this_00 = extraout_ECX;
    }
    if ((byte *)pOVar2->field_02F9 != (byte *)0x0) {
      FUN_006b5570((byte *)pOVar2->field_02F9);
      this_00 = extraout_ECX_00;
    }
    pOVar2->field_02F9 = 0;
    if ((byte *)pOVar2->field_02FD != (byte *)0x0) {
      FUN_006ae110((byte *)pOVar2->field_02FD);
      this_00 = extraout_ECX_01;
    }
    pOVar2->field_02FD = 0;
    if ((HANDLE)pOVar2->field_01DD != (HANDLE)0x0) {
      FindCloseChangeNotification((HANDLE)pOVar2->field_01DD);
      pOVar2->field_01DD = 0;
      this_00 = extraout_ECX_02;
    }
    puVar5 = &pOVar2->field_01B5;
    iVar3 = 10;
    do {
      if (*puVar5 != 0) {
        FUN_006e56b0((void *)pOVar2->field_000C,*puVar5);
        this_00 = extraout_ECX_03;
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &pOVar2->field_01AD;
    iVar3 = 2;
    do {
      if (*puVar5 != 0) {
        FUN_006e56b0((void *)pOVar2->field_000C,*puVar5);
        this_00 = extraout_ECX_04;
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_008016dc = 0;
    if (pOVar2->field_017C != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pOVar2->field_017C);
      pOVar2->field_017C = (ccFntTy *)0x0;
      this_00 = extraout_ECX_05;
    }
    if (pOVar2->field_0180 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pOVar2->field_0180);
      pOVar2->field_0180 = (ccFntTy *)0x0;
    }
    pOVar2->field_0198 = 0;
    puVar5 = &pOVar2->field_0184;
    iVar3 = 5;
    do {
      if (*puVar5 != 0) {
        cMf32::RecMemFree(DAT_00806790,puVar5);
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79,0,iVar3,&DAT_007a4ccc,
                             s_OptPanelTy__DoneOptPanel_007c714c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79);
  return;
}

