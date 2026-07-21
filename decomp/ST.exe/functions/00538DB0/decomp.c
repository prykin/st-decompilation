#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::PaintIBut */

void __thiscall
PanelTy::PaintIBut(PanelTy *this,AnonShape_00538DB0_574DDCD0 *param_1,char *param_2,UINT param_3,
                  int param_4,int param_5)

{
  code *pcVar1;
  PanelTy *pPVar2;
  undefined4 *errorCode;
  undefined4 uVar3;
  LPSTR text;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_58;
  AnonNested_00538DB0_0018_D0DE3542 *local_14;
  PanelTy *local_10;
  uint local_c;
  int local_8;

  local_14 = param_1->field_0018;
  if (param_4 == 0) {
    local_8 = local_14->field_0000;
  }
  else {
    local_8 = local_14->field_0000;
    iVar8 = g_nWidth_00806730;
    if (this->field_005C == 0) goto LAB_00538de2;
  }
  iVar8 = this->field_003C;
LAB_00538de2:
  local_8 = local_8 - iVar8;
  if (param_5 == 0) {
    local_c = local_14->field_0004 - this->field_0044;
  }
  else if (this->field_005C == 0) {
    local_c = local_14->field_0004 - DAT_00806734;
  }
  else {
    local_c = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  errorCode = (undefined4 *)Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pPVar2 = local_10;
  if (errorCode != (undefined4 *)0x0) {
    g_currentExceptionFrame = local_58.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0xdf,0,(int)errorCode,
                               "%s","PanelTy::PaintIBut");
    if (iVar8 == 0) {
      RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\panel.cpp",0xdf);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar8 = 1;
  uVar6 = 0xffffffff;
  puVar9 = errorCode;
  puVar11 = errorCode;
  uVar3 = thunk_FUN_00529fe0((int)param_1);
  bVar7 = (byte)errorCode;
  text = FUN_006f2c00(param_2,1,uVar3);
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_1,text,uVar6,bVar7,iVar8,(int)puVar9,puVar11);
  uVar6 = local_c;
  DibPut((AnonShape_006B5B10_E0D06CF1 *)pPVar2->field_0068,local_8,local_c,'\x01',(byte *)puVar4);
  ccFntTy::SetSurf(*(ccFntTy **)&PTR_00802a28->field_0x24,pPVar2->field_0068,0,local_8,uVar6,
                   local_14->field_0008,local_14->field_000C);
  uVar3 = thunk_FUN_00529fe0((int)param_1);
  iVar10 = -1;
  iVar8 = -2;
  puVar5 = (uint *)LoadResourceString(param_3,HINSTANCE_00807618);
  ccFntTy::WrStr(*(ccFntTy **)&PTR_00802a28->field_0x24,puVar5,iVar8,iVar10,uVar3);
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,pPVar2->field_0060,0xffffffff,pPVar2->field_003C,pPVar2->field_0044
            );
  g_currentExceptionFrame = local_58.previous;
  return;
}

