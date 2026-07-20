
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 253 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DelAllAccelerators(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 local_b4 [19];
  InternalExceptionFrame local_68;
  undefined4 *local_24 [8];
  
  puVar4 = local_b4;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_008026f0 != (AnonShape_006B1190_EDB2B5FD *)0x0) {
      DAT_008026f0->field_0004 = 0;
      iVar3 = FUN_006b1190(DAT_008026f0,local_b4);
      while (-1 < iVar3) {
        ppuVar5 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar5 = (undefined4 *)0x0;
          ppuVar5 = ppuVar5 + 1;
        }
        local_24[5] = local_b4;
        local_24[2] = (undefined4 *)0x1;
        local_24[3] = (undefined4 *)0x3;
        local_24[4] = (undefined4 *)0x11;
        FUN_006e3db0((int)local_24);
        iVar3 = FUN_006b1190(DAT_008026f0,local_b4);
      }
      FUN_006ae110((byte *)DAT_008026f0);
      DAT_008026f0 = (AnonShape_006B1190_EDB2B5FD *)0x0;
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0xfd,0,iVar3,&DAT_007a4ccc,
                             s_DelAllAccelerators_007c7bd0);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_support_cpp_007c7b2c,0xfd);
  return;
}

