#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoat

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::PaintCtrlBoat(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  AnonShape_006B5B10_E0D06CF1 *pAVar4;
  ushort *puVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x95,0,iVar2,"%s",
                               "CPanelTy::PaintCtrlBoat");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x95);
    return;
  }
  switch(local_8->field_0B9E) {
  case CASE_0:
  case CASE_4:
    puVar5 = local_8->field_0974;
    pAVar4 = (AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C;
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_00501758;
  case CASE_1:
    if ((local_8->field_0B99 == 9) || (local_8->field_0B99 == 0x15)) {
      puVar5 = local_8->field_0978;
      pAVar4 = (AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C;
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_00501758;
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C,0,0,'\x01',(byte *)local_8->field_097C
          );
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,
           (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C)->field_0004 -
           *(int *)(this_00->field_0984 + 2)) / 2,0x61,'\x01',(byte *)this_00->field_0984);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,
           (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C)->field_0004 -
           *(int *)(this_00->field_0988 + 2)) / 2,0x7c,'\x01',(byte *)this_00->field_0988);
    break;
  case CASE_2:
    if ((local_8->field_0B99 == 9) || (local_8->field_0B99 == 0x15)) {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C,0,0,'\x01',
             (byte *)local_8->field_0978);
    }
    else {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C,0,0,'\x01',
             (byte *)local_8->field_097C);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,
             (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C)->field_0004 -
             *(int *)(this_00->field_0988 + 2)) / 2,0x7c,'\x01',(byte *)this_00->field_0988);
    }
switchD_0050162e_caseD_a:
    puVar5 = this_00->field_0984;
    pAVar4 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C;
    iVar3 = 0x61;
    iVar2 = (pAVar4->field_0004 - *(int *)(puVar5 + 2)) / 2;
LAB_00501758:
    DibPut(pAVar4,iVar2,iVar3,'\x01',(byte *)puVar5);
    break;
  case CASE_3:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_018C,0,0,'\x01',(byte *)local_8->field_0974
          );
    switch(this_00->field_0B99) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      break;
    default:
      goto switchD_0050162e_caseD_a;
    }
  }
  if (this_00->field_0B9E == CASE_1) {
    switch(this_00->field_0B99) {
    case CASE_8:
    case CASE_14:
      PaintBCapacity(this_00);
      break;
    case CASE_16:
    case CASE_17:
    case CASE_25:
      goto switchD_0050179b_caseD_16;
    }
  }
  else {
    if ((this_00->field_0B9E != CASE_4) || (this_00->field_0B99 != 0xaf))
    goto switchD_0050179b_caseD_9;
switchD_0050179b_caseD_16:
    PaintBEnergy(this_00);
  }
switchD_0050179b_caseD_9:
  if (-1 < (int)this_00->field_0154) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_0154,0xffffffff,this_00->field_0048,this_00->field_00A0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

