
undefined4 __fastcall FUN_005fb600(void *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x2a0) < 3) {
    uVar1 = thunk_FUN_005f9310(param_1,1);
    if (CONCAT31(extraout_var,uVar1) == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

