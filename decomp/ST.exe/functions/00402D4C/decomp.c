
void __thiscall
SettMapMTy::ChgPlList
          (SettMapMTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar6;
  char *pcVar7;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  char acStack_14c [260];
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  errorCode = Library::MSVCRT::__setjmp3(IStack_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = IStack_48.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x1dd,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__ChgPlList_007cd32c);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x1dd);
    return;
  }
  uStack_15c = param_1;
  uStack_158 = param_2;
  uStack_150 = param_4;
  uStack_154 = param_3;
  pcVar6 = &DAT_00807e1d;
  if (DAT_008067a0 == '\0') {
    pcVar6 = (char *)&DAT_00807ddd;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = acStack_14c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_006b6500((int)DAT_00811764,1);
  FUN_00715360(DAT_00811764,1,'$',(char *)&uStack_15c,0x114,1,0xffffffff);
  FUN_006b6500((int)DAT_00811764,DAT_0080733c);
  g_currentExceptionFrame = IStack_48.previous;
  return;
}

