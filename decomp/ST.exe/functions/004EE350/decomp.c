
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::PaintBBut */

void __thiscall BehPanelTy::PaintBBut(BehPanelTy *this,int param_1,char *param_2,uint param_3)

{
  code *pcVar1;
  BehPanelTy *pBVar2;
  int *piVar3;
  LPSTR pCVar4;
  void *unaff_ESI;
  int iVar5;
  InternalExceptionFrame *pIVar6;
  undefined4 local_54 [16];
  BehPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  pIVar6 = g_currentExceptionFrame;
  local_8 = (ushort *)0x0;
  piVar3 = *(int **)(param_1 + 0x18);
  local_10 = *piVar3 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_c = piVar3[1] - DAT_00806734;
  }
  else {
    local_c = piVar3[1] - *(int *)(this + 0x44);
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  local_14 = this;
  piVar3 = (int *)__setjmp3(local_54,0,unaff_ESI,pIVar6);
  if (piVar3 == (int *)0x0) {
    iVar5 = 1;
    pCVar4 = FUN_006f2c00(param_2,1,param_3 & 0xff);
    local_8 = FUN_006f1ce0(1,pCVar4,piVar3,iVar5);
    pBVar2 = local_14;
    thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),local_10,local_c,'\x01',(byte *)local_8);
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    FUN_006b3640(DAT_008075a8,*(uint *)(pBVar2 + 0x60),0xffffffff,*(uint *)(pBVar2 + 0x3c),
                 *(uint *)(pBVar2 + 0x44));
    g_currentExceptionFrame = pIVar6;
    return;
  }
  g_currentExceptionFrame = pIVar6;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0xc5,0,(int)piVar3,
                             &DAT_007a4ccc,s_BehPanelTy__PaintBBut_007c1770);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException((int)piVar3,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0xc5);
  return;
}

