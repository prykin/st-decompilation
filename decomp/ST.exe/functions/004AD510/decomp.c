
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_004ad510(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

