
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBut */

void __thiscall
CPanelTy::PaintBut(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *piVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  undefined4 local_54;
  undefined4 local_50 [16];
  int *local_10;
  ushort *local_c;
  CPanelTy *local_8;
  
  local_10 = *(int **)(param_2 + 0x18);
  local_c = (ushort *)0x0;
  if (param_5 == (undefined *)0x0) {
    return;
  }
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_8 = this;
  piVar4 = (int *)__setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (piVar4 != (int *)0x0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1cd,0,(int)piVar4,&DAT_007a4ccc)
    ;
    if (iVar8 == 0) {
      FUN_006a5e40((int)piVar4,0,0x7c1a4c,0x1cd);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar8 = 1;
  uVar5 = (*(code *)param_5)(param_2);
  pCVar6 = FUN_006f2c00(param_4,1,uVar5);
  local_c = FUN_006f1ce0(param_3,pCVar6,piVar4,iVar8);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar8 = local_10[1];
  iVar7 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (*(int *)(local_8 + 0x134) != 0) {
      iVar7 = *(int *)(local_8 + uVar2 * 4 + 0x94);
      break;
    }
    goto LAB_004f3636;
  default:
    if (*(int *)(local_8 + 0x130) != 0) {
      iVar7 = *(int *)(local_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 3:
    if (*(int *)(local_8 + 0x134) != 0) {
      iVar7 = *(int *)(local_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 5:
    if (*(int *)(local_8 + 0x138) != 0) {
      iVar7 = *(int *)(local_8 + uVar2 * 4 + 0x94);
    }
    break;
  case 7:
    if (*(int *)(local_8 + 0x138) != 0) {
      iVar7 = *(int *)(local_8 + uVar2 * 4 + 0x94);
      break;
    }
LAB_004f3636:
    iVar8 = iVar8 - *(int *)(local_8 + 0xc0);
  }
  thunk_FUN_00540760(*(undefined4 **)(local_8 + uVar2 * 4 + 0x180),
                     *local_10 - *(int *)(local_8 + uVar2 * 4 + 0x3c),iVar8 - iVar7,param_3,
                     (byte *)local_c);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
    FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                 *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

