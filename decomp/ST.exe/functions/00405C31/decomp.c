
void __thiscall HelpPanelTy::BwdBut(HelpPanelTy *this)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined1 *puVar6;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  HelpPanelTy *pHStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pHStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (0 < *(int *)(pHStack_8 + 0x1cf)) {
      iVar3 = *(int *)(pHStack_8 + 0x1cb);
      uVar4 = *(int *)(pHStack_8 + 0x1cf) - 1;
      *(uint *)(pHStack_8 + 0x1cf) = uVar4;
      if (uVar4 < *(uint *)(iVar3 + 0xc)) {
        puVar6 = (undefined1 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        pHStack_8[0x1a1] = (HelpPanelTy)0x0;
        *(undefined4 *)(pHStack_8 + 0x1a7) = 0;
        *(undefined4 *)(pHStack_8 + 0x1a3) = 0;
        uVar4 = *(uint *)(puVar6 + 5);
        pvVar1 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          HomeBut(pHStack_8);
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 1:
          RCProc(pHStack_8,(int)pvVar1,uVar4,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 2:
          ObjProc(pHStack_8,(int)pvVar1,uVar4,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 3:
          SubProc(pHStack_8,(int)pvVar1,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 4:
          ArmProc(pHStack_8,(int)pvVar1,uVar4,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 5:
          TechProc(pHStack_8,(uint)pvVar1,(byte)uVar4,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 6:
          TTreeProc(pHStack_8,(uint)pvVar1,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 7:
          MObjProc(pHStack_8);
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 8:
          TipProc(pHStack_8,pvVar1,uVar4,'\0');
          break;
        case 10:
          IndexBut(pHStack_8);
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 0xb:
          SpecProc(pHStack_8,(int)pvVar1,uVar4,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        case 0xc:
          NatProc(pHStack_8,(int)pvVar1,'\0');
          g_currentExceptionFrame = IStack_4c.previous;
          return;
        }
      }
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x317,0,iVar3,&DAT_007a4ccc,
                             s_HelpPanelTy__BwdBut_007c3af0);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x317);
  return;
}

