
undefined4 __thiscall STTorpC::ClearDangerous(STTorpC *this,int param_1,uint param_2)

{
  code *pcVar1;
  STTorpC *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int aiStack_10 [2];
  STTorpC *pSStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_torp_cpp_007d25c0,0x4a1,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7d25c0,0x4a2);
    return 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    aiStack_10[0] = param_1;
    aiStack_10[1] = 0;
    FUN_006ae1c0(*(uint **)(pSStack_8 + 0x241),aiStack_10);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return 0;
  }
  FUN_006acc70(*(int *)(pSStack_8 + 0x241),param_2,aiStack_10);
  if (aiStack_10[0] == param_1) {
    aiStack_10[1] = 0;
    FUN_006ae140(*(uint **)(pSVar2 + 0x241),param_2,aiStack_10);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return 0;
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7d25c0,0x49e);
  DAT_00858df8 = (undefined4 *)uStack_54;
  return 0;
}

