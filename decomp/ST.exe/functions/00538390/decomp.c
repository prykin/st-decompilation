
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::DonePanel */

void __thiscall PanelTy::DonePanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    puVar5 = (undefined4 *)&local_8->field_0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_8->field_0028 = 0x14;
    local_8->field_002C = local_8->field_0008;
    FUN_006e6000(local_8,3,1,(undefined4 *)&local_8->field_0x18);
    if (-1 < (int)pPVar2->field_0060) {
      FUN_006b3bb0(DAT_008075a8,pPVar2->field_0060);
    }
    pPVar2->field_0060 = 0xffffffff;
    if (pPVar2->field_0068 != 0) {
      FreeAndNull((void **)&pPVar2->field_0068);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0x3c,0,iVar3,&DAT_007a4ccc,
                             s_PanelTy__DonePanel_007c73cc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_panel_cpp_007c7390,0x3c);
  return;
}

