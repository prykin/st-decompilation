
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CreateCtrls */

void __thiscall FSGSTy::CreateCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  FSGSTy *local_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    switch(local_8[0x1a5f]) {
    case (FSGSTy)0x2:
      LoginCtrls(local_8);
      pFVar2[0x1a62] = (FSGSTy)0x1;
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x3:
      LicCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x4:
      NewIDCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x5:
      PswCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x6:
      ChatCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x7:
      NewGameCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x8:
      JoinGameCtrls(local_8);
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    case (FSGSTy)0x9:
      LadderCtrls(local_8);
      break;
    case (FSGSTy)0xa:
      InfoCtrls(local_8,unaff_ESI);
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

