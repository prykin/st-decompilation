
LPSTR __cdecl FUN_0067e4a0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_44 [16];
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    iVar2 = 3;
    pCVar3 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_1);
    pCVar3 = FUN_006f2c00(pCVar3,iVar2,param_2);
    DAT_00858df8 = (undefined1 *)uVar5;
    return pCVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1d9,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    pCVar3 = (LPSTR)(*pcVar1)();
    return pCVar3;
  }
  FUN_006a5e40(iVar2,0,0x7d2fa4,0x1da);
  return (LPSTR)0x0;
}

