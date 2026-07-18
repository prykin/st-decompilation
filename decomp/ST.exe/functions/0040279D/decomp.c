
void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  FSGSTy *pFStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pFStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  pFVar2 = pFStack_8;
  if (iVar3 == 0) {
    switch(pFStack_8[0x1a5f]) {
    case (FSGSTy)0x2:
      LoginCtrls(pFStack_8);
      pFVar2[0x1a62] = (FSGSTy)0x1;
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x3:
      LicCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x4:
      NewIDCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x5:
      PswCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x6:
      ChatCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x7:
      NewGameCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x8:
      JoinGameCtrls(pFStack_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x9:
      LadderCtrls(pFStack_8);
      break;
    case (FSGSTy)0xa:
      InfoCtrls(pFStack_8,unaff_ESI);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582,0,iVar3,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar3,0,0x7cbf70,0x582);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

