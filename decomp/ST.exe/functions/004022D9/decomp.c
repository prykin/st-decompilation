
void __thiscall
CPanelTy::PaintBut(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame IStack_54;
  int *piStack_10;
  ushort *puStack_c;
  CPanelTy *pCStack_8;
  
  piStack_10 = *(int **)(param_2 + 0x18);
  puStack_c = (ushort *)0x0;
  if (param_5 == (undefined *)0x0) {
    return;
  }
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pCStack_8 = this;
  errorCode = (int *)__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != (int *)0x0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1cd,0,(int)errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintBut_007c1b38);
    if (iVar7 == 0) {
      RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1cd);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar7 = 1;
  uVar4 = (*(code *)param_5)(param_2);
  pCVar5 = FUN_006f2c00(param_4,1,uVar4);
  puStack_c = FUN_006f1ce0(param_3,pCVar5,errorCode,iVar7);
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
    goto LAB_004f3636;
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
LAB_004f3636:
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
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

