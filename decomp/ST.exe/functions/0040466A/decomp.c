
uint * __cdecl thunk_FUN_0067e0e0(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  byte *pbStack_8;
  
  pbStack_8 = (byte *)0x0;
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2fa4,0x197);
    }
    pCVar3 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_2);
    puVar4 = thunk_FUN_0067dc20(param_1,0,pCVar3,param_3);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return puVar4;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x19a,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (uint *)(*pcVar1)();
    return puVar4;
  }
  FUN_006ae110(pbStack_8);
  FUN_006a5e40(iVar2,0,0x7d2fa4,0x19c);
  return (uint *)0x0;
}

