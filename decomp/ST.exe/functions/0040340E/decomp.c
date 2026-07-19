
uint __thiscall STGroupC::AddObj(STGroupC *this,uint param_1,int param_2)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int errorCode;
  int *this_00;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_80;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_24;
  STGroupC *pSStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  short sStack_8;
  undefined1 uStack_5;
  
  uStack_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uStack_c = 0;
  uStack_10 = 0;
  IStack_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_80;
  pSStack_1c = this;
  uStack_14 = uStack_18;
  errorCode = __setjmp3(IStack_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_1c;
  uVar7 = uStack_14;
  uVar6 = uStack_18;
  if (errorCode == 0) {
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,(undefined4 *)&sStack_8);
      if (sStack_8 == -1) {
        uVar7 = uVar6;
        uStack_14 = uVar6;
      }
      if (sStack_8 == (short)param_1) {
        RaiseInternalException(-0x5001ffff,DAT_007ed77c,s_E____titans_wlad_tc_grp_cpp_007a50a4,0xb1)
        ;
      }
    }
    FUN_006ae140(*(uint **)(pSVar2 + 0x29),uVar7,&param_1);
    this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                        param_1,1);
    thunk_FUN_00419c30(this_00,*(undefined2 *)(pSVar2 + 0x25));
    *(short *)(pSVar2 + 0x27) = *(short *)(pSVar2 + 0x27) + 1;
    if (param_2 == 1) {
      if (*(int *)(pSVar2 + 0x2d) == 0) {
        puVar3 = FUN_006ae290((uint *)0x0,5,2,5);
        *(uint **)(pSVar2 + 0x2d) = puVar3;
      }
      FUN_006ae1c0(*(uint **)(pSVar2 + 0x2d),&param_1);
      uStack_5 = 0xff;
      (**(code **)(*(int *)pSVar2 + 8))(0x65,&uStack_5);
    }
    uVar4 = thunk_FUN_00423120((int)this_00);
    uVar6 = *(uint *)(pSVar2 + 0x35);
    if ((uVar6 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        uStack_10 = uStack_10 | 1;
      }
    }
    else if ((uVar4 & 1) == 0) {
      uStack_c = uStack_c | 1;
    }
    if ((uVar6 & 2) == 0) {
      if ((uVar4 & 2) != 0) {
        uStack_10 = uStack_10 | 2;
      }
    }
    else if ((uVar4 & 2) == 0) {
      uStack_c = uStack_c | 2;
    }
    if ((uVar6 & 4) == 0) {
      if ((uVar4 & 4) != 0) {
        uStack_10 = uStack_10 | 4;
      }
    }
    else if ((uVar4 & 4) == 0) {
      uStack_c = uStack_c | 4;
    }
    if ((uVar6 & 8) == 0) {
      if ((uVar4 & 8) != 0) {
        uStack_10 = uStack_10 | 8;
      }
    }
    else if ((uVar4 & 8) == 0) {
      uStack_c = uStack_c | 8;
    }
    if ((uVar6 & 0x10) == 0) {
      if ((uVar4 & 0x10) != 0) {
        uStack_10 = uStack_10 | 0x10;
      }
    }
    else if ((uVar4 & 0x10) == 0) {
      uStack_c = uStack_c | 0x10;
    }
    if (uStack_c != 0) {
      (**(code **)(*this_00 + 0x100))(uStack_c);
    }
    if (uStack_10 != 0) {
      (**(code **)(*this_00 + 0x104))(uStack_10);
    }
    if (this_00[8] == 0x14) {
      thunk_FUN_004956c0(this_00,*(undefined4 *)(pSVar2 + 0x39));
    }
    if (*(undefined4 **)(pSVar2 + 0x1c) != (undefined4 *)0x0) {
      uStack_2c = 0x5d96;
      uStack_28 = 0;
      uStack_26 = (short)param_1;
      iStack_24 = this_00[6];
      (**(code **)**(undefined4 **)(pSVar2 + 0x1c))(auStack_3c);
    }
    g_currentExceptionFrame = IStack_80.previous;
    return uVar7;
  }
  g_currentExceptionFrame = IStack_80.previous;
  if (errorCode != -0x5001ffff) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0xdf,0,errorCode,&DAT_007a4ccc
                               ,s_STGroupC__AddObj_007a5120);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(errorCode,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0xe0);
    return 0xffffffff;
  }
  return 0xaffe0001;
}

