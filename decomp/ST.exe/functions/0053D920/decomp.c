
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintTxtBut */

void __thiscall
UPanelTy::PaintTxtBut
          (UPanelTy *this,int param_1,byte param_2,char *param_3,ccFntTy *param_4,UINT param_5,
          undefined *param_6)

{
  code *pcVar1;
  UPanelTy *pUVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  InternalExceptionFrame local_5c;
  int *local_18;
  int local_14;
  UPanelTy *local_10;
  int local_c;
  ushort *local_8;
  
  local_18 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  local_14 = *local_18 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_c = local_18[1] + *(int *)(this + 0x48);
  }
  else {
    local_c = local_18[1] - *(int *)(this + 0x44);
  }
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,param_2,param_3,(int *)0x0,1);
      iVar6 = local_c;
      pUVar2 = local_10;
      iVar3 = local_14;
      thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x68),local_14,local_c,param_2,(byte *)local_8)
      ;
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(param_4,*(int *)(pUVar2 + 0x68),0,iVar3,iVar6,local_18[2],local_18[3]);
      uVar4 = (*(code *)param_6)(param_1);
      iVar6 = -1;
      iVar3 = -2;
      puVar5 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrStr(param_4,puVar5,iVar3,iVar6,uVar4);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(pUVar2 + 0x60),0xffffffff,*(uint *)(pUVar2 + 0x3c),
                 *(uint *)(pUVar2 + 0x44));
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x3e,0,iVar3,&DAT_007a4ccc,
                               s_UPanelTy__PaintTxtBut_007c78b0);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x3e);
  }
  return;
}

