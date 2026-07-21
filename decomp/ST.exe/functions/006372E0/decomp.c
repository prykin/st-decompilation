
undefined4 __fastcall FUN_006372e0(int *param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_006367d0(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::sub_00636FC0
                      ((AnonReceiver_00636260 *)param_1);
    param_1[10] = iVar1;
    if (iVar1 != 0) {
      thunk_FUN_00636750((AnonShape_00636750_9523C2A1 *)param_1);
    }
    if (param_1[10] == 0) {
      return 0;
    }
  }
  thunk_FUN_00637180((AnonShape_00637180_4094267C *)param_1);
  return 0;
}

