
void thunk_FUN_00555e80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  InternalExceptionFrame IStack_4c;
  int iStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar2 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(iStack_8 + 0x24) + 0xc);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iStack_8 + 0x24) + 0x1c);
    }
    uVar4 = 0;
    if (0 < iVar2) {
      do {
        if (-1 < (int)*(uint *)(iVar3 + 0x32)) {
          if (*(short *)(iVar3 + 0x38) == 0) {
            thunk_FUN_00555910(iVar3);
          }
          else {
            FUN_006e8ba0(DAT_00807598,*(uint *)(iVar3 + 0x32));
            *(undefined4 *)(iVar3 + 0x32) = 0xffffffff;
            iVar2 = *(int *)(iStack_8 + 0x24);
            if (uVar4 < *(uint *)(iVar2 + 0xc)) {
              iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c);
            }
            else {
              iVar2 = 0;
            }
            *(undefined4 *)(iVar2 + 0x32) = 0xffffffff;
            if (*(int *)(iStack_8 + 0x828) < 0x3ff) {
              iVar2 = *(int *)(iStack_8 + 0x828) + 1;
              *(int *)(iStack_8 + 0x828) = iVar2;
              *(short *)(iStack_8 + 0x28 + iVar2 * 2) = (short)uVar4;
            }
          }
        }
        iVar3 = iVar3 + 0x3c;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(*(int *)(iStack_8 + 0x24) + 0xc));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,200,0,iVar2,&DAT_007a4ccc,
                             s_TraksClassTy__TraksExec_error_007c9184);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_grig_traks_cpp_007c9104,0xc9);
  return;
}

