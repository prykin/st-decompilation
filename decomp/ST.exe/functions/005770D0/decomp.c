
void __fastcall FUN_005770d0(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  *(undefined1 *)(param_1 + 0x430) = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = param_1;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  iVar4 = local_8;
  if (iVar3 == 0) {
    if (*(int *)(local_8 + 0x431) != 0) {
      FUN_00725680((int *)(local_8 + 0x431));
    }
    FUN_0070b1d0(&DAT_00806724);
    if (DAT_00802a28 != 0) {
      thunk_FUN_005711d0(&DAT_00807620,&DAT_00802a28);
    }
    if (DAT_00802a38 != 0) {
      thunk_FUN_005711d0(&DAT_00807620,&DAT_00802a38);
    }
    thunk_FUN_0058d720();
    piVar2 = DAT_00807598;
    DAT_0080674c = 0;
    if (DAT_00807598 != (int *)0x0) {
      FUN_006dbcf0(DAT_00807598);
      FUN_0072e2b0(piVar2);
      DAT_00807598 = (int *)0x0;
    }
    thunk_FUN_00578370();
    if (DAT_00806750 != 0) {
      thunk_FUN_0042a780(&DAT_00806750);
    }
    FUN_006e52d0(iVar4);
    ShowCursor(1);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0xa7,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cab5c,0xa7);
  return;
}

