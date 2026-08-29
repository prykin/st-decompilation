#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelWB

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::Update2PanelWB(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  ushort *puVar2;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  CPanelTy_field_0B99State *pCVar7;
  RecoveredRecord_CPanelTy_00501D00 *pRVar8;
  InternalExceptionFrame local_a8;
  RecoveredRecord_CPanelTy_00501D00 local_64;
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
  pCVar7 = pCVar1;
  pRVar8 = &local_64;
  memmove(pRVar8, pCVar7, 0x5c); /* compiler REP MOVS byte copy */
  memset(pCVar1, 0, 0x5c); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[00502058]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  STAllPlayersC::GetPanelInfo
            (g_allPlayers_007FA174,2,(RecoveredRecordView_0043BEB0_8330D129 *)pCVar1);
  if (STPiece<5,1>(local_64) != this_00->field_0B9E) {
cf_common_exit_00502155:
    /* ST_CALLSITE[00502157]: CALL 0x004022cf; direct=004022CF CPanelTy::PaintCtrlBoat */
    PaintCtrlBoat(this_00);
    /* ST_CALLSITE[0050215E]: CALL 0x0040556f; direct=0040556F CPanelTy::SetControlBoat */
    SetControlBoat(this_00);
    /* ST_CALLSITE[00502165]: CALL 0x0040135c; direct=0040135C CPanelTy::sub_00501A10 */
    sub_00501A10(this_00);
    g_currentExceptionFrame = local_a8.previous;
    return;
  }
  switch(this_00->field_0B9E) {
  case CASE_1:
    if ((STPiece<0,4>(local_64) != this_00->field_0B99) || (STPiece<4,1>(local_64) != this_00->field_0B9D))
    goto cf_common_exit_00502155;
    /* ST_CALLSITE[005020B3]: CALL 0x00403fee; direct=00403FEE CPanelTy::sub_00501D00 */
    sub_00501D00(this_00,(RecoveredRecordView_00501D00_08D99E75 *)&this_00->field_0B99,&local_64);
    switch(this_00->field_0B99) {
    case CASE_8:
    case CASE_14:
      if (((this_00->field_0BB6 == STPiece<29,1>(local_64)) && (this_00->field_0BB5 == STPiece<28,1>(local_64))) &&
         (this_00->field_0BB7 == STPiece<30,1>(local_64))) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      /* ST_CALLSITE[0050212D]: CALL 0x004017df; direct=004017DF CPanelTy::PaintBCapacity */
      PaintBCapacity(this_00);
      puVar2 = this_00->field_0148[3];
      break;
    default:
      goto switchD_0050207d_default;
    case CASE_16:
    case CASE_17:
    case CASE_25:
      if (this_00->field_0BCD == STPiece<52,1>(local_64)) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      /* ST_CALLSITE[005020E8]: CALL 0x004056af; direct=004056AF CPanelTy::PaintBEnergy */
      PaintBEnergy(this_00);
      puVar2 = this_00->field_0148[3];
    }
    break;
  case CASE_2:
  case CASE_3:
    if (STPiece<0,4>(local_64) == this_00->field_0B99) {
      /* ST_CALLSITE[00502184]: CALL 0x00403fee; direct=00403FEE CPanelTy::sub_00501D00 */
      sub_00501D00(this_00,(RecoveredRecordView_00501D00_08D99E75 *)&this_00->field_0B99,&local_64);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    goto cf_common_exit_00502155;
  case CASE_4:
    if (STPiece<0,4>(local_64) != this_00->field_0B99) goto cf_common_exit_00502155;
    if (this_00->field_0B99 != CASE_AF) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    /* ST_CALLSITE[005021B2]: CALL 0x004056af; direct=004056AF CPanelTy::PaintBEnergy */
    PaintBEnergy(this_00);
    puVar2 = this_00->field_0148[3];
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)puVar2) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,this_00->field_0048,
               this_00->field_00A0);
  }
switchD_0050207d_default:
  g_currentExceptionFrame = local_a8.previous;
  return;
}

