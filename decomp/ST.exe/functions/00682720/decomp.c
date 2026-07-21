
void __cdecl FUN_00682720(int param_1)

{
  char *pcVar1;
  char *extraout_EAX;
  char *extraout_EAX_00;
  
  if (param_1 == 0x1c) {
    LoadResourceString(0x1b5e,HINSTANCE_00807618);
    thunk_FUN_006802a0(-0x70,extraout_EAX_00);
    return;
  }
  if (param_1 != 0x1d) {
    pcVar1 = thunk_FUN_00674af0(param_1);
    thunk_FUN_006802a0(-0x70,pcVar1);
    return;
  }
  LoadResourceString(0x1b5d,HINSTANCE_00807618);
  thunk_FUN_006802a0(-0x70,extraout_EAX);
  return;
}

