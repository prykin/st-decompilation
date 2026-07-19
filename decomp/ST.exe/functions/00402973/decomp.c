
void __thiscall STResourceC::SetResource(STResourceC *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(this + 0x255) == 0xdd) {
    if (param_1 < 1000000) goto LAB_0057e045;
    iVar2 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x36,0,0,&DAT_007a4ccc,
                               s_STResourceC__SetResource___value_007cb1c0);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((*(int *)(this + 0x255) != 0xde) || (param_1 < 1000000)) goto LAB_0057e045;
    iVar2 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x3c,0,0,&DAT_007a4ccc,
                               s_STResourceC__SetResource___value_007cb1c0);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1 = 999999;
LAB_0057e045:
  *(int *)(this + 0x259) = param_1;
  if (param_1 < 1) {
    if (param_2 != 0) {
      thunk_FUN_00580d30(this,1);
    }
    thunk_FUN_00580fa0();
  }
  return;
}

