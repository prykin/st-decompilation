
int FUN_0071e730(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar3;
  InternalExceptionFrame local_4c;
  int *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib__sviewer_cpp_007f0a68,0x16,0,iVar2,&DAT_007a4ccc,
                               s_ViewerClassTy___Draw_error___007f0a80);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib__sviewer_cpp_007f0a68,0x17);
    return iVar2;
  }
  if ((*(byte *)(local_8 + 8) & 2) != 0) {
    (**(code **)(*local_8 + 8))(local_8[0x7b],local_8[0x7c],0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  iVar2 = 0;
  if (0 < local_8[0x78]) {
    do {
      iVar3 = 0;
      if (0 < local_8[0x77]) {
        do {
          (**(code **)(*local_8 + 8))
                    (local_8[0x7b] + iVar3,local_8[0x7c] + iVar2,
                     (local_8[0x75] + local_8[0x79]) * iVar3,(local_8[0x76] + local_8[0x7a]) * iVar2
                    );
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_8[0x77]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_8[0x78]);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

