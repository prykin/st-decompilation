
int __cdecl FUN_0067db30(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2fa4,0x123);
    }
    FUN_006f17c0(0xc,param_2);
    DAT_00858df8 = (undefined4 *)local_48;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x126,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7d2fa4,0x127);
  return iVar2;
}

