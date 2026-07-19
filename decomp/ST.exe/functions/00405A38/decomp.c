
int __cdecl thunk_FUN_00552f50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int iVar3;
  void *unaff_EDI;
  InternalExceptionFrame IStack_54;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  if (param_1 < 0) {
    return 0;
  }
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  iVar1 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    iVar1 = param_1 * 2 + 1;
    iStack_8 = FUN_006aac70(iVar1 * iVar1);
    iStack_10 = 0;
    iStack_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        do {
          iVar2 = FUN_006aced8(param_1,param_1,iVar3,iStack_c);
          *(bool *)(iStack_10 + iStack_8) = iVar2 <= param_1;
          iStack_10 = iStack_10 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
        iStack_c = iStack_c + 1;
      } while (iStack_c < iVar1);
    }
    g_currentExceptionFrame = IStack_54.previous;
    return iStack_8;
  }
  g_currentExceptionFrame = IStack_54.previous;
  if (iStack_8 == 0) {
    FUN_006ab060(&iStack_8);
  }
  return iStack_8;
}

