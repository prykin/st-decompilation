
int __thiscall STRubbishC::RubbishCreatePart(STRubbishC *this)

{
  code *pcVar1;
  int iVar2;
  STRubbishC *pSVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  STRubbishC *pSStack_c;
  int iStack_8;
  
  iStack_8 = -1;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_Rubb_cpp_007d1798,0xd9,0,iVar2,&DAT_007a4ccc,
                               s_STRubbishC__RubbishCreatePart_007d17d8);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_nick_to_Rubb_cpp_007d1798,0xdb);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pSVar3 = pSStack_c + 0x1e5;
  iVar2 = 0;
  iVar6 = iStack_8;
  do {
    if (*(int *)pSVar3 == 0) {
      iStack_8 = iVar6;
      puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x3e);
      *(undefined4 **)(pSStack_c + iVar2 * 4 + 0x1e5) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        iVar6 = iVar2;
        if (pSStack_c[0x1f9] != (STRubbishC)0x0) {
          puVar4 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (puVar4 == (undefined4 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = thunk_FUN_004ab810(puVar4);
          }
          *(undefined4 *)(*(int *)(pSStack_c + iVar2 * 4 + 0x1e5) + 0x10) = uVar5;
        }
      }
      g_currentExceptionFrame = IStack_50.previous;
      return iVar6;
    }
    iVar6 = 5;
    iVar2 = iVar2 + 1;
    pSVar3 = pSVar3 + 4;
  } while (iVar2 < 5);
  g_currentExceptionFrame = IStack_50.previous;
  return 5;
}

