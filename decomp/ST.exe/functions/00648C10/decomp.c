
void __cdecl FUN_00648c10(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((((DAT_00802a38 == (void *)0x0) || (param_1 == 0)) || (7 < param_2)) ||
       (7 < (byte)(&DAT_008087e9)[param_2 * 0x51])) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d2880,0x49);
    }
    iVar2 = thunk_FUN_004357f0((char)param_2);
    if (iVar2 != 0) {
      thunk_FUN_00648dd0(param_2);
    }
    local_8 = param_1;
    *(uint *)(param_1 + 4) = param_2;
    *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)((int)&DAT_008087eb + param_2 * 0x51);
    *(undefined2 *)(param_1 + 0x69) = *(undefined2 *)((int)&DAT_008087ef + param_2 * 0x51);
    *(undefined2 *)(param_1 + 0x6b) = *(undefined2 *)((int)&DAT_008087f3 + param_2 * 0x51);
    FUN_006e6200(DAT_00802a38,0x402,(undefined4 *)(param_2 + 0x29),(undefined4 *)0x0,(int *)0x0,
                 param_1,0);
    if (local_c != 0) {
      thunk_FUN_0067d160(&local_8);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_creat_cpp_007d2880,0x5f,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_c != 0) {
    thunk_FUN_0067d160(&local_8);
  }
  FUN_006a5e40(iVar2,0,0x7d2880,0x61);
  return;
}

