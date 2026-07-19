
undefined4 __thiscall
UPanelTy::CreateTab(UPanelTy *this,byte param_1,byte param_2,int param_3,int param_4,uint param_5,
                   uint param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  uint uVar8;
  uint auStack_510 [280];
  InternalExceptionFrame IStack_b0;
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  UPanelTy *pUStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  IStack_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_b0;
  pUStack_c = this;
  iVar3 = __setjmp3(IStack_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    puVar7 = auStack_6c;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar6 = auStack_510;
    for (iVar3 = 0x118; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    bVar2 = 0;
    if (param_1 != 0) {
      iStack_14 = *(int *)(pUStack_c + 0x5c);
      iVar3 = 0;
      uStack_10 = 1;
      puVar6 = auStack_510 + 1;
      uVar8 = *(int *)(pUStack_c + 0x3c) + param_3;
      do {
        puVar6[-1] = uStack_10;
        iVar5 = iStack_14;
        *puVar6 = (uint)(bVar2 == param_2);
        puVar6[2] = uVar8;
        if (iVar5 == 0) {
          iVar5 = -*(int *)(pUStack_c + 0x48);
        }
        else {
          iVar5 = *(int *)(pUStack_c + 0x44);
        }
        puVar6[3] = iVar5 + iVar3 + param_4;
        puVar6[4] = param_5;
        puVar6[5] = param_6;
        bVar2 = bVar2 + 1;
        uStack_10 = uStack_10 + 1;
        iVar3 = iVar3 + param_8;
        uVar8 = uVar8 + param_7;
        puVar6 = puVar6 + 0x1c;
      } while (bVar2 < param_1);
    }
    puStack_24 = auStack_510;
    uStack_5c = *(undefined4 *)(pUStack_c + 8);
    iStack_20 = param_2 + 1;
    uStack_34 = param_10;
    uStack_58 = 2;
    uStack_38 = 2;
    auStack_6c[0] = 1;
    auStack_6c[1] = 0;
    uStack_54 = param_9;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_3c = uStack_5c;
    (**(code **)(**(int **)(pUStack_c + 0xc) + 8))(5,&uStack_8,0,auStack_6c,0);
    g_currentExceptionFrame = IStack_b0.previous;
    return uStack_8;
  }
  g_currentExceptionFrame = IStack_b0.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xd1,0,iVar3,&DAT_007a4ccc,
                             s_UPanelTy__CreateTab_007c7914);
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xd1);
    return 0xffffffff;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

