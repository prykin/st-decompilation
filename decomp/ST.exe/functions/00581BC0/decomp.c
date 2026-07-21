
uint __fastcall FUN_00581bc0(int param_1)

{
  uint uVar1;

  if ((uint)PTR_00802a38->field_00E4 % 0x3c == 0) {
    uVar1 = thunk_FUN_00581200(param_1);
    return uVar1;
  }
  return (uint)PTR_00802a38->field_00E4 / 0x3c;
}

