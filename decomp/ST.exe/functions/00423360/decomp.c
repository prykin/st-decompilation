
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_00423360(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}

