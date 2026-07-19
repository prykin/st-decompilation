
undefined4 thunk_FUN_00609b90(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  STFieldC *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar2 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((*(int *)(pSStack_8 + 0x234) != 0) &&
       (iVar2 = *(int *)(*(int *)(pSStack_8 + 0x234) + 0xc), uVar5 = 0, 0 < iVar2)) {
      do {
        iVar3 = *(int *)(pSStack_8 + 0x234);
        if (uVar5 < *(uint *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          if ((*(int *)(pSStack_8 + 0x1f5) == 0x4d) && (param_1 != 0)) {
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          if (*(int *)(iVar3 + 0x3c) < 0) {
            STFieldC::LoadImagSpr(pSStack_8,uVar5);
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar2);
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_nick_to_field_cpp_007cf850,0x208,0,iVar2,&DAT_007a4ccc,
                             s_STFieldC__InitSprSistem_void__007cf874);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_field_cpp_007cf850,0x20a);
  return 0xffff;
}

