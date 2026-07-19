
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoBoat */

void __thiscall CPanelTy::PaintInfoBoat(CPanelTy *this)

{
  byte bVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 uVar10;
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
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintInfoBoat_007c2440);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x8a);
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)&local_c->field_0x180,0,0,'\x01',
                     *(byte **)&local_c->field_0x954);
  thunk_FUN_00540760((undefined4 *)this_00->field_0184,0,0,'\x01',*(byte **)&this_00->field_0x958);
  if (*(int *)&this_00->field_0x2e2 != 0) {
    thunk_FUN_004f1890(this_00,0);
  }
  if (this_00->field_0B63 == '\0') {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760((undefined4 *)this_00->field_018C,0,0,'\x06',
                         *(byte **)&this_00->field_0x978);
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x29e,1);
    puVar9 = *(undefined4 **)&this_00->field_0x188;
  }
  else {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760((undefined4 *)this_00->field_018C,0,0,'\x06',
                         *(byte **)&this_00->field_0x980);
      goto LAB_004fea77;
    }
    pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x29e,0);
    puVar9 = *(undefined4 **)&this_00->field_0x188;
  }
  thunk_FUN_00540760(puVar9,0,0,'\x01',pbVar6);
LAB_004fea77:
  PaintDeep(this_00,1);
  if (this_00->field_0B63 == '\x02') {
    uVar10 = *(undefined4 *)(*(int *)&this_00->field_0xb95 + 0xc);
    uVar4 = FUN_006b0140(0x36b9,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s__1_s_0_d_007c245c,uVar4,uVar10);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0184,0,2,0xf,
                     *(int *)(*(int *)&this_00->field_0x958 + 4) + -4,0x2d);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,&DAT_0080f33a,-2,-1,0,-1,-1);
  }
  cVar8 = this_00->field_0B63;
  if (((cVar8 == '\x01') || (cVar8 == '\x04')) || (cVar8 == '\x03')) {
    PaintName(this_00,1);
    PaintLife(this_00,1);
    iVar3 = *(int *)&this_00->field_0xb66;
    if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != 0) {
        uVar5 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81,
                                   this_00->field_0xb85);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2be,uVar5);
        thunk_FUN_00540760((undefined4 *)this_00->field_0184,0xb,0x31,'\x01',pbVar6);
        FUN_006b4170(this_00->field_0184,0,0x3b,0x31,7,0x21,0);
        bVar1 = this_00->field_0xb86;
        cVar8 = (char)(((uint)bVar1 * 0x21) / 100);
        local_8 = CONCAT31(local_8._1_3_,cVar8);
        if ((bVar1 != 0) && (cVar8 == '\0')) {
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
                  ((undefined4 *)this_00->field_0184,0,0x3c,0x52 - uVar5,
                   *(int *)&this_00->field_0x28a,0,iVar3,
                   *(int *)(*(int *)&this_00->field_0x28a + 8) - uVar5,5,uVar5);
        pbVar6 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ca,1);
        thunk_FUN_00540760((undefined4 *)this_00->field_0184,10,0x30,'\x06',pbVar6);
      }
    }
    else {
      PaintWeap(this_00,1);
    }
    if ((DAT_0080874e == '\x03') && (this_00->field_0xb6a == '\x03')) {
      PaintEnergy(this_00,1);
    }
  }
  if (-1 < (int)*(uint *)&this_00->field_0x148) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x148,0xffffffff,*(uint *)&this_00->field_0x3c,
               *(uint *)&this_00->field_0x94);
  }
  if (-1 < (int)*(uint *)&this_00->field_0x14c) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
               this_00->field_0098);
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)*(uint *)&this_00->field_0x150)) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_00->field_0x150,0xffffffff,*(uint *)&this_00->field_0x44,
               *(uint *)&this_00->field_0x9c);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

