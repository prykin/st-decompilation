
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00752080 -> EXTERNAL:0000000E @ 00752090 */

void FUN_00752080(int param_1,LONG lOffset)

{
  _llseek(*(HFILE *)(param_1 + 0x32),lOffset,0);
  return;
}

