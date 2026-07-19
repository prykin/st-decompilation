
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintInfoObj */

void __thiscall CPanelTy::PaintInfoObj(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 *puVar6;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xb5,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintInfoObj_007c2468);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xb5);
    return;
  }
  thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x1a0),0,0,'\x01',*(byte **)(local_8 + 0xb43));
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x19c),0,0,'\x01',*(byte **)(this_00 + 0xb47));
  if (*(int *)(this_00 + 0x2e6) != 0) {
    thunk_FUN_004f1890(this_00,1);
  }
  if (this_00[0xc51] == (CPanelTy)0x0) {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x73,0,'\x06',*(byte **)(this_00 + 0x9f9)
                        );
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x29e),1);
    puVar6 = *(undefined4 **)(this_00 + 0x198);
  }
  else {
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x194),0x73,0,'\x06',*(byte **)(this_00 + 0xa01)
                        );
      goto LAB_004fef26;
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x29e),0);
    puVar6 = *(undefined4 **)(this_00 + 0x198);
  }
  thunk_FUN_00540760(puVar6,0,0,'\x01',pbVar4);
LAB_004fef26:
  PaintDeep(this_00,0);
  CVar1 = this_00[0xc51];
  if (((CVar1 == (CPanelTy)0x1) || (CVar1 == (CPanelTy)0x4)) || (CVar1 == (CPanelTy)0x3)) {
    PaintName(this_00,0);
    iVar3 = *(int *)(this_00 + 0xc54);
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      PaintLife(this_00,0);
    }
    iVar3 = *(int *)(this_00 + 0xc54);
    if (((iVar3 != 0xdd) && (iVar3 != 0xde)) && (iVar3 != 0xe0)) {
      PaintWeap(this_00,0);
    }
    if ((DAT_0080874e == '\x03') && (this_00[0xc58] == (CPanelTy)0x3)) {
      PaintEnergy(this_00,0);
    }
  }
  if (-1 < (int)*(uint *)(this_00 + 0x168)) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x168),0xffffffff,*(uint *)(this_00 + 0x5c),
               *(uint *)(this_00 + 0xb4));
  }
  if (-1 < (int)*(uint *)(this_00 + 0x164)) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
               *(uint *)(this_00 + 0xb0));
  }
  if ((DAT_0080874e != '\x03') && (-1 < (int)*(uint *)(this_00 + 0x160))) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(this_00 + 0x160),0xffffffff,*(uint *)(this_00 + 0x54),
               *(uint *)(this_00 + 0xac));
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

