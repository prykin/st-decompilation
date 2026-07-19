
void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR pCVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  InternalExceptionFrame IStack_5c;
  int *piStack_18;
  CPanelTy *pCStack_14;
  int iStack_10;
  int iStack_c;
  ushort *puStack_8;
  
  uVar2 = (uint)param_1;
  piStack_18 = *(int **)(param_2 + 0x18);
  puStack_8 = (ushort *)0x0;
  iStack_c = piStack_18[1];
  iStack_10 = *piStack_18 - *(int *)(this + uVar2 * 4 + 0x3c);
  switch(uVar2) {
  case 1:
    iVar9 = *(int *)(this + 0x134);
    goto LAB_004f3d6a;
  default:
    if (*(int *)(this + 0x130) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f3d83;
    }
    break;
  case 3:
    if (*(int *)(this + 0x134) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f3d83;
    }
    break;
  case 5:
    if (*(int *)(this + 0x138) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f3d83;
    }
    break;
  case 7:
    iVar9 = *(int *)(this + 0x138);
LAB_004f3d6a:
    if (iVar9 != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f3d83;
    }
    iStack_c = iStack_c - *(int *)(this + 0xc0);
  }
  iStack_c = iStack_c - DAT_00806734;
LAB_004f3d83:
  if (param_6 != (undefined *)0x0) {
    IStack_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_5c;
    pCStack_14 = this;
    errorCode = (int *)__setjmp3(IStack_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == (int *)0x0) {
      iVar9 = 1;
      uVar4 = (*(code *)param_6)(param_2);
      pCVar5 = FUN_006f2c00(param_4,1,uVar4);
      puStack_8 = FUN_006f1ce0(param_3,pCVar5,errorCode,iVar9);
      pCVar3 = pCStack_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(pCStack_14 + uVar2 * 4 + 0x180),iStack_10,iStack_c,param_3
                         ,(byte *)puStack_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),*(int *)(pCVar3 + uVar2 * 4 + 0x180),0,
                       iStack_10,iStack_c,piStack_18[2],piStack_18[3]);
      iVar10 = -1;
      iVar8 = -1;
      uVar4 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar9 = -2;
      puVar6 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar6,iVar9,iVar7,uVar4,iVar8,iVar10);
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                     *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
      }
      g_currentExceptionFrame = IStack_5c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_5c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x212,0,(int)errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintTxtBut_007c1b68);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x212);
  }
  return;
}

