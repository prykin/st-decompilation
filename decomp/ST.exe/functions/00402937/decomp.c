
void __thiscall StartSystemTy::ChatMessage(StartSystemTy *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  StartSystemTy *pSVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_74;
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_10;
  int iStack_c;
  StartSystemTy *pSStack_8;
  
  puVar5 = auStack_30;
  pSStack_8 = this;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  iVar7 = __setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = pSStack_8;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_74.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x349,0,iVar7,&DAT_007a4ccc
                               ,s_StartSystemTy__ChatMessage_007cd86c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_startsys_cpp_007cd718,0x349);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0x633f) {
    if ((((*(int *)(pSStack_8 + 0x67e) != 0) && (DAT_0080c4fa != 0)) &&
        (-1 < *(int *)(pSStack_8 + 0x558))) &&
       ((param_1 != 0 && (iVar7 = *(int *)(param_1 + 0x1c), iVar7 != 0)))) {
      iVar6 = *(int *)(pSStack_8 + 0x34);
      iStack_10 = iVar7;
      if (*(int *)(iVar6 + 0xa0) != 0) {
        FUN_00710790(iVar6);
      }
      iVar2 = *(int *)(pSVar4 + 0x67e);
      iStack_c = *(int *)(iVar6 + 0x8a);
      FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
      uVar8 = (uint)*(ushort *)(param_1 + 0x16);
      iVar6 = DAT_0080c4fa;
      uVar9 = uVar8;
      if ((int)uVar8 < (int)(uVar8 + *(int *)(iVar7 + 0x1e0))) {
        do {
          if ((int)uVar9 < *(int *)(iVar6 + 8)) {
            puVar10 = *(uint **)(*(int *)(iVar6 + 0x14) + uVar9 * 4);
          }
          else {
            puVar10 = (uint *)0x0;
          }
          if (puVar10 != (uint *)0x0) {
            ccFntTy::SetSurf(*(ccFntTy **)(pSVar4 + 0x34),*(int *)(pSVar4 + 0x67e),0,0,
                             (uVar9 - uVar8) * iStack_c,*(int *)(*(int *)(pSVar4 + 0x67e) + 4),
                             iStack_c);
            ccFntTy::WrStr(*(ccFntTy **)(pSVar4 + 0x34),puVar10,0,-1,0);
            iVar6 = DAT_0080c4fa;
          }
          uVar9 = uVar9 + 1;
          uVar8 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar9 < (int)(uVar8 + *(int *)(iStack_10 + 0x1e0)));
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar4 + 0x558));
    }
  }
  else {
    if (iVar7 == 0xc0a0) {
      iVar7 = *(int *)(pSStack_8 + 0x682);
      uVar9 = *(uint *)(iVar7 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar7 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar7);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pSVar4 + 0x34),*(int *)(pSVar4 + 0x682),0,0,0,0,0);
      if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
        ccFntTy::WrStr(*(ccFntTy **)(pSVar4 + 0x34),(uint *)**(undefined4 **)(param_1 + 0x14),0,-1,2
                      );
      }
      uVar1 = *(ushort *)(param_1 + 0x18);
      if ((uVar1 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        FUN_006b5b10(*(int *)(pSVar4 + 0x682),0,(uint)uVar1,*(ushort *)(param_1 + 0x1a) + 2,
                     (uint)uVar1,
                     (*(int *)(*(int *)(pSVar4 + 0x682) + 8) - (uint)*(ushort *)(param_1 + 0x1a)) +
                     -5,9,0xd);
      }
      FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar4 + 0x554));
      g_currentExceptionFrame = IStack_74.previous;
      return;
    }
    if ((iVar7 == 0xc0a1) && (*(int *)(pSStack_8 + 0x54c) != 0)) {
      uStack_20 = 0x21;
      FUN_006e5970(2,*(int *)(pSStack_8 + 0x54c),(int)auStack_30);
      if (iStack_1c == 0) {
        uStack_20 = 0x20;
        iStack_1c = 1;
        FUN_006e5970(2,*(int *)(pSVar4 + 0x54c),(int)auStack_30);
        g_currentExceptionFrame = IStack_74.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = IStack_74.previous;
  return;
}

