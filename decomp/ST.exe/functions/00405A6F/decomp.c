
void __thiscall
FSGSTy::ChangePlayerPing(FSGSTy *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  FSGSTy *pFStack_8;
  
  if (((this[0x1a5f] == (FSGSTy)0x6) && (this[0x1a60] == (FSGSTy)0x0)) &&
     (*(int *)(this + 0x1ea6) != 0)) {
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pFStack_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar5 = 0;
      iVar3 = *(int *)(pFStack_8 + 0x1ea6);
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (uVar1 != 0) {
        if (uVar1 == 0) {
          iVar4 = 0;
          goto LAB_005a2c91;
        }
        do {
          iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
LAB_005a2c91:
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x21) == param_2)) {
            *(undefined4 *)(iVar4 + 0x29) = param_3;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      *(undefined4 *)(pFStack_8 + 0x2d) = 5;
      FUN_006e6080(pFStack_8,2,*(undefined4 *)(pFStack_8 + 0x1b20),(undefined4 *)(pFStack_8 + 0x1d))
      ;
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__ChangePlayerPing_007cc500);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60);
  }
  return;
}

