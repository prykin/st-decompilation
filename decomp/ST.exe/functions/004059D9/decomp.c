
undefined4 __thiscall
STAllPlayersC::RegisterGroup(STAllPlayersC *this,char param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint *puStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  puStack_c = *(uint **)((int)&DAT_007f4e24 + param_1 * 0xa62 + 1);
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_3 == 0) {
      FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x690);
    }
    puVar2 = puStack_c;
    uVar4 = FUN_006acc70((int)puStack_c,param_2 & 0xffff,&iStack_8);
    if ((uVar4 != 0xfffffffc) && (iStack_8 != 0)) {
      FUN_006a5e40(-0x5001fffa,DAT_007ed77c,0x7a6004,0x692);
    }
    FUN_006ae140(puVar2,param_2 & 0xffff,&param_3);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x695,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar3,0,0x7a6004,0x696);
  return 0xffffffff;
}

