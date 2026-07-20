
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintTxtBut
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00538BA0 parameter used as this of ccFntTy::SetSurf @ 00538C9F | 00538BA0 parameter
   used as this of ccFntTy::WrStr @ 00538CC6 */

void __thiscall
PanelTy::PaintTxtBut
          (PanelTy *this,int param_1,byte param_2,char *param_3,ccFntTy *param_4,UINT param_5,
          undefined *param_6,int param_7,int param_8)

{
  code *pcVar1;
  PanelTy *pPVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_5c;
  int *local_18;
  PanelTy *local_14;
  int local_10;
  uint local_c;
  ushort *local_8;
  
  local_18 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  if (param_7 == 0) {
    local_10 = *local_18;
  }
  else {
    local_10 = *local_18;
    iVar4 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538bd9;
  }
  iVar4 = this->field_003C;
LAB_00538bd9:
  local_10 = local_10 - iVar4;
  if (param_8 == 0) {
    local_c = local_18[1] - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = local_18[1] - DAT_00806734;
  }
  else {
    local_c = local_18[1] - this->field_0044;
  }
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,param_2,param_3,(int *)0x0,1);
      uVar3 = local_c;
      iVar4 = local_10;
      pPVar2 = local_14;
      DibPut((undefined4 *)local_14->field_0068,local_10,local_c,param_2,(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(param_4,pPVar2->field_0068,0,iVar4,uVar3,local_18[2],local_18[3]);
      uVar5 = (*(code *)param_6)(param_1);
      iVar7 = -1;
      iVar4 = -2;
      puVar6 = (uint *)FUN_006b0140(param_5,HINSTANCE_00807618);
      ccFntTy::WrStr(param_4,puVar6,iVar4,iVar7,uVar5);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pPVar2->field_0060,0xffffffff,pPVar2->field_003C,pPVar2->field_0044);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0xcc,0,iVar4,&DAT_007a4ccc,
                               s_PanelTy__PaintTxtBut_007c7444);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_panel_cpp_007c7390,0xcc);
  }
  return;
}

