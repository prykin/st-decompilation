
int thunk_FUN_004e9ce0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame IStack_64;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  short asStack_14 [2];
  short asStack_10 [2];
  short asStack_c [2];
  void *pvStack_8;
  
  IStack_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_64;
  iVar3 = __setjmp3(IStack_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_64.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d5,0,iVar3,&DAT_007a4ccc
                               ,s_TLOBaseTy__teleNone_error_007c151c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1d6);
      return iVar3;
    }
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  switch(piStack_20[0x11b]) {
  case 1:
    if (piStack_20[0xf7] == 0) {
      if (((piStack_20[0x16c] == piStack_20[0x11d]) && (piStack_20[0x16d] == piStack_20[0x11e])) &&
         (piStack_20[0x16e] == piStack_20[0x11f] + 1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        piStack_20[0x11b] = 2;
        g_currentExceptionFrame = IStack_64.previous;
        return 0;
      }
      thunk_FUN_004c6c70(piStack_20,piStack_20[0x11d],piStack_20[0x11e],piStack_20[0x11f] + 1);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 2:
    iVar3 = FUN_006e62d0(DAT_00802a38,piStack_20[0x11c],(int *)&pvStack_8);
    if (iVar3 != 0) {
      thunk_FUN_004ea620((int)piStack_20);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    iVar3 = thunk_FUN_004e91e0(pvStack_8,piStack_20);
    if (iVar3 != 0) {
      piStack_20[0x123] = 1;
      piStack_20[0x11b] = 3;
      thunk_FUN_00416270(piStack_20,asStack_14,asStack_10,asStack_c);
      thunk_FUN_00415b30(piStack_20,asStack_14[0],asStack_10[0],asStack_c[0],
                         (short)piStack_20[0x11d] * 0xc9 + 200,(short)piStack_20[0x11e] * 0xc9 + 200
                         ,((short)piStack_20[0x11f] + 1) * 200,*(byte *)((int)piStack_20 + 0x62));
      thunk_FUN_004e9650(pvStack_8,piStack_20 + 0x120,piStack_20 + 0x121,piStack_20 + 0x122);
      thunk_FUN_004e96c0(pvStack_8,(int *)piStack_20[6]);
      if (DAT_00800bcc == (void *)0x0) {
        thunk_FUN_004d0f00();
      }
      thunk_FUN_004d0970(DAT_00800bcc,piStack_20[0x120],piStack_20[0x121],piStack_20[0x122]);
      piStack_20[0x125] = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 3:
    iVar3 = thunk_FUN_00415ed0(piStack_20,&uStack_18,&uStack_1c);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a,0,-5,&DAT_007a4ccc,
                                 s_TLOBaseTy__teleNone_movement_err_007c1564);
      if (iVar3 == 0) {
        RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x19a);
        g_currentExceptionFrame = IStack_64.previous;
        return 0;
      }
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (iVar3 == 0) {
      iVar7 = (int)*(short *)((int)piStack_20 + 0x45);
      piStack_20[0x11b] = 4;
      uVar9 = 0;
      iVar3 = *(int *)((int)DAT_00802a38 + 0xe4);
      piStack_20[0x124] = 0;
      iVar6 = (int)*(short *)((int)piStack_20 + 0x43);
      piStack_20[0x127] = iVar3;
      iVar3 = (int)*(short *)((int)piStack_20 + 0x41);
      iVar8 = 0;
      piStack_20[0x126] = 0;
      uVar4 = thunk_FUN_004ad650((int)piStack_20 + 0x1d5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar3,iVar6,iVar7,uVar9);
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 4:
    iVar3 = piStack_20[0x127];
    uVar4 = *(uint *)((int)DAT_00802a38 + 0xe4);
    if ((iVar3 + 0x15U <= uVar4) && (piStack_20[0x124] == 0)) {
      iVar3 = 0;
      uVar4 = thunk_FUN_004ad650((int)piStack_20 + 0x1d5);
      FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      if (*(int *)((int)piStack_20 + 0x5ff) != 0) {
        iVar3 = 0;
        uVar4 = thunk_FUN_004ad650(*(int *)((int)piStack_20 + 0x5ff));
        FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      }
      if (*(int *)((int)piStack_20 + 0x603) != 0) {
        iVar3 = 0;
        uVar4 = thunk_FUN_004ad650(*(int *)((int)piStack_20 + 0x603));
        FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      }
      piStack_20[0x124] = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    if ((iVar3 + 100U <= uVar4) && (piStack_20[0x126] == 0)) {
      uVar9 = 0;
      iVar6 = (int)(short)((short)piStack_20[0x122] * 200 + 100);
      iVar3 = (int)(short)((short)piStack_20[0x121] * 0xc9 + 100);
      iVar7 = (int)(short)((short)piStack_20[0x120] * 0xc9 + 100);
      iVar8 = 0;
      uVar4 = thunk_FUN_004ad650((int)piStack_20 + 0x1d5);
      thunk_FUN_006377b0(uVar4,iVar8,iVar7,iVar3,iVar6,uVar9);
      piStack_20[0x126] = 1;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    if (iVar3 + 0x79U <= uVar4) {
      if (piStack_20[0x125] != 0) {
        thunk_FUN_004d0a80(DAT_00800bcc,piStack_20[0x120],piStack_20[0x121],piStack_20[0x122]);
        piStack_20[0x125] = 0;
      }
      thunk_FUN_0041c5a0(piStack_20);
      piStack_20[0x16c] = piStack_20[0x120];
      piStack_20[0x16e] = piStack_20[0x122];
      piStack_20[0x16d] = piStack_20[0x121];
      iVar3 = thunk_FUN_00417a20(piStack_20,(short)piStack_20[0x16c],(short)piStack_20[0x121],
                                 (short)piStack_20[0x122],1);
      if (iVar3 != 0) {
        RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_tele_cpp_007c153c,0x1b3);
      }
      thunk_FUN_0041d900(piStack_20,(short)piStack_20[0x16c],(short)piStack_20[0x16d],
                         (short)piStack_20[0x16e]);
      iVar3 = 1;
      uVar4 = thunk_FUN_004ad650((int)piStack_20 + 0x1d5);
      FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      if (*(int *)((int)piStack_20 + 0x5ff) != 0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650(*(int *)((int)piStack_20 + 0x5ff));
        FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      }
      if (*(int *)((int)piStack_20 + 0x603) != 0) {
        iVar3 = 1;
        uVar4 = thunk_FUN_004ad650(*(int *)((int)piStack_20 + 0x603));
        FUN_006eabf0(*(void **)((int)piStack_20 + 0x211),uVar4,iVar3);
      }
      if ((*(int *)(&DAT_00792778 + *(int *)((int)piStack_20 + 0x235) * 4) == 0) ||
         (iVar3 = thunk_FUN_004e81b0(piStack_20[9],*(int *)((int)piStack_20 + 0x235),0), iVar3 == 0)
         ) {
        puVar5 = (undefined *)0x5;
      }
      else {
        puVar5 = (undefined *)thunk_FUN_004e81b0(piStack_20[9],*(int *)((int)piStack_20 + 0x235),0);
      }
      thunk_FUN_0041c3f0(piStack_20,puVar5);
      piStack_20[0x11b] = 5;
      iVar3 = *(int *)((int)DAT_00802a38 + 0xe4);
      piStack_20[0x124] = 0;
      piStack_20[0x127] = iVar3;
      g_currentExceptionFrame = IStack_64.previous;
      return 0;
    }
    break;
  case 5:
    if ((piStack_20[0x123] != 0) &&
       (iVar3 = FUN_006e62d0(DAT_00802a38,piStack_20[0x11c],(int *)&pvStack_8), iVar3 == 0)) {
      thunk_FUN_004e95c0(pvStack_8,(int)piStack_20);
    }
    piStack_20[0x11b] = 0;
    piStack_20[0x11c] = 0;
    piStack_20[0x123] = 0;
  }
  g_currentExceptionFrame = IStack_64.previous;
  return 0;
}

