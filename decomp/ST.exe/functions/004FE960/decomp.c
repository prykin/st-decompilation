
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoBoat */

void __thiscall CPanelTy::PaintInfoBoat(CPanelTy *this)

{
  byte bVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  undefined4 extraout_EAX;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  AnonShape_006B5B10_E0D06CF1 *pAVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintInfoBoat_007c2440);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a);
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
    pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,1);
    pAVar8 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0188;
  }
  else {
    if (DAT_0080874e == '\x03') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_018C,0,0,'\x06',
             (byte *)this_00->field_0980);
      goto LAB_004fea77;
    }
    pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_029E,0);
    pAVar8 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0188;
  }
  DibPut(pAVar8,0,0,'\x01',pbVar5);
LAB_004fea77:
  PaintDeep(this_00,1);
  if (this_00->field_0B63 == '\x02') {
    uVar9 = *(undefined4 *)(this_00->field_0B95 + 0xc);
    LoadResourceString(0x36b9,HINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s_0_d_007c245c,extraout_EAX,uVar9);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                     *(int *)(this_00->field_0958 + 2) + -4,0x2d);
    ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  cVar7 = this_00->field_0B63;
  if (((cVar7 == '\x01') || (cVar7 == '\x04')) || (cVar7 == '\x03')) {
    PaintName(this_00,1);
    PaintLife(this_00,1);
    iVar3 = this_00->field_0B66;
    if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      if (this_00->field_0B81 != 0) {
        uVar4 = thunk_FUN_00526ba0(this_00->field_0B81,this_00->field_0B85);
        pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BE,
                                      uVar4);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0xb,0x31,'\x01',pbVar5);
        FUN_006b4170((AnonShape_006C7610_838EDECF *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
        bVar1 = this_00->field_0B86;
        cVar7 = (char)(((uint)bVar1 * 0x21) / 100);
        local_8 = CONCAT31(local_8._1_3_,cVar7);
        if ((bVar1 != 0) && (cVar7 == '\0')) {
          local_8 = CONCAT31(local_8._1_3_,1);
        }
        if (bVar1 < 0x46) {
          iVar3 = (-(uint)(bVar1 < 0x14) & 5) + 5;
        }
        else {
          iVar3 = 0;
        }
        uVar4 = local_8 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0184,0,0x3c,0x52 - uVar4,
                   (byte *)this_00->field_028A,0,iVar3,*(int *)(this_00->field_028A + 4) - uVar4,5,
                   uVar4);
        pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,10,0x30,'\x06',pbVar5);
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
              (DAT_008075a8,this_00->field_0148,0xffffffff,this_00->field_003C,
               *(uint *)&this_00->field_0x94);
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

