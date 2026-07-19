
int __thiscall TLOBaseTy::teleNone(TLOBaseTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  TLOBaseTy *this_00;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame IStack_64;
  TLOBaseTy *pTStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  short asStack_14 [2];
  short asStack_10 [2];
  short asStack_c [2];
  void *pvStack_8;
  
  IStack_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_64;
  pTStack_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pTStack_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_64.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d5,0,iVar4,&DAT_007a4ccc
                               ,s_TLOBaseTy__teleNone_error_007c151c);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d6);
      return iVar4;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  switch(*(undefined4 *)(pTStack_20 + 0x46c)) {
  case 1:
    if (*(int *)(pTStack_20 + 0x3dc) == 0) {
      if (((*(int *)(pTStack_20 + 0x5b0) == *(int *)(pTStack_20 + 0x474)) &&
          (*(int *)(pTStack_20 + 0x5b4) == *(int *)(pTStack_20 + 0x478))) &&
         (*(int *)(pTStack_20 + 0x5b8) == *(int *)(pTStack_20 + 0x47c) + 1)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        *(undefined4 *)(pTStack_20 + 0x46c) = 2;
        g_currentExceptionFrame = IStack_64.previous;
        return 0;
      }
      thunk_FUN_004c6c70(pTStack_20,*(int *)(pTStack_20 + 0x474),*(undefined4 *)(pTStack_20 + 0x478)
                         ,*(int *)(pTStack_20 + 0x47c) + 1);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 2:
    iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)(pTStack_20 + 0x470),(int *)&pvStack_8);
    if (iVar4 != 0) {
      thunk_FUN_004ea620((int)this_00);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    iVar4 = thunk_FUN_004e91e0(pvStack_8,(int *)this_00);
    if (iVar4 != 0) {
      *(undefined4 *)(this_00 + 0x48c) = 1;
      *(undefined4 *)(this_00 + 0x46c) = 3;
      thunk_FUN_00416270(this_00,asStack_14,asStack_10,asStack_c);
      thunk_FUN_00415b30(this_00,asStack_14[0],asStack_10[0],asStack_c[0],
                         *(short *)(this_00 + 0x474) * 0xc9 + 200,
                         *(short *)(this_00 + 0x478) * 0xc9 + 200,
                         (*(short *)(this_00 + 0x47c) + 1) * 200,(byte)this_00[0x62]);
      thunk_FUN_004e9650(pvStack_8,(undefined4 *)(this_00 + 0x480),(undefined4 *)(this_00 + 0x484),
                         (undefined4 *)(this_00 + 0x488));
      thunk_FUN_004e96c0(pvStack_8,*(int **)(this_00 + 0x18));
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)(this_00 + 0x480),
                         *(undefined4 *)(this_00 + 0x484),*(undefined4 *)(this_00 + 0x488));
      *(undefined4 *)(this_00 + 0x494) = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 3:
    iVar4 = thunk_FUN_00415ed0(pTStack_20,&uStack_18,&uStack_1c);
    if (iVar4 == -1) {
      iVar4 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a,0,-5,&DAT_007a4ccc,
                                 s_TLOBaseTy__teleNone_movement_err_007c1564);
      if (iVar4 == 0) {
        RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a);
        g_currentExceptionFrame = IStack_64.previous;
        return 0;
      }
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (iVar4 == 0) {
      iVar8 = (int)*(short *)(this_00 + 0x45);
      *(undefined4 *)(this_00 + 0x46c) = 4;
      uVar10 = 0;
      uVar1 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
      *(undefined4 *)(this_00 + 0x490) = 0;
      iVar4 = (int)*(short *)(this_00 + 0x43);
      *(undefined4 *)(this_00 + 0x49c) = uVar1;
      iVar7 = (int)*(short *)(this_00 + 0x41);
      iVar9 = 0;
      *(undefined4 *)(this_00 + 0x498) = 0;
      uVar5 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
      thunk_FUN_006377b0(uVar5,iVar9,iVar7,iVar4,iVar8,uVar10);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 4:
    iVar4 = *(int *)(pTStack_20 + 0x49c);
    uVar5 = *(uint *)((int)DAT_00802a38 + 0xe4);
    if ((iVar4 + 0x15U <= uVar5) && (*(int *)(pTStack_20 + 0x490) == 0)) {
      iVar4 = 0;
      uVar5 = thunk_FUN_004ad650((int)(pTStack_20 + 0x1d5));
      FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      if (*(int *)(this_00 + 0x5ff) != 0) {
        iVar4 = 0;
        uVar5 = thunk_FUN_004ad650(*(int *)(this_00 + 0x5ff));
        FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      }
      if (*(int *)(this_00 + 0x603) != 0) {
        iVar4 = 0;
        uVar5 = thunk_FUN_004ad650(*(int *)(this_00 + 0x603));
        FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      }
      *(undefined4 *)(this_00 + 0x490) = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    if ((iVar4 + 100U <= uVar5) && (*(int *)(pTStack_20 + 0x498) == 0)) {
      uVar10 = 0;
      iVar7 = (int)(short)(*(short *)(pTStack_20 + 0x488) * 200 + 100);
      iVar4 = (int)(short)(*(short *)(pTStack_20 + 0x484) * 0xc9 + 100);
      iVar8 = (int)(short)(*(short *)(pTStack_20 + 0x480) * 0xc9 + 100);
      iVar9 = 0;
      uVar5 = thunk_FUN_004ad650((int)(pTStack_20 + 0x1d5));
      thunk_FUN_006377b0(uVar5,iVar9,iVar8,iVar4,iVar7,uVar10);
      *(undefined4 *)(this_00 + 0x498) = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    if (iVar4 + 0x79U <= uVar5) {
      if (*(int *)(pTStack_20 + 0x494) != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,*(int *)(pTStack_20 + 0x480),*(int *)(pTStack_20 + 0x484),
                           *(int *)(pTStack_20 + 0x488));
        *(undefined4 *)(this_00 + 0x494) = 0;
      }
      thunk_FUN_0041c5a0((int *)this_00);
      *(undefined4 *)(this_00 + 0x5b0) = *(undefined4 *)(this_00 + 0x480);
      *(undefined4 *)(this_00 + 0x5b8) = *(undefined4 *)(this_00 + 0x488);
      *(undefined4 *)(this_00 + 0x5b4) = *(undefined4 *)(this_00 + 0x484);
      iVar4 = thunk_FUN_00417a20(this_00,*(short *)(this_00 + 0x5b0),
                                 (short)*(undefined4 *)(this_00 + 0x484),
                                 (short)*(undefined4 *)(this_00 + 0x488),1);
      if (iVar4 != 0) {
        RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1b3);
      }
      thunk_FUN_0041d900(this_00,*(short *)(this_00 + 0x5b0),*(short *)(this_00 + 0x5b4),
                         *(short *)(this_00 + 0x5b8));
      iVar4 = 1;
      uVar5 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
      FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      if (*(int *)(this_00 + 0x5ff) != 0) {
        iVar4 = 1;
        uVar5 = thunk_FUN_004ad650(*(int *)(this_00 + 0x5ff));
        FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      }
      if (*(int *)(this_00 + 0x603) != 0) {
        iVar4 = 1;
        uVar5 = thunk_FUN_004ad650(*(int *)(this_00 + 0x603));
        FUN_006eabf0(*(void **)(this_00 + 0x211),uVar5,iVar4);
      }
      if ((*(int *)(&DAT_00792778 + *(int *)(this_00 + 0x235) * 4) == 0) ||
         (iVar4 = thunk_FUN_004e81b0(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),0),
         iVar4 == 0)) {
        puVar6 = (undefined *)0x5;
      }
      else {
        puVar6 = (undefined *)
                 thunk_FUN_004e81b0(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),0);
      }
      thunk_FUN_0041c3f0(this_00,puVar6);
      *(undefined4 *)(this_00 + 0x46c) = 5;
      uVar1 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
      *(undefined4 *)(this_00 + 0x490) = 0;
      *(undefined4 *)(this_00 + 0x49c) = uVar1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 5:
    if ((*(int *)(pTStack_20 + 0x48c) != 0) &&
       (iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)(pTStack_20 + 0x470),(int *)&pvStack_8),
       iVar4 == 0)) {
      thunk_FUN_004e95c0(pvStack_8,(int)this_00);
    }
    *(undefined4 *)(this_00 + 0x46c) = 0;
    *(undefined4 *)(this_00 + 0x470) = 0;
    *(undefined4 *)(this_00 + 0x48c) = 0;
  }
  g_currentExceptionFrame = IStack_64.previous;
  return 0;
}

