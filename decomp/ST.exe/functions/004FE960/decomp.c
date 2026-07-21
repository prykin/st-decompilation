#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoBoat */

void __thiscall CPanelTy::PaintInfoBoat(CPanelTy *this)

{
  byte bVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  AnonShape_006B5B10_E0D06CF1 *pAVar9;
  dword dVar10;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x8a,0,iVar3,"%s",
                               "CPanelTy::PaintInfoBoat");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x8a);
    return;
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_0180,0,0,'\x01',(byte *)local_c->field_0954);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0,'\x01',(byte *)this_00->field_0958);
  if (this_00->field_02E2 != 0) {
    thunk_FUN_004f1890(this_00,0);
  }
  if (this_00->field_0B63 == '\0') {
    if (DAT_0080874e == '\x03') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,0,0,'\x06',
             (byte *)this_00->field_0978);
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,1);
    pAVar9 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0188;
  }
  else {
    if (DAT_0080874e == '\x03') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,0,0,'\x06',
             (byte *)this_00->field_0980);
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,0);
    pAVar9 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0188;
  }
  DibPut(pAVar9,0,0,'\x01',pbVar6);
LAB_004fea77:
  PaintDeep(this_00,1);
  if (this_00->field_0B63 == '\x02') {
    dVar10 = this_00->field_0B95->count;
    pcVar4 = LoadResourceString(0x36b9,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"&1%s&0%d",pcVar4,dVar10);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                     *(int *)(this_00->field_0958 + 2) + -4,0x2d);
    ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  cVar8 = this_00->field_0B63;
  if (((cVar8 == '\x01') || (cVar8 == '\x04')) || (cVar8 == '\x03')) {
    PaintName(this_00,1);
    PaintLife(this_00,1);
    iVar3 = this_00->field_0B66;
    if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != 0) {
        uVar5 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81,
                                   this_00->field_0xb85);
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BE,
                                      uVar5);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0xb,0x31,'\x01',pbVar6);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
        bVar1 = this_00->field_0xb86;
        cVar8 = (char)(((uint)bVar1 * 0x21) / 100);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,cVar8);
        if ((bVar1 != 0) && (cVar8 == '\0')) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,1);
        }
        if (bVar1 < 0x46) {
          iVar3 = (-(uint)(bVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar3 = 0;
        }
        uVar5 = local_8 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0x3c,0x52 - uVar5,
                   (byte *)this_00->field_028A,0,iVar3,*(int *)(this_00->field_028A + 4) - uVar5,5,
                   uVar5);
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,10,0x30,'\x06',pbVar6);
      }
    }
    else {
      PaintWeap(this_00,1);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) {
      PaintEnergy(this_00,1);
    }
  }
  if (-1 < (int)this_00->field_0148) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_0148,0xffffffff,this_00->field_003C,this_00->field_0094);
  }
  if (-1 < (int)this_00->field_014C) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,this_00->field_0098);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)this_00->field_0150)) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,this_00->field_0150,0xffffffff,this_00->field_0044,this_00->field_009C);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

