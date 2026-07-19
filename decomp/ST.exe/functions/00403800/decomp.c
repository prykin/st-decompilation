
void __thiscall
SpecPanelTy::InitPanel
          (SpecPanelTy *this,char *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,UINT param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  LPSTR pCVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  InternalExceptionFrame IStack_4c;
  SpecPanelTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 == 0) {
    *(int *)(pSStack_8 + 0x3c) = *(int *)(pSStack_8 + 0x3c) + (DAT_00806730 + -800) / 2;
    puVar4 = FUN_006f1ce0(1,param_1,(int *)0x0,1);
    *(ushort **)(pSVar2 + 0x185) = puVar4;
    puVar5 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)(pSVar2 + 0x189) = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    iVar3 = *(int *)(pSVar2 + 0x68);
    uVar9 = *(uint *)(iVar3 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    thunk_FUN_00540760(*(undefined4 **)(pSVar2 + 0x68),0,0,'\x01',*(byte **)(pSVar2 + 0x185));
    ccFntTy::SetSurf(*(ccFntTy **)(pSVar2 + 0x189),*(int *)(pSVar2 + 0x68),0,param_2,param_3,param_4
                     ,param_5);
    uVar16 = 0;
    iVar14 = -1;
    iVar3 = -2;
    puVar6 = (uint *)FUN_006b0140(param_6,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(pSVar2 + 0x189),puVar6,iVar3,iVar14,uVar16);
    uVar17 = 1;
    iVar3 = *(int *)pSVar2;
    uVar15 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0xc000;
    uVar16 = 0xbfff;
    pCVar7 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    iVar3 = (**(code **)(iVar3 + 4))
                      (0,1,param_7,param_8,0,1,1,pCVar7,uVar16,uVar10,uVar11,uVar12,uVar13,uVar15,
                       uVar17);
    *(int *)(pSVar2 + 0x17c) = iVar3;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar14 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xeb,0,iVar3,&DAT_007a4ccc,
                              s_SpecPanelTy__InitPanel_007c792c);
  if (iVar14 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xeb);
  return;
}

