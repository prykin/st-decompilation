
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void FUN_005efa70(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x2e5) = *(int *)(in_ECX + 0x2e5) + 1;
  return;
}

