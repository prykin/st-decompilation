#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoObj */

void __thiscall CPanelTy::PaintInfoObj(CPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  AnonShape_006B5B10_E0D06CF1 *pAVar6;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0xb5,0,iVar3,"%s",
                               "CPanelTy::PaintInfoObj");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0xb5);
    return;
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_01A0,0,0,'\x01',(byte *)local_8->field_0B43);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_019C,0,0,'\x01',(byte *)this_00->field_0B47);
  if (this_00->field_02E6 != (ushort *)0x0) {
    thunk_FUN_004f1890(this_00,1);
  }
  if (this_00->field_0C51 == '\0') {
    if (DAT_0080874e == '\x03') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x73,0,'\x06',
             (byte *)this_00->field_09F9);
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,1);
    pAVar6 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0198;
  }
  else {
    if (DAT_0080874e == '\x03') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x73,0,'\x06',
             (byte *)this_00->field_0A01);
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,0);
    pAVar6 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0198;
  }
  DibPut(pAVar6,0,0,'\x01',pbVar4);
LAB_004fef26:
  PaintDeep(this_00,0);
  cVar1 = this_00->field_0C51;
  if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\x03')) {
    PaintName(this_00,0);
    iVar3 = this_00->field_0C54;
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      PaintLife(this_00,0);
    }
    iVar3 = this_00->field_0C54;
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      PaintWeap(this_00,0);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) {
      PaintEnergy(this_00,0);
    }
  }
  if (-1 < this_00->field_0168) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_0168,0xffffffff,this_00->field_005C,
               this_00->field_00B4);
  }
  if (-1 < this_00->field_0164) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
               this_00->field_00B0);
  }
  if ((DAT_0080874e != '\x03') && (-1 < this_00->field_0160)) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_0160,0xffffffff,this_00->field_0054,
               this_00->field_00AC);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

