
int thunk_FUN_0054cc20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_4c [16];
  int *piStack_c;
  undefined4 uStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(auStack_4c,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_0054cbb0(param_1,&uStack_8);
    if (iVar2 != 0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7c8430,0xef);
    }
    iVar2 = (**(code **)(*piStack_c + 8))(uStack_8,param_2,param_3,param_4,param_5);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7c8430,0xf0);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return iVar2;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  if (iVar2 == -4) {
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf3,0,0,
                         (byte *)s_Not_found_system_type_for_game_t_007c8488);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  else {
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xf5,0,0,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  FUN_006a5e40(iVar2,0,0x7c8430,0xf7);
  return iVar2;
}

