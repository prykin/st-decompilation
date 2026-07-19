
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::PaintBut */

void __thiscall FrmPanelTy::PaintBut(FrmPanelTy *this,int param_1,char *param_2)

{
  code *pcVar1;
  FrmPanelTy *pFVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  void *unaff_ESI;
  int *piVar6;
  InternalExceptionFrame *pIVar7;
  undefined4 local_58 [16];
  int local_18;
  FrmPanelTy *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;
  
  pIVar7 = g_currentExceptionFrame;
  local_c = (ushort *)0x0;
  piVar6 = *(int **)(param_1 + 0x18);
  local_18 = *piVar6 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_10 = piVar6[1] - DAT_00806734;
  }
  else {
    local_10 = piVar6[1] - *(int *)(this + 0x44);
  }
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_14 = this;
  iVar3 = __setjmp3(local_58,0,unaff_ESI,pIVar7);
  pFVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar7;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f,0,iVar3,&DAT_007a4ccc
                               ,s_FrmPanelTy__PaintBut_007c2ac4);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    local_8 = 0;
    break;
  case 1:
    local_8 = (uint)(local_14[*(int *)(param_1 + 0x10) + -0xbf04] != (FrmPanelTy)0x0);
    break;
  case 2:
  case 3:
    local_8 = 1;
  }
  iVar3 = 1;
  piVar6 = (int *)0x0;
  pCVar4 = FUN_006f2c00(param_2,1,local_8);
  local_c = FUN_006f1ce0(1,pCVar4,piVar6,iVar3);
  thunk_FUN_00540760(*(undefined4 **)(pFVar2 + 0x68),local_18,local_10,'\x01',(byte *)local_c);
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
  FUN_006b3640(DAT_008075a8,*(uint *)(pFVar2 + 0x60),0xffffffff,*(uint *)(pFVar2 + 0x3c),
               *(uint *)(pFVar2 + 0x44));
  g_currentExceptionFrame = pIVar7;
  return;
}

