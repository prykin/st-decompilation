#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::PaintBldBut */

void __thiscall
BldBoatPanelTy::PaintBldBut(BldBoatPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  code *pcVar1;
  BldBoatPanelTy *pBVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar7;
  InternalExceptionFrame local_60;
  int local_1c;
  BldBoatPanelTy *local_18;
  int *local_14;
  ushort *local_10;
  uint local_c;
  Global_sub_00526BA0_param_1Enum *local_8;

  local_14 = param_1->field_0018;
  local_1c = *local_14 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = local_14[1] - DAT_00806734;
  }
  else {
    local_c = local_14[1] - this->field_0044;
  }
  uVar3 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar6 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar6 == 0) || (*(uint *)(iVar6 + 0xc) <= uVar3)) {
    local_8 = (Global_sub_00526BA0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar6 + 8) * uVar3 + *(int *)(iVar6 + 0x1c));
  }
  local_18 = this;
  if ((param_1->field_0014 == 0) || (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0)) {
    local_10 = this->field_028E;
  }
  else {
    if ((char)local_8[2] == 0) {
      pAVar7 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_018C;
    }
    else {
      pAVar7 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0188;
    }
    uVar3 = thunk_FUN_00526ba0(*local_8,*(byte *)((int)local_8 + 9));
    local_10 = (ushort *)FUN_0070b3a0(pAVar7,uVar3);
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  uVar3 = local_c;
  pBVar2 = local_18;
  iVar6 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\bldboat.cpp",0x9e,0,iVar4,"%s",
                               "BldBoatPanelTy::PaintBldBut");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\bldboat.cpp",0x9e);
    return;
  }
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_18->field_0068,0,local_1c,local_c,local_14[2],
               local_14[3],0);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)pBVar2->field_0068,iVar6 + 1,uVar3 + 1,'\x01',
         (byte *)local_10);
  if (param_1->field_0014 == 3) {
    if (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0) goto LAB_004ef4e9;
    iVar4 = (-(uint)((char)local_8[2] != 0) & 2) + 3;
  }
  else {
    iVar4 = 4;
  }
  pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pBVar2->field_0190,iVar4);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)pBVar2->field_0068,iVar6,uVar3,'\x06',pbVar5);
  if ((((local_8 != (Global_sub_00526BA0_param_1Enum *)0x0) && (local_8[1] != 0)) &&
      ((char)local_8[2] != 0)) && (param_1->field_0014 != 0)) {
    wsprintfA(&pBVar2->field_0x6c,"%d",local_8[1]);
    ccFntTy::SetSurf(pBVar2->field_028A,pBVar2->field_0068,0,iVar6,uVar3,local_14[2],local_14[3]);
    ccFntTy::WrStr(pBVar2->field_028A,(uint *)&pBVar2->field_0x6c,-2,-1,0);
  }
LAB_004ef4e9:
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,pBVar2->field_0060,0xffffffff,pBVar2->field_003C,pBVar2->field_0044
            );
  g_currentExceptionFrame = local_60.previous;
  return;
}

