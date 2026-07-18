
void __cdecl thunk_FUN_0055dbf0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 in_stack_fffffbb8;
  undefined4 uStack_48;
  undefined4 auStack_44 [16];
  
  uStack_48 = DAT_00858df8;
  DAT_00858df8 = &uStack_48;
  iVar2 = __setjmp3(auStack_44,0,unaff_ESI,in_stack_fffffbb8);
  if (iVar2 == 0) {
    FUN_006b0ba0((int)param_1,&stack0xfffffbb8,0,0x100);
    FUN_007192d0(param_1,(undefined4 *)&stack0xfffffbb8,0,0x100,param_2,param_3);
    DAT_00858df8 = (undefined4 *)uStack_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_48;
  iVar3 = FUN_006ad4d0(s_E____titans_paltool_cpp_007c95d8,0x1d,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c95d8,0x1f);
  return;
}

