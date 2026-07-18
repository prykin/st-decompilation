
undefined4 thunk_FUN_006452a0(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int aiStack_10 [3];
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar3 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x4a1,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7d25c0,0x4a2);
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    aiStack_10[0] = param_1;
    aiStack_10[1] = 0;
    FUN_006ae1c0(*(uint **)(aiStack_10[2] + 0x241),aiStack_10);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return 0;
  }
  FUN_006acc70(*(int *)(aiStack_10[2] + 0x241),param_2,aiStack_10);
  if (aiStack_10[0] == param_1) {
    aiStack_10[1] = 0;
    FUN_006ae140(*(uint **)(aiStack_10[2] + 0x241),param_2,aiStack_10);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return 0;
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7d25c0,0x49e);
  DAT_00858df8 = (undefined4 *)uStack_54;
  return 0;
}

