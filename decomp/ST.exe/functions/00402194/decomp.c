
void thunk_FUN_00512be0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int aiStack_8c4 [4];
  undefined4 uStack_8b4;
  int iStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  int iStack_8a4;
  int iStack_8a0;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  int aiStack_808 [4];
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6e4;
  int iStack_6e0;
  undefined4 uStack_68c;
  int aiStack_688 [26];
  undefined4 uStack_620;
  undefined4 uStack_564;
  int iStack_560;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_500;
  int iStack_4fc;
  int iStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  InternalExceptionFrame IStack_4c;
  void *pvStack_8;
  
  piVar4 = aiStack_8c4;
  for (iVar2 = 0x21e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  aiStack_8c4[0] = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (aiStack_8c4[0] == 0) {
    aiStack_8c4[1] = 2;
    iStack_8a4 = *(int *)((int)pvStack_8 + 0x3c) + 0x21;
    if (*(int *)((int)pvStack_8 + 0x5c) == 0) {
      iStack_8a0 = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      iStack_8a0 = *(int *)((int)pvStack_8 + 0x44);
    }
    iVar2 = *(int *)((int)pvStack_8 + 0x1e4);
    iStack_8a0 = iStack_8a0 + 0x16;
    aiStack_8c4[2] = 1;
    aiStack_8c4[3] = *(undefined4 *)(param_1 + 8);
    uStack_8b4 = 0x19c;
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_00710790(iVar2);
    }
    iStack_8b0 = *(int *)(iVar2 + 0x8a);
    uStack_8a8 = (undefined4)(0x118 / (longlong)iStack_8b0);
    aiStack_808[2] = *(int *)((int)pvStack_8 + 0x3c) + 0x1c3;
    uStack_8ac = 1;
    uStack_888 = 2;
    uStack_884 = 0x6332;
    uStack_814 = 4;
    uStack_810 = 0;
    uStack_80c = 2;
    aiStack_808[0] = 0;
    aiStack_808[1] = 2;
    uStack_88c = *(undefined4 *)((int)pvStack_8 + 8);
    if (*(int *)((int)pvStack_8 + 0x5c) == 0) {
      aiStack_808[3] = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      aiStack_808[3] = *(int *)((int)pvStack_8 + 0x44);
    }
    aiStack_808[3] = aiStack_808[3] + 0x109;
    uStack_7f8 = 0x11;
    uStack_7f4 = 0x24;
    uStack_6f8 = 500;
    uStack_6f4 = 0x32;
    uStack_7a4 = 2;
    uStack_7a0 = 0x8165;
    uStack_7a8 = uStack_88c;
    uStack_6e4 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    iStack_6e0 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar2 = *(int *)((int)pvStack_8 + 0x5c);
    uStack_700 = 1;
    uStack_6fc = 1;
    uStack_68c = 2;
    piVar4 = aiStack_808;
    piVar5 = aiStack_688;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      aiStack_688[3] = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      aiStack_688[3] = *(int *)((int)pvStack_8 + 0x44);
    }
    aiStack_688[3] = aiStack_688[3] + 0x16;
    uStack_620 = 0x8164;
    uStack_564 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    iStack_560 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    iStack_4fc = *(int *)((int)pvStack_8 + 0x3c) + 0x1c3;
    uStack_50c = 3;
    uStack_508 = 1;
    uStack_500 = 0;
    if (*(int *)((int)pvStack_8 + 0x5c) == 0) {
      iStack_4f8 = -*(int *)((int)pvStack_8 + 0x48);
    }
    else {
      iStack_4f8 = *(int *)((int)pvStack_8 + 0x44);
    }
    uStack_4b8 = *(undefined4 *)((int)pvStack_8 + 8);
    iStack_4f8 = iStack_4f8 + 0x3d;
    uStack_4f4 = 0x11;
    uStack_4f0 = 0xc9;
    uStack_4ec = 0x15;
    uStack_4b4 = 2;
    uStack_4b0 = 0x8166;
    uStack_478 = 1;
    uStack_474 = 1;
    uStack_58 = 1;
    uStack_5c = 1;
    (**(code **)(**(int **)((int)pvStack_8 + 0xc) + 8))
              (8,(int *)((int)pvStack_8 + 0x19c),0,aiStack_8c4,0);
    iVar2 = *(int *)((int)pvStack_8 + 0x19c);
    if (iVar2 != 0) {
      *(undefined4 *)((int)pvStack_8 + 0x28) = 0x20;
      *(undefined4 *)((int)pvStack_8 + 0x2c) = 1;
      FUN_006e6080(pvStack_8,2,iVar2,(undefined4 *)((int)pvStack_8 + 0x18));
    }
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x220,0,aiStack_8c4[0],
                             &DAT_007a4ccc,s_HelpPanelTy___CreateVText_007c3a0c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(aiStack_8c4[0],0,s_E____titans_Andrey_helppan_cpp_007c383c,0x220);
  return;
}

