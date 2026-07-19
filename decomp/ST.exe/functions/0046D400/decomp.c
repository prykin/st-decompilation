
void __fastcall FUN_0046d400(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  int *in_stack_00000004;
  
  if (param_1[0x14a] == 4) {
    iVar1 = thunk_FUN_0048fa80((int)param_1);
    if (iVar1 == 0) {
      thunk_FUN_00460360(param_1);
      return;
    }
  }
  STBoatC::CreateGame((STBoatC *)param_1,in_stack_00000004,unaff_ESI);
  return;
}

