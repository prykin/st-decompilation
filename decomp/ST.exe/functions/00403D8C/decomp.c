
int __thiscall STExplosionC::CreateGroupPart(STExplosionC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  int iVar4;
  STExplosionC *pSVar5;
  void *unaff_EDI;
  STExplosionC *pSVar6;
  InternalExceptionFrame IStack_50;
  STExplosionC *pSStack_c;
  int iStack_8;
  
  iVar4 = 0;
  iStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = pSStack_c;
  if (iVar2 == 0) {
    if (0 < param_1) {
      pSVar6 = pSStack_c + 0x219;
      do {
        puVar3 = thunk_FUN_00629010();
        *(undefined4 **)pSVar6 = puVar3;
        *(STExplosionC **)((int)puVar3 + 0xce) = pSVar5;
        iVar2 = *(int *)pSVar6;
        pSVar6 = pSVar6 + 4;
        *(int *)(iVar2 + 0xd2) = iVar4;
        iStack_8 = iStack_8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    g_currentExceptionFrame = IStack_50.previous;
    return iStack_8;
  }
  g_currentExceptionFrame = IStack_50.previous;
  if (0 < iStack_8) {
    pSVar5 = pSStack_c + 0x219;
    iVar4 = iStack_8;
    do {
      FUN_0072e2b0(*(undefined4 **)pSVar5);
      pSVar5 = pSVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_Expl_cpp_007cf630,0x1f6,0,iVar2,&DAT_007a4ccc,
                             s_STExplosionC__CreateGroupPart_007cf670);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_Expl_cpp_007cf630,0x1f8);
  return 0xffff;
}

