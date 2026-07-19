
void __fastcall thunk_FUN_0058a8d0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)DAT_007fb242;
  iVar4 = (int)DAT_007fb240;
  if (7 < *(int *)(param_1 + 0x2a9)) {
    iVar2 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x21a,0,0,&DAT_007a4ccc,
                               s_STOctopusC__Bad_direction_007cba88);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + 0x2a9) = 0;
  }
  if ((((iVar4 + -1 < *(int *)(param_1 + 0x299)) || (*(int *)(param_1 + 0x299) < 0)) ||
      (iVar3 + -1 < *(int *)(param_1 + 0x29d))) || (*(int *)(param_1 + 0x29d) < 0)) {
    *(int *)(param_1 + 0x299) = iVar4 + -1 >> 1;
    *(int *)(param_1 + 0x29d) = iVar3 + -1 >> 1;
  }
  return;
}

