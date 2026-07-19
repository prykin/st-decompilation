
undefined4 __thiscall STGroupBoatC::Teleport(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar9;
  InternalExceptionFrame IStack_6c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  STGroupBoatC *pSStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uVar8 = 0;
  uStack_10 = 2;
  IStack_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_6c;
  pSStack_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar9 = pSStack_14 + 0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar9 = 0;
        pSVar9 = pSVar9 + 4;
      }
      *(undefined4 *)(pSStack_14 + 0x65) = 0;
      *(undefined4 *)(pSStack_14 + 0x2d8) = *(undefined4 *)(pSStack_14 + 0x1a3);
      *(undefined4 *)(pSStack_14 + 0x2dc) = *(undefined4 *)(pSStack_14 + 0x1a7);
      *(undefined4 *)(pSStack_14 + 0x2e0) = *(undefined4 *)(pSStack_14 + 0x1ab);
      *(undefined4 *)(pSStack_14 + 0x2e4) = *(undefined4 *)(pSStack_14 + 0x1af);
      uStack_24 = *(undefined4 *)(pSStack_14 + 0x2d8);
      uStack_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      uStack_20 = *(undefined2 *)(pSStack_14 + 0x2dc);
      uStack_1c = *(undefined2 *)(pSStack_14 + 0x2e0);
      uStack_16 = *(undefined2 *)(pSStack_14 + 0x2e6);
      uStack_1e = *(undefined2 *)(pSStack_14 + 0x2de);
      uStack_1a = *(undefined2 *)(pSStack_14 + 0x2e2);
      uStack_18 = *(undefined2 *)(pSStack_14 + 0x2e4);
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&uStack_c);
          if ((short)uStack_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                                uStack_c,1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc46);
            }
            STBoatC::CmdToObj(pSVar4,0x15,&uStack_28);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uStack_8);
      }
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 1) {
      uVar8 = 0;
      if (0 < (int)uStack_8) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&uStack_c);
          if ((short)uStack_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(uStack_c >> 8),pSVar2[0x24]),uStack_c,1
                               );
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc51);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if (iVar3 == 0x15) break;
            uVar5 = STBoatC::CheckPBoxCmd(pSVar4,0x15);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uStack_8);
      }
      if (uVar8 == uStack_8) {
        uStack_10 = 0;
      }
    }
    g_currentExceptionFrame = IStack_6c.previous;
  }
  else {
    g_currentExceptionFrame = IStack_6c.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc5a,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Teleport_007ac124);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc5b);
      return 0xffffffff;
    }
  }
  return uStack_10;
}

