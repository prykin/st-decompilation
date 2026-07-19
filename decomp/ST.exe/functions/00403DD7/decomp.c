
void __thiscall
InfocPanelTy::PaintInfocObj(InfocPanelTy *this,ushort param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  InfocPanelTy *pIVar2;
  char cVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  InfocPanelTy *pIStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pIStack_8 = this;
  errorCode = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar2 = pIStack_8;
  if (errorCode == 0) {
    if ((pIStack_8[0x3d4] == (InfocPanelTy)0xff) && (param_1 == 0xffff)) {
      wsprintfA((LPSTR)(pIStack_8 + 0x18d),s_______d_007c3fc0,param_2 & 0xffff);
    }
    else {
      wsprintfA((LPSTR)(pIStack_8 + 0x18d),s__d__d_007c3fb8,param_1,param_2 & 0xffff);
    }
    if (DAT_0080874e == '\x03') {
      cVar3 = 's';
    }
    else {
      cVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    FUN_006b4170(*(int *)(pIVar2 + 0x68),0,param_3,param_4,0x2d,0xc,cVar3);
    ccFntTy::SetSurf(*(ccFntTy **)(pIVar2 + 0x189),*(int *)(pIVar2 + 0x68),0,param_3,param_4,0x2d,
                     0xc);
    ccFntTy::WrStr(*(ccFntTy **)(pIVar2 + 0x189),(uint *)(pIVar2 + 0x18d),-1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xa9,0,errorCode,
                             &DAT_007a4ccc,s_InfocPanelTy__PaintInfocObj_007c3f94);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0xa9);
  return;
}

