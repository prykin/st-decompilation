
undefined4 __thiscall STAllPlayersC::RegisterMine(STAllPlayersC *this,ushort param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if (param_2 == (void *)0x0) {
      FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x2f05);
    }
    if (param_1 == 0xffff) {
      param_1 = (ushort)DAT_007fa158[3];
    }
    else {
      uVar3 = FUN_006acc70((int)DAT_007fa158,(uint)param_1,&iStack_8);
      if ((uVar3 != 0xfffffffc) && (iStack_8 != 0)) {
        FUN_006a5e40(-0x5001fffa,DAT_007ed77c,0x7a6004,0x2f07);
      }
    }
    FUN_006ae140(DAT_007fa158,(uint)param_1,&param_2);
    thunk_FUN_00419c50(param_2,param_1);
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2f0d,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar2,0,0x7a6004,0x2f0e);
  return 0xffffffff;
}

