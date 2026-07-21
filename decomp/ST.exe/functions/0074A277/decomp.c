
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall FUN_0074a277(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

