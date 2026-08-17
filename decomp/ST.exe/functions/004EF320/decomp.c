#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::PaintBldBut */

void __thiscall
BldBoatPanelTy::PaintBldBut(BldBoatPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  int iVar1;
  BldBoatPanelTy *pBVar3;
  uint uVar4;
  int iVar4;
  BITMAPINFO *pBVar5;
  int iVar6;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar6;
  int iVar7;
  InternalExceptionFrame local_60;
  int local_1c;
  BldBoatPanelTy *local_18;
  int *local_14;
  BITMAPINFO *local_10;
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
  uVar4 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar1 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar1 == 0) || (*(uint *)(iVar1 + 0xc) <= uVar4)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
  }
  local_18 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    local_10 = (BITMAPINFO *)this->field_028E;
  }
  else {
    if ((char)local_8[2] == 0) {
      pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_018C;
    }
    else {
      pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0188;
    }
    uVar4 = thunk_FUN_00526ba0(*local_8,STField<byte>(local_8,9));
    local_10 = FUN_0070b3a0(pAVar6,uVar4);
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  uVar4 = local_c;
  pBVar3 = local_18;
  iVar1 = local_1c;
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
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_18->field_0068,0,local_1c,local_c,local_14[2],
               local_14[3],0);
  /* ST_CALLSITE[004EF438]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)pBVar3->field_0068,iVar1 + 1,uVar4 + 1,'\x01',
         (byte *)local_10);
  if (param_1->field_0014 == 3) {
    if (local_8 == nullptr) goto LAB_004ef4e9;
    iVar7 = (-(uint)((char)local_8[2] != 0) & 2) + 3;
  }
  else {
    iVar7 = 4;
  }
  pBVar5 = FUN_0070b3a0(pBVar3->field_0190,iVar7);
  /* ST_CALLSITE[004EF47C]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)pBVar3->field_0068,iVar1,uVar4,'\x06',(byte *)pBVar5);
  if ((((local_8 != nullptr) && (local_8[1] != 0)) &&
      ((char)local_8[2] != 0)) && (param_1->field_0014 != 0)) {
    /* ST_CALLSITE[004EF4AD]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&pBVar3->field_006C,"%d",local_8[1]);
    ccFntTy::SetSurf(pBVar3->field_028A,pBVar3->field_0068,0,iVar1,uVar4,local_14[2],local_14[3]);
    ccFntTy::WrStr(pBVar3->field_028A,&pBVar3->field_006C,-2,-1,0);
  }
LAB_004ef4e9:
  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
             pBVar3->field_0044);
  g_currentExceptionFrame = local_60.previous;
  return;
}

