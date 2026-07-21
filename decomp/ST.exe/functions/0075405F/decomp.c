
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void FUN_0075405f(void)

{
  undefined1 *puVar1;
  undefined1 in_AL;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(unaff_EBP + 0x48);
  *(int *)(unaff_EBP + 0x48) = *(int *)(unaff_EBP + 0x48) + 1;
  *puVar1 = in_AL;
  return;
}

