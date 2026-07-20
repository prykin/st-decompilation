
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintIBut */

void __thiscall UPanelTy::PaintIBut(UPanelTy *this,int param_1,char *param_2,UINT param_3)

{
  code *pcVar1;
  UPanelTy *pUVar2;
  undefined4 *errorCode;
  undefined4 uVar3;
  LPSTR text;
  ushort *puVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_58;
  int *local_14;
  UPanelTy *local_10;
  int local_c;
  uint local_8;
  
  local_14 = *(int **)(param_1 + 0x18);
  local_c = *local_14 - this->field_003C;
  if (this->field_005C == 0) {
    local_8 = this->field_0048 + local_14[1];
  }
  else {
    local_8 = local_14[1] - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  errorCode = (undefined4 *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pUVar2 = local_10;
  if (errorCode == (undefined4 *)0x0) {
    iVar8 = 1;
    uVar6 = 0xffffffff;
    puVar9 = errorCode;
    puVar11 = errorCode;
    uVar3 = thunk_FUN_00529fe0(param_1);
    bVar7 = (byte)errorCode;
    text = FUN_006f2c00(param_2,1,uVar3);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,text,uVar6,bVar7,iVar8,(int)puVar9,puVar11);
    uVar6 = local_8;
    DibPut((undefined4 *)pUVar2->field_0068,local_c,local_8,'\x01',(byte *)puVar4);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),pUVar2->field_0068,0,local_c,uVar6,
                     local_14[2],local_14[3]);
    uVar3 = thunk_FUN_00529fe0(param_1);
    iVar10 = -1;
    iVar8 = -2;
    puVar5 = (uint *)FUN_006b0140(param_3,HINSTANCE_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar5,iVar8,iVar10,uVar3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,pUVar2->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x51,0,(int)errorCode,
                             &DAT_007a4ccc,s_UPanelTy__PaintIBut_007c78cc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x51);
  return;
}

