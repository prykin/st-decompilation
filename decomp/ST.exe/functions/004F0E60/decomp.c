#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::PaintBldBut */

void __thiscall BldObjPanelTy::PaintBldBut(BldObjPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  int *piVar1;
  code *pcVar2;
  BldObjPanelTy *pBVar3;
  int iVar4;
  uint uVar5;
  int errorCode;
  byte *pbVar6;
  int iVar7;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar8;
  InternalExceptionFrame local_5c;
  int local_18;
  BldObjPanelTy *local_14;
  int local_10;
  ushort *local_c;
  Global_sub_00526BA0_param_1Enum *local_8;

  piVar1 = param_1->field_0018;
  local_18 = *piVar1 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = piVar1[1] - DAT_00806734;
  }
  else {
    local_10 = piVar1[1] - this->field_0044;
  }
  uVar5 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar7 = (&this->field_027E)[(byte)this->field_0278];
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar5)) {
    local_8 = (Global_sub_00526BA0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar7 + 8) * uVar5 + *(int *)(iVar7 + 0x1c));
  }
  local_14 = this;
  if ((param_1->field_0014 == 0) || (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0)) {
    local_c = this->field_027A;
  }
  else {
    if ((char)local_8[2] == 0) {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_018C;
    }
    else {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0188;
    }
    uVar5 = thunk_FUN_00526ba0(*local_8,*(byte *)((int)local_8 + 9));
    local_c = (ushort *)FUN_0070b3a0(pAVar8,uVar5);
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  iVar4 = local_10;
  pBVar3 = local_14;
  iVar7 = local_18;
  if (errorCode == 0) {
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_14->field_0068,local_18,local_10,'\x01',
           (byte *)local_c);
    if ((param_1->field_0014 == 3) && (local_8 != (Global_sub_00526BA0_param_1Enum *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pBVar3->field_0190,
                                    9 - (uint)((char)local_8[2] != 0));
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pBVar3->field_0068,iVar7,iVar4,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
               pBVar3->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\bldobj.cpp",0x92,0,errorCode,"%s"
                             ,"BldObjPanelTy::PaintBldBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldobj.cpp",0x92);
  return;
}

