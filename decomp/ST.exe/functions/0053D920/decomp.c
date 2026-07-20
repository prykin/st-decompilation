
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintTxtBut
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0053D920 parameter used as this of ccFntTy::SetSurf @ 0053D9F2 | 0053D920 parameter
   used as this of ccFntTy::WrStr @ 0053DA19 */

void __thiscall
UPanelTy::PaintTxtBut
          (UPanelTy *this,AnonShape_0053D920_829E6B3B *param_1,byte param_2,char *param_3,
          ccFntTy *param_4,UINT param_5,undefined *param_6)

{
  code *pcVar1;
  UPanelTy *pUVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_5c;
  AnonNested_0053D920_0018_8DE8F5C2 *local_18;
  int local_14;
  UPanelTy *local_10;
  uint local_c;
  ushort *local_8;
  
  local_18 = param_1->field_0018;
  local_8 = (ushort *)0x0;
  local_14 = local_18->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = local_18->field_0004 + this->field_0048;
  }
  else {
    local_c = local_18->field_0004 - this->field_0044;
  }
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,param_2,param_3,(int *)0x0,1);
      uVar3 = local_c;
      pUVar2 = local_10;
      iVar4 = local_14;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)local_10->field_0068,local_14,local_c,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(param_4,pUVar2->field_0068,0,iVar4,uVar3,local_18->field_0008,
                       local_18->field_000C);
      uVar5 = (*(code *)param_6)(param_1);
      iVar7 = -1;
      iVar4 = -2;
      puVar6 = (uint *)FUN_006b0140(param_5,HINSTANCE_00807618);
      ccFntTy::WrStr(param_4,puVar6,iVar4,iVar7,uVar5);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,pUVar2->field_0044);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x3e,0,iVar4,&DAT_007a4ccc,
                               s_UPanelTy__PaintTxtBut_007c78b0);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x3e);
  }
  return;
}

