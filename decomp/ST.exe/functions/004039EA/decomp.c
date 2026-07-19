
void thunk_FUN_00541030(void)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined4 auStack_b4 [19];
  InternalExceptionFrame IStack_68;
  undefined4 *apuStack_24 [8];
  
  puVar5 = auStack_b4;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  IStack_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_68;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (DAT_008026f0 != (byte *)0x0) {
      pbVar2 = DAT_008026f0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      iVar4 = FUN_006b1190((int)DAT_008026f0,auStack_b4);
      while (-1 < iVar4) {
        ppuVar6 = apuStack_24;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppuVar6 = (undefined4 *)0x0;
          ppuVar6 = ppuVar6 + 1;
        }
        apuStack_24[5] = auStack_b4;
        apuStack_24[2] = (undefined4 *)0x1;
        apuStack_24[3] = (undefined4 *)0x3;
        apuStack_24[4] = (undefined4 *)0x11;
        FUN_006e3db0((int)apuStack_24);
        iVar4 = FUN_006b1190((int)DAT_008026f0,auStack_b4);
      }
      FUN_006ae110(DAT_008026f0);
      DAT_008026f0 = (byte *)0x0;
    }
    g_currentExceptionFrame = IStack_68.previous;
    return;
  }
  g_currentExceptionFrame = IStack_68.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0xfd,0,iVar4,&DAT_007a4ccc,
                             s_DelAllAccelerators_007c7bd0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_support_cpp_007c7b2c,0xfd);
  return;
}

