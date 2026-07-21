
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 00567180 @ 0057083B */

void __thiscall FUN_00567180(void *this,HWND param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  void *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    *(undefined4 *)((int)local_8 + 0xf8b) = 1;
    Library::DKW::SND::FUN_006c1530(param_1,1);
    FUN_006c2140(0x41200000);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  *(undefined4 *)((int)local_8 + 0xf8b) = 0;
  return;
}

