
undefined4 FUN_005dab70(int param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_int_00811764 != (int *)0x0) {
      FUN_006b76d0(g_int_00811764);
      if (DAT_0080877e == '\0') {
        if (local_8->field_068E != 0) {
          Library::DKW::DDX::FUN_006b68e0
                    (g_int_00811764,(undefined4 *)(local_8->field_068E + 0xc + param_1 * 0x14));
        }
      }
      else {
        Library::DKW::DDX::FUN_006b6750(g_int_00811764,0,param_2,0x20);
      }
      DAT_0080877f = g_int_00811764[0xe];
      StartSystemTy::GetIP(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0xfffffffa;
}

