
void __thiscall
CPanelTy::PaintTab(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,char *param_5,
                  undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_58;
  CPanelTy *pCStack_14;
  int iStack_10;
  int iStack_c;
  ushort *puStack_8;
  
  uVar2 = (uint)param_1;
  puStack_8 = (ushort *)0x0;
  iStack_c = *(int *)(*(int *)(param_2 + 0x14) + 0x10);
  iStack_10 = *(int *)(*(int *)(param_2 + 0x14) + 0xc) - *(int *)(this + uVar2 * 4 + 0x3c);
  switch(uVar2) {
  case 1:
    iVar4 = *(int *)(this + 0x134);
    goto LAB_004f4318;
  default:
    if (*(int *)(this + 0x130) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 3:
    if (*(int *)(this + 0x134) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 5:
    if (*(int *)(this + 0x138) != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    break;
  case 7:
    iVar4 = *(int *)(this + 0x138);
LAB_004f4318:
    if (iVar4 != 0) {
      iStack_c = iStack_c - *(int *)(this + uVar2 * 4 + 0x94);
      goto LAB_004f4331;
    }
    iStack_c = iStack_c - *(int *)(this + 0xc0);
  }
  iStack_c = iStack_c - DAT_00806734;
LAB_004f4331:
  if (param_6 != (undefined *)0x0) {
    IStack_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_58;
    pCStack_14 = this;
    iVar4 = __setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      uVar5 = (*(code *)param_6)(param_2);
      pCVar6 = FUN_006f2c00(param_4,2,uVar5);
      puStack_8 = FUN_006f1ce0(param_3,pCVar6,(int *)0x0,1);
      pCVar3 = pCStack_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(pCStack_14 + uVar2 * 4 + 0x180),iStack_10,iStack_c,param_3
                         ,(byte *)puStack_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
      if ((*(int *)(*(int *)(param_2 + 0x14) + 4) == 3) && (param_5 != (char *)0x0)) {
        puStack_8 = FUN_006f1ce0(6,param_5,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)(pCVar3 + uVar2 * 4 + 0x180),iStack_10,iStack_c,'\x06',
                           (byte *)puStack_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(pCVar3 + uVar2 * 4 + 0x148))) {
        FUN_006b3640(DAT_008075a8,*(uint *)(pCVar3 + uVar2 * 4 + 0x148),0xffffffff,
                     *(uint *)(pCVar3 + uVar2 * 4 + 0x3c),*(uint *)(pCVar3 + uVar2 * 4 + 0x94));
      }
      g_currentExceptionFrame = IStack_58.previous;
      return;
    }
    g_currentExceptionFrame = IStack_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x256,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PaintTab_007c1b9c);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x256);
  }
  return;
}

