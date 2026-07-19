
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintTxtBut */

void __thiscall
PanelTy::PaintTxtBut
          (PanelTy *this,int param_1,byte param_2,char *param_3,ccFntTy *param_4,UINT param_5,
          undefined *param_6,int param_7,int param_8)

{
  code *pcVar1;
  PanelTy *pPVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  InternalExceptionFrame local_5c;
  int *local_18;
  PanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  local_18 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  if (param_7 == 0) {
    local_10 = *local_18;
  }
  else {
    local_10 = *local_18;
    iVar3 = DAT_00806730;
    if (*(int *)(this + 0x5c) == 0) goto LAB_00538bd9;
  }
  iVar3 = *(int *)(this + 0x3c);
LAB_00538bd9:
  local_10 = local_10 - iVar3;
  if (param_8 == 0) {
    local_c = local_18[1] - *(int *)(this + 0x44);
  }
  else if (*(int *)(this + 0x5c) == 0) {
    local_c = local_18[1] - DAT_00806734;
  }
  else {
    local_c = local_18[1] - *(int *)(this + 0x44);
  }
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;
    iVar3 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_8 = FUN_006f1ce0(param_2,param_3,(int *)0x0,1);
      iVar6 = local_c;
      iVar3 = local_10;
      pPVar2 = local_14;
      thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),local_10,local_c,param_2,(byte *)local_8)
      ;
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(param_4,*(int *)(pPVar2 + 0x68),0,iVar3,iVar6,local_18[2],local_18[3]);
      uVar4 = (*(code *)param_6)(param_1);
      iVar6 = -1;
      iVar3 = -2;
      puVar5 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrStr(param_4,puVar5,iVar3,iVar6,uVar4);
      FUN_006b3640(DAT_008075a8,*(uint *)(pPVar2 + 0x60),0xffffffff,*(uint *)(pPVar2 + 0x3c),
                   *(uint *)(pPVar2 + 0x44));
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0xcc,0,iVar3,&DAT_007a4ccc,
                               s_PanelTy__PaintTxtBut_007c7444);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_panel_cpp_007c7390,0xcc);
  }
  return;
}

