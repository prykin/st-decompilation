
int __thiscall STGroupC::SaveGrpData(STGroupC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  STGroupC *pSVar5;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame IStack_5c;
  int iStack_18;
  int iStack_14;
  STGroupC *pSStack_10;
  undefined4 *puStack_c;
  uint uStack_8;
  
  IStack_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_5c;
  pSStack_10 = this;
  iVar2 = __setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = pSStack_10;
  if (iVar2 == 0) {
    *param_1 = 0x40;
    if (*(uint **)(pSStack_10 + 0x29) != (uint *)0x0) {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSStack_10 + 0x29),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
    }
    if (*(uint **)(pSVar5 + 0x2d) != (uint *)0x0) {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar5 + 0x2d),(int *)&uStack_8);
      FUN_006ab060(&puStack_c);
      *param_1 = *param_1 + uStack_8;
    }
    iVar2 = FUN_006aac70(*param_1);
    uStack_8 = 0;
    *(int *)(iVar2 + 4) = (int)(char)pSVar5[0x24];
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(pSVar5 + 0x20);
    *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(pSVar5 + 0x25);
    *(undefined2 *)(iVar2 + 0x1a) = *(undefined2 *)(pSVar5 + 0x27);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(pSVar5 + 0x31);
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(pSVar5 + 0x35);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(pSVar5 + 0x39);
    iStack_18 = iVar2;
    if (*(uint **)(pSVar5 + 0x29) == (uint *)0x0) {
      uStack_8 = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    else {
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar5 + 0x29),(int *)&uStack_8);
      puVar6 = puStack_c;
      puVar7 = (undefined4 *)(iVar2 + 0x40);
      for (uVar4 = uStack_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uStack_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0x40;
      *(uint *)(iVar2 + 0x20) = uStack_8;
      FUN_006ab060(&puStack_c);
      pSVar5 = pSStack_10;
    }
    iVar3 = uStack_8 + 0x40;
    if (*(uint **)(pSVar5 + 0x2d) == (uint *)0x0) {
      *(undefined4 *)(iVar2 + 0x24) = 0xffffffff;
      *(uint *)(iVar2 + 0x28) = uStack_8;
    }
    else {
      iStack_14 = iVar3;
      puStack_c = (undefined4 *)FUN_006b0020(*(uint **)(pSVar5 + 0x2d),(int *)&uStack_8);
      puVar6 = puStack_c;
      puVar7 = (undefined4 *)(iVar3 + iVar2);
      for (uVar4 = uStack_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uStack_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(int *)(iVar2 + 0x24) = iStack_14;
      *(uint *)(iVar2 + 0x28) = uStack_8;
      FUN_006ab060(&puStack_c);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    g_currentExceptionFrame = IStack_5c.previous;
    return iVar2;
  }
  g_currentExceptionFrame = IStack_5c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1b9,0,iVar2,&DAT_007a4ccc,
                             s_STGroupC__SaveGrpData_007a5168);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1ba);
  return iStack_18;
}

