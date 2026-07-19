
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PaintTab */

void __thiscall ProdPanelTy::PaintTab(ProdPanelTy *this,int param_1,undefined *param_2)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int *piVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  iVar6 = *(int *)(param_1 + 0x14);
  local_8 = (ushort *)0x0;
  local_10 = *(int *)(iVar6 + 0xc) - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_c = *(int *)(iVar6 + 0x10) - DAT_00806734;
  }
  else {
    local_c = *(int *)(iVar6 + 0x10) - *(int *)(this + 0x44);
  }
  if (param_2 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    piVar3 = (int *)__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (piVar3 == (int *)0x0) {
      iVar7 = 1;
      uVar4 = (*(code *)param_2)(param_1);
      iVar6 = 2;
      pCVar5 = thunk_FUN_00571240(s_BUT_MFTABS_007c2374,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar6,uVar4);
      local_8 = FUN_006f1ce0(1,pCVar5,piVar3,iVar7);
      iVar6 = local_c;
      pPVar2 = local_14;
      thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),local_10,local_c,'\x01',(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3) {
        iVar7 = 1;
        piVar3 = (int *)0x0;
        pCVar5 = thunk_FUN_00571240(s_BUT_MFFRAMES_007c2384,0);
        local_8 = FUN_006f1ce0(6,pCVar5,piVar3,iVar7);
        thunk_FUN_00540760(*(undefined4 **)(pPVar2 + 0x68),local_10,iVar6,'\x06',(byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      FUN_006b3640(DAT_008075a8,*(uint *)(pPVar2 + 0x60),0xffffffff,*(uint *)(pPVar2 + 0x3c),
                   *(uint *)(pPVar2 + 0x44));
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x270,0,(int)piVar3,
                               &DAT_007a4ccc,s_ProdPanelTy__PaintTab_007c7ac8);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException((int)piVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x270);
  }
  return;
}

