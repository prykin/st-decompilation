
undefined4 __thiscall
STGroupBoatC::InitWay(STGroupBoatC *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int errorCode;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  STGroupBoatC *pSStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_c = this;
  errorCode = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_c;
  if (errorCode == 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        FUN_006acc70(param_1,uVar6,&uStack_8);
        uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),uStack_8,1
                                  );
        *(undefined4 *)(uVar3 + 0xfd) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0xc));
    }
    Way3DGrpDistribTgt(pSVar2,param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = IStack_50.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6e,0,errorCode,&DAT_007a4ccc,
                             s_STGroupBoatC__InitWay_007abe60);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6f);
  return 0xffffffff;
}

