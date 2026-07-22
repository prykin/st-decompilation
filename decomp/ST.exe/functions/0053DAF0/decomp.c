#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintIBut */

void __thiscall
UPanelTy::PaintIBut(UPanelTy *this,AnonShape_0053DAF0_3BDC2979 *param_1,char *param_2,UINT param_3)

{
  code *pcVar1;
  UPanelTy *pUVar2;
  undefined4 *errorCode;
  undefined4 uVar3;
  LPSTR text;
  ushort *puVar4;
  uint *resourceString;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_58;
  AnonNested_0053DAF0_0018_BAFC63C8 *local_14;
  UPanelTy *local_10;
  int local_c;
  uint local_8;

  local_14 = param_1->field_0018;
  local_c = local_14->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_8 = this->field_0048 + local_14->field_0004;
  }
  else {
    local_8 = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  errorCode = (undefined4 *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pUVar2 = local_10;
  if (errorCode == (undefined4 *)0x0) {
    iVar7 = 1;
    uVar5 = 0xffffffff;
    puVar8 = errorCode;
    puVar10 = errorCode;
    uVar3 = thunk_FUN_00529fe0((int)param_1);
    bVar6 = (byte)errorCode;
    text = FUN_006f2c00(param_2,1,uVar3);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,text,uVar5,bVar6,iVar7,(int)puVar8,puVar10);
    uVar5 = local_8;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pUVar2->field_0068,local_c,local_8,'\x01',(byte *)puVar4);
    ccFntTy::SetSurf(*(ccFntTy **)&PTR_00802a28->field_0x24,pUVar2->field_0068,0,local_c,uVar5,
                     local_14->field_0008,local_14->field_000C);
    uVar3 = thunk_FUN_00529fe0((int)param_1);
    iVar9 = -1;
    iVar7 = -2;
    resourceString = (uint *)LoadResourceString(param_3,g_module_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&PTR_00802a28->field_0x24,resourceString,iVar7,iVar9,uVar3);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,
               pUVar2->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x51,0,(int)errorCode,
                             "%s","UPanelTy::PaintIBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\specpan.cpp",0x51);
  return;
}

