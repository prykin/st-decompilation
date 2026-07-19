
undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar7;
  uint uVar8;
  InternalExceptionFrame IStack_58;
  STGroupBoatC *pSStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pSStack_14 = this;
  iVar3 = __setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar7 = pSStack_14 + 0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar7 = 0;
        pSVar7 = pSVar7 + 4;
      }
      uVar8 = 0;
      *(undefined4 *)(pSStack_14 + 0x65) = 0;
      uStack_8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (uStack_10 != 0) {
        uVar6 = 0;
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,&uStack_c);
          if ((short)uStack_c != -1) {
            this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                          pSVar2[0x24]),uStack_c,1);
            if (this_00 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x65e);
            }
            thunk_FUN_0045ef00(this_00,3,&uStack_8);
          }
          uVar8 = uVar8 + 1;
          uVar6 = uVar8 & 0xffff;
        } while (uVar6 < uStack_10);
      }
    }
    g_currentExceptionFrame = IStack_58.previous;
    return 2;
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x665,0,iVar3,&DAT_007a4ccc,
                             s_STGroupBoatC__GrpMove_007abf3c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x666);
  return 0xffffffff;
}

