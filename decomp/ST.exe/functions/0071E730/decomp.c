
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sviewer.cpp
   ViewerClassTy::_Draw */

int __thiscall ViewerClassTy::_Draw(ViewerClassTy *this)

{
  code *pcVar1;
  ViewerClassTy *pVVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar4;
  InternalExceptionFrame local_4c;
  ViewerClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pVVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib__sviewer_cpp_007f0a68,0x16,0,iVar3,&DAT_007a4ccc,
                               s_ViewerClassTy___Draw_error___007f0a80);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib__sviewer_cpp_007f0a68,0x17);
    return iVar3;
  }
  if (((byte)local_8[0x20] & 2) != 0) {
    (**(code **)(*(int *)local_8 + 8))(*(int *)(local_8 + 0x1ec),*(int *)(local_8 + 0x1f0),0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(local_8 + 0x1e0)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)(pVVar2 + 0x1dc)) {
        do {
          (**(code **)(*(int *)pVVar2 + 8))
                    (*(int *)(pVVar2 + 0x1ec) + iVar4,*(int *)(pVVar2 + 0x1f0) + iVar3,
                     (*(int *)(pVVar2 + 0x1d4) + *(int *)(pVVar2 + 0x1e4)) * iVar4,
                     (*(int *)(pVVar2 + 0x1d8) + *(int *)(pVVar2 + 0x1e8)) * iVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(pVVar2 + 0x1dc));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(pVVar2 + 0x1e0));
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

