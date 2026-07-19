
undefined4 __thiscall STGroupBoatC::GrpGoToDeep(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar7;
  uint uVar8;
  InternalExceptionFrame IStack_6c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  STGroupBoatC *pSStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_a;
  short sStack_8;
  short sStack_6;
  
  uStack_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  IStack_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_6c;
  pSStack_1c = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x73c,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpGoToDeep_007abf74);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x73d);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar7 = pSStack_1c + 0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar7 = 0;
      pSVar7 = pSVar7 + 4;
    }
    uVar8 = 0;
    *(undefined4 *)(pSStack_1c + 0x222) = *(undefined4 *)(pSStack_1c + 0xff);
    *(undefined4 *)(pSStack_1c + 0x65) = 0;
    if (uStack_18 != 0) {
      uVar6 = 0;
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,&uStack_14);
        if ((short)uStack_14 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                               uStack_14,1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x720);
          }
          thunk_FUN_004162b0(this_00,&sStack_8,&sStack_6,&uStack_a);
          thunk_FUN_00481520(this_00,(int)sStack_8,(int)sStack_6,*(undefined4 *)(pSVar2 + 0x222));
          uStack_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uStack_24 = 0xffff;
          uStack_22 = 0xffff;
          uStack_20 = 0xffff;
          STBoatC::CmdToObj(this_00,1,&uStack_28);
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8 & 0xffff;
      } while (uVar6 < uStack_18);
    }
    uStack_10 = 2;
  }
  uVar5 = uStack_10;
  if (param_1 == 2) {
    if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      uStack_10 = 0;
      uVar5 = 0;
      if (uStack_18 != 0) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&uStack_14);
          if ((short)uStack_14 != -1) {
            uVar8 = STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                               uStack_14,1);
            if (uVar8 == 0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x732);
            }
            iVar3 = thunk_FUN_0045ff30(uVar8);
            if (((iVar3 != 0) || (iVar3 = thunk_FUN_0045ff10(uVar8), iVar3 == 1)) ||
               (iVar3 = thunk_FUN_0045ff10(uVar8), iVar3 == 0)) goto LAB_0049b6c1;
          }
          uVar6 = uVar6 + 1;
          uVar8 = uVar6 & 0xffff;
          if (uStack_18 <= uVar8) {
            g_currentExceptionFrame = IStack_6c.previous;
            return uStack_10;
          }
        } while( true );
      }
    }
    else {
LAB_0049b6c1:
      uStack_10 = 2;
      uVar5 = uStack_10;
    }
  }
  uStack_10 = uVar5;
  g_currentExceptionFrame = IStack_6c.previous;
  return uStack_10;
}

