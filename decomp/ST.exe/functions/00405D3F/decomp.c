
int __thiscall
ProdPanelTy::CreateSlider
          (ProdPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int aiStack_42c [6];
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined2 uStack_398;
  undefined2 uStack_396;
  undefined4 uStack_394;
  undefined4 uStack_38c;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined2 uStack_374;
  undefined2 uStack_372;
  undefined4 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_2a8;
  int aiStack_2a4 [26];
  undefined4 uStack_23c;
  undefined4 uStack_214;
  undefined4 uStack_1f0;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  InternalExceptionFrame IStack_54;
  ProdPanelTy *pPStack_10;
  ushort *puStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pPStack_10 = this;
  iVar2 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pPStack_10;
  if (iVar2 == 0) {
    piVar7 = aiStack_42c;
    for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    uStack_6c = param_7;
    uStack_84 = *(undefined4 *)(this_00 + 8);
    uStack_68 = param_8;
    aiStack_42c[0] = param_6;
    uStack_80 = 2;
    uStack_7c = param_5;
    if (DAT_0080734c != '\0') {
      uStack_64 = 1;
    }
    iVar8 = 1;
    piVar7 = (int *)0x0;
    uVar6 = 0;
    iVar2 = 1;
    aiStack_42c[2] = (int)(param_6 == 1);
    aiStack_42c[1] = 2;
    uStack_2a8 = 2;
    aiStack_42c[3] = 2;
    uStack_318 = 1;
    uStack_31c = 1;
    pCVar3 = thunk_FUN_00571240(s_BUT_SLLT_007c7abc,0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,uVar6);
    puStack_c = FUN_006f1ce0(1,pCVar3,piVar7,iVar8);
    uStack_414 = *(undefined4 *)(puStack_c + 2);
    uStack_410 = *(undefined4 *)(puStack_c + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_c);
    iVar2 = *(int *)(this_00 + 0x3c);
    iVar8 = *(int *)(this_00 + 0x5c);
    aiStack_42c[4] = iVar2 + param_3;
    iVar4 = DAT_00806734;
    if (iVar8 != 0) {
      iVar4 = *(int *)(this_00 + 0x44);
    }
    uStack_3c0 = 2;
    aiStack_42c[5] = iVar4 + param_4;
    uStack_3c4 = *(undefined4 *)(this_00 + 8);
    uStack_38c = 0;
    uStack_380 = 0x101;
    uStack_3a4 = 0x101;
    uStack_374 = 0;
    uStack_398 = 0;
    uStack_37c = 3;
    uStack_3a0 = 3;
    uStack_372 = 2;
    uStack_396 = 2;
    uStack_370 = 0x272e;
    uStack_394 = 0x272e;
    uStack_3bc = 0xc005;
    uStack_368 = 1;
    uStack_39c = 0x4201;
    uStack_378 = 0x4202;
    uStack_314 = 500;
    uStack_310 = 0x32;
    piVar7 = aiStack_42c + 2;
    piVar5 = aiStack_2a4;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    }
    aiStack_2a4[2] = iVar2 + param_1;
    aiStack_2a4[3] = DAT_00806734;
    if (iVar8 != 0) {
      aiStack_2a4[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_2a4[3] = aiStack_2a4[3] + param_2;
    uStack_23c = 0xc006;
    uStack_1f0 = 0x272f;
    uStack_214 = 0x272f;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(4,&iStack_8,0,aiStack_42c,0);
    if ((*(int *)(this_00 + 0x5c) == 0) || (uVar6 = 0x55, DAT_0080734c == '\0')) {
      uVar6 = 0x56;
    }
    *(undefined4 *)(this_00 + 0x28) = uVar6;
    if (iStack_8 != 0) {
      FUN_006e6080(this_00,0x80000002,iStack_8,(undefined4 *)(this_00 + 0x18));
    }
    g_currentExceptionFrame = IStack_54.previous;
    return iStack_8;
  }
  g_currentExceptionFrame = IStack_54.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x239,0,iVar2,&DAT_007a4ccc,
                             s_ProdPanelTy__CreateSlider_007c7a9c);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x239);
  return -1;
}

