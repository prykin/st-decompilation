#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelWB

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::Update2PanelWB(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  uint uVar2;
  code *pcVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  CPanelTy_field_0B99State *pCVar6;
  AnonShape_00501D00_04A7E309 *pAVar7;
  InternalExceptionFrame local_a8;
  AnonShape_00501D00_04A7E309 local_64;
  CPanelTy *local_8;

  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x13e,0,iVar4,"%s"
                               ,"CPanelTy::Update2PanelWB");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x13e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_8->field_0B99;
  pCVar6 = pCVar1;
  pAVar7 = &local_64;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(CPanelTy_field_0B99State *)pAVar7 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pAVar7 = (AnonShape_00501D00_04A7E309 *)&pAVar7->field_0x4;
  }
  memset(pCVar1, 0, 0x5c); /* compiler bulk-zero initialization */
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (local_64._5_1_ != this_00->field_0B9E) {
cf_common_exit_00502155:
    PaintCtrlBoat(this_00);
    SetControlBoat(this_00);
    thunk_FUN_00501a10((AnonShape_00501A10_7BD31715 *)this_00);
    g_currentExceptionFrame = local_a8.previous;
    return;
  }
  switch(this_00->field_0B9E) {
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_1:
    if ((local_64._0_4_ != this_00->field_0B99) || (local_64._4_1_ != this_00->field_0B9D))
    goto cf_common_exit_00502155;
    thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_64);
    switch(this_00->field_0B99) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case CASE_8:
    case CASE_14:
      if (((this_00->field_0BB6 == local_64._29_1_) && (this_00->field_0BB5 == local_64._28_1_)) &&
         (this_00->field_0BB7 == local_64._30_1_)) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      PaintBCapacity(this_00);
      uVar2 = this_00->field_0154;
      break;
    default:
      goto switchD_0050207d_default;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case CASE_16:
    case CASE_17:
    case CASE_25:
      if (this_00->field_0BCD == local_64._52_1_) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      PaintBEnergy(this_00);
      uVar2 = this_00->field_0154;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_2:
  case CASE_3:
    if (local_64._0_4_ == this_00->field_0B99) {
      thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_64);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    goto cf_common_exit_00502155;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_4:
    if (local_64._0_4_ != this_00->field_0B99) goto cf_common_exit_00502155;
    if (this_00->field_0B99 != 0xaf) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    PaintBEnergy(this_00);
    uVar2 = this_00->field_0154;
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)uVar2) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,uVar2,0xffffffff,this_00->field_0048,this_00->field_00A0);
  }
switchD_0050207d_default:
  g_currentExceptionFrame = local_a8.previous;
  return;
}

