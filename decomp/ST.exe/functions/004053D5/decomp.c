
undefined4 * __thiscall STTorpC::SaveTorpData(STTorpC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  STAllPlayersC *pSVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  InternalExceptionFrame IStack_6c;
  undefined4 *puStack_28;
  int iStack_24;
  STAllPlayersC *pSStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  IStack_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_6c;
  pSStack_20 = (STAllPlayersC *)this;
  iVar2 = __setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar7 = pSStack_20;
  if (iVar2 == 0) {
    *param_1 = 0x80;
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_20 + 0x241),(int *)&uStack_8);
    FUN_006ab060(&puStack_14);
    *param_1 = *param_1 + uStack_8;
    puStack_18 = STT3DSprC::SaveSpr((STT3DSprC *)(pSVar7 + 0x1d5),&uStack_c);
    *param_1 = *param_1 + uStack_c;
    puStack_1c = STAllPlayersC::SaveGObjData(pSVar7,(int *)&uStack_10);
    iVar2 = *param_1;
    *param_1 = iVar2 + uStack_10;
    puVar3 = (undefined4 *)FUN_006aac70(iVar2 + uStack_10);
    *puVar3 = *(undefined4 *)(pSVar7 + 0x20);
    puVar3[1] = *(undefined4 *)(pSVar7 + 0x24);
    puVar3[2] = *(undefined4 *)(pSVar7 + 0x28);
    puVar3[3] = 2;
    puVar3[4] = *(undefined4 *)(pSVar7 + 0x2c);
    pSVar7 = pSVar7 + 0x245;
    puVar5 = puVar3 + 5;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *(undefined4 *)pSVar7;
      pSVar7 = pSVar7 + 4;
      puVar5 = puVar5 + 1;
    }
    puVar3[0x16] = *(undefined4 *)(pSStack_20 + 0x231);
    puVar3[0x17] = *(undefined4 *)(pSStack_20 + 0x235);
    puVar3[0x18] = *(undefined4 *)(pSStack_20 + 0x239);
    puVar3[0x19] = *(undefined4 *)(pSStack_20 + 0x23d);
    puStack_28 = puVar3;
    puStack_14 = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_20 + 0x241),(int *)&uStack_8);
    puVar5 = puStack_14;
    puVar8 = puVar3 + 0x20;
    for (uVar6 = uStack_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uStack_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar3[0x1a] = 0x80;
    puVar3[0x1b] = uStack_8;
    FUN_006ab060(&puStack_14);
    iStack_24 = uStack_8 + 0x80;
    puVar5 = puStack_18;
    puVar8 = (undefined4 *)(iStack_24 + (int)puVar3);
    for (uVar6 = uStack_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uStack_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar3[0x1c] = iStack_24;
    puVar3[0x1d] = uStack_c;
    FUN_006ab060(&puStack_18);
    puVar5 = puStack_1c;
    puVar8 = (undefined4 *)(iStack_24 + uStack_c + (int)puVar3);
    for (uVar6 = uStack_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uStack_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar3[0x1e] = iStack_24 + uStack_c;
    puVar3[0x1f] = uStack_10;
    FUN_006ab060(&puStack_1c);
    g_currentExceptionFrame = IStack_6c.previous;
    return puVar3;
  }
  g_currentExceptionFrame = IStack_6c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_torp_cpp_007d25c0,0x4d4,0,iVar2,&DAT_007a4ccc,
                             s_STTorpC__SaveTorpData_007d2638);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  RaiseInternalException(iVar2,0,s_E____titans_nick_to_torp_cpp_007d25c0,0x4d5);
  return puStack_28;
}

