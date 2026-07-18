
void __thiscall
CPanelTy::PaintBBut(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *piVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int *piStack_10;
  ushort *puStack_c;
  CPanelTy *pCStack_8;
  
  piStack_10 = *(int **)(param_2 + 0x18);
  puStack_c = (ushort *)0x0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pCStack_8 = this;
  piVar4 = (int *)__setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (piVar4 != (int *)0x0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1de,0,(int)piVar4,&DAT_007a4ccc)
    ;
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40((int)piVar4,0,0x7c1a4c,0x1de);
    return;
  }
  iVar7 = 1;
  pCVar5 = FUN_006f2c00(param_4,1,param_5 & 0xff);
  puStack_c = FUN_006f1ce0(param_3,pCVar5,piVar4,iVar7);
  pCVar3 = pCStack_8;
  uVar2 = (uint)param_1;
  iVar7 = piStack_10[1];
  iVar6 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (*(int *)(pCStack_8 + 0x134) != 0) {
      iVar6 = *(int *)(pCStack_8 + uVar2 * 4 + 0x94);
      break;
    }
    goto LAB_004f38ad;
  default:
    if (*(int *)(pCStack_8 + 0x130) != 0) {
      iVar6 = *(int *)(pCStack_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 3:
    if (*(int *)(pCStack_8 + 0x134) != 0) {
      iVar6 = *(int *)(pCStack_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 5:
    if (*(int *)(pCStack_8 + 0x138) != 0) {
      iVar6 = *(int *)(pCStack_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 7:
    if (*(int *)(pCStack_8 + 0x138) != 0) {
      iVar6 = *(int *)(pCStack_8 + uVar2 * 4 + 0x94);
      break;
    }
LAB_004f38ad:
    iVar7 = iVar7 - *(int *)(pCStack_8 + 0xc0);
  }
  thunk_FUN_00540760(*(undefined4 **)(pCStack_8 + uVar2 * 4 + 0x180),
                     *piStack_10 - *(int *)(pCStack_8 + uVar2 * 4 + 0x3c),iVar7 - iVar6,param_3,
                     (byte *)puStack_c);
  cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_c);
  if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
    FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                 *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

