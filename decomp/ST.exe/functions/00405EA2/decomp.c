
void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *piVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
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
    iVar10 = *(int *)(this + 0x134);
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
    iVar10 = *(int *)(this + 0x138);
LAB_004f3d6a:
    if (iVar10 != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f3d83;
    }
    iStack_c = iStack_c - *(int *)(this + 0xc0);
  }
  iStack_c = iStack_c - DAT_00806734;
LAB_004f3d83:
  if (param_6 != (undefined *)0x0) {
    uStack_5c = DAT_00858df8;
    DAT_00858df8 = &uStack_5c;
    pCStack_14 = this;
    piVar4 = (int *)__setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
    if (piVar4 == (int *)0x0) {
      iVar10 = 1;
      uVar5 = (*(code *)param_6)(param_2);
      pCVar6 = FUN_006f2c00(param_4,1,uVar5);
      puStack_8 = FUN_006f1ce0(param_3,pCVar6,piVar4,iVar10);
      pCVar3 = pCStack_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(pCStack_14 + uVar2 * 4 + 0x180),iStack_10,iStack_c,param_3
                         ,(byte *)puStack_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),*(int *)(pCVar3 + uVar2 * 4 + 0x180),0,
                       iStack_10,iStack_c,piStack_18[2],piStack_18[3]);
      iVar11 = -1;
      iVar9 = -1;
      uVar5 = (*(code *)param_6)(param_2);
      iVar8 = -1;
      iVar10 = -2;
      puVar7 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar7,iVar10,iVar8,uVar5,iVar9,iVar11);
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                     *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
      }
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x212,0,(int)piVar4,&DAT_007a4ccc
                         );
    if (iVar10 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40((int)piVar4,0,0x7c1a4c,0x212);
  }
  return;
}

